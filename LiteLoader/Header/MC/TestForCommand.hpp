// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_TESTFORCOMMAND
#include "Extra/TestForCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_TESTFORCOMMAND
class TestForCommand {
#include "Extra/TestForCommandAPI.hpp"
public:
    virtual ~TestForCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

public:
    MCAPI static void setup(class CommandRegistry&);
};