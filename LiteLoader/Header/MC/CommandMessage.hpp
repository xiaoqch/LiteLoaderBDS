// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_COMMANDMESSAGE
#include "Extra/CommandMessageAPI.hpp"
#undef EXTRA_INCLUDE_PART_COMMANDMESSAGE
class CommandMessage {
#include "Extra/CommandMessageAPI.hpp"

public:
    MCAPI std::string getMessage(class CommandOrigin const&) const;
};