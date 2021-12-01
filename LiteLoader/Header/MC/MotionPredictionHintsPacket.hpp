// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART_MOTIONPREDICTIONHINTSPACKET
#include "Extra/MotionPredictionHintsPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOTIONPREDICTIONHINTSPACKET
class MotionPredictionHintsPacket : public Packet {
#include "Extra/MotionPredictionHintsPacketAPI.hpp"
public:
    virtual ~MotionPredictionHintsPacket();
    virtual int /*enum MinecraftPacketIds*/ getId() const;
    virtual std::string getName() const;
    virtual void write(class BinaryStream&) const;
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
};