// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_COMMON
#include "Extra/CommonAPI.hpp"
#undef EXTRA_INCLUDE_PART_COMMON
namespace Common {
#include "Extra/CommonAPI.hpp"

MCAPI std::string getGameSemVerString();
MCAPI std::string getGameVersionString();
MCAPI std::string getGameVersionStringNet();
MCAPI std::string getServerVersionString();

} // namespace Common