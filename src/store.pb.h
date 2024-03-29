// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: store.proto

#ifndef PROTOBUF_INCLUDED_store_2eproto
#define PROTOBUF_INCLUDED_store_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

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
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_store_2eproto 

namespace protobuf_store_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_store_2eproto
namespace store {
class ProductInfo;
class ProductInfoDefaultTypeInternal;
extern ProductInfoDefaultTypeInternal _ProductInfo_default_instance_;
class ProductQuery;
class ProductQueryDefaultTypeInternal;
extern ProductQueryDefaultTypeInternal _ProductQuery_default_instance_;
class ProductReply;
class ProductReplyDefaultTypeInternal;
extern ProductReplyDefaultTypeInternal _ProductReply_default_instance_;
}  // namespace store
namespace google {
namespace protobuf {
template<> ::store::ProductInfo* Arena::CreateMaybeMessage<::store::ProductInfo>(Arena*);
template<> ::store::ProductQuery* Arena::CreateMaybeMessage<::store::ProductQuery>(Arena*);
template<> ::store::ProductReply* Arena::CreateMaybeMessage<::store::ProductReply>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace store {

// ===================================================================

class ProductQuery : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:store.ProductQuery) */ {
 public:
  ProductQuery();
  virtual ~ProductQuery();

  ProductQuery(const ProductQuery& from);

  inline ProductQuery& operator=(const ProductQuery& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ProductQuery(ProductQuery&& from) noexcept
    : ProductQuery() {
    *this = ::std::move(from);
  }

  inline ProductQuery& operator=(ProductQuery&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ProductQuery& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ProductQuery* internal_default_instance() {
    return reinterpret_cast<const ProductQuery*>(
               &_ProductQuery_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ProductQuery* other);
  friend void swap(ProductQuery& a, ProductQuery& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ProductQuery* New() const final {
    return CreateMaybeMessage<ProductQuery>(NULL);
  }

  ProductQuery* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ProductQuery>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ProductQuery& from);
  void MergeFrom(const ProductQuery& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ProductQuery* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string product_name = 1;
  void clear_product_name();
  static const int kProductNameFieldNumber = 1;
  const ::std::string& product_name() const;
  void set_product_name(const ::std::string& value);
  #if LANG_CXX11
  void set_product_name(::std::string&& value);
  #endif
  void set_product_name(const char* value);
  void set_product_name(const char* value, size_t size);
  ::std::string* mutable_product_name();
  ::std::string* release_product_name();
  void set_allocated_product_name(::std::string* product_name);

  // @@protoc_insertion_point(class_scope:store.ProductQuery)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr product_name_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_store_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ProductReply : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:store.ProductReply) */ {
 public:
  ProductReply();
  virtual ~ProductReply();

  ProductReply(const ProductReply& from);

  inline ProductReply& operator=(const ProductReply& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ProductReply(ProductReply&& from) noexcept
    : ProductReply() {
    *this = ::std::move(from);
  }

  inline ProductReply& operator=(ProductReply&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ProductReply& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ProductReply* internal_default_instance() {
    return reinterpret_cast<const ProductReply*>(
               &_ProductReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(ProductReply* other);
  friend void swap(ProductReply& a, ProductReply& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ProductReply* New() const final {
    return CreateMaybeMessage<ProductReply>(NULL);
  }

  ProductReply* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ProductReply>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ProductReply& from);
  void MergeFrom(const ProductReply& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ProductReply* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .store.ProductInfo products = 1;
  int products_size() const;
  void clear_products();
  static const int kProductsFieldNumber = 1;
  ::store::ProductInfo* mutable_products(int index);
  ::google::protobuf::RepeatedPtrField< ::store::ProductInfo >*
      mutable_products();
  const ::store::ProductInfo& products(int index) const;
  ::store::ProductInfo* add_products();
  const ::google::protobuf::RepeatedPtrField< ::store::ProductInfo >&
      products() const;

  // @@protoc_insertion_point(class_scope:store.ProductReply)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::store::ProductInfo > products_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_store_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ProductInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:store.ProductInfo) */ {
 public:
  ProductInfo();
  virtual ~ProductInfo();

  ProductInfo(const ProductInfo& from);

  inline ProductInfo& operator=(const ProductInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ProductInfo(ProductInfo&& from) noexcept
    : ProductInfo() {
    *this = ::std::move(from);
  }

  inline ProductInfo& operator=(ProductInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ProductInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ProductInfo* internal_default_instance() {
    return reinterpret_cast<const ProductInfo*>(
               &_ProductInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(ProductInfo* other);
  friend void swap(ProductInfo& a, ProductInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ProductInfo* New() const final {
    return CreateMaybeMessage<ProductInfo>(NULL);
  }

  ProductInfo* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ProductInfo>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ProductInfo& from);
  void MergeFrom(const ProductInfo& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ProductInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string vendor_id = 2;
  void clear_vendor_id();
  static const int kVendorIdFieldNumber = 2;
  const ::std::string& vendor_id() const;
  void set_vendor_id(const ::std::string& value);
  #if LANG_CXX11
  void set_vendor_id(::std::string&& value);
  #endif
  void set_vendor_id(const char* value);
  void set_vendor_id(const char* value, size_t size);
  ::std::string* mutable_vendor_id();
  ::std::string* release_vendor_id();
  void set_allocated_vendor_id(::std::string* vendor_id);

  // double price = 1;
  void clear_price();
  static const int kPriceFieldNumber = 1;
  double price() const;
  void set_price(double value);

  // @@protoc_insertion_point(class_scope:store.ProductInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr vendor_id_;
  double price_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_store_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ProductQuery

// string product_name = 1;
inline void ProductQuery::clear_product_name() {
  product_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProductQuery::product_name() const {
  // @@protoc_insertion_point(field_get:store.ProductQuery.product_name)
  return product_name_.GetNoArena();
}
inline void ProductQuery::set_product_name(const ::std::string& value) {
  
  product_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:store.ProductQuery.product_name)
}
#if LANG_CXX11
inline void ProductQuery::set_product_name(::std::string&& value) {
  
  product_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:store.ProductQuery.product_name)
}
#endif
inline void ProductQuery::set_product_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  product_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:store.ProductQuery.product_name)
}
inline void ProductQuery::set_product_name(const char* value, size_t size) {
  
  product_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:store.ProductQuery.product_name)
}
inline ::std::string* ProductQuery::mutable_product_name() {
  
  // @@protoc_insertion_point(field_mutable:store.ProductQuery.product_name)
  return product_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProductQuery::release_product_name() {
  // @@protoc_insertion_point(field_release:store.ProductQuery.product_name)
  
  return product_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProductQuery::set_allocated_product_name(::std::string* product_name) {
  if (product_name != NULL) {
    
  } else {
    
  }
  product_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), product_name);
  // @@protoc_insertion_point(field_set_allocated:store.ProductQuery.product_name)
}

// -------------------------------------------------------------------

// ProductReply

// repeated .store.ProductInfo products = 1;
inline int ProductReply::products_size() const {
  return products_.size();
}
inline void ProductReply::clear_products() {
  products_.Clear();
}
inline ::store::ProductInfo* ProductReply::mutable_products(int index) {
  // @@protoc_insertion_point(field_mutable:store.ProductReply.products)
  return products_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::store::ProductInfo >*
ProductReply::mutable_products() {
  // @@protoc_insertion_point(field_mutable_list:store.ProductReply.products)
  return &products_;
}
inline const ::store::ProductInfo& ProductReply::products(int index) const {
  // @@protoc_insertion_point(field_get:store.ProductReply.products)
  return products_.Get(index);
}
inline ::store::ProductInfo* ProductReply::add_products() {
  // @@protoc_insertion_point(field_add:store.ProductReply.products)
  return products_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::store::ProductInfo >&
ProductReply::products() const {
  // @@protoc_insertion_point(field_list:store.ProductReply.products)
  return products_;
}

// -------------------------------------------------------------------

// ProductInfo

// double price = 1;
inline void ProductInfo::clear_price() {
  price_ = 0;
}
inline double ProductInfo::price() const {
  // @@protoc_insertion_point(field_get:store.ProductInfo.price)
  return price_;
}
inline void ProductInfo::set_price(double value) {
  
  price_ = value;
  // @@protoc_insertion_point(field_set:store.ProductInfo.price)
}

// string vendor_id = 2;
inline void ProductInfo::clear_vendor_id() {
  vendor_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProductInfo::vendor_id() const {
  // @@protoc_insertion_point(field_get:store.ProductInfo.vendor_id)
  return vendor_id_.GetNoArena();
}
inline void ProductInfo::set_vendor_id(const ::std::string& value) {
  
  vendor_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:store.ProductInfo.vendor_id)
}
#if LANG_CXX11
inline void ProductInfo::set_vendor_id(::std::string&& value) {
  
  vendor_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:store.ProductInfo.vendor_id)
}
#endif
inline void ProductInfo::set_vendor_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  vendor_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:store.ProductInfo.vendor_id)
}
inline void ProductInfo::set_vendor_id(const char* value, size_t size) {
  
  vendor_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:store.ProductInfo.vendor_id)
}
inline ::std::string* ProductInfo::mutable_vendor_id() {
  
  // @@protoc_insertion_point(field_mutable:store.ProductInfo.vendor_id)
  return vendor_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProductInfo::release_vendor_id() {
  // @@protoc_insertion_point(field_release:store.ProductInfo.vendor_id)
  
  return vendor_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProductInfo::set_allocated_vendor_id(::std::string* vendor_id) {
  if (vendor_id != NULL) {
    
  } else {
    
  }
  vendor_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), vendor_id);
  // @@protoc_insertion_point(field_set_allocated:store.ProductInfo.vendor_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace store

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_store_2eproto
