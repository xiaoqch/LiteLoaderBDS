// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_FOODITEMCOMPONENTLEGACY
#include "Extra/FoodItemComponentLegacyAPI.hpp"
#undef EXTRA_INCLUDE_PART_FOODITEMCOMPONENTLEGACY
class FoodItemComponentLegacy {
#include "Extra/FoodItemComponentLegacyAPI.hpp"
public:
    virtual ~FoodItemComponentLegacy();
    virtual int getNutrition() const;
    virtual float getSaturationModifier() const;
    virtual class Item const* eatItem(class ItemStack&, class Actor&, class Level&);
    virtual bool use(class ItemStack&, class Player&);
    virtual class Item const* useTimeDepleted(class ItemStack&, class Player&, class Level&);

public:
    MCAPI bool init(class Json::Value&, class SemVersion const&);

private:
    MCAPI void _applyEatEffects(class ItemStack const&, class Actor&, class Level&);
    MCAPI void _loadEffects(class Json::Value&);
    MCAPI void _loadRemoveEffects(class Json::Value&);
};