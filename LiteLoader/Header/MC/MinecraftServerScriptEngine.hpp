// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "entt.hpp"
#define EXTRA_INCLUDE_PART_MINECRAFTSERVERSCRIPTENGINE
#include "Extra/MinecraftServerScriptEngineAPI.hpp"
#undef EXTRA_INCLUDE_PART_MINECRAFTSERVERSCRIPTENGINE
class MinecraftServerScriptEngine {
#include "Extra/MinecraftServerScriptEngineAPI.hpp"
public:
    virtual void unk_vfn_0();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual int /*enum EventResult*/ onServerLevelInitialized(class ServerInstance&, class Level&);
    virtual int /*enum EventResult*/ onServerUpdateStart(class ServerInstance&);
    virtual int /*enum EventResult*/ onServerUpdateEnd(class ServerInstance&);
    virtual void unk_vfn_7();
    virtual void unk_vfn_8();
    virtual int /*enum EventResult*/ onServerThreadStarted(class ServerInstance&);
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();
    virtual int /*enum EventResult*/ onLeaveGameDone(struct ServerInstanceEvent const&);

private:
    MCAPI void _queueResourcePackScripts(class ResourcePackManager&);
    MCAPI void _registerEventListeners(class Level&, class NetworkHandler&);
    MCAPI void _setupContext(class Minecraft&, class PacketSender&, class entt::basic_registry<enum entt::entity>&);
    MCAPI void _unregisterEventListeners(class Level*, class NetworkHandler&);
};