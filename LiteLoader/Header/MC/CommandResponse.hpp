// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_COMMANDRESPONSE
#include "Extra/CommandResponseAPI.hpp"
#undef EXTRA_INCLUDE_PART_COMMANDRESPONSE
class CommandResponse {
#include "Extra/CommandResponseAPI.hpp"
public:
    virtual ~CommandResponse();
    virtual std::string const& getName() const;
    virtual void executeAction(class RenderParams&) const;
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>&, class Factory<class EventResponse> const&) const;

public:
    MCAPI static std::string const NameID;

private:
    MCAPI void _addCommand(std::string const&);
    MCAPI void _compileCommands(class Level&) const;
};