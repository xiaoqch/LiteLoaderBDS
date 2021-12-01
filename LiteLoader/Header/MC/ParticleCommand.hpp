// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PARTICLECOMMAND
#include "Extra/ParticleCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_PARTICLECOMMAND
class ParticleCommand {
#include "Extra/ParticleCommandAPI.hpp"
public:
    virtual ~ParticleCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

public:
    MCAPI static void setup(class CommandRegistry&);
};