// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART_ACTORHASNAMETAGTEST
#include "Extra/ActorHasNameTagTestAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORHASNAMETAGTEST
class ActorHasNameTagTest : public FilterTest {
#include "Extra/ActorHasNameTagTestAPI.hpp"
public:
    virtual ~ActorHasNameTagTest();
    virtual bool evaluate(struct FilterContext const&) const;
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName() const;
};