// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_PREFERREDPATHDESCRIPTION
#include "Extra/PreferredPathDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_PREFERREDPATHDESCRIPTION
struct PreferredPathDescription {
#include "Extra/PreferredPathDescriptionAPI.hpp"
public:
    virtual char const* getJsonName() const;
    virtual ~PreferredPathDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value&) const;
};