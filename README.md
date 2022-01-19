# sea-plus

## Prerequisites

Install `grpc` and `protobuf`.

## Manual Build

Generate files `sea.grpc.pb.cc`, `sea.grpc.pb.h`, `sea.pb.cc` and `sea.pb.h`.

```bash
protoc -I protos --grpc_out=ocean --plugin=protoc-gen-grpc=grpc_cpp_plugin protos/sea.proto
protoc -I protos --cpp_out=ocean protos/sea.proto
```

```bash
git submodule update --init --recursive
```

## Notes

After installing gRPC with `vcpkg`:

```bash
The package grpc:arm64-osx provides CMake targets:

    find_package(gRPC CONFIG REQUIRED)
    # Note: 8 target(s) were omitted.
    target_link_libraries(main PRIVATE gRPC::gpr gRPC::upb gRPC::grpc gRPC::grpc++)

    find_package(modules CONFIG REQUIRED)
    target_link_libraries(main PRIVATE re2::re2 c-ares::cares)
```
