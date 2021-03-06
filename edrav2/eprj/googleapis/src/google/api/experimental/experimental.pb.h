// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/experimental/experimental.proto

#ifndef PROTOBUF_INCLUDED_google_2fapi_2fexperimental_2fexperimental_2eproto
#define PROTOBUF_INCLUDED_google_2fapi_2fexperimental_2fexperimental_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
#include "google/api/experimental/authorization_config.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fexperimental_2fexperimental_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapi_2fexperimental_2fexperimental_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_google_2fapi_2fexperimental_2fexperimental_2eproto();
namespace google {
namespace api {
class Experimental;
class ExperimentalDefaultTypeInternal;
extern ExperimentalDefaultTypeInternal _Experimental_default_instance_;
}  // namespace api
namespace protobuf {
template<> ::google::api::Experimental* Arena::CreateMaybeMessage<::google::api::Experimental>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace api {

// ===================================================================

class Experimental :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.Experimental) */ {
 public:
  Experimental();
  virtual ~Experimental();

  Experimental(const Experimental& from);

  inline Experimental& operator=(const Experimental& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Experimental(Experimental&& from) noexcept
    : Experimental() {
    *this = ::std::move(from);
  }

  inline Experimental& operator=(Experimental&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Experimental& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Experimental* internal_default_instance() {
    return reinterpret_cast<const Experimental*>(
               &_Experimental_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Experimental* other);
  friend void swap(Experimental& a, Experimental& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Experimental* New() const final {
    return CreateMaybeMessage<Experimental>(nullptr);
  }

  Experimental* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Experimental>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Experimental& from);
  void MergeFrom(const Experimental& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Experimental* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .google.api.AuthorizationConfig authorization = 8;
  bool has_authorization() const;
  void clear_authorization();
  static const int kAuthorizationFieldNumber = 8;
  const ::google::api::AuthorizationConfig& authorization() const;
  ::google::api::AuthorizationConfig* release_authorization();
  ::google::api::AuthorizationConfig* mutable_authorization();
  void set_allocated_authorization(::google::api::AuthorizationConfig* authorization);

  // @@protoc_insertion_point(class_scope:google.api.Experimental)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::api::AuthorizationConfig* authorization_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapi_2fexperimental_2fexperimental_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Experimental

// .google.api.AuthorizationConfig authorization = 8;
inline bool Experimental::has_authorization() const {
  return this != internal_default_instance() && authorization_ != nullptr;
}
inline const ::google::api::AuthorizationConfig& Experimental::authorization() const {
  const ::google::api::AuthorizationConfig* p = authorization_;
  // @@protoc_insertion_point(field_get:google.api.Experimental.authorization)
  return p != nullptr ? *p : *reinterpret_cast<const ::google::api::AuthorizationConfig*>(
      &::google::api::_AuthorizationConfig_default_instance_);
}
inline ::google::api::AuthorizationConfig* Experimental::release_authorization() {
  // @@protoc_insertion_point(field_release:google.api.Experimental.authorization)
  
  ::google::api::AuthorizationConfig* temp = authorization_;
  authorization_ = nullptr;
  return temp;
}
inline ::google::api::AuthorizationConfig* Experimental::mutable_authorization() {
  
  if (authorization_ == nullptr) {
    auto* p = CreateMaybeMessage<::google::api::AuthorizationConfig>(GetArenaNoVirtual());
    authorization_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.api.Experimental.authorization)
  return authorization_;
}
inline void Experimental::set_allocated_authorization(::google::api::AuthorizationConfig* authorization) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(authorization_);
  }
  if (authorization) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      authorization = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, authorization, submessage_arena);
    }
    
  } else {
    
  }
  authorization_ = authorization;
  // @@protoc_insertion_point(field_set_allocated:google.api.Experimental.authorization)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_google_2fapi_2fexperimental_2fexperimental_2eproto
