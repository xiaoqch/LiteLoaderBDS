// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART_ACTORISIMMOBILETEST
#include "Extra/ActorIsImmobileTestAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORISIMMOBILETEST
class ActorIsImmobileTest : public FilterTest {
#include "Extra/ActorIsImmobileTestAPI.hpp"
public:
    virtual ~ActorIsImmobileTest();
    virtual bool evaluate(struct FilterContext const&) const;
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName() const;
};