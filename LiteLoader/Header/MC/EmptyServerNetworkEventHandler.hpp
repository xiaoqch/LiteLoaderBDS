// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_EMPTYSERVERNETWORKEVENTHANDLER
#include "Extra/EmptyServerNetworkEventHandlerAPI.hpp"
#undef EXTRA_INCLUDE_PART_EMPTYSERVERNETWORKEVENTHANDLER
class EmptyServerNetworkEventHandler {
#include "Extra/EmptyServerNetworkEventHandlerAPI.hpp"
public:
    virtual ~EmptyServerNetworkEventHandler();
    virtual struct GameplayHandlerResult<int /*enum CoordinatorResult*/> handleChat(struct ChatEvent&);
};