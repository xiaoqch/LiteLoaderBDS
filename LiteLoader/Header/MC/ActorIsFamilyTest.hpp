// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART_ACTORISFAMILYTEST
#include "Extra/ActorIsFamilyTestAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORISFAMILYTEST
class ActorIsFamilyTest : public FilterTest {
#include "Extra/ActorIsFamilyTestAPI.hpp"
public:
    virtual ~ActorIsFamilyTest();
    virtual bool evaluate(struct FilterContext const&) const;
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName() const;
};