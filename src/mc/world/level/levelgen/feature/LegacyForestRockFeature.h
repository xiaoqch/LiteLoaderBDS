#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacyForestRockFeature : public ::Feature {
public:
    // prevent constructor by default
    LegacyForestRockFeature& operator=(LegacyForestRockFeature const&);
    LegacyForestRockFeature(LegacyForestRockFeature const&);
    LegacyForestRockFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@LegacyForestRockFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol: ??0LegacyForestRockFeature@@QEAA@AEBVFeatureRegistry@@@Z
    MCAPI explicit LegacyForestRockFeature(class FeatureRegistry const&);

    // NOLINTEND
};
