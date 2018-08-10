// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: Joy.capnp

#ifndef CAPNP_INCLUDED_e701fe984cefc59c_
#define CAPNP_INCLUDED_e701fe984cefc59c_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include "Header.capnp.h"

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(f4247908e3bdde9c);

}  // namespace schemas
}  // namespace capnp

namespace gams {
namespace types {

struct Joy {
  Joy() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(f4247908e3bdde9c, 0, 3)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class Joy::Reader {
public:
  typedef Joy Reads;

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

  inline bool hasButtons() const;
  inline  ::capnp::List< ::int32_t>::Reader getButtons() const;

  inline bool hasHeader() const;
  inline  ::gams::types::Header::Reader getHeader() const;

  inline bool hasAxes() const;
  inline  ::capnp::List<float>::Reader getAxes() const;

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

class Joy::Builder {
public:
  typedef Joy Builds;

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

  inline bool hasButtons();
  inline  ::capnp::List< ::int32_t>::Builder getButtons();
  inline void setButtons( ::capnp::List< ::int32_t>::Reader value);
  inline void setButtons(::kj::ArrayPtr<const  ::int32_t> value);
  inline  ::capnp::List< ::int32_t>::Builder initButtons(unsigned int size);
  inline void adoptButtons(::capnp::Orphan< ::capnp::List< ::int32_t>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::int32_t>> disownButtons();

  inline bool hasHeader();
  inline  ::gams::types::Header::Builder getHeader();
  inline void setHeader( ::gams::types::Header::Reader value);
  inline  ::gams::types::Header::Builder initHeader();
  inline void adoptHeader(::capnp::Orphan< ::gams::types::Header>&& value);
  inline ::capnp::Orphan< ::gams::types::Header> disownHeader();

  inline bool hasAxes();
  inline  ::capnp::List<float>::Builder getAxes();
  inline void setAxes( ::capnp::List<float>::Reader value);
  inline void setAxes(::kj::ArrayPtr<const float> value);
  inline  ::capnp::List<float>::Builder initAxes(unsigned int size);
  inline void adoptAxes(::capnp::Orphan< ::capnp::List<float>>&& value);
  inline ::capnp::Orphan< ::capnp::List<float>> disownAxes();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Joy::Pipeline {
public:
  typedef Joy Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::gams::types::Header::Pipeline getHeader();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline bool Joy::Reader::hasButtons() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool Joy::Builder::hasButtons() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::int32_t>::Reader Joy::Reader::getButtons() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t>>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::int32_t>::Builder Joy::Builder::getButtons() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t>>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void Joy::Builder::setButtons( ::capnp::List< ::int32_t>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline void Joy::Builder::setButtons(::kj::ArrayPtr<const  ::int32_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::int32_t>::Builder Joy::Builder::initButtons(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t>>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void Joy::Builder::adoptButtons(
    ::capnp::Orphan< ::capnp::List< ::int32_t>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t>>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::int32_t>> Joy::Builder::disownButtons() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t>>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool Joy::Reader::hasHeader() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool Joy::Builder::hasHeader() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::gams::types::Header::Reader Joy::Reader::getHeader() const {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::gams::types::Header::Builder Joy::Builder::getHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::gams::types::Header::Pipeline Joy::Pipeline::getHeader() {
  return  ::gams::types::Header::Pipeline(_typeless.getPointerField(1));
}
#endif  // !CAPNP_LITE
inline void Joy::Builder::setHeader( ::gams::types::Header::Reader value) {
  ::capnp::_::PointerHelpers< ::gams::types::Header>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::gams::types::Header::Builder Joy::Builder::initHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void Joy::Builder::adoptHeader(
    ::capnp::Orphan< ::gams::types::Header>&& value) {
  ::capnp::_::PointerHelpers< ::gams::types::Header>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::gams::types::Header> Joy::Builder::disownHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline bool Joy::Reader::hasAxes() const {
  return !_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline bool Joy::Builder::hasAxes() {
  return !_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List<float>::Reader Joy::Reader::getAxes() const {
  return ::capnp::_::PointerHelpers< ::capnp::List<float>>::get(_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline  ::capnp::List<float>::Builder Joy::Builder::getAxes() {
  return ::capnp::_::PointerHelpers< ::capnp::List<float>>::get(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline void Joy::Builder::setAxes( ::capnp::List<float>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List<float>>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline void Joy::Builder::setAxes(::kj::ArrayPtr<const float> value) {
  ::capnp::_::PointerHelpers< ::capnp::List<float>>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List<float>::Builder Joy::Builder::initAxes(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List<float>>::init(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), size);
}
inline void Joy::Builder::adoptAxes(
    ::capnp::Orphan< ::capnp::List<float>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List<float>>::adopt(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List<float>> Joy::Builder::disownAxes() {
  return ::capnp::_::PointerHelpers< ::capnp::List<float>>::disown(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}

}  // namespace
}  // namespace

#endif  // CAPNP_INCLUDED_e701fe984cefc59c_
