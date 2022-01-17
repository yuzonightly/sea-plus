# sea-plus

## Prerequisites

Install `grpc` and `protobuf`.

## Build

```bash
protoc -I . --grpc_out=. --plugin=protoc-gen-grpc=grpc_cpp_plugin ./sea.proto
protoc -I . --cpp_out=. ./sea.proto
```
