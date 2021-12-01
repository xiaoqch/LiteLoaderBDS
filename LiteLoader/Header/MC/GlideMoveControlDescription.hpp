// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_GLIDEMOVECONTROLDESCRIPTION
#include "Extra/GlideMoveControlDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_GLIDEMOVECONTROLDESCRIPTION
class GlideMoveControlDescription {
#include "Extra/GlideMoveControlDescriptionAPI.hpp"
public:
    virtual char const* getJsonName() const;
    virtual ~GlideMoveControlDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value&) const;
};