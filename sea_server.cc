#include <iostream>
#include <memory>
#include <stdlib.h>
#include <string>
#include <thread>

#include <grpc++/grpc++.h>
#include <grpc/support/log.h>

#include "api.h"
#include "ocean/sea.grpc.pb.h"

#include <cpprest/filestream.h>
#include <cpprest/http_client.h>
#include <cpprest/json.h>
#include <cpprest/uri.h>

using namespace utility;           // Common utilities like string conversions
using namespace web;               // Common features like URIs.
using namespace web::http;         // Common HTTP functionality
using namespace web::http::client; // HTTP client features
using namespace concurrency::streams; // Asynchronous streams

// using API;
using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using sea::SeaRequest;
using sea::SeaResponse;
using sea::SeaService;


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

int main(int argc, char **argv) {
  auto fileStream = std::make_shared<ostream>();

  pplx::task<void> requestTask =
      fstream::open_ostream(U("movies.json"))

          .then([=](ostream outFile) {
            *fileStream = outFile;
            http_client client(U("https://reqres.in"));
            return client.request(
                methods::GET,
                uri_builder(U("api")).append_path(U("users")).to_string());
          })

          .then([=](http_response response) {
            if (response.status_code() != 200) {
              throw std::runtime_error("Returned " +
                                       std::to_string(response.status_code()));
            }
            response.body().read_to_end(fileStream->streambuf()).wait();
            return fileStream->close();
          });

  try {
    while (!requestTask.is_done()) {
      // std::cout << ".";
    }
  } catch (const std::exception &e) {
    printf("Error exception: %s\n", e.what());
  }

  // RunServer();
  return 0;
}
