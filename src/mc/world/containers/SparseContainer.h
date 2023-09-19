#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"

class SparseContainer {
public:
    // prevent constructor by default
    SparseContainer& operator=(SparseContainer const&);
    SparseContainer(SparseContainer const&);
    SparseContainer();

public:
    // NOLINTBEGIN
    // symbol:
    // ?addItemNetworkChangedCallback@SparseContainer@@QEAAXW4ContainerEnumName@@V?$function@$$A6AXHAEBVItemStack@@0@Z@std@@@Z
    MCAPI void
        addItemNetworkChangedCallback(::ContainerEnumName, std::function<void(int, class ItemStack const&, class ItemStack const&)>);

    // symbol: ?isUsingLegacyScreenTransactions@SparseContainer@@QEBA_NXZ
    MCAPI bool isUsingLegacyScreenTransactions() const;

    // symbol: ?removeItemNetworkChangedCallback@SparseContainer@@QEAAXW4ContainerEnumName@@@Z
    MCAPI void removeItemNetworkChangedCallback(::ContainerEnumName);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_onItemNetworkChanged@SparseContainer@@IEAAXHAEBVItemStack@@0@Z
    MCAPI void _onItemNetworkChanged(int, class ItemStack const&, class ItemStack const&);

    // symbol: ?_setBackingContainerSlot@SparseContainer@@IEAAXHAEBVItemStack@@@Z
    MCAPI void _setBackingContainerSlot(int, class ItemStack const&);

    // NOLINTEND
};
