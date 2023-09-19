#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class SpringFeature : public ::Feature {
public:
    // prevent constructor by default
    SpringFeature& operator=(SpringFeature const&);
    SpringFeature(SpringFeature const&);
    SpringFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@SpringFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol: ??0SpringFeature@@QEAA@AEBVBlock@@@Z
    MCAPI explicit SpringFeature(class Block const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?isValidSpringBorderBlock@SpringFeature@@AEBA_NAEBVBlockLegacy@@AEAVBlockSource@@@Z
    MCAPI bool isValidSpringBorderBlock(class BlockLegacy const&, class BlockSource&) const;

    // NOLINTEND
};
