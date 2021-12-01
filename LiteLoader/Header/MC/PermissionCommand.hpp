// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PERMISSIONCOMMAND
#include "Extra/PermissionCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_PERMISSIONCOMMAND
class PermissionCommand {
#include "Extra/PermissionCommandAPI.hpp"
public:
    virtual ~PermissionCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

public:
    MCAPI static void setup(class CommandRegistry&, class PermissionsFile*);

private:
    MCAPI void list(class CommandOrigin const&, class CommandOutput&) const;
    MCAPI void reload(class CommandOrigin const&, class CommandOutput&) const;
    MCAPI void set(class CommandOrigin const&, class CommandOutput&) const;
};