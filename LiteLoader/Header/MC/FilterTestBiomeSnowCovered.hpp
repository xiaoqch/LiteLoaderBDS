// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART_FILTERTESTBIOMESNOWCOVERED
#include "Extra/FilterTestBiomeSnowCoveredAPI.hpp"
#undef EXTRA_INCLUDE_PART_FILTERTESTBIOMESNOWCOVERED
class FilterTestBiomeSnowCovered : public FilterTest {
#include "Extra/FilterTestBiomeSnowCoveredAPI.hpp"
public:
    virtual ~FilterTestBiomeSnowCovered();
    virtual bool evaluate(struct FilterContext const&) const;
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName() const;
};