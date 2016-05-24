// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PackFW.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PackFW.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace ProtobufPackets {

namespace {

const ::google::protobuf::Descriptor* PackHeaderIn_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PackHeaderIn_reflection_ = NULL;
const ::google::protobuf::Descriptor* PackHeaderOut_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PackHeaderOut_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_PackFW_2eproto() {
  protobuf_AddDesc_PackFW_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "PackFW.proto");
  GOOGLE_CHECK(file != NULL);
  PackHeaderIn_descriptor_ = file->message_type(0);
  static const int PackHeaderIn_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PackHeaderIn, serverread_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PackHeaderIn, lockey_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PackHeaderIn, sendtoids_),
  };
  PackHeaderIn_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PackHeaderIn_descriptor_,
      PackHeaderIn::default_instance_,
      PackHeaderIn_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PackHeaderIn, _has_bits_[0]),
      -1,
      -1,
      sizeof(PackHeaderIn),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PackHeaderIn, _internal_metadata_),
      -1);
  PackHeaderOut_descriptor_ = file->message_type(1);
  static const int PackHeaderOut_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PackHeaderOut, lockey_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PackHeaderOut, sentfromid_),
  };
  PackHeaderOut_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PackHeaderOut_descriptor_,
      PackHeaderOut::default_instance_,
      PackHeaderOut_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PackHeaderOut, _has_bits_[0]),
      -1,
      -1,
      sizeof(PackHeaderOut),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PackHeaderOut, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_PackFW_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PackHeaderIn_descriptor_, &PackHeaderIn::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PackHeaderOut_descriptor_, &PackHeaderOut::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_PackFW_2eproto() {
  delete PackHeaderIn::default_instance_;
  delete PackHeaderIn_reflection_;
  delete PackHeaderOut::default_instance_;
  delete PackHeaderOut_reflection_;
}

void protobuf_AddDesc_PackFW_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014PackFW.proto\022\017ProtobufPackets\"E\n\014PackH"
    "eaderIn\022\022\n\nserverRead\030\001 \001(\010\022\016\n\006locKey\030\002 "
    "\001(\t\022\021\n\tsendToIDs\030\003 \003(\005\"3\n\rPackHeaderOut\022"
    "\016\n\006locKey\030\001 \001(\t\022\022\n\nsentFromID\030\002 \001(\r", 155);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "PackFW.proto", &protobuf_RegisterTypes);
  PackHeaderIn::default_instance_ = new PackHeaderIn();
  PackHeaderOut::default_instance_ = new PackHeaderOut();
  PackHeaderIn::default_instance_->InitAsDefaultInstance();
  PackHeaderOut::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PackFW_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PackFW_2eproto {
  StaticDescriptorInitializer_PackFW_2eproto() {
    protobuf_AddDesc_PackFW_2eproto();
  }
} static_descriptor_initializer_PackFW_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PackHeaderIn::kServerReadFieldNumber;
const int PackHeaderIn::kLocKeyFieldNumber;
const int PackHeaderIn::kSendToIDsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PackHeaderIn::PackHeaderIn()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ProtobufPackets.PackHeaderIn)
}

void PackHeaderIn::InitAsDefaultInstance() {
}

PackHeaderIn::PackHeaderIn(const PackHeaderIn& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ProtobufPackets.PackHeaderIn)
}

void PackHeaderIn::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  serverread_ = false;
  lockey_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PackHeaderIn::~PackHeaderIn() {
  // @@protoc_insertion_point(destructor:ProtobufPackets.PackHeaderIn)
  SharedDtor();
}

void PackHeaderIn::SharedDtor() {
  lockey_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void PackHeaderIn::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PackHeaderIn::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PackHeaderIn_descriptor_;
}

const PackHeaderIn& PackHeaderIn::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_PackFW_2eproto();
  return *default_instance_;
}

PackHeaderIn* PackHeaderIn::default_instance_ = NULL;

PackHeaderIn* PackHeaderIn::New(::google::protobuf::Arena* arena) const {
  PackHeaderIn* n = new PackHeaderIn;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PackHeaderIn::Clear() {
  if (_has_bits_[0 / 32] & 3u) {
    serverread_ = false;
    if (has_lockey()) {
      lockey_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  sendtoids_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool PackHeaderIn::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ProtobufPackets.PackHeaderIn)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool serverRead = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &serverread_)));
          set_has_serverread();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_locKey;
        break;
      }

      // optional string locKey = 2;
      case 2: {
        if (tag == 18) {
         parse_locKey:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_lockey()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->lockey().data(), this->lockey().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "ProtobufPackets.PackHeaderIn.locKey");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_sendToIDs;
        break;
      }

      // repeated int32 sendToIDs = 3;
      case 3: {
        if (tag == 24) {
         parse_sendToIDs:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 24, input, this->mutable_sendtoids())));
        } else if (tag == 26) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_sendtoids())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_sendToIDs;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ProtobufPackets.PackHeaderIn)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ProtobufPackets.PackHeaderIn)
  return false;
#undef DO_
}

void PackHeaderIn::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ProtobufPackets.PackHeaderIn)
  // optional bool serverRead = 1;
  if (has_serverread()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->serverread(), output);
  }

  // optional string locKey = 2;
  if (has_lockey()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->lockey().data(), this->lockey().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ProtobufPackets.PackHeaderIn.locKey");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->lockey(), output);
  }

  // repeated int32 sendToIDs = 3;
  for (int i = 0; i < this->sendtoids_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      3, this->sendtoids(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ProtobufPackets.PackHeaderIn)
}

::google::protobuf::uint8* PackHeaderIn::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ProtobufPackets.PackHeaderIn)
  // optional bool serverRead = 1;
  if (has_serverread()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->serverread(), target);
  }

  // optional string locKey = 2;
  if (has_lockey()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->lockey().data(), this->lockey().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ProtobufPackets.PackHeaderIn.locKey");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->lockey(), target);
  }

  // repeated int32 sendToIDs = 3;
  for (int i = 0; i < this->sendtoids_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(3, this->sendtoids(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ProtobufPackets.PackHeaderIn)
  return target;
}

int PackHeaderIn::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & 3u) {
    // optional bool serverRead = 1;
    if (has_serverread()) {
      total_size += 1 + 1;
    }

    // optional string locKey = 2;
    if (has_lockey()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->lockey());
    }

  }
  // repeated int32 sendToIDs = 3;
  {
    int data_size = 0;
    for (int i = 0; i < this->sendtoids_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->sendtoids(i));
    }
    total_size += 1 * this->sendtoids_size() + data_size;
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PackHeaderIn::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const PackHeaderIn* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PackHeaderIn>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PackHeaderIn::MergeFrom(const PackHeaderIn& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  sendtoids_.MergeFrom(from.sendtoids_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_serverread()) {
      set_serverread(from.serverread());
    }
    if (from.has_lockey()) {
      set_has_lockey();
      lockey_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.lockey_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void PackHeaderIn::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PackHeaderIn::CopyFrom(const PackHeaderIn& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PackHeaderIn::IsInitialized() const {

  return true;
}

void PackHeaderIn::Swap(PackHeaderIn* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PackHeaderIn::InternalSwap(PackHeaderIn* other) {
  std::swap(serverread_, other->serverread_);
  lockey_.Swap(&other->lockey_);
  sendtoids_.UnsafeArenaSwap(&other->sendtoids_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PackHeaderIn::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PackHeaderIn_descriptor_;
  metadata.reflection = PackHeaderIn_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PackHeaderIn

// optional bool serverRead = 1;
bool PackHeaderIn::has_serverread() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void PackHeaderIn::set_has_serverread() {
  _has_bits_[0] |= 0x00000001u;
}
void PackHeaderIn::clear_has_serverread() {
  _has_bits_[0] &= ~0x00000001u;
}
void PackHeaderIn::clear_serverread() {
  serverread_ = false;
  clear_has_serverread();
}
 bool PackHeaderIn::serverread() const {
  // @@protoc_insertion_point(field_get:ProtobufPackets.PackHeaderIn.serverRead)
  return serverread_;
}
 void PackHeaderIn::set_serverread(bool value) {
  set_has_serverread();
  serverread_ = value;
  // @@protoc_insertion_point(field_set:ProtobufPackets.PackHeaderIn.serverRead)
}

// optional string locKey = 2;
bool PackHeaderIn::has_lockey() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void PackHeaderIn::set_has_lockey() {
  _has_bits_[0] |= 0x00000002u;
}
void PackHeaderIn::clear_has_lockey() {
  _has_bits_[0] &= ~0x00000002u;
}
void PackHeaderIn::clear_lockey() {
  lockey_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_lockey();
}
 const ::std::string& PackHeaderIn::lockey() const {
  // @@protoc_insertion_point(field_get:ProtobufPackets.PackHeaderIn.locKey)
  return lockey_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PackHeaderIn::set_lockey(const ::std::string& value) {
  set_has_lockey();
  lockey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ProtobufPackets.PackHeaderIn.locKey)
}
 void PackHeaderIn::set_lockey(const char* value) {
  set_has_lockey();
  lockey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ProtobufPackets.PackHeaderIn.locKey)
}
 void PackHeaderIn::set_lockey(const char* value, size_t size) {
  set_has_lockey();
  lockey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ProtobufPackets.PackHeaderIn.locKey)
}
 ::std::string* PackHeaderIn::mutable_lockey() {
  set_has_lockey();
  // @@protoc_insertion_point(field_mutable:ProtobufPackets.PackHeaderIn.locKey)
  return lockey_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* PackHeaderIn::release_lockey() {
  clear_has_lockey();
  return lockey_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PackHeaderIn::set_allocated_lockey(::std::string* lockey) {
  if (lockey != NULL) {
    set_has_lockey();
  } else {
    clear_has_lockey();
  }
  lockey_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), lockey);
  // @@protoc_insertion_point(field_set_allocated:ProtobufPackets.PackHeaderIn.locKey)
}

// repeated int32 sendToIDs = 3;
int PackHeaderIn::sendtoids_size() const {
  return sendtoids_.size();
}
void PackHeaderIn::clear_sendtoids() {
  sendtoids_.Clear();
}
 ::google::protobuf::int32 PackHeaderIn::sendtoids(int index) const {
  // @@protoc_insertion_point(field_get:ProtobufPackets.PackHeaderIn.sendToIDs)
  return sendtoids_.Get(index);
}
 void PackHeaderIn::set_sendtoids(int index, ::google::protobuf::int32 value) {
  sendtoids_.Set(index, value);
  // @@protoc_insertion_point(field_set:ProtobufPackets.PackHeaderIn.sendToIDs)
}
 void PackHeaderIn::add_sendtoids(::google::protobuf::int32 value) {
  sendtoids_.Add(value);
  // @@protoc_insertion_point(field_add:ProtobufPackets.PackHeaderIn.sendToIDs)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
PackHeaderIn::sendtoids() const {
  // @@protoc_insertion_point(field_list:ProtobufPackets.PackHeaderIn.sendToIDs)
  return sendtoids_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
PackHeaderIn::mutable_sendtoids() {
  // @@protoc_insertion_point(field_mutable_list:ProtobufPackets.PackHeaderIn.sendToIDs)
  return &sendtoids_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PackHeaderOut::kLocKeyFieldNumber;
const int PackHeaderOut::kSentFromIDFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PackHeaderOut::PackHeaderOut()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ProtobufPackets.PackHeaderOut)
}

void PackHeaderOut::InitAsDefaultInstance() {
}

PackHeaderOut::PackHeaderOut(const PackHeaderOut& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ProtobufPackets.PackHeaderOut)
}

void PackHeaderOut::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  lockey_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sentfromid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PackHeaderOut::~PackHeaderOut() {
  // @@protoc_insertion_point(destructor:ProtobufPackets.PackHeaderOut)
  SharedDtor();
}

void PackHeaderOut::SharedDtor() {
  lockey_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void PackHeaderOut::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PackHeaderOut::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PackHeaderOut_descriptor_;
}

const PackHeaderOut& PackHeaderOut::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_PackFW_2eproto();
  return *default_instance_;
}

PackHeaderOut* PackHeaderOut::default_instance_ = NULL;

PackHeaderOut* PackHeaderOut::New(::google::protobuf::Arena* arena) const {
  PackHeaderOut* n = new PackHeaderOut;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PackHeaderOut::Clear() {
  if (_has_bits_[0 / 32] & 3u) {
    if (has_lockey()) {
      lockey_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    sentfromid_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool PackHeaderOut::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ProtobufPackets.PackHeaderOut)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string locKey = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_lockey()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->lockey().data(), this->lockey().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "ProtobufPackets.PackHeaderOut.locKey");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_sentFromID;
        break;
      }

      // optional uint32 sentFromID = 2;
      case 2: {
        if (tag == 16) {
         parse_sentFromID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &sentfromid_)));
          set_has_sentfromid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ProtobufPackets.PackHeaderOut)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ProtobufPackets.PackHeaderOut)
  return false;
#undef DO_
}

void PackHeaderOut::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ProtobufPackets.PackHeaderOut)
  // optional string locKey = 1;
  if (has_lockey()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->lockey().data(), this->lockey().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ProtobufPackets.PackHeaderOut.locKey");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->lockey(), output);
  }

  // optional uint32 sentFromID = 2;
  if (has_sentfromid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->sentfromid(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ProtobufPackets.PackHeaderOut)
}

::google::protobuf::uint8* PackHeaderOut::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ProtobufPackets.PackHeaderOut)
  // optional string locKey = 1;
  if (has_lockey()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->lockey().data(), this->lockey().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ProtobufPackets.PackHeaderOut.locKey");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->lockey(), target);
  }

  // optional uint32 sentFromID = 2;
  if (has_sentfromid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->sentfromid(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ProtobufPackets.PackHeaderOut)
  return target;
}

int PackHeaderOut::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & 3u) {
    // optional string locKey = 1;
    if (has_lockey()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->lockey());
    }

    // optional uint32 sentFromID = 2;
    if (has_sentfromid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->sentfromid());
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PackHeaderOut::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const PackHeaderOut* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PackHeaderOut>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PackHeaderOut::MergeFrom(const PackHeaderOut& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_lockey()) {
      set_has_lockey();
      lockey_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.lockey_);
    }
    if (from.has_sentfromid()) {
      set_sentfromid(from.sentfromid());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void PackHeaderOut::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PackHeaderOut::CopyFrom(const PackHeaderOut& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PackHeaderOut::IsInitialized() const {

  return true;
}

void PackHeaderOut::Swap(PackHeaderOut* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PackHeaderOut::InternalSwap(PackHeaderOut* other) {
  lockey_.Swap(&other->lockey_);
  std::swap(sentfromid_, other->sentfromid_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PackHeaderOut::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PackHeaderOut_descriptor_;
  metadata.reflection = PackHeaderOut_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PackHeaderOut

// optional string locKey = 1;
bool PackHeaderOut::has_lockey() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void PackHeaderOut::set_has_lockey() {
  _has_bits_[0] |= 0x00000001u;
}
void PackHeaderOut::clear_has_lockey() {
  _has_bits_[0] &= ~0x00000001u;
}
void PackHeaderOut::clear_lockey() {
  lockey_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_lockey();
}
 const ::std::string& PackHeaderOut::lockey() const {
  // @@protoc_insertion_point(field_get:ProtobufPackets.PackHeaderOut.locKey)
  return lockey_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PackHeaderOut::set_lockey(const ::std::string& value) {
  set_has_lockey();
  lockey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ProtobufPackets.PackHeaderOut.locKey)
}
 void PackHeaderOut::set_lockey(const char* value) {
  set_has_lockey();
  lockey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ProtobufPackets.PackHeaderOut.locKey)
}
 void PackHeaderOut::set_lockey(const char* value, size_t size) {
  set_has_lockey();
  lockey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ProtobufPackets.PackHeaderOut.locKey)
}
 ::std::string* PackHeaderOut::mutable_lockey() {
  set_has_lockey();
  // @@protoc_insertion_point(field_mutable:ProtobufPackets.PackHeaderOut.locKey)
  return lockey_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* PackHeaderOut::release_lockey() {
  clear_has_lockey();
  return lockey_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PackHeaderOut::set_allocated_lockey(::std::string* lockey) {
  if (lockey != NULL) {
    set_has_lockey();
  } else {
    clear_has_lockey();
  }
  lockey_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), lockey);
  // @@protoc_insertion_point(field_set_allocated:ProtobufPackets.PackHeaderOut.locKey)
}

// optional uint32 sentFromID = 2;
bool PackHeaderOut::has_sentfromid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void PackHeaderOut::set_has_sentfromid() {
  _has_bits_[0] |= 0x00000002u;
}
void PackHeaderOut::clear_has_sentfromid() {
  _has_bits_[0] &= ~0x00000002u;
}
void PackHeaderOut::clear_sentfromid() {
  sentfromid_ = 0u;
  clear_has_sentfromid();
}
 ::google::protobuf::uint32 PackHeaderOut::sentfromid() const {
  // @@protoc_insertion_point(field_get:ProtobufPackets.PackHeaderOut.sentFromID)
  return sentfromid_;
}
 void PackHeaderOut::set_sentfromid(::google::protobuf::uint32 value) {
  set_has_sentfromid();
  sentfromid_ = value;
  // @@protoc_insertion_point(field_set:ProtobufPackets.PackHeaderOut.sentFromID)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace ProtobufPackets

// @@protoc_insertion_point(global_scope)
