// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BIOMEDEFINITIONLISTPACKET
#include "Extra/BiomeDefinitionListPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_BIOMEDEFINITIONLISTPACKET
class BiomeDefinitionListPacket {
#include "Extra/BiomeDefinitionListPacketAPI.hpp"
public:
    virtual ~BiomeDefinitionListPacket();
    virtual int /*enum MinecraftPacketIds*/ getId() const;
    virtual std::string getName() const;
    virtual void write(class BinaryStream&) const;
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
};