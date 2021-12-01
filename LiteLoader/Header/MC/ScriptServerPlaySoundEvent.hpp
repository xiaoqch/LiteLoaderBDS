// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTSERVERPLAYSOUNDEVENT
#include "Extra/ScriptServerPlaySoundEventAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSERVERPLAYSOUNDEVENT
class ScriptServerPlaySoundEvent {
#include "Extra/ScriptServerPlaySoundEventAPI.hpp"
public:
    virtual ~ScriptServerPlaySoundEvent();
    virtual bool receivedEvent(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, std::string const&, class ScriptApi::ScriptObjectHandle const&);
    virtual bool getEventData(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, std::string const&, class ScriptApi::ScriptObjectHandle&);

private:
    MCAPI static class HashedString const mHash;
};