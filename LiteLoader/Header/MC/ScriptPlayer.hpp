// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#include "ScriptObject.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTPLAYER
#include "Extra/ScriptPlayerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTPLAYER
class ScriptPlayer : public ScriptObject {
#include "Extra/ScriptPlayerAPI.hpp"
public:
    virtual ~ScriptPlayer();
    virtual class Scripting::Result<std::string> getNameTag() const;
    virtual class Scripting::Result<void> setNameTag(std::string const&) const;
    virtual class Scripting::Result<bool> getSneaking() const;
    virtual class Scripting::Result<void> setSneaking(bool) const;

public:
    MCAPI class Scripting::Result<std::string> getName() const;

    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptPlayer> getHandle(class WeakEntityRef, class Scripting::WeakLifetimeScope const&);
};