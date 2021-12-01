// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "TreeHelper.hpp"
#define EXTRA_INCLUDE_PART_SIMPLETREECANOPY
#include "Extra/SimpleTreeCanopyAPI.hpp"
#undef EXTRA_INCLUDE_PART_SIMPLETREECANOPY
class SimpleTreeCanopy {
#include "Extra/SimpleTreeCanopyAPI.hpp"
public:
    virtual ~SimpleTreeCanopy();
    virtual class std::optional<class BlockPos> placeCanopy(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&, struct TreeHelper::TreeParams const&, std::vector<class BlockPos> const&) const;
};