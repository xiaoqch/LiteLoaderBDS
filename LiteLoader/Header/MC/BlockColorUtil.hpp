// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BLOCKCOLORUTIL
#include "Extra/BlockColorUtilAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLOCKCOLORUTIL
namespace BlockColorUtil {
#include "Extra/BlockColorUtilAPI.hpp"

MCAPI extern class std::array<enum BlockColor, 16> RAINBOW;
MCAPI enum BlockColor fromInt(int);
MCAPI enum BlockColor fromItemColor(enum ItemColor);
MCAPI class mce::Color getColor(enum BlockColor);
MCAPI std::string const& getName(enum BlockColor);
MCAPI std::string const& getNameMixedCase(enum BlockColor);
MCAPI std::string const& getNameSnakeCase(enum BlockColor);
MCAPI int getRGBColor(enum BlockColor);

} // namespace BlockColorUtil