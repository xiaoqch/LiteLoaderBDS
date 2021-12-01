// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BEDROCKBLOCKTYPES
#include "Extra/BedrockBlockTypesAPI.hpp"
#undef EXTRA_INCLUDE_PART_BEDROCKBLOCKTYPES
namespace BedrockBlockTypes {
#include "Extra/BedrockBlockTypesAPI.hpp"

MCAPI extern class WeakPtr<class BlockLegacy> mAir;
MCAPI extern class WeakPtr<class BlockLegacy> mClientRequestPlaceholderBlock;
MCAPI extern class WeakPtr<class BlockLegacy> mUnknown;
MCAPI void registerBlocks();
MCAPI void unregisterBlocks();

} // namespace BedrockBlockTypes