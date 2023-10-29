#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockPartVisibilityDescription {
public:
    // prevent constructor by default
    BlockPartVisibilityDescription& operator=(BlockPartVisibilityDescription const&);
    BlockPartVisibilityDescription(BlockPartVisibilityDescription const&);
    BlockPartVisibilityDescription();

public:
    // NOLINTBEGIN
    // symbol: ?NameID@BlockPartVisibilityDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
