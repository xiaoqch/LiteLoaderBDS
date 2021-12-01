// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_SPRINGFEATURE
#include "Extra/SpringFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_SPRINGFEATURE
class SpringFeature : public Feature {
#include "Extra/SpringFeatureAPI.hpp"
public:
    virtual ~SpringFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

private:
    MCAPI bool isValidSpringBorderBlock(class BlockLegacy const&, class BlockSource&) const;
};