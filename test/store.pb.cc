// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: store.proto

#include "store.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_store_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_store_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_ProductInfo;
}  // namespace protobuf_store_2eproto
namespace store {
class ProductQueryDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ProductQuery>
      _instance;
} _ProductQuery_default_instance_;
class ProductReplyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ProductReply>
      _instance;
} _ProductReply_default_instance_;
class ProductInfoDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ProductInfo>
      _instance;
} _ProductInfo_default_instance_;
}  // namespace store
namespace protobuf_store_2eproto {
static void InitDefaultsProductQuery() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::store::_ProductQuery_default_instance_;
    new (ptr) ::store::ProductQuery();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::store::ProductQuery::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ProductQuery =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsProductQuery}, {}};

static void InitDefaultsProductReply() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::store::_ProductReply_default_instance_;
    new (ptr) ::store::ProductReply();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::store::ProductReply::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_ProductReply =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsProductReply}, {
      &protobuf_store_2eproto::scc_info_ProductInfo.base,}};

static void InitDefaultsProductInfo() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::store::_ProductInfo_default_instance_;
    new (ptr) ::store::ProductInfo();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::store::ProductInfo::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ProductInfo =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsProductInfo}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ProductQuery.base);
  ::google::protobuf::internal::InitSCC(&scc_info_ProductReply.base);
  ::google::protobuf::internal::InitSCC(&scc_info_ProductInfo.base);
}

::google::protobuf::Metadata file_level_metadata[3];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::store::ProductQuery, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::store::ProductQuery, product_name_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::store::ProductReply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::store::ProductReply, products_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::store::ProductInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::store::ProductInfo, price_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::store::ProductInfo, vendor_id_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::store::ProductQuery)},
  { 6, -1, sizeof(::store::ProductReply)},
  { 12, -1, sizeof(::store::ProductInfo)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::store::_ProductQuery_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::store::_ProductReply_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::store::_ProductInfo_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "store.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\013store.proto\022\005store\"$\n\014ProductQuery\022\024\n\014"
      "product_name\030\001 \001(\t\"4\n\014ProductReply\022$\n\010pr"
      "oducts\030\001 \003(\0132\022.store.ProductInfo\"/\n\013Prod"
      "uctInfo\022\r\n\005price\030\001 \001(\001\022\021\n\tvendor_id\030\002 \001("
      "\t2B\n\005Store\0229\n\013getProducts\022\023.store.Produc"
      "tQuery\032\023.store.ProductReply\"\000b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 237);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "store.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_store_2eproto
namespace store {

// ===================================================================

void ProductQuery::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ProductQuery::kProductNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProductQuery::ProductQuery()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_store_2eproto::scc_info_ProductQuery.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:store.ProductQuery)
}
ProductQuery::ProductQuery(const ProductQuery& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  product_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.product_name().size() > 0) {
    product_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.product_name_);
  }
  // @@protoc_insertion_point(copy_constructor:store.ProductQuery)
}

void ProductQuery::SharedCtor() {
  product_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ProductQuery::~ProductQuery() {
  // @@protoc_insertion_point(destructor:store.ProductQuery)
  SharedDtor();
}

void ProductQuery::SharedDtor() {
  product_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ProductQuery::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ProductQuery::descriptor() {
  ::protobuf_store_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_store_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ProductQuery& ProductQuery::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_store_2eproto::scc_info_ProductQuery.base);
  return *internal_default_instance();
}


void ProductQuery::Clear() {
// @@protoc_insertion_point(message_clear_start:store.ProductQuery)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  product_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool ProductQuery::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:store.ProductQuery)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string product_name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_product_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->product_name().data(), static_cast<int>(this->product_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "store.ProductQuery.product_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:store.ProductQuery)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:store.ProductQuery)
  return false;
#undef DO_
}

void ProductQuery::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:store.ProductQuery)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string product_name = 1;
  if (this->product_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->product_name().data(), static_cast<int>(this->product_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "store.ProductQuery.product_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->product_name(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:store.ProductQuery)
}

::google::protobuf::uint8* ProductQuery::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:store.ProductQuery)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string product_name = 1;
  if (this->product_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->product_name().data(), static_cast<int>(this->product_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "store.ProductQuery.product_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->product_name(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:store.ProductQuery)
  return target;
}

size_t ProductQuery::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:store.ProductQuery)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string product_name = 1;
  if (this->product_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->product_name());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ProductQuery::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:store.ProductQuery)
  GOOGLE_DCHECK_NE(&from, this);
  const ProductQuery* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ProductQuery>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:store.ProductQuery)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:store.ProductQuery)
    MergeFrom(*source);
  }
}

void ProductQuery::MergeFrom(const ProductQuery& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:store.ProductQuery)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.product_name().size() > 0) {

    product_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.product_name_);
  }
}

void ProductQuery::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:store.ProductQuery)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProductQuery::CopyFrom(const ProductQuery& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:store.ProductQuery)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProductQuery::IsInitialized() const {
  return true;
}

void ProductQuery::Swap(ProductQuery* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProductQuery::InternalSwap(ProductQuery* other) {
  using std::swap;
  product_name_.Swap(&other->product_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ProductQuery::GetMetadata() const {
  protobuf_store_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_store_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void ProductReply::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ProductReply::kProductsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProductReply::ProductReply()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_store_2eproto::scc_info_ProductReply.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:store.ProductReply)
}
ProductReply::ProductReply(const ProductReply& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      products_(from.products_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:store.ProductReply)
}

void ProductReply::SharedCtor() {
}

ProductReply::~ProductReply() {
  // @@protoc_insertion_point(destructor:store.ProductReply)
  SharedDtor();
}

void ProductReply::SharedDtor() {
}

void ProductReply::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ProductReply::descriptor() {
  ::protobuf_store_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_store_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ProductReply& ProductReply::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_store_2eproto::scc_info_ProductReply.base);
  return *internal_default_instance();
}


void ProductReply::Clear() {
// @@protoc_insertion_point(message_clear_start:store.ProductReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  products_.Clear();
  _internal_metadata_.Clear();
}

bool ProductReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:store.ProductReply)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .store.ProductInfo products = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_products()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:store.ProductReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:store.ProductReply)
  return false;
#undef DO_
}

void ProductReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:store.ProductReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .store.ProductInfo products = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->products_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->products(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:store.ProductReply)
}

::google::protobuf::uint8* ProductReply::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:store.ProductReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .store.ProductInfo products = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->products_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->products(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:store.ProductReply)
  return target;
}

size_t ProductReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:store.ProductReply)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .store.ProductInfo products = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->products_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->products(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ProductReply::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:store.ProductReply)
  GOOGLE_DCHECK_NE(&from, this);
  const ProductReply* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ProductReply>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:store.ProductReply)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:store.ProductReply)
    MergeFrom(*source);
  }
}

void ProductReply::MergeFrom(const ProductReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:store.ProductReply)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  products_.MergeFrom(from.products_);
}

void ProductReply::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:store.ProductReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProductReply::CopyFrom(const ProductReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:store.ProductReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProductReply::IsInitialized() const {
  return true;
}

void ProductReply::Swap(ProductReply* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProductReply::InternalSwap(ProductReply* other) {
  using std::swap;
  CastToBase(&products_)->InternalSwap(CastToBase(&other->products_));
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ProductReply::GetMetadata() const {
  protobuf_store_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_store_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void ProductInfo::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ProductInfo::kPriceFieldNumber;
const int ProductInfo::kVendorIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProductInfo::ProductInfo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_store_2eproto::scc_info_ProductInfo.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:store.ProductInfo)
}
ProductInfo::ProductInfo(const ProductInfo& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  vendor_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.vendor_id().size() > 0) {
    vendor_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.vendor_id_);
  }
  price_ = from.price_;
  // @@protoc_insertion_point(copy_constructor:store.ProductInfo)
}

void ProductInfo::SharedCtor() {
  vendor_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  price_ = 0;
}

ProductInfo::~ProductInfo() {
  // @@protoc_insertion_point(destructor:store.ProductInfo)
  SharedDtor();
}

void ProductInfo::SharedDtor() {
  vendor_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ProductInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ProductInfo::descriptor() {
  ::protobuf_store_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_store_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ProductInfo& ProductInfo::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_store_2eproto::scc_info_ProductInfo.base);
  return *internal_default_instance();
}


void ProductInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:store.ProductInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  vendor_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  price_ = 0;
  _internal_metadata_.Clear();
}

bool ProductInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:store.ProductInfo)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double price = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &price_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string vendor_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_vendor_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->vendor_id().data(), static_cast<int>(this->vendor_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "store.ProductInfo.vendor_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:store.ProductInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:store.ProductInfo)
  return false;
#undef DO_
}

void ProductInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:store.ProductInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double price = 1;
  if (this->price() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->price(), output);
  }

  // string vendor_id = 2;
  if (this->vendor_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->vendor_id().data(), static_cast<int>(this->vendor_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "store.ProductInfo.vendor_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->vendor_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:store.ProductInfo)
}

::google::protobuf::uint8* ProductInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:store.ProductInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double price = 1;
  if (this->price() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->price(), target);
  }

  // string vendor_id = 2;
  if (this->vendor_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->vendor_id().data(), static_cast<int>(this->vendor_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "store.ProductInfo.vendor_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->vendor_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:store.ProductInfo)
  return target;
}

size_t ProductInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:store.ProductInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string vendor_id = 2;
  if (this->vendor_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->vendor_id());
  }

  // double price = 1;
  if (this->price() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ProductInfo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:store.ProductInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const ProductInfo* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ProductInfo>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:store.ProductInfo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:store.ProductInfo)
    MergeFrom(*source);
  }
}

void ProductInfo::MergeFrom(const ProductInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:store.ProductInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.vendor_id().size() > 0) {

    vendor_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.vendor_id_);
  }
  if (from.price() != 0) {
    set_price(from.price());
  }
}

void ProductInfo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:store.ProductInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProductInfo::CopyFrom(const ProductInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:store.ProductInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProductInfo::IsInitialized() const {
  return true;
}

void ProductInfo::Swap(ProductInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProductInfo::InternalSwap(ProductInfo* other) {
  using std::swap;
  vendor_id_.Swap(&other->vendor_id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(price_, other->price_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ProductInfo::GetMetadata() const {
  protobuf_store_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_store_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace store
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::store::ProductQuery* Arena::CreateMaybeMessage< ::store::ProductQuery >(Arena* arena) {
  return Arena::CreateInternal< ::store::ProductQuery >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::store::ProductReply* Arena::CreateMaybeMessage< ::store::ProductReply >(Arena* arena) {
  return Arena::CreateInternal< ::store::ProductReply >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::store::ProductInfo* Arena::CreateMaybeMessage< ::store::ProductInfo >(Arena* arena) {
  return Arena::CreateInternal< ::store::ProductInfo >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
