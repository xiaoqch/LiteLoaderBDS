// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_FOODITEMCOMPONENT
#include "Extra/FoodItemComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_FOODITEMCOMPONENT
class FoodItemComponent {
#include "Extra/FoodItemComponentAPI.hpp"

public:
    MCAPI bool canAlwaysEat() const;
    MCAPI class ItemDescriptor getUsingConvertsToItemDescriptor() const;
    MCAPI class FoodItemComponent& operator=(class FoodItemComponent const&);

    MCAPI static void bindType();
    MCAPI static class HashedString const& getIdentifier();
};