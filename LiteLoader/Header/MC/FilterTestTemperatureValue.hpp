// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART_FILTERTESTTEMPERATUREVALUE
#include "Extra/FilterTestTemperatureValueAPI.hpp"
#undef EXTRA_INCLUDE_PART_FILTERTESTTEMPERATUREVALUE
class FilterTestTemperatureValue : public FilterTest {
#include "Extra/FilterTestTemperatureValueAPI.hpp"
public:
    virtual ~FilterTestTemperatureValue();
    virtual bool evaluate(struct FilterContext const&) const;
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName() const;
};