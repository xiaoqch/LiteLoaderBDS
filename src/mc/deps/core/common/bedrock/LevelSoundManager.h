#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/events/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class LevelSoundManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    LevelSoundManager& operator=(LevelSoundManager const&);
    LevelSoundManager(LevelSoundManager const&);
    LevelSoundManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LevelSoundManager@@UEAA@XZ
    virtual ~LevelSoundManager();

    // symbol:
    // ?broadcastSoundEvent@LevelSoundManager@@QEAAXAEAVIDimension@@W4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4PEAVPlayer@@@Z
    MCAPI void
    broadcastSoundEvent(class IDimension& dimension, ::Puv::Legacy::LevelSoundEvent type, class Vec3 const& pos, int data, struct ActorDefinitionIdentifier const& identifier, bool isBabyMob, bool isGlobal, class Player*);

    // symbol:
    // ?playPredictiveSynchronizedSound@LevelSoundManager@@QEAAXAEAVIDimension@@W4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@PEAVPlayer@@HAEBUActorDefinitionIdentifier@@_N5@Z
    MCAPI void playPredictiveSynchronizedSound(
        class IDimension&,
        ::Puv::Legacy::LevelSoundEvent,
        class Vec3 const&,
        class Player*,
        int,
        struct ActorDefinitionIdentifier const&,
        bool,
        bool
    );

    // symbol:
    // ?playSound@LevelSoundManager@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
    MCAPI void playSound(std::string const& name, class Vec3 const& pos, float volume, float pitch);

    // symbol:
    // ?playSound@LevelSoundManager@@QEAAXW4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N3@Z
    MCAPI void playSound(
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    // symbol:
    // ?playSynchronizedSound_DEPRECATED@LevelSoundManager@@QEAAXAEAVIDimension@@W4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@PEAVPlayer@@HAEBUActorDefinitionIdentifier@@_N5@Z
    MCAPI void playSynchronizedSound_DEPRECATED(
        class IDimension&,
        ::Puv::Legacy::LevelSoundEvent,
        class Vec3 const&,
        class Player*,
        int,
        struct ActorDefinitionIdentifier const&,
        bool,
        bool
    );

    // symbol:
    // ?registerOnLevelSoundEventCallback@LevelSoundManager@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXW4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N3@Z@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription
    registerOnLevelSoundEventCallback(std::function<void(
                                          ::Puv::Legacy::LevelSoundEvent,
                                          class Vec3 const&,
                                          int,
                                          struct ActorDefinitionIdentifier const&,
                                          bool,
                                          bool
                                      )> callback);

    // symbol:
    // ?setLevelEventCoordinator@LevelSoundManager@@QEAAXAEBV?$not_null@V?$StackRefResult@VLevelEventCoordinator@@@@@gsl@@@Z
    MCAPI void setLevelEventCoordinator(gsl::not_null<class StackRefResult<class LevelEventCoordinator>> const&);

    // NOLINTEND
};
