#include "ocean/sea.grpc.pb.h"
#include <grpc++/grpc++.h>
#include <iostream>
#include <memory>

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
  RunServer();
  return 0;
}
