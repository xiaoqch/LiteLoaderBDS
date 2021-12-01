// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCREENHANDLERBASE
#include "Extra/ScreenHandlerBaseAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCREENHANDLERBASE
class ScreenHandlerBase {
#include "Extra/ScreenHandlerBaseAPI.hpp"
public:
    virtual ~ScreenHandlerBase();
    virtual int /*enum ItemStackNetResult*/ handleAction(class ItemStackRequestAction const&);
    virtual int /*enum ItemStackNetResult*/ endRequest();

protected:
    MCAPI class std::shared_ptr<class SimpleSparseContainer> _tryGetSparseContainer(enum ContainerEnumName);
};