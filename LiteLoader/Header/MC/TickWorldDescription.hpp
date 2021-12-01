// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_TICKWORLDDESCRIPTION
#include "Extra/TickWorldDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_TICKWORLDDESCRIPTION
class TickWorldDescription {
#include "Extra/TickWorldDescriptionAPI.hpp"
public:
    virtual char const* getJsonName() const;
    virtual ~TickWorldDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value&) const;
};