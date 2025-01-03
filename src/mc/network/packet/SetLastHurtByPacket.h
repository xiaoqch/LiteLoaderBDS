#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/ActorType.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/actor/ActorType.h"

class SetLastHurtByPacket : public ::Packet {
public:
    ActorType mLastHurtBy; // this+0x30

    // prevent constructor by default
    SetLastHurtByPacket& operator=(SetLastHurtByPacket const&);
    SetLastHurtByPacket(SetLastHurtByPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetLastHurtByPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SetLastHurtByPacket();

    MCAPI explicit SetLastHurtByPacket(::ActorType lastHurtBy);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(::ActorType lastHurtBy);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
