// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/pose_graph/constraint_builder_options.proto

#ifndef PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto
#define PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto

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
#include "cartographer/mapping/proto/scan_matching/ceres_scan_matcher_options_2d.pb.h"
#include "cartographer/mapping/proto/scan_matching/ceres_scan_matcher_options_3d.pb.h"
#include "cartographer/mapping/proto/scan_matching/fast_correlative_scan_matcher_options_2d.pb.h"
#include "cartographer/mapping/proto/scan_matching/fast_correlative_scan_matcher_options_3d.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto 

namespace protobuf_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto {
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
}  // namespace protobuf_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto
namespace cartographer {
namespace mapping {
namespace constraints {
namespace proto {
class ConstraintBuilderOptions;
class ConstraintBuilderOptionsDefaultTypeInternal;
extern ConstraintBuilderOptionsDefaultTypeInternal _ConstraintBuilderOptions_default_instance_;
}  // namespace proto
}  // namespace constraints
}  // namespace mapping
}  // namespace cartographer
namespace google {
namespace protobuf {
template<> ::cartographer::mapping::constraints::proto::ConstraintBuilderOptions* Arena::CreateMaybeMessage<::cartographer::mapping::constraints::proto::ConstraintBuilderOptions>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace cartographer {
namespace mapping {
namespace constraints {
namespace proto {

// ===================================================================

class ConstraintBuilderOptions : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.constraints.proto.ConstraintBuilderOptions) */ {
 public:
  ConstraintBuilderOptions();
  virtual ~ConstraintBuilderOptions();

  ConstraintBuilderOptions(const ConstraintBuilderOptions& from);

  inline ConstraintBuilderOptions& operator=(const ConstraintBuilderOptions& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ConstraintBuilderOptions(ConstraintBuilderOptions&& from) noexcept
    : ConstraintBuilderOptions() {
    *this = ::std::move(from);
  }

  inline ConstraintBuilderOptions& operator=(ConstraintBuilderOptions&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ConstraintBuilderOptions& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ConstraintBuilderOptions* internal_default_instance() {
    return reinterpret_cast<const ConstraintBuilderOptions*>(
               &_ConstraintBuilderOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ConstraintBuilderOptions* other);
  friend void swap(ConstraintBuilderOptions& a, ConstraintBuilderOptions& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ConstraintBuilderOptions* New() const final {
    return CreateMaybeMessage<ConstraintBuilderOptions>(NULL);
  }

  ConstraintBuilderOptions* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ConstraintBuilderOptions>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ConstraintBuilderOptions& from);
  void MergeFrom(const ConstraintBuilderOptions& from);
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
  void InternalSwap(ConstraintBuilderOptions* other);
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

  // .cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D fast_correlative_scan_matcher_options = 9;
  bool has_fast_correlative_scan_matcher_options() const;
  void clear_fast_correlative_scan_matcher_options();
  static const int kFastCorrelativeScanMatcherOptionsFieldNumber = 9;
  private:
  const ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D& _internal_fast_correlative_scan_matcher_options() const;
  public:
  const ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D& fast_correlative_scan_matcher_options() const;
  ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D* release_fast_correlative_scan_matcher_options();
  ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D* mutable_fast_correlative_scan_matcher_options();
  void set_allocated_fast_correlative_scan_matcher_options(::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D* fast_correlative_scan_matcher_options);

  // .cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions3D fast_correlative_scan_matcher_options_3d = 10;
  bool has_fast_correlative_scan_matcher_options_3d() const;
  void clear_fast_correlative_scan_matcher_options_3d();
  static const int kFastCorrelativeScanMatcherOptions3DFieldNumber = 10;
  private:
  const ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D& _internal_fast_correlative_scan_matcher_options_3d() const;
  public:
  const ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D& fast_correlative_scan_matcher_options_3d() const;
  ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D* release_fast_correlative_scan_matcher_options_3d();
  ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D* mutable_fast_correlative_scan_matcher_options_3d();
  void set_allocated_fast_correlative_scan_matcher_options_3d(::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D* fast_correlative_scan_matcher_options_3d);

  // .cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D ceres_scan_matcher_options = 11;
  bool has_ceres_scan_matcher_options() const;
  void clear_ceres_scan_matcher_options();
  static const int kCeresScanMatcherOptionsFieldNumber = 11;
  private:
  const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D& _internal_ceres_scan_matcher_options() const;
  public:
  const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D& ceres_scan_matcher_options() const;
  ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D* release_ceres_scan_matcher_options();
  ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D* mutable_ceres_scan_matcher_options();
  void set_allocated_ceres_scan_matcher_options(::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D* ceres_scan_matcher_options);

  // .cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D ceres_scan_matcher_options_3d = 12;
  bool has_ceres_scan_matcher_options_3d() const;
  void clear_ceres_scan_matcher_options_3d();
  static const int kCeresScanMatcherOptions3DFieldNumber = 12;
  private:
  const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D& _internal_ceres_scan_matcher_options_3d() const;
  public:
  const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D& ceres_scan_matcher_options_3d() const;
  ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D* release_ceres_scan_matcher_options_3d();
  ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D* mutable_ceres_scan_matcher_options_3d();
  void set_allocated_ceres_scan_matcher_options_3d(::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D* ceres_scan_matcher_options_3d);

  // double sampling_ratio = 1;
  void clear_sampling_ratio();
  static const int kSamplingRatioFieldNumber = 1;
  double sampling_ratio() const;
  void set_sampling_ratio(double value);

  // double max_constraint_distance = 2;
  void clear_max_constraint_distance();
  static const int kMaxConstraintDistanceFieldNumber = 2;
  double max_constraint_distance() const;
  void set_max_constraint_distance(double value);

  // double min_score = 4;
  void clear_min_score();
  static const int kMinScoreFieldNumber = 4;
  double min_score() const;
  void set_min_score(double value);

  // double global_localization_min_score = 5;
  void clear_global_localization_min_score();
  static const int kGlobalLocalizationMinScoreFieldNumber = 5;
  double global_localization_min_score() const;
  void set_global_localization_min_score(double value);

  // bool log_matches = 8;
  void clear_log_matches();
  static const int kLogMatchesFieldNumber = 8;
  bool log_matches() const;
  void set_log_matches(bool value);

  // double loop_closure_translation_weight = 13;
  void clear_loop_closure_translation_weight();
  static const int kLoopClosureTranslationWeightFieldNumber = 13;
  double loop_closure_translation_weight() const;
  void set_loop_closure_translation_weight(double value);

  // double loop_closure_rotation_weight = 14;
  void clear_loop_closure_rotation_weight();
  static const int kLoopClosureRotationWeightFieldNumber = 14;
  double loop_closure_rotation_weight() const;
  void set_loop_closure_rotation_weight(double value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.constraints.proto.ConstraintBuilderOptions)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D* fast_correlative_scan_matcher_options_;
  ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D* fast_correlative_scan_matcher_options_3d_;
  ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D* ceres_scan_matcher_options_;
  ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D* ceres_scan_matcher_options_3d_;
  double sampling_ratio_;
  double max_constraint_distance_;
  double min_score_;
  double global_localization_min_score_;
  bool log_matches_;
  double loop_closure_translation_weight_;
  double loop_closure_rotation_weight_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ConstraintBuilderOptions

// double sampling_ratio = 1;
inline void ConstraintBuilderOptions::clear_sampling_ratio() {
  sampling_ratio_ = 0;
}
inline double ConstraintBuilderOptions::sampling_ratio() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.sampling_ratio)
  return sampling_ratio_;
}
inline void ConstraintBuilderOptions::set_sampling_ratio(double value) {
  
  sampling_ratio_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.sampling_ratio)
}

// double max_constraint_distance = 2;
inline void ConstraintBuilderOptions::clear_max_constraint_distance() {
  max_constraint_distance_ = 0;
}
inline double ConstraintBuilderOptions::max_constraint_distance() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.max_constraint_distance)
  return max_constraint_distance_;
}
inline void ConstraintBuilderOptions::set_max_constraint_distance(double value) {
  
  max_constraint_distance_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.max_constraint_distance)
}

// double min_score = 4;
inline void ConstraintBuilderOptions::clear_min_score() {
  min_score_ = 0;
}
inline double ConstraintBuilderOptions::min_score() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.min_score)
  return min_score_;
}
inline void ConstraintBuilderOptions::set_min_score(double value) {
  
  min_score_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.min_score)
}

// double global_localization_min_score = 5;
inline void ConstraintBuilderOptions::clear_global_localization_min_score() {
  global_localization_min_score_ = 0;
}
inline double ConstraintBuilderOptions::global_localization_min_score() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.global_localization_min_score)
  return global_localization_min_score_;
}
inline void ConstraintBuilderOptions::set_global_localization_min_score(double value) {
  
  global_localization_min_score_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.global_localization_min_score)
}

// double loop_closure_translation_weight = 13;
inline void ConstraintBuilderOptions::clear_loop_closure_translation_weight() {
  loop_closure_translation_weight_ = 0;
}
inline double ConstraintBuilderOptions::loop_closure_translation_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.loop_closure_translation_weight)
  return loop_closure_translation_weight_;
}
inline void ConstraintBuilderOptions::set_loop_closure_translation_weight(double value) {
  
  loop_closure_translation_weight_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.loop_closure_translation_weight)
}

// double loop_closure_rotation_weight = 14;
inline void ConstraintBuilderOptions::clear_loop_closure_rotation_weight() {
  loop_closure_rotation_weight_ = 0;
}
inline double ConstraintBuilderOptions::loop_closure_rotation_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.loop_closure_rotation_weight)
  return loop_closure_rotation_weight_;
}
inline void ConstraintBuilderOptions::set_loop_closure_rotation_weight(double value) {
  
  loop_closure_rotation_weight_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.loop_closure_rotation_weight)
}

// bool log_matches = 8;
inline void ConstraintBuilderOptions::clear_log_matches() {
  log_matches_ = false;
}
inline bool ConstraintBuilderOptions::log_matches() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.log_matches)
  return log_matches_;
}
inline void ConstraintBuilderOptions::set_log_matches(bool value) {
  
  log_matches_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.log_matches)
}

// .cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D fast_correlative_scan_matcher_options = 9;
inline bool ConstraintBuilderOptions::has_fast_correlative_scan_matcher_options() const {
  return this != internal_default_instance() && fast_correlative_scan_matcher_options_ != NULL;
}
inline const ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D& ConstraintBuilderOptions::_internal_fast_correlative_scan_matcher_options() const {
  return *fast_correlative_scan_matcher_options_;
}
inline const ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D& ConstraintBuilderOptions::fast_correlative_scan_matcher_options() const {
  const ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D* p = fast_correlative_scan_matcher_options_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.fast_correlative_scan_matcher_options)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D*>(
      &::cartographer::mapping::scan_matching::proto::_FastCorrelativeScanMatcherOptions2D_default_instance_);
}
inline ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D* ConstraintBuilderOptions::release_fast_correlative_scan_matcher_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.fast_correlative_scan_matcher_options)
  
  ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D* temp = fast_correlative_scan_matcher_options_;
  fast_correlative_scan_matcher_options_ = NULL;
  return temp;
}
inline ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D* ConstraintBuilderOptions::mutable_fast_correlative_scan_matcher_options() {
  
  if (fast_correlative_scan_matcher_options_ == NULL) {
    auto* p = CreateMaybeMessage<::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D>(GetArenaNoVirtual());
    fast_correlative_scan_matcher_options_ = p;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.fast_correlative_scan_matcher_options)
  return fast_correlative_scan_matcher_options_;
}
inline void ConstraintBuilderOptions::set_allocated_fast_correlative_scan_matcher_options(::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D* fast_correlative_scan_matcher_options) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(fast_correlative_scan_matcher_options_);
  }
  if (fast_correlative_scan_matcher_options) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      fast_correlative_scan_matcher_options = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, fast_correlative_scan_matcher_options, submessage_arena);
    }
    
  } else {
    
  }
  fast_correlative_scan_matcher_options_ = fast_correlative_scan_matcher_options;
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.fast_correlative_scan_matcher_options)
}

// .cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D ceres_scan_matcher_options = 11;
inline bool ConstraintBuilderOptions::has_ceres_scan_matcher_options() const {
  return this != internal_default_instance() && ceres_scan_matcher_options_ != NULL;
}
inline const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D& ConstraintBuilderOptions::_internal_ceres_scan_matcher_options() const {
  return *ceres_scan_matcher_options_;
}
inline const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D& ConstraintBuilderOptions::ceres_scan_matcher_options() const {
  const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D* p = ceres_scan_matcher_options_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.ceres_scan_matcher_options)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D*>(
      &::cartographer::mapping::scan_matching::proto::_CeresScanMatcherOptions2D_default_instance_);
}
inline ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D* ConstraintBuilderOptions::release_ceres_scan_matcher_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.ceres_scan_matcher_options)
  
  ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D* temp = ceres_scan_matcher_options_;
  ceres_scan_matcher_options_ = NULL;
  return temp;
}
inline ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D* ConstraintBuilderOptions::mutable_ceres_scan_matcher_options() {
  
  if (ceres_scan_matcher_options_ == NULL) {
    auto* p = CreateMaybeMessage<::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D>(GetArenaNoVirtual());
    ceres_scan_matcher_options_ = p;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.ceres_scan_matcher_options)
  return ceres_scan_matcher_options_;
}
inline void ConstraintBuilderOptions::set_allocated_ceres_scan_matcher_options(::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D* ceres_scan_matcher_options) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(ceres_scan_matcher_options_);
  }
  if (ceres_scan_matcher_options) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      ceres_scan_matcher_options = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, ceres_scan_matcher_options, submessage_arena);
    }
    
  } else {
    
  }
  ceres_scan_matcher_options_ = ceres_scan_matcher_options;
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.ceres_scan_matcher_options)
}

// .cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions3D fast_correlative_scan_matcher_options_3d = 10;
inline bool ConstraintBuilderOptions::has_fast_correlative_scan_matcher_options_3d() const {
  return this != internal_default_instance() && fast_correlative_scan_matcher_options_3d_ != NULL;
}
inline const ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D& ConstraintBuilderOptions::_internal_fast_correlative_scan_matcher_options_3d() const {
  return *fast_correlative_scan_matcher_options_3d_;
}
inline const ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D& ConstraintBuilderOptions::fast_correlative_scan_matcher_options_3d() const {
  const ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D* p = fast_correlative_scan_matcher_options_3d_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.fast_correlative_scan_matcher_options_3d)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D*>(
      &::cartographer::mapping::scan_matching::proto::_FastCorrelativeScanMatcherOptions3D_default_instance_);
}
inline ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D* ConstraintBuilderOptions::release_fast_correlative_scan_matcher_options_3d() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.fast_correlative_scan_matcher_options_3d)
  
  ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D* temp = fast_correlative_scan_matcher_options_3d_;
  fast_correlative_scan_matcher_options_3d_ = NULL;
  return temp;
}
inline ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D* ConstraintBuilderOptions::mutable_fast_correlative_scan_matcher_options_3d() {
  
  if (fast_correlative_scan_matcher_options_3d_ == NULL) {
    auto* p = CreateMaybeMessage<::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D>(GetArenaNoVirtual());
    fast_correlative_scan_matcher_options_3d_ = p;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.fast_correlative_scan_matcher_options_3d)
  return fast_correlative_scan_matcher_options_3d_;
}
inline void ConstraintBuilderOptions::set_allocated_fast_correlative_scan_matcher_options_3d(::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D* fast_correlative_scan_matcher_options_3d) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(fast_correlative_scan_matcher_options_3d_);
  }
  if (fast_correlative_scan_matcher_options_3d) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      fast_correlative_scan_matcher_options_3d = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, fast_correlative_scan_matcher_options_3d, submessage_arena);
    }
    
  } else {
    
  }
  fast_correlative_scan_matcher_options_3d_ = fast_correlative_scan_matcher_options_3d;
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.fast_correlative_scan_matcher_options_3d)
}

// .cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D ceres_scan_matcher_options_3d = 12;
inline bool ConstraintBuilderOptions::has_ceres_scan_matcher_options_3d() const {
  return this != internal_default_instance() && ceres_scan_matcher_options_3d_ != NULL;
}
inline const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D& ConstraintBuilderOptions::_internal_ceres_scan_matcher_options_3d() const {
  return *ceres_scan_matcher_options_3d_;
}
inline const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D& ConstraintBuilderOptions::ceres_scan_matcher_options_3d() const {
  const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D* p = ceres_scan_matcher_options_3d_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.ceres_scan_matcher_options_3d)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D*>(
      &::cartographer::mapping::scan_matching::proto::_CeresScanMatcherOptions3D_default_instance_);
}
inline ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D* ConstraintBuilderOptions::release_ceres_scan_matcher_options_3d() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.ceres_scan_matcher_options_3d)
  
  ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D* temp = ceres_scan_matcher_options_3d_;
  ceres_scan_matcher_options_3d_ = NULL;
  return temp;
}
inline ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D* ConstraintBuilderOptions::mutable_ceres_scan_matcher_options_3d() {
  
  if (ceres_scan_matcher_options_3d_ == NULL) {
    auto* p = CreateMaybeMessage<::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D>(GetArenaNoVirtual());
    ceres_scan_matcher_options_3d_ = p;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.ceres_scan_matcher_options_3d)
  return ceres_scan_matcher_options_3d_;
}
inline void ConstraintBuilderOptions::set_allocated_ceres_scan_matcher_options_3d(::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D* ceres_scan_matcher_options_3d) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(ceres_scan_matcher_options_3d_);
  }
  if (ceres_scan_matcher_options_3d) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      ceres_scan_matcher_options_3d = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, ceres_scan_matcher_options_3d, submessage_arena);
    }
    
  } else {
    
  }
  ceres_scan_matcher_options_3d_ = ceres_scan_matcher_options_3d;
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.constraints.proto.ConstraintBuilderOptions.ceres_scan_matcher_options_3d)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace constraints
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto
