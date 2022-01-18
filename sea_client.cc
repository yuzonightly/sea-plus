#include "ocean/sea.grpc.pb.h"
#include <grpc++/grpc++.h>
#include <iostream>
#include <memory>

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using sea::SeaRequest;
using sea::SeaResponse;
using sea::SeaService;

class SeaClient {
public:
  SeaClient(std::shared_ptr<Channel> channel)
      : _stub{SeaService::NewStub(channel)} {}

  std::string SeaMethod(const std::string &request_sea_field) {
    // Prepare request
    SeaRequest request;
    request.set_request_sea_field(request_sea_field);

    // Send request
    SeaResponse response;
    ClientContext context;
    Status status;
    status = _stub->SeaMethod(&context, request, &response);

    // Handle response
    if (status.ok()) {
      return response.response_sea_field();
    } else {
      std::cerr << status.error_code() << ": " << status.error_message()
                << std::endl;
      return "RPC failed";
    }
  }

private:
  std::unique_ptr<SeaService::Stub> _stub;
};

int main(int argc, char **argv) {
  std::string server_address{"localhost:2510"};
  SeaClient client{
      grpc::CreateChannel(server_address, grpc::InsecureChannelCredentials())};
  std::string request_sea_field{"world"};
  std::string response_sea_field = client.SeaMethod(request_sea_field);
  std::cout << "Client received: " << response_sea_field << std::endl;
  return 0;
}