// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART_STRUCTUREBLOCKUPDATEPACKET
#include "Extra/StructureBlockUpdatePacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_STRUCTUREBLOCKUPDATEPACKET
class StructureBlockUpdatePacket : public Packet {
#include "Extra/StructureBlockUpdatePacketAPI.hpp"
public:
    virtual ~StructureBlockUpdatePacket();
    virtual int /*enum MinecraftPacketIds*/ getId() const;
    virtual std::string getName() const;
    virtual void write(class BinaryStream&) const;
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
};