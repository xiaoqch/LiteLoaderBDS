#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/scores/ObjectiveSortOrder.h"

class SetDisplayObjectivePacket : public ::Packet {
public:
    std::string        mDisplaySlotName;      // this+0x30
    std::string        mObjectiveName;        // this+0x50
    std::string        mObjectiveDisplayName; // this+0x70
    std::string        mCriteriaName;         // this+0x90
    ObjectiveSortOrder mSortOrder;            // this+0xB0

    // prevent constructor by default
    SetDisplayObjectivePacket& operator=(SetDisplayObjectivePacket const&);
    SetDisplayObjectivePacket(SetDisplayObjectivePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetDisplayObjectivePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SetDisplayObjectivePacket();

    MCAPI SetDisplayObjectivePacket(
        std::string const&   displaySlotName,
        std::string const&   objectiveName,
        std::string const&   dispalyName,
        std::string const&   criteriaName,
        ::ObjectiveSortOrder order
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(
        std::string const&   displaySlotName,
        std::string const&   objectiveName,
        std::string const&   dispalyName,
        std::string const&   criteriaName,
        ::ObjectiveSortOrder order
    );

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
