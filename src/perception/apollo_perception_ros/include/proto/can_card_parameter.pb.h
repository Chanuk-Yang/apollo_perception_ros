// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/can_card_parameter.proto

#ifndef PROTOBUF_proto_2fcan_5fcard_5fparameter_2eproto__INCLUDED
#define PROTOBUF_proto_2fcan_5fcard_5fparameter_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace apollo_perception_standalone {
class CANCardParameter;
class CANCardParameterDefaultTypeInternal;
extern CANCardParameterDefaultTypeInternal _CANCardParameter_default_instance_;
}  // namespace apollo_perception_standalone

namespace apollo_perception_standalone {

namespace protobuf_proto_2fcan_5fcard_5fparameter_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_proto_2fcan_5fcard_5fparameter_2eproto

enum CANCardParameter_CANCardBrand {
  CANCardParameter_CANCardBrand_FAKE_CAN = 0,
  CANCardParameter_CANCardBrand_ESD_CAN = 1,
  CANCardParameter_CANCardBrand_SOCKET_CAN_RAW = 2,
  CANCardParameter_CANCardBrand_HERMES_CAN = 3
};
bool CANCardParameter_CANCardBrand_IsValid(int value);
const CANCardParameter_CANCardBrand CANCardParameter_CANCardBrand_CANCardBrand_MIN = CANCardParameter_CANCardBrand_FAKE_CAN;
const CANCardParameter_CANCardBrand CANCardParameter_CANCardBrand_CANCardBrand_MAX = CANCardParameter_CANCardBrand_HERMES_CAN;
const int CANCardParameter_CANCardBrand_CANCardBrand_ARRAYSIZE = CANCardParameter_CANCardBrand_CANCardBrand_MAX + 1;

const ::google::protobuf::EnumDescriptor* CANCardParameter_CANCardBrand_descriptor();
inline const ::std::string& CANCardParameter_CANCardBrand_Name(CANCardParameter_CANCardBrand value) {
  return ::google::protobuf::internal::NameOfEnum(
    CANCardParameter_CANCardBrand_descriptor(), value);
}
inline bool CANCardParameter_CANCardBrand_Parse(
    const ::std::string& name, CANCardParameter_CANCardBrand* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CANCardParameter_CANCardBrand>(
    CANCardParameter_CANCardBrand_descriptor(), name, value);
}
enum CANCardParameter_CANCardType {
  CANCardParameter_CANCardType_PCI_CARD = 0,
  CANCardParameter_CANCardType_USB_CARD = 1
};
bool CANCardParameter_CANCardType_IsValid(int value);
const CANCardParameter_CANCardType CANCardParameter_CANCardType_CANCardType_MIN = CANCardParameter_CANCardType_PCI_CARD;
const CANCardParameter_CANCardType CANCardParameter_CANCardType_CANCardType_MAX = CANCardParameter_CANCardType_USB_CARD;
const int CANCardParameter_CANCardType_CANCardType_ARRAYSIZE = CANCardParameter_CANCardType_CANCardType_MAX + 1;

const ::google::protobuf::EnumDescriptor* CANCardParameter_CANCardType_descriptor();
inline const ::std::string& CANCardParameter_CANCardType_Name(CANCardParameter_CANCardType value) {
  return ::google::protobuf::internal::NameOfEnum(
    CANCardParameter_CANCardType_descriptor(), value);
}
inline bool CANCardParameter_CANCardType_Parse(
    const ::std::string& name, CANCardParameter_CANCardType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CANCardParameter_CANCardType>(
    CANCardParameter_CANCardType_descriptor(), name, value);
}
enum CANCardParameter_CANChannelId {
  CANCardParameter_CANChannelId_CHANNEL_ID_ZERO = 0,
  CANCardParameter_CANChannelId_CHANNEL_ID_ONE = 1,
  CANCardParameter_CANChannelId_CHANNEL_ID_TWO = 2,
  CANCardParameter_CANChannelId_CHANNEL_ID_THREE = 3
};
bool CANCardParameter_CANChannelId_IsValid(int value);
const CANCardParameter_CANChannelId CANCardParameter_CANChannelId_CANChannelId_MIN = CANCardParameter_CANChannelId_CHANNEL_ID_ZERO;
const CANCardParameter_CANChannelId CANCardParameter_CANChannelId_CANChannelId_MAX = CANCardParameter_CANChannelId_CHANNEL_ID_THREE;
const int CANCardParameter_CANChannelId_CANChannelId_ARRAYSIZE = CANCardParameter_CANChannelId_CANChannelId_MAX + 1;

const ::google::protobuf::EnumDescriptor* CANCardParameter_CANChannelId_descriptor();
inline const ::std::string& CANCardParameter_CANChannelId_Name(CANCardParameter_CANChannelId value) {
  return ::google::protobuf::internal::NameOfEnum(
    CANCardParameter_CANChannelId_descriptor(), value);
}
inline bool CANCardParameter_CANChannelId_Parse(
    const ::std::string& name, CANCardParameter_CANChannelId* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CANCardParameter_CANChannelId>(
    CANCardParameter_CANChannelId_descriptor(), name, value);
}
// ===================================================================

class CANCardParameter : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo_perception_standalone.CANCardParameter) */ {
 public:
  CANCardParameter();
  virtual ~CANCardParameter();

  CANCardParameter(const CANCardParameter& from);

  inline CANCardParameter& operator=(const CANCardParameter& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CANCardParameter& default_instance();

  static inline const CANCardParameter* internal_default_instance() {
    return reinterpret_cast<const CANCardParameter*>(
               &_CANCardParameter_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(CANCardParameter* other);

  // implements Message ----------------------------------------------

  inline CANCardParameter* New() const PROTOBUF_FINAL { return New(NULL); }

  CANCardParameter* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CANCardParameter& from);
  void MergeFrom(const CANCardParameter& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(CANCardParameter* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef CANCardParameter_CANCardBrand CANCardBrand;
  static const CANCardBrand FAKE_CAN =
    CANCardParameter_CANCardBrand_FAKE_CAN;
  static const CANCardBrand ESD_CAN =
    CANCardParameter_CANCardBrand_ESD_CAN;
  static const CANCardBrand SOCKET_CAN_RAW =
    CANCardParameter_CANCardBrand_SOCKET_CAN_RAW;
  static const CANCardBrand HERMES_CAN =
    CANCardParameter_CANCardBrand_HERMES_CAN;
  static inline bool CANCardBrand_IsValid(int value) {
    return CANCardParameter_CANCardBrand_IsValid(value);
  }
  static const CANCardBrand CANCardBrand_MIN =
    CANCardParameter_CANCardBrand_CANCardBrand_MIN;
  static const CANCardBrand CANCardBrand_MAX =
    CANCardParameter_CANCardBrand_CANCardBrand_MAX;
  static const int CANCardBrand_ARRAYSIZE =
    CANCardParameter_CANCardBrand_CANCardBrand_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CANCardBrand_descriptor() {
    return CANCardParameter_CANCardBrand_descriptor();
  }
  static inline const ::std::string& CANCardBrand_Name(CANCardBrand value) {
    return CANCardParameter_CANCardBrand_Name(value);
  }
  static inline bool CANCardBrand_Parse(const ::std::string& name,
      CANCardBrand* value) {
    return CANCardParameter_CANCardBrand_Parse(name, value);
  }

  typedef CANCardParameter_CANCardType CANCardType;
  static const CANCardType PCI_CARD =
    CANCardParameter_CANCardType_PCI_CARD;
  static const CANCardType USB_CARD =
    CANCardParameter_CANCardType_USB_CARD;
  static inline bool CANCardType_IsValid(int value) {
    return CANCardParameter_CANCardType_IsValid(value);
  }
  static const CANCardType CANCardType_MIN =
    CANCardParameter_CANCardType_CANCardType_MIN;
  static const CANCardType CANCardType_MAX =
    CANCardParameter_CANCardType_CANCardType_MAX;
  static const int CANCardType_ARRAYSIZE =
    CANCardParameter_CANCardType_CANCardType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CANCardType_descriptor() {
    return CANCardParameter_CANCardType_descriptor();
  }
  static inline const ::std::string& CANCardType_Name(CANCardType value) {
    return CANCardParameter_CANCardType_Name(value);
  }
  static inline bool CANCardType_Parse(const ::std::string& name,
      CANCardType* value) {
    return CANCardParameter_CANCardType_Parse(name, value);
  }

  typedef CANCardParameter_CANChannelId CANChannelId;
  static const CANChannelId CHANNEL_ID_ZERO =
    CANCardParameter_CANChannelId_CHANNEL_ID_ZERO;
  static const CANChannelId CHANNEL_ID_ONE =
    CANCardParameter_CANChannelId_CHANNEL_ID_ONE;
  static const CANChannelId CHANNEL_ID_TWO =
    CANCardParameter_CANChannelId_CHANNEL_ID_TWO;
  static const CANChannelId CHANNEL_ID_THREE =
    CANCardParameter_CANChannelId_CHANNEL_ID_THREE;
  static inline bool CANChannelId_IsValid(int value) {
    return CANCardParameter_CANChannelId_IsValid(value);
  }
  static const CANChannelId CANChannelId_MIN =
    CANCardParameter_CANChannelId_CANChannelId_MIN;
  static const CANChannelId CANChannelId_MAX =
    CANCardParameter_CANChannelId_CANChannelId_MAX;
  static const int CANChannelId_ARRAYSIZE =
    CANCardParameter_CANChannelId_CANChannelId_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CANChannelId_descriptor() {
    return CANCardParameter_CANChannelId_descriptor();
  }
  static inline const ::std::string& CANChannelId_Name(CANChannelId value) {
    return CANCardParameter_CANChannelId_Name(value);
  }
  static inline bool CANChannelId_Parse(const ::std::string& name,
      CANChannelId* value) {
    return CANCardParameter_CANChannelId_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .apollo_perception_standalone.CANCardParameter.CANCardBrand brand = 1;
  bool has_brand() const;
  void clear_brand();
  static const int kBrandFieldNumber = 1;
  ::apollo_perception_standalone::CANCardParameter_CANCardBrand brand() const;
  void set_brand(::apollo_perception_standalone::CANCardParameter_CANCardBrand value);

  // optional .apollo_perception_standalone.CANCardParameter.CANCardType type = 2;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::apollo_perception_standalone::CANCardParameter_CANCardType type() const;
  void set_type(::apollo_perception_standalone::CANCardParameter_CANCardType value);

  // optional .apollo_perception_standalone.CANCardParameter.CANChannelId channel_id = 3;
  bool has_channel_id() const;
  void clear_channel_id();
  static const int kChannelIdFieldNumber = 3;
  ::apollo_perception_standalone::CANCardParameter_CANChannelId channel_id() const;
  void set_channel_id(::apollo_perception_standalone::CANCardParameter_CANChannelId value);

  // @@protoc_insertion_point(class_scope:apollo_perception_standalone.CANCardParameter)
 private:
  void set_has_brand();
  void clear_has_brand();
  void set_has_type();
  void clear_has_type();
  void set_has_channel_id();
  void clear_has_channel_id();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  int brand_;
  int type_;
  int channel_id_;
  friend struct protobuf_proto_2fcan_5fcard_5fparameter_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CANCardParameter

// optional .apollo_perception_standalone.CANCardParameter.CANCardBrand brand = 1;
inline bool CANCardParameter::has_brand() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CANCardParameter::set_has_brand() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CANCardParameter::clear_has_brand() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CANCardParameter::clear_brand() {
  brand_ = 0;
  clear_has_brand();
}
inline ::apollo_perception_standalone::CANCardParameter_CANCardBrand CANCardParameter::brand() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.CANCardParameter.brand)
  return static_cast< ::apollo_perception_standalone::CANCardParameter_CANCardBrand >(brand_);
}
inline void CANCardParameter::set_brand(::apollo_perception_standalone::CANCardParameter_CANCardBrand value) {
  assert(::apollo_perception_standalone::CANCardParameter_CANCardBrand_IsValid(value));
  set_has_brand();
  brand_ = value;
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.CANCardParameter.brand)
}

// optional .apollo_perception_standalone.CANCardParameter.CANCardType type = 2;
inline bool CANCardParameter::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CANCardParameter::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CANCardParameter::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CANCardParameter::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::apollo_perception_standalone::CANCardParameter_CANCardType CANCardParameter::type() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.CANCardParameter.type)
  return static_cast< ::apollo_perception_standalone::CANCardParameter_CANCardType >(type_);
}
inline void CANCardParameter::set_type(::apollo_perception_standalone::CANCardParameter_CANCardType value) {
  assert(::apollo_perception_standalone::CANCardParameter_CANCardType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.CANCardParameter.type)
}

// optional .apollo_perception_standalone.CANCardParameter.CANChannelId channel_id = 3;
inline bool CANCardParameter::has_channel_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CANCardParameter::set_has_channel_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CANCardParameter::clear_has_channel_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CANCardParameter::clear_channel_id() {
  channel_id_ = 0;
  clear_has_channel_id();
}
inline ::apollo_perception_standalone::CANCardParameter_CANChannelId CANCardParameter::channel_id() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.CANCardParameter.channel_id)
  return static_cast< ::apollo_perception_standalone::CANCardParameter_CANChannelId >(channel_id_);
}
inline void CANCardParameter::set_channel_id(::apollo_perception_standalone::CANCardParameter_CANChannelId value) {
  assert(::apollo_perception_standalone::CANCardParameter_CANChannelId_IsValid(value));
  set_has_channel_id();
  channel_id_ = value;
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.CANCardParameter.channel_id)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace apollo_perception_standalone

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::apollo_perception_standalone::CANCardParameter_CANCardBrand> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo_perception_standalone::CANCardParameter_CANCardBrand>() {
  return ::apollo_perception_standalone::CANCardParameter_CANCardBrand_descriptor();
}
template <> struct is_proto_enum< ::apollo_perception_standalone::CANCardParameter_CANCardType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo_perception_standalone::CANCardParameter_CANCardType>() {
  return ::apollo_perception_standalone::CANCardParameter_CANCardType_descriptor();
}
template <> struct is_proto_enum< ::apollo_perception_standalone::CANCardParameter_CANChannelId> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo_perception_standalone::CANCardParameter_CANChannelId>() {
  return ::apollo_perception_standalone::CANCardParameter_CANChannelId_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_proto_2fcan_5fcard_5fparameter_2eproto__INCLUDED