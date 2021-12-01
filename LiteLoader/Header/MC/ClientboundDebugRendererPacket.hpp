// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART_CLIENTBOUNDDEBUGRENDERERPACKET
#include "Extra/ClientboundDebugRendererPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_CLIENTBOUNDDEBUGRENDERERPACKET
class ClientboundDebugRendererPacket : public Packet {
#include "Extra/ClientboundDebugRendererPacketAPI.hpp"
public:
    virtual ~ClientboundDebugRendererPacket();
    virtual int /*enum MinecraftPacketIds*/ getId() const;
    virtual std::string getName() const;
    virtual void write(class BinaryStream&) const;
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
};