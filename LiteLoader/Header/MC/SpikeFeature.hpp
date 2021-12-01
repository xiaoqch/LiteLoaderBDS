// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_SPIKEFEATURE
#include "Extra/SpikeFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_SPIKEFEATURE
class SpikeFeature : public Feature {
#include "Extra/SpikeFeatureAPI.hpp"
public:
    virtual ~SpikeFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

public:
    MCAPI bool placeManually(class BlockSource&, class BlockPos const&, class Random&, class Actor*);
    MCAPI void postProcessMobsAt(class BlockSource&, class BlockPos const&, class Random&) const;
    MCAPI void setCrystalBeamTarget(class BlockPos const&);
    MCAPI void setCrystalInvulnerable(bool);
};