// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SERVERSCRIPTLIFETIMEMANAGER
#include "Extra/ServerScriptLifetimeManagerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SERVERSCRIPTLIFETIMEMANAGER
class ServerScriptLifetimeManager {
#include "Extra/ServerScriptLifetimeManagerAPI.hpp"
public:
    virtual ~ServerScriptLifetimeManager();
    virtual int /*enum EventResult*/ onServerLevelInitialized(class ServerInstance&, class Level&);
    virtual int /*enum EventResult*/ onServerLevelInitialized(class ServerInstance&, class Level&);
    virtual int /*enum EventResult*/ onServerLevelInitialized(class ServerInstance&, class Level&);
    virtual int /*enum EventResult*/ onServerLevelInitialized(class ServerInstance&, class Level&);
    virtual int /*enum EventResult*/ onServerUpdateStart(class ServerInstance&);
    virtual int /*enum EventResult*/ onServerLevelInitialized(class ServerInstance&, class Level&);
    virtual int /*enum EventResult*/ onServerLevelInitialized(class ServerInstance&, class Level&);
    virtual int /*enum EventResult*/ onServerLevelInitialized(class ServerInstance&, class Level&);
    virtual int /*enum EventResult*/ onServerThreadStarted(class ServerInstance&);
    virtual int /*enum EventResult*/ onServerThreadStopped(class ServerInstance&);
    virtual int /*enum EventResult*/ onServerLevelInitialized(class ServerInstance&, class Level&);
    virtual int /*enum EventResult*/ onServerLevelInitialized(class ServerInstance&, class Level&);

public:
    MCAPI void onMainThreadStartLeaveGame();

private:
    MCAPI void _registerEventHandlers(class Level&) const;
};