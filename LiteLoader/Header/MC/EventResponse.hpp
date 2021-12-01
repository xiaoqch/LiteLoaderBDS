// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_EVENTRESPONSE
#include "Extra/EventResponseAPI.hpp"
#undef EXTRA_INCLUDE_PART_EVENTRESPONSE
class EventResponse {
#include "Extra/EventResponseAPI.hpp"
public:
    virtual ~EventResponse();
    virtual std::string const& getName() const;
    virtual void unk_vfn_2();
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>&, class Factory<class EventResponse> const&) const;
};