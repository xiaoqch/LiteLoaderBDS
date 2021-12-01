// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART_ENTITYSERVERPACKET
#include "Extra/EntityServerPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENTITYSERVERPACKET
class EntityServerPacket : public Packet {
#include "Extra/EntityServerPacketAPI.hpp"
public:
    virtual ~EntityServerPacket();
    virtual int /*enum MinecraftPacketIds*/ getId() const = 0;
    virtual std::string getName() const                   = 0;
    virtual void write(class BinaryStream&) const;
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
};