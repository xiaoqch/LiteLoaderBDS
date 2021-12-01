// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_ACTORHASDAMAGETEST
#include "Extra/ActorHasDamageTestAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORHASDAMAGETEST
class ActorHasDamageTest : public FilterTest {
#include "Extra/ActorHasDamageTestAPI.hpp"
public:
    virtual ~ActorHasDamageTest();
    virtual bool evaluate(struct FilterContext const&) const;
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName() const;
    virtual class Json::Value _serializeValue() const;
};