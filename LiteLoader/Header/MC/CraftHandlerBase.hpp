// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_CRAFTHANDLERBASE
#include "Extra/CraftHandlerBaseAPI.hpp"
#undef EXTRA_INCLUDE_PART_CRAFTHANDLERBASE
class CraftHandlerBase {
#include "Extra/CraftHandlerBaseAPI.hpp"
public:
    virtual ~CraftHandlerBase();
    virtual int /*enum ItemStackNetResult*/ handleConsumedItem(int /*enum ContainerEnumName*/, unsigned char, class ItemStack const&);
    virtual int /*enum ItemStackNetResult*/ preHandleAction(int /*enum ItemStackRequestActionType*/);
    virtual void endRequestBatch();
    virtual int /*enum ItemStackNetResult*/ _handleCraftAction(class ItemStackRequestActionCraftBase const&) = 0;
    virtual void _postCraftRequest(bool);
    virtual class Recipes const* _getLevelRecipes() const;

protected:
    MCAPI class std::tuple<enum ItemStackNetResult, class Recipe const*> _getRecipeFromNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const&);
    MCAPI class std::shared_ptr<class SimpleSparseContainer> _tryGetSparseContainer(enum ContainerEnumName);
    MCAPI struct ItemStackRequestHandlerSlotInfo _validateRequestSlot(struct ItemStackRequestSlotInfo);
};