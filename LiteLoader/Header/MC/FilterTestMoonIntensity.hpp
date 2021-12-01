// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART_FILTERTESTMOONINTENSITY
#include "Extra/FilterTestMoonIntensityAPI.hpp"
#undef EXTRA_INCLUDE_PART_FILTERTESTMOONINTENSITY
class FilterTestMoonIntensity : public FilterTest {
#include "Extra/FilterTestMoonIntensityAPI.hpp"
public:
    virtual ~FilterTestMoonIntensity();
    virtual bool evaluate(struct FilterContext const&) const;
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName() const;
};