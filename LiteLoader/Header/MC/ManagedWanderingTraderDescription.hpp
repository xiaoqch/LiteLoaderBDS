// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#include "Description.hpp"
#define EXTRA_INCLUDE_PART_MANAGEDWANDERINGTRADERDESCRIPTION
#include "Extra/ManagedWanderingTraderDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_MANAGEDWANDERINGTRADERDESCRIPTION
class ManagedWanderingTraderDescription : public Description {
#include "Extra/ManagedWanderingTraderDescriptionAPI.hpp"
public:
    virtual char const* getJsonName() const;
    virtual ~ManagedWanderingTraderDescription();
    virtual void serializeData(class Json::Value&) const;
};