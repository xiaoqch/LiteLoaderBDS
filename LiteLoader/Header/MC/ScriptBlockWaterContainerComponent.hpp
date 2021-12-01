// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#include "BaseScriptBlockLiquidContainerComponent.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTBLOCKWATERCONTAINERCOMPONENT
#include "Extra/ScriptBlockWaterContainerComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTBLOCKWATERCONTAINERCOMPONENT
class ScriptBlockWaterContainerComponent : public BaseScriptBlockLiquidContainerComponent {
#include "Extra/ScriptBlockWaterContainerComponentAPI.hpp"
public:
    virtual ~ScriptBlockWaterContainerComponent();

public:
    MCAPI class Scripting::Result<void> addDye(class ScriptItemType const&);
    MCAPI class Scripting::Result<class ScriptColor> getCustomColor();
    MCAPI class ScriptBlockWaterContainerComponent& operator=(class ScriptBlockWaterContainerComponent&&);
    MCAPI class Scripting::Result<void> setCustomColor(class ScriptColor const&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptBlockWaterContainerComponent> bind(struct Scripting::Version);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptBlockWaterContainerComponent> tryCreate(class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&);
};