// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_RECIPE
#include "Extra/RecipeAPI.hpp"
#undef EXTRA_INCLUDE_PART_RECIPE
class Recipe {
#include "Extra/RecipeAPI.hpp"
public:
    virtual ~Recipe();
    virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&) const = 0;
    virtual int getCraftingSize() const                                                     = 0;
    virtual class RecipeIngredient const& getIngredient(int, int) const                     = 0;
    virtual std::vector<class ItemInstance> const& getResultItem() const                    = 0;
    virtual bool isShapeless() const                                                        = 0;
    virtual bool matches(class CraftingContainer&, class Level&) const                      = 0;
    virtual int size() const                                                                = 0;
    virtual class mce::UUID const& getId() const;
    virtual class ItemPack const& getItemPack() const;
    virtual bool isShapeless() const;
    virtual bool itemValidForRecipe(class ItemDescriptor const&, class ItemStack const&) const;
    virtual bool itemsMatch(class ItemDescriptor const&, class ItemDescriptor const&) const;
    virtual bool itemsMatch(class ItemDescriptor const&, class ItemDescriptor const&, class CompoundTag const*) const;
    virtual bool itemsMatch(class ItemDescriptor const&, int, int, class CompoundTag const*) const;
    virtual void loadResultList(class BlockPalette const&) const;

public:
    MCAPI int countQuantityOfIngredient(class ItemInstance const&) const;
    MCAPI int getHeight() const;
    MCAPI std::vector<class RecipeIngredient> const& getIngredients() const;
    MCAPI class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const& getNetId() const;
    MCAPI int getPriority() const;
    MCAPI std::string getRecipeId() const;
    MCAPI class HashedString const& getTag() const;
    MCAPI int getWidth() const;
    MCAPI void setNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const&);

    MCAPI static bool isAnyAuxValue(class ItemDescriptor const&);
};