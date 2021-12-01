// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART_ONSCREENTEXTUREANIMATIONPACKET
#include "Extra/OnScreenTextureAnimationPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_ONSCREENTEXTUREANIMATIONPACKET
class OnScreenTextureAnimationPacket : public Packet {
#include "Extra/OnScreenTextureAnimationPacketAPI.hpp"
public:
    virtual ~OnScreenTextureAnimationPacket();
    virtual int /*enum MinecraftPacketIds*/ getId() const;
    virtual std::string getName() const;
    virtual void write(class BinaryStream&) const;
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
};