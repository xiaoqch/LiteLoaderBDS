// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "RakWebSocket.hpp"
#define EXTRA_INCLUDE_PART_RAKWEBSOCKETCLIENT
#include "Extra/RakWebSocketClientAPI.hpp"
#undef EXTRA_INCLUDE_PART_RAKWEBSOCKETCLIENT
class RakWebSocketClient : public RakWebSocket {
#include "Extra/RakWebSocketClientAPI.hpp"
public:
    virtual ~RakWebSocketClient();
    virtual void _updateState();
    virtual unsigned int _genMaskingKey() const;
};