#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPacketHandlerDispatcher {
public:
    // prevent constructor by default
    IPacketHandlerDispatcher& operator=(IPacketHandlerDispatcher const&);
    IPacketHandlerDispatcher(IPacketHandlerDispatcher const&);
    IPacketHandlerDispatcher();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IPacketHandlerDispatcher@@UEAA@XZ
    virtual ~IPacketHandlerDispatcher() = default;

    // NOLINTEND
};
