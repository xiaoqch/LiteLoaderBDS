// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "CraftHandlerBase.hpp"
#define EXTRA_INCLUDE_PART_CRAFTHANDLERLOOM
#include "Extra/CraftHandlerLoomAPI.hpp"
#undef EXTRA_INCLUDE_PART_CRAFTHANDLERLOOM
class CraftHandlerLoom : public CraftHandlerBase {
#include "Extra/CraftHandlerLoomAPI.hpp"
public:
    virtual ~CraftHandlerLoom();
    virtual void unk_vfn_2();
    virtual void endRequestBatch();
    virtual int /*enum ItemStackNetResult*/ _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    virtual void _postCraftRequest(bool);
};