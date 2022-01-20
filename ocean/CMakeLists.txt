get_filename_component(sea_proto "../protos/sea.proto" ABSOLUTE)
get_filename_component(sea_proto_path "${sea_proto}" PATH)

set(sea_proto_sources "${CMAKE_CURRENT_BINARY_DIR}/sea.pb.cc")
set(sea_proto_headers "${CMAKE_CURRENT_BINARY_DIR}/sea.pb.h")
set(sea_grpc_sources "${CMAKE_CURRENT_BINARY_DIR}/sea.grpc.pb.cc")
set(sea_grpc_headers "${CMAKE_CURRENT_BINARY_DIR}/sea.grpc.pb.h")
set(sea_client "${CMAKE_CURRENT_BINARY_DIR}/../sea_client")
set(sea_server "${CMAKE_CURRENT_BINARY_DIR}/../sea_server")

add_custom_command(
        OUTPUT "${sea_proto_sources}" "${sea_proto_headers}"
        "${sea_grpc_sources}" "${sea_grpc_headers}"
        COMMAND ${_PROTOBUF_PROTOC}
        ARGS --grpc_out "${CMAKE_CURRENT_BINARY_DIR}"
        --cpp_out "${CMAKE_CURRENT_BINARY_DIR}"
        -I "${sea_proto_path}"
        --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
        "${sea_proto}"
        DEPENDS "${sea_proto}")

include_directories("${CMAKE_CURRENT_BINARY_DIR}")

add_library(sea_grpc_proto
        ${sea_proto_sources}
        ${sea_proto_headers}
        ${sea_grpc_sources}
        ${sea_grpc_headers})
# target_link_libraries(sea_grpc_proto
#         ${_PROTOBUF_LIBPROTOBUF}
#         ${_REFLECTION}
#         ${_GRPC_GRPCPP})

# foreach(_target ${sea_client} ${sea_server})
#     add_executable(${_target} "${_target}.cc")
#     target_link_libraries(${_target}
#             sea_grpc_proto
#             ${_PROTOBUF_LIBPROTOBUF}
#             ${_REFLECTION}
#             ${_GRPC_GRPCPP})
# endforeach()