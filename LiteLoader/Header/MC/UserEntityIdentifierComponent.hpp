// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_USERENTITYIDENTIFIERCOMPONENT
#include "Extra/UserEntityIdentifierComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_USERENTITYIDENTIFIERCOMPONENT
class UserEntityIdentifierComponent {
#include "Extra/UserEntityIdentifierComponentAPI.hpp"

public:
    MCAPI class UserEntityIdentifierComponent& operator=(class UserEntityIdentifierComponent&&);

    MCAPI static class UserEntityIdentifierComponent* tryGetFromEntity(class EntityContext&);
};