// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "OceanMonumentPiece.hpp"
#define EXTRA_INCLUDE_PART_OCEANMONUMENTDOUBLEXYROOM
#include "Extra/OceanMonumentDoubleXYRoomAPI.hpp"
#undef EXTRA_INCLUDE_PART_OCEANMONUMENTDOUBLEXYROOM
class OceanMonumentDoubleXYRoom : public OceanMonumentPiece {
#include "Extra/OceanMonumentDoubleXYRoomAPI.hpp"
public:
    virtual ~OceanMonumentDoubleXYRoom();
    virtual void unk_vfn_2();
    virtual int /*enum StructurePieceType*/ getType() const;
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
};