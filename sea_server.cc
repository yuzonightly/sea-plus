#include <iostream>
#include <memory>
#include <stdlib.h>
#include <string>
#include <thread>

#include <cpprest/filestream.h>
#include <cpprest/http_client.h>
#include <cpprest/json.h>
#include <cpprest/uri.h>
#include <grpc++/grpc++.h>
#include <grpc/support/log.h>

#include <cpprest/filestream.h>
#include <cpprest/http_client.h>
#include <cpprest/json.h>
#include <cpprest/uri.h>

#include "ocean/sea.grpc.pb.h"

using namespace utility;           // Common utilities like string conversions
using namespace web;               // Common features like URIs.
using namespace web::http;         // Common HTTP functionality
using namespace web::http::client; // HTTP client features
using namespace concurrency::streams; // Asynchronous streams

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using sea::SeaRequest;
using sea::SeaResponse;
using sea::SeaService;

class tmdb_api {
private:
  std::string TMDB_API_KEY = "4faf3d9fffffffffffffffffffffffff";

public:
  tmdb_api() { std::cout << "Hello TMDB API" << std::endl; }
};

class SeaServiceImpl final : public SeaService::Service {

  Status SeaMethod(ServerContext *context, const SeaRequest *request,
                   SeaResponse *response) override {
    response->set_response_sea_field("Hello " + request->request_sea_field());
    return Status::OK;
  }
};

void RunServer() {
  std::string server_address{"localhost:2510"};
  SeaServiceImpl service;

  // Build server
  ServerBuilder builder;
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
  std::unique_ptr<Server> server{builder.BuildAndStart()};

  // Run server
  std::cout << "Server listening on " << server_address << std::endl;
  server->Wait();
}

// void make_request(http_client &client, method mtd, json::value const &jvalue)
// {
//   make_task_request(client, mtd, jvalue)
//       .then([](http_response response) {
//         if (response.status_code() == status_codes::OK) {
//           return response.extract_json();
//         }
//         return pplx::task_from_result(json::value());
//       })
//       .then([](pplx::task<json::value> previousTask) {
//         try {
//           display_json(previousTask.get(), L"R: ");
//         } catch (http_exception const &e) {
//           wcout << e.what() << endl;
//         }
//       })
//       .wait();
// }

// MAIN
int main(int argc, char **argv) {
  auto fileStream = std::make_shared<ostream>();

  // parameters
  std::string query = "kimetsu";

  tmdb_api tmdb = tmdb_api();

  // fetch data
  pplx::task<void> requestTask =
      fstream::open_ostream(U("query.json"))
          .then([=](ostream outFile) {
            *fileStream = outFile;
            http_client client(U("https://api.themoviedb.org/3/search/"));
            // std::cout << uri_builder(U("movie"))
            //                  .append_query(U("api_key"), U(TMDB_API_KEY))
            //                  .append_query(U("query"), U(query))
            //                  .to_string()
            //           << std::endl;
            return client.request(
                methods::GET, uri_builder(U("movie"))
                                  .append_query(U("api_key"), U(TMDB_API_KEY))
                                  .append_query(U("query"), U(query))
                                  .to_string());
          })
          .then([=](http_response response) {
            if (response.status_code() != 200) {
              throw std::runtime_error("Returned " +
                                       std::to_string(response.status_code()));
            }
            response.body().read_to_end(fileStream->streambuf()).wait();
            fileStream->close();
            // return fileStream->close();
            return response.extract_json();
          })
          .then([](json::value jsonObject) {
            // std::cout << "Hello jsonObject" << std::endl;
            // std::cout << jsonObject[U("first_name")].as_string()
            //     << " " << jsonObject[U("last_name")] << std::endl;
          });

  try {
    while (!requestTask.is_done()) {
    }
  } catch (const std::exception &e) {
    printf("Error exception: %s\n", e.what());
  }

  // RunServer();
  return 0;
}
