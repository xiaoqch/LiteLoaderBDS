// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_FILTERTESTBIOME
#include "Extra/FilterTestBiomeAPI.hpp"
#undef EXTRA_INCLUDE_PART_FILTERTESTBIOME
class FilterTestBiome : public FilterTest {
#include "Extra/FilterTestBiomeAPI.hpp"
public:
    virtual ~FilterTestBiome();
    virtual bool evaluate(struct FilterContext const&) const;
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName() const;
    virtual class Json::Value _serializeValue() const;
};