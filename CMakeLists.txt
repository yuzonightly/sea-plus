cmake_minimum_required(VERSION 3.19)
project(sea_grpc)

set (CMAKE_CXX_STANDARD 17)

if(MSVC)
  add_definitions(-D_WIN32_WINNT=0x600)
endif()

find_package(Threads REQUIRED)

# Find Protobuf installation
find_package(Protobuf REQUIRED)
message(STATUS "Using Protobuf ${Protobuf_VERSION}")

set(_PROTOBUF_LIBPROTOBUF protobuf::libprotobuf)
set(_REFLECTION gRPC::grpc++_reflection)
if(CMAKE_CROSSCOMPILING)
  find_program(_PROTOBUF_PROTOC protoc)
else()
  set(_PROTOBUF_PROTOC $<TARGET_FILE:protobuf::protoc>)
endif()

# Find gRPC installation
find_package(gRPC CONFIG REQUIRED)
message(STATUS "Using gRPC ${gRPC_VERSION}")

set(_GRPC_GRPCPP gRPC::grpc++)
if(CMAKE_CROSSCOMPILING)
  find_program(_GRPC_CPP_PLUGIN_EXECUTABLE grpc_cpp_plugin)
else()
  set(_GRPC_CPP_PLUGIN_EXECUTABLE $<TARGET_FILE:gRPC::grpc_cpp_plugin>)
endif()

# Find cpprestsdk installation
find_package(cpprestsdk REQUIRED)
message(STATUS "Using cpprestsdk ${cpprestsdk_VERSION}")

# Proto file
get_filename_component(sea_proto "protos/sea.proto" ABSOLUTE)
get_filename_component(sea_proto_path "${sea_proto}" PATH)

# Generated sources
set(sea_proto_srcs "${CMAKE_CURRENT_BINARY_DIR}/ocean/sea.pb.cc")
set(sea_proto_hdrs "${CMAKE_CURRENT_BINARY_DIR}/ocean/sea.pb.h")
set(sea_grpc_srcs "${CMAKE_CURRENT_BINARY_DIR}/ocean/sea.grpc.pb.cc")
set(sea_grpc_hdrs "${CMAKE_CURRENT_BINARY_DIR}/ocean/sea.grpc.pb.h")
add_custom_command(
      OUTPUT "${sea_proto_srcs}" "${sea_proto_hdrs}" "${sea_grpc_srcs}" "${sea_grpc_hdrs}"
      COMMAND ${_PROTOBUF_PROTOC}
      ARGS --grpc_out "${CMAKE_CURRENT_BINARY_DIR}/ocean"
        --cpp_out "${CMAKE_CURRENT_BINARY_DIR}/ocean"
        -I "${sea_proto_path}"
        --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
        "${sea_proto}"
      DEPENDS "${sea_proto}")

# Include generated *.pb.h files
include_directories("${CMAKE_CURRENT_BINARY_DIR}")
include_directories("${CMAKE_CURRENT_BINARY_DIR}/ocean")

# sea_grpc_proto
add_library(sea_grpc_proto
  ${sea_grpc_srcs}
  ${sea_grpc_hdrs}
  ${sea_proto_srcs}
  ${sea_proto_hdrs})
target_link_libraries(sea_grpc_proto
  ${_REFLECTION}
  ${_GRPC_GRPCPP}
  ${_PROTOBUF_LIBPROTOBUF})

  # Targets sea_(client|server)
  foreach(_target
  sea_client sea_server)
  add_executable(${_target} "${_target}.cc")
  target_link_libraries(${_target}
    sea_grpc_proto
    ${_REFLECTION}
    ${_GRPC_GRPCPP}
    ${_PROTOBUF_LIBPROTOBUF}
    cpprestsdk::cpprest)
endforeach()
