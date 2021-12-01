// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTSERVERPLAYERPLACEDBLOCKEVENT
#include "Extra/ScriptServerPlayerPlacedBlockEventAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSERVERPLAYERPLACEDBLOCKEVENT
class ScriptServerPlayerPlacedBlockEvent {
#include "Extra/ScriptServerPlayerPlacedBlockEventAPI.hpp"
public:
    virtual ~ScriptServerPlayerPlacedBlockEvent();
    virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&) const;

public:
    MCAPI void setActorId(struct ActorUniqueID const&);
    MCAPI void setBlockPos(class BlockPos const&);

private:
    MCAPI static class HashedString const mHash;
};