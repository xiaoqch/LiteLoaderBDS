// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART_ACTORINNETHERTEST
#include "Extra/ActorInNetherTestAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORINNETHERTEST
class ActorInNetherTest : public FilterTest {
#include "Extra/ActorInNetherTestAPI.hpp"
public:
    virtual ~ActorInNetherTest();
    virtual bool evaluate(struct FilterContext const&) const;
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName() const;
};