// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_CLEARSPAWNPOINTCOMMAND
#include "Extra/ClearSpawnPointCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_CLEARSPAWNPOINTCOMMAND
class ClearSpawnPointCommand {
#include "Extra/ClearSpawnPointCommandAPI.hpp"
public:
    virtual ~ClearSpawnPointCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

public:
    MCAPI static void setup(class CommandRegistry&);
};