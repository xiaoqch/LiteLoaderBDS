// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#include "CommandOrigin.hpp"
#define EXTRA_INCLUDE_PART_PLAYERCOMMANDORIGIN
#include "Extra/PlayerCommandOriginAPI.hpp"
#undef EXTRA_INCLUDE_PART_PLAYERCOMMANDORIGIN
class PlayerCommandOrigin : public CommandOrigin {
#include "Extra/PlayerCommandOriginAPI.hpp"
public:
    virtual ~PlayerCommandOrigin();
    virtual std::string const& getRequestId() const;
    virtual std::string getName() const;
    virtual class BlockPos getBlockPosition() const;
    virtual class Vec3 getWorldPosition() const;
    virtual class Level* getLevel() const;
    virtual class Dimension* getDimension() const;
    virtual class Actor* getEntity() const;
    virtual int /*enum CommandPermissionLevel*/ getPermissionsLevel() const;
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    virtual class std::optional<class BlockPos> getCursorHitBlockPos() const;
    virtual class std::optional<class Vec3> getCursorHitPos() const;
    virtual bool canUseAbility(int /*enum AbilitiesIndex*/) const;
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    virtual bool isSelectorExpansionAllowed() const;
    virtual class NetworkIdentifier const& getSourceId() const;
    virtual unsigned char getSourceSubId() const;
    virtual void unk_vfn_20();
    virtual struct CommandOriginIdentity getIdentity() const;
    virtual int /*enum CommandOriginType*/ getOriginType() const;
    virtual void unk_vfn_24();
    virtual void handleCommandOutputCallback(class Json::Value&&) const;
    virtual class CompoundTag serialize() const;
    virtual bool isValid() const;

public:
    MCAPI static std::unique_ptr<class PlayerCommandOrigin> load(class CompoundTag const&, class Level&);
};