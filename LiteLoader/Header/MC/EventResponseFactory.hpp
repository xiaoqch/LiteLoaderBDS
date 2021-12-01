// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_EVENTRESPONSEFACTORY
#include "Extra/EventResponseFactoryAPI.hpp"
#undef EXTRA_INCLUDE_PART_EVENTRESPONSEFACTORY
class EventResponseFactory {
#include "Extra/EventResponseFactoryAPI.hpp"
public:
    virtual ~EventResponseFactory();

public:
    MCAPI class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> const& getSchema() const;
    MCAPI void initSchema(std::string const&, class SemVersion const&);
};