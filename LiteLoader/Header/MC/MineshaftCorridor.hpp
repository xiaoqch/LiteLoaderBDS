// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "MineshaftPiece.hpp"
#define EXTRA_INCLUDE_PART_MINESHAFTCORRIDOR
#include "Extra/MineshaftCorridorAPI.hpp"
#undef EXTRA_INCLUDE_PART_MINESHAFTCORRIDOR
class MineshaftCorridor : public MineshaftPiece {
#include "Extra/MineshaftCorridorAPI.hpp"
public:
    virtual ~MineshaftCorridor();
    virtual void unk_vfn_2();
    virtual int /*enum StructurePieceType*/ getType() const;
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    virtual int getWorldZ(int, int);

public:
    MCAPI void _placeCobWeb(class BlockSource&, class BoundingBox const&, class Random&, float, int, int, int);
    MCAPI void _placeSupport(class BlockSource&, class BoundingBox const&, int, int, int, int, int, class Random&);

private:
    MCAPI void _fillPillarDownOrChainUp(class BlockSource&, int, int, int, class BoundingBox const&);
    MCAPI void _placeDoubleLowerOrUpperSupport(class BlockSource&, class BoundingBox const&, int, int, int);
};