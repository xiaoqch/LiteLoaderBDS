// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_WORLDBUILDERCOMMAND
#include "Extra/WorldBuilderCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_WORLDBUILDERCOMMAND
class WorldBuilderCommand {
#include "Extra/WorldBuilderCommandAPI.hpp"
public:
    virtual ~WorldBuilderCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

public:
    MCAPI static void setup(class CommandRegistry&);
};