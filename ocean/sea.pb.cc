// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sea.proto

#include "sea.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace sea {
constexpr SeaRequest::SeaRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : request_sea_field_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct SeaRequestDefaultTypeInternal {
  constexpr SeaRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~SeaRequestDefaultTypeInternal() {}
  union {
    SeaRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT SeaRequestDefaultTypeInternal _SeaRequest_default_instance_;
constexpr SeaResponse::SeaResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : response_sea_field_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct SeaResponseDefaultTypeInternal {
  constexpr SeaResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~SeaResponseDefaultTypeInternal() {}
  union {
    SeaResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT SeaResponseDefaultTypeInternal _SeaResponse_default_instance_;
}  // namespace sea
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_sea_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_sea_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_sea_2eproto = nullptr;

const uint32_t TableStruct_sea_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::sea::SeaRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::sea::SeaRequest, request_sea_field_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::sea::SeaResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::sea::SeaResponse, response_sea_field_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::sea::SeaRequest)},
  { 7, -1, -1, sizeof(::sea::SeaResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::sea::_SeaRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::sea::_SeaResponse_default_instance_),
};

const char descriptor_table_protodef_sea_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\tsea.proto\022\003sea\"\'\n\nSeaRequest\022\031\n\021reques"
  "t_sea_field\030\001 \001(\t\")\n\013SeaResponse\022\032\n\022resp"
  "onse_sea_field\030\001 \001(\t2>\n\nSeaService\0220\n\tSe"
  "aMethod\022\017.sea.SeaRequest\032\020.sea.SeaRespon"
  "se\"\000b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_sea_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sea_2eproto = {
  false, false, 172, descriptor_table_protodef_sea_2eproto, "sea.proto", 
  &descriptor_table_sea_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_sea_2eproto::offsets,
  file_level_metadata_sea_2eproto, file_level_enum_descriptors_sea_2eproto, file_level_service_descriptors_sea_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_sea_2eproto_getter() {
  return &descriptor_table_sea_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_sea_2eproto(&descriptor_table_sea_2eproto);
namespace sea {

// ===================================================================

class SeaRequest::_Internal {
 public:
};

SeaRequest::SeaRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:sea.SeaRequest)
}
SeaRequest::SeaRequest(const SeaRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  request_sea_field_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    request_sea_field_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_request_sea_field().empty()) {
    request_sea_field_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_request_sea_field(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:sea.SeaRequest)
}

inline void SeaRequest::SharedCtor() {
request_sea_field_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  request_sea_field_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SeaRequest::~SeaRequest() {
  // @@protoc_insertion_point(destructor:sea.SeaRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void SeaRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  request_sea_field_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void SeaRequest::ArenaDtor(void* object) {
  SeaRequest* _this = reinterpret_cast< SeaRequest* >(object);
  (void)_this;
}
void SeaRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SeaRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SeaRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:sea.SeaRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  request_sea_field_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SeaRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string request_sea_field = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_request_sea_field();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "sea.SeaRequest.request_sea_field"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SeaRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:sea.SeaRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string request_sea_field = 1;
  if (!this->_internal_request_sea_field().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_request_sea_field().data(), static_cast<int>(this->_internal_request_sea_field().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "sea.SeaRequest.request_sea_field");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_request_sea_field(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sea.SeaRequest)
  return target;
}

size_t SeaRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sea.SeaRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string request_sea_field = 1;
  if (!this->_internal_request_sea_field().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_request_sea_field());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SeaRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    SeaRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SeaRequest::GetClassData() const { return &_class_data_; }

void SeaRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<SeaRequest *>(to)->MergeFrom(
      static_cast<const SeaRequest &>(from));
}


void SeaRequest::MergeFrom(const SeaRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sea.SeaRequest)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_request_sea_field().empty()) {
    _internal_set_request_sea_field(from._internal_request_sea_field());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SeaRequest::CopyFrom(const SeaRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sea.SeaRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SeaRequest::IsInitialized() const {
  return true;
}

void SeaRequest::InternalSwap(SeaRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &request_sea_field_, lhs_arena,
      &other->request_sea_field_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata SeaRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_sea_2eproto_getter, &descriptor_table_sea_2eproto_once,
      file_level_metadata_sea_2eproto[0]);
}

// ===================================================================

class SeaResponse::_Internal {
 public:
};

SeaResponse::SeaResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:sea.SeaResponse)
}
SeaResponse::SeaResponse(const SeaResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  response_sea_field_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    response_sea_field_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_response_sea_field().empty()) {
    response_sea_field_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_response_sea_field(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:sea.SeaResponse)
}

inline void SeaResponse::SharedCtor() {
response_sea_field_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  response_sea_field_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SeaResponse::~SeaResponse() {
  // @@protoc_insertion_point(destructor:sea.SeaResponse)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void SeaResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  response_sea_field_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void SeaResponse::ArenaDtor(void* object) {
  SeaResponse* _this = reinterpret_cast< SeaResponse* >(object);
  (void)_this;
}
void SeaResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SeaResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SeaResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:sea.SeaResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  response_sea_field_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SeaResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string response_sea_field = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_response_sea_field();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "sea.SeaResponse.response_sea_field"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SeaResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:sea.SeaResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string response_sea_field = 1;
  if (!this->_internal_response_sea_field().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_response_sea_field().data(), static_cast<int>(this->_internal_response_sea_field().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "sea.SeaResponse.response_sea_field");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_response_sea_field(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sea.SeaResponse)
  return target;
}

size_t SeaResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sea.SeaResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string response_sea_field = 1;
  if (!this->_internal_response_sea_field().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_response_sea_field());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SeaResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    SeaResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SeaResponse::GetClassData() const { return &_class_data_; }

void SeaResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<SeaResponse *>(to)->MergeFrom(
      static_cast<const SeaResponse &>(from));
}


void SeaResponse::MergeFrom(const SeaResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sea.SeaResponse)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_response_sea_field().empty()) {
    _internal_set_response_sea_field(from._internal_response_sea_field());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SeaResponse::CopyFrom(const SeaResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sea.SeaResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SeaResponse::IsInitialized() const {
  return true;
}

void SeaResponse::InternalSwap(SeaResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &response_sea_field_, lhs_arena,
      &other->response_sea_field_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata SeaResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_sea_2eproto_getter, &descriptor_table_sea_2eproto_once,
      file_level_metadata_sea_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace sea
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::sea::SeaRequest* Arena::CreateMaybeMessage< ::sea::SeaRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::sea::SeaRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::sea::SeaResponse* Arena::CreateMaybeMessage< ::sea::SeaResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::sea::SeaResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
