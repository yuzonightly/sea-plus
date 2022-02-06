# sea-plus

gRPC request -> Search DynamoDB || The Movie Database API -> gRPC response.

## Prerequisites

Install `grpc`, `protobuf` and `restclient-cpp`.

## Build

```bash
cmake .
make
```

## Run

Run the server.

```bash
./sea_server
```

Run the client.

```bash
./sea_client
```
