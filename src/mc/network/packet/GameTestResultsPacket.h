#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class GameTestResultsPacket : public ::Packet {
public:
    std::string mTestName;  // this+0x30
    std::string mError;     // this+0x50
    bool        mSucceeded; // this+0x70

    // prevent constructor by default
    GameTestResultsPacket& operator=(GameTestResultsPacket const&);
    GameTestResultsPacket(GameTestResultsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameTestResultsPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI GameTestResultsPacket();

    MCAPI GameTestResultsPacket(std::string const& testName, std::string const& error, bool succeeded);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& testName, std::string const& error, bool succeeded);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
