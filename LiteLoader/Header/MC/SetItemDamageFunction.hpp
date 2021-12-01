// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#include "LootItemFunction.hpp"
#define EXTRA_INCLUDE_PART_SETITEMDAMAGEFUNCTION
#include "Extra/SetItemDamageFunctionAPI.hpp"
#undef EXTRA_INCLUDE_PART_SETITEMDAMAGEFUNCTION
class SetItemDamageFunction : public LootItemFunction {
#include "Extra/SetItemDamageFunctionAPI.hpp"
public:
    virtual ~SetItemDamageFunction();
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);

public:
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>>&);
};