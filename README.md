# sea-plus

## Prerequisites

Install `grpc` and `protobuf`. And make sure `grpc_cpp_plugin` is working (the absolute path also works).

## Manual Build

Generate files `sea.grpc.pb.cc`, `sea.grpc.pb.h`, `sea.pb.cc` and `sea.pb.h`.

```bash
protoc -I protos --grpc_out=ocean --plugin=protoc-gen-grpc=grpc_cpp_plugin protos/sea.proto
protoc -I protos --cpp_out=ocean protos/sea.proto
```
