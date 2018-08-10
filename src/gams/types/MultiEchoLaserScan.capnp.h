// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: MultiEchoLaserScan.capnp

#ifndef CAPNP_INCLUDED_8e79fe8eb3890e4b_
#define CAPNP_INCLUDED_8e79fe8eb3890e4b_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include "Header.capnp.h"
#include "LaserEcho.capnp.h"

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(e8c23e8c51eadb11);

}  // namespace schemas
}  // namespace capnp

namespace gams {
namespace types {

struct MultiEchoLaserScan {
  MultiEchoLaserScan() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(e8c23e8c51eadb11, 4, 3)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class MultiEchoLaserScan::Reader {
public:
  typedef MultiEchoLaserScan Reads;

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

  inline float getAngleMin() const;

  inline float getRangeMin() const;

  inline float getScanTime() const;

  inline float getRangeMax() const;

  inline float getAngleIncrement() const;

  inline float getAngleMax() const;

  inline bool hasRanges() const;
  inline  ::capnp::List< ::gams::types::LaserEcho>::Reader getRanges() const;

  inline bool hasHeader() const;
  inline  ::gams::types::Header::Reader getHeader() const;

  inline bool hasIntensities() const;
  inline  ::capnp::List< ::gams::types::LaserEcho>::Reader getIntensities() const;

  inline float getTimeIncrement() const;

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

class MultiEchoLaserScan::Builder {
public:
  typedef MultiEchoLaserScan Builds;

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

  inline float getAngleMin();
  inline void setAngleMin(float value);

  inline float getRangeMin();
  inline void setRangeMin(float value);

  inline float getScanTime();
  inline void setScanTime(float value);

  inline float getRangeMax();
  inline void setRangeMax(float value);

  inline float getAngleIncrement();
  inline void setAngleIncrement(float value);

  inline float getAngleMax();
  inline void setAngleMax(float value);

  inline bool hasRanges();
  inline  ::capnp::List< ::gams::types::LaserEcho>::Builder getRanges();
  inline void setRanges( ::capnp::List< ::gams::types::LaserEcho>::Reader value);
  inline  ::capnp::List< ::gams::types::LaserEcho>::Builder initRanges(unsigned int size);
  inline void adoptRanges(::capnp::Orphan< ::capnp::List< ::gams::types::LaserEcho>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::gams::types::LaserEcho>> disownRanges();

  inline bool hasHeader();
  inline  ::gams::types::Header::Builder getHeader();
  inline void setHeader( ::gams::types::Header::Reader value);
  inline  ::gams::types::Header::Builder initHeader();
  inline void adoptHeader(::capnp::Orphan< ::gams::types::Header>&& value);
  inline ::capnp::Orphan< ::gams::types::Header> disownHeader();

  inline bool hasIntensities();
  inline  ::capnp::List< ::gams::types::LaserEcho>::Builder getIntensities();
  inline void setIntensities( ::capnp::List< ::gams::types::LaserEcho>::Reader value);
  inline  ::capnp::List< ::gams::types::LaserEcho>::Builder initIntensities(unsigned int size);
  inline void adoptIntensities(::capnp::Orphan< ::capnp::List< ::gams::types::LaserEcho>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::gams::types::LaserEcho>> disownIntensities();

  inline float getTimeIncrement();
  inline void setTimeIncrement(float value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class MultiEchoLaserScan::Pipeline {
public:
  typedef MultiEchoLaserScan Pipelines;

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

inline float MultiEchoLaserScan::Reader::getAngleMin() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline float MultiEchoLaserScan::Builder::getAngleMin() {
  return _builder.getDataField<float>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void MultiEchoLaserScan::Builder::setAngleMin(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline float MultiEchoLaserScan::Reader::getRangeMin() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline float MultiEchoLaserScan::Builder::getRangeMin() {
  return _builder.getDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void MultiEchoLaserScan::Builder::setRangeMin(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline float MultiEchoLaserScan::Reader::getScanTime() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}

inline float MultiEchoLaserScan::Builder::getScanTime() {
  return _builder.getDataField<float>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}
inline void MultiEchoLaserScan::Builder::setScanTime(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, value);
}

inline float MultiEchoLaserScan::Reader::getRangeMax() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}

inline float MultiEchoLaserScan::Builder::getRangeMax() {
  return _builder.getDataField<float>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}
inline void MultiEchoLaserScan::Builder::setRangeMax(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS, value);
}

inline float MultiEchoLaserScan::Reader::getAngleIncrement() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}

inline float MultiEchoLaserScan::Builder::getAngleIncrement() {
  return _builder.getDataField<float>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}
inline void MultiEchoLaserScan::Builder::setAngleIncrement(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS, value);
}

inline float MultiEchoLaserScan::Reader::getAngleMax() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS);
}

inline float MultiEchoLaserScan::Builder::getAngleMax() {
  return _builder.getDataField<float>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS);
}
inline void MultiEchoLaserScan::Builder::setAngleMax(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS, value);
}

inline bool MultiEchoLaserScan::Reader::hasRanges() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool MultiEchoLaserScan::Builder::hasRanges() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::gams::types::LaserEcho>::Reader MultiEchoLaserScan::Reader::getRanges() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::gams::types::LaserEcho>>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::gams::types::LaserEcho>::Builder MultiEchoLaserScan::Builder::getRanges() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::gams::types::LaserEcho>>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void MultiEchoLaserScan::Builder::setRanges( ::capnp::List< ::gams::types::LaserEcho>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::gams::types::LaserEcho>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::gams::types::LaserEcho>::Builder MultiEchoLaserScan::Builder::initRanges(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::gams::types::LaserEcho>>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void MultiEchoLaserScan::Builder::adoptRanges(
    ::capnp::Orphan< ::capnp::List< ::gams::types::LaserEcho>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::gams::types::LaserEcho>>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::gams::types::LaserEcho>> MultiEchoLaserScan::Builder::disownRanges() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::gams::types::LaserEcho>>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool MultiEchoLaserScan::Reader::hasHeader() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool MultiEchoLaserScan::Builder::hasHeader() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::gams::types::Header::Reader MultiEchoLaserScan::Reader::getHeader() const {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::gams::types::Header::Builder MultiEchoLaserScan::Builder::getHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::gams::types::Header::Pipeline MultiEchoLaserScan::Pipeline::getHeader() {
  return  ::gams::types::Header::Pipeline(_typeless.getPointerField(1));
}
#endif  // !CAPNP_LITE
inline void MultiEchoLaserScan::Builder::setHeader( ::gams::types::Header::Reader value) {
  ::capnp::_::PointerHelpers< ::gams::types::Header>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::gams::types::Header::Builder MultiEchoLaserScan::Builder::initHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void MultiEchoLaserScan::Builder::adoptHeader(
    ::capnp::Orphan< ::gams::types::Header>&& value) {
  ::capnp::_::PointerHelpers< ::gams::types::Header>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::gams::types::Header> MultiEchoLaserScan::Builder::disownHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline bool MultiEchoLaserScan::Reader::hasIntensities() const {
  return !_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline bool MultiEchoLaserScan::Builder::hasIntensities() {
  return !_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::gams::types::LaserEcho>::Reader MultiEchoLaserScan::Reader::getIntensities() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::gams::types::LaserEcho>>::get(_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::gams::types::LaserEcho>::Builder MultiEchoLaserScan::Builder::getIntensities() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::gams::types::LaserEcho>>::get(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline void MultiEchoLaserScan::Builder::setIntensities( ::capnp::List< ::gams::types::LaserEcho>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::gams::types::LaserEcho>>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::gams::types::LaserEcho>::Builder MultiEchoLaserScan::Builder::initIntensities(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::gams::types::LaserEcho>>::init(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), size);
}
inline void MultiEchoLaserScan::Builder::adoptIntensities(
    ::capnp::Orphan< ::capnp::List< ::gams::types::LaserEcho>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::gams::types::LaserEcho>>::adopt(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::gams::types::LaserEcho>> MultiEchoLaserScan::Builder::disownIntensities() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::gams::types::LaserEcho>>::disown(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}

inline float MultiEchoLaserScan::Reader::getTimeIncrement() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS);
}

inline float MultiEchoLaserScan::Builder::getTimeIncrement() {
  return _builder.getDataField<float>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS);
}
inline void MultiEchoLaserScan::Builder::setTimeIncrement(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS, value);
}

}  // namespace
}  // namespace

#endif  // CAPNP_INCLUDED_8e79fe8eb3890e4b_
