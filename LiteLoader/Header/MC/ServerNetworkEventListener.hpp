// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SERVERNETWORKEVENTLISTENER
#include "Extra/ServerNetworkEventListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SERVERNETWORKEVENTLISTENER
class ServerNetworkEventListener {
#include "Extra/ServerNetworkEventListenerAPI.hpp"
public:
    virtual ~ServerNetworkEventListener();
    virtual int /*enum EventResult*/ onChat(struct ChatEvent const&);
};