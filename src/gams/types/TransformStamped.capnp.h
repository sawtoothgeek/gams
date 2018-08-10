// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: TransformStamped.capnp

#ifndef CAPNP_INCLUDED_b4295ead838e7be1_
#define CAPNP_INCLUDED_b4295ead838e7be1_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include "Header.capnp.h"
#include "Transform.capnp.h"

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(f5951016b00f88f9);

}  // namespace schemas
}  // namespace capnp

namespace gams {
namespace types {

struct TransformStamped {
  TransformStamped() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(f5951016b00f88f9, 0, 3)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class TransformStamped::Reader {
public:
  typedef TransformStamped Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasHeader() const;
  inline  ::gams::types::Header::Reader getHeader() const;

  inline bool hasTransform() const;
  inline  ::gams::types::Transform::Reader getTransform() const;

  inline bool hasChildFrameId() const;
  inline  ::capnp::Text::Reader getChildFrameId() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class TransformStamped::Builder {
public:
  typedef TransformStamped Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasHeader();
  inline  ::gams::types::Header::Builder getHeader();
  inline void setHeader( ::gams::types::Header::Reader value);
  inline  ::gams::types::Header::Builder initHeader();
  inline void adoptHeader(::capnp::Orphan< ::gams::types::Header>&& value);
  inline ::capnp::Orphan< ::gams::types::Header> disownHeader();

  inline bool hasTransform();
  inline  ::gams::types::Transform::Builder getTransform();
  inline void setTransform( ::gams::types::Transform::Reader value);
  inline  ::gams::types::Transform::Builder initTransform();
  inline void adoptTransform(::capnp::Orphan< ::gams::types::Transform>&& value);
  inline ::capnp::Orphan< ::gams::types::Transform> disownTransform();

  inline bool hasChildFrameId();
  inline  ::capnp::Text::Builder getChildFrameId();
  inline void setChildFrameId( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initChildFrameId(unsigned int size);
  inline void adoptChildFrameId(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownChildFrameId();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class TransformStamped::Pipeline {
public:
  typedef TransformStamped Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::gams::types::Header::Pipeline getHeader();
  inline  ::gams::types::Transform::Pipeline getTransform();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline bool TransformStamped::Reader::hasHeader() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool TransformStamped::Builder::hasHeader() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::gams::types::Header::Reader TransformStamped::Reader::getHeader() const {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::gams::types::Header::Builder TransformStamped::Builder::getHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::gams::types::Header::Pipeline TransformStamped::Pipeline::getHeader() {
  return  ::gams::types::Header::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void TransformStamped::Builder::setHeader( ::gams::types::Header::Reader value) {
  ::capnp::_::PointerHelpers< ::gams::types::Header>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::gams::types::Header::Builder TransformStamped::Builder::initHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void TransformStamped::Builder::adoptHeader(
    ::capnp::Orphan< ::gams::types::Header>&& value) {
  ::capnp::_::PointerHelpers< ::gams::types::Header>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::gams::types::Header> TransformStamped::Builder::disownHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool TransformStamped::Reader::hasTransform() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool TransformStamped::Builder::hasTransform() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::gams::types::Transform::Reader TransformStamped::Reader::getTransform() const {
  return ::capnp::_::PointerHelpers< ::gams::types::Transform>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::gams::types::Transform::Builder TransformStamped::Builder::getTransform() {
  return ::capnp::_::PointerHelpers< ::gams::types::Transform>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::gams::types::Transform::Pipeline TransformStamped::Pipeline::getTransform() {
  return  ::gams::types::Transform::Pipeline(_typeless.getPointerField(1));
}
#endif  // !CAPNP_LITE
inline void TransformStamped::Builder::setTransform( ::gams::types::Transform::Reader value) {
  ::capnp::_::PointerHelpers< ::gams::types::Transform>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::gams::types::Transform::Builder TransformStamped::Builder::initTransform() {
  return ::capnp::_::PointerHelpers< ::gams::types::Transform>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void TransformStamped::Builder::adoptTransform(
    ::capnp::Orphan< ::gams::types::Transform>&& value) {
  ::capnp::_::PointerHelpers< ::gams::types::Transform>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::gams::types::Transform> TransformStamped::Builder::disownTransform() {
  return ::capnp::_::PointerHelpers< ::gams::types::Transform>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline bool TransformStamped::Reader::hasChildFrameId() const {
  return !_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline bool TransformStamped::Builder::hasChildFrameId() {
  return !_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader TransformStamped::Reader::getChildFrameId() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder TransformStamped::Builder::getChildFrameId() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline void TransformStamped::Builder::setChildFrameId( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder TransformStamped::Builder::initChildFrameId(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), size);
}
inline void TransformStamped::Builder::adoptChildFrameId(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> TransformStamped::Builder::disownChildFrameId() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}

}  // namespace
}  // namespace

#endif  // CAPNP_INCLUDED_b4295ead838e7be1_
