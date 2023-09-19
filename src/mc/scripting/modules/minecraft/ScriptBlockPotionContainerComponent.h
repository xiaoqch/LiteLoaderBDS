#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockLiquidContainerComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class BaseScriptBlockLiquidContainerComponent; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockPotionContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent {
public:
    // prevent constructor by default
    ScriptBlockPotionContainerComponent& operator=(ScriptBlockPotionContainerComponent const&);
    ScriptBlockPotionContainerComponent(ScriptBlockPotionContainerComponent const&);
    ScriptBlockPotionContainerComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptBlockPotionContainerComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptBlockPotionContainerComponent();

    // symbol: ??4ScriptBlockPotionContainerComponent@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptBlockPotionContainerComponent&
    operator=(class ScriptModuleMinecraft::ScriptBlockPotionContainerComponent&&);

    // symbol:
    // ?setPotionType@ScriptBlockPotionContainerComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X@Scripting@@AEBVScriptItemStack@2@@Z
    MCAPI class Scripting::Result<void> setPotionType(class ScriptModuleMinecraft::ScriptItemStack const&);

    // symbol:
    // ?bind@ScriptBlockPotionContainerComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockPotionContainerComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockPotionContainerComponent>
    bind();

    // symbol: ?ComponentId@ScriptBlockPotionContainerComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
