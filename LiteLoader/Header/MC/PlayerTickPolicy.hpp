// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PLAYERTICKPOLICY
#include "Extra/PlayerTickPolicyAPI.hpp"
#undef EXTRA_INCLUDE_PART_PLAYERTICKPOLICY
namespace PlayerTickPolicy {
#include "Extra/PlayerTickPolicyAPI.hpp"

MCAPI std::unique_ptr<struct IPlayerTickPolicy> createPolicy(struct PlayerTickConfig const&);

} // namespace PlayerTickPolicy