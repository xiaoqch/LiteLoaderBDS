// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_TRADERESUPPLYCOMPONENT
#include "Extra/TradeResupplyComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_TRADERESUPPLYCOMPONENT
class TradeResupplyComponent {
#include "Extra/TradeResupplyComponentAPI.hpp"

public:
    MCAPI void addAdditionalSaveData(class CompoundTag&);
    MCAPI void initFromDefinition(class Actor&);
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    MCAPI void reloadComponent(class Actor&);
};