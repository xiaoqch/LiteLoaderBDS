// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART_ACTORISSLEEPINGTEST
#include "Extra/ActorIsSleepingTestAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORISSLEEPINGTEST
class ActorIsSleepingTest : public FilterTest {
#include "Extra/ActorIsSleepingTestAPI.hpp"
public:
    virtual ~ActorIsSleepingTest();
    virtual bool evaluate(struct FilterContext const&) const;
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName() const;
};