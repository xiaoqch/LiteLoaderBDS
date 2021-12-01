// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_LOOTITEM
#include "Extra/LootItemAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOOTITEM
class LootItem {
#include "Extra/LootItemAPI.hpp"
public:
    virtual bool _createItem(std::vector<class ItemStack>&, class Random&, class LootTableContext&);
    virtual ~LootItem();

public:
    MCAPI static std::unique_ptr<class LootPoolEntry> deserialize(class Json::Value const&, int, int, std::vector<std::unique_ptr<class LootItemCondition>>&);
};