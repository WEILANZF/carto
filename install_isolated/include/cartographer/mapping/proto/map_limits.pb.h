// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/map_limits.proto

#ifndef PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fmap_5flimits_2eproto
#define PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fmap_5flimits_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include "cartographer/mapping/proto/cell_limits_2d.pb.h"
#include "cartographer/transform/proto/transform.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_cartographer_2fmapping_2fproto_2fmap_5flimits_2eproto 

namespace protobuf_cartographer_2fmapping_2fproto_2fmap_5flimits_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_cartographer_2fmapping_2fproto_2fmap_5flimits_2eproto
namespace cartographer {
namespace mapping {
namespace proto {
class MapLimits;
class MapLimitsDefaultTypeInternal;
extern MapLimitsDefaultTypeInternal _MapLimits_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer
namespace google {
namespace protobuf {
template<> ::cartographer::mapping::proto::MapLimits* Arena::CreateMaybeMessage<::cartographer::mapping::proto::MapLimits>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace cartographer {
namespace mapping {
namespace proto {

// ===================================================================

class MapLimits : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.MapLimits) */ {
 public:
  MapLimits();
  virtual ~MapLimits();

  MapLimits(const MapLimits& from);

  inline MapLimits& operator=(const MapLimits& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MapLimits(MapLimits&& from) noexcept
    : MapLimits() {
    *this = ::std::move(from);
  }

  inline MapLimits& operator=(MapLimits&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MapLimits& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MapLimits* internal_default_instance() {
    return reinterpret_cast<const MapLimits*>(
               &_MapLimits_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(MapLimits* other);
  friend void swap(MapLimits& a, MapLimits& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MapLimits* New() const final {
    return CreateMaybeMessage<MapLimits>(NULL);
  }

  MapLimits* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<MapLimits>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const MapLimits& from);
  void MergeFrom(const MapLimits& from);
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
  void InternalSwap(MapLimits* other);
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

  // .cartographer.transform.proto.Vector2d max = 2;
  bool has_max() const;
  void clear_max();
  static const int kMaxFieldNumber = 2;
  private:
  const ::cartographer::transform::proto::Vector2d& _internal_max() const;
  public:
  const ::cartographer::transform::proto::Vector2d& max() const;
  ::cartographer::transform::proto::Vector2d* release_max();
  ::cartographer::transform::proto::Vector2d* mutable_max();
  void set_allocated_max(::cartographer::transform::proto::Vector2d* max);

  // .cartographer.mapping.proto.CellLimits cell_limits = 3;
  bool has_cell_limits() const;
  void clear_cell_limits();
  static const int kCellLimitsFieldNumber = 3;
  private:
  const ::cartographer::mapping::proto::CellLimits& _internal_cell_limits() const;
  public:
  const ::cartographer::mapping::proto::CellLimits& cell_limits() const;
  ::cartographer::mapping::proto::CellLimits* release_cell_limits();
  ::cartographer::mapping::proto::CellLimits* mutable_cell_limits();
  void set_allocated_cell_limits(::cartographer::mapping::proto::CellLimits* cell_limits);

  // double resolution = 1;
  void clear_resolution();
  static const int kResolutionFieldNumber = 1;
  double resolution() const;
  void set_resolution(double value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.MapLimits)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::cartographer::transform::proto::Vector2d* max_;
  ::cartographer::mapping::proto::CellLimits* cell_limits_;
  double resolution_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_cartographer_2fmapping_2fproto_2fmap_5flimits_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MapLimits

// double resolution = 1;
inline void MapLimits::clear_resolution() {
  resolution_ = 0;
}
inline double MapLimits::resolution() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.MapLimits.resolution)
  return resolution_;
}
inline void MapLimits::set_resolution(double value) {
  
  resolution_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.MapLimits.resolution)
}

// .cartographer.transform.proto.Vector2d max = 2;
inline bool MapLimits::has_max() const {
  return this != internal_default_instance() && max_ != NULL;
}
inline const ::cartographer::transform::proto::Vector2d& MapLimits::_internal_max() const {
  return *max_;
}
inline const ::cartographer::transform::proto::Vector2d& MapLimits::max() const {
  const ::cartographer::transform::proto::Vector2d* p = max_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.MapLimits.max)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::transform::proto::Vector2d*>(
      &::cartographer::transform::proto::_Vector2d_default_instance_);
}
inline ::cartographer::transform::proto::Vector2d* MapLimits::release_max() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.MapLimits.max)
  
  ::cartographer::transform::proto::Vector2d* temp = max_;
  max_ = NULL;
  return temp;
}
inline ::cartographer::transform::proto::Vector2d* MapLimits::mutable_max() {
  
  if (max_ == NULL) {
    auto* p = CreateMaybeMessage<::cartographer::transform::proto::Vector2d>(GetArenaNoVirtual());
    max_ = p;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.MapLimits.max)
  return max_;
}
inline void MapLimits::set_allocated_max(::cartographer::transform::proto::Vector2d* max) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(max_);
  }
  if (max) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      max = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, max, submessage_arena);
    }
    
  } else {
    
  }
  max_ = max;
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.MapLimits.max)
}

// .cartographer.mapping.proto.CellLimits cell_limits = 3;
inline bool MapLimits::has_cell_limits() const {
  return this != internal_default_instance() && cell_limits_ != NULL;
}
inline const ::cartographer::mapping::proto::CellLimits& MapLimits::_internal_cell_limits() const {
  return *cell_limits_;
}
inline const ::cartographer::mapping::proto::CellLimits& MapLimits::cell_limits() const {
  const ::cartographer::mapping::proto::CellLimits* p = cell_limits_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.MapLimits.cell_limits)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::CellLimits*>(
      &::cartographer::mapping::proto::_CellLimits_default_instance_);
}
inline ::cartographer::mapping::proto::CellLimits* MapLimits::release_cell_limits() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.MapLimits.cell_limits)
  
  ::cartographer::mapping::proto::CellLimits* temp = cell_limits_;
  cell_limits_ = NULL;
  return temp;
}
inline ::cartographer::mapping::proto::CellLimits* MapLimits::mutable_cell_limits() {
  
  if (cell_limits_ == NULL) {
    auto* p = CreateMaybeMessage<::cartographer::mapping::proto::CellLimits>(GetArenaNoVirtual());
    cell_limits_ = p;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.MapLimits.cell_limits)
  return cell_limits_;
}
inline void MapLimits::set_allocated_cell_limits(::cartographer::mapping::proto::CellLimits* cell_limits) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(cell_limits_);
  }
  if (cell_limits) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      cell_limits = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, cell_limits, submessage_arena);
    }
    
  } else {
    
  }
  cell_limits_ = cell_limits;
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.MapLimits.cell_limits)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fmap_5flimits_2eproto
