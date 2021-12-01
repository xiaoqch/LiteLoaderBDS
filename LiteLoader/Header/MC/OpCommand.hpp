// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_OPCOMMAND
#include "Extra/OpCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_OPCOMMAND
class OpCommand {
#include "Extra/OpCommandAPI.hpp"
public:
    virtual ~OpCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

public:
    MCAPI static void setup(class CommandRegistry&);
};