// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BOSSCOMPONENT
#include "Extra/BossComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_BOSSCOMPONENT
class BossComponent {
#include "Extra/BossComponentAPI.hpp"

public:
    MCAPI void addPlayerToParty(class mce::UUID, int);
    MCAPI void broadcastBossEvent(class Actor&, enum BossEventUpdateType);
    MCAPI enum BossBarColor getColor() const;
    MCAPI bool getCreateWorldFog() const;
    MCAPI float getHealthPercent() const;
    MCAPI int getLastHealth() const;
    MCAPI class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> getLastPlayerUpdate() const;
    MCAPI std::string getName() const;
    MCAPI enum BossBarOverlay getOverlay() const;
    MCAPI class std::unordered_map<class mce::UUID, int, struct std::hash<class mce::UUID>, struct std::equal_to<class mce::UUID>, class std::allocator<struct std::pair<class mce::UUID const, int>>> const& getPlayerParty() const;
    MCAPI bool getShouldDarkenSky() const;
    MCAPI void handleRegisterPlayers(class Actor&);
    MCAPI class BossComponent& operator=(class BossComponent&&);
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    MCAPI void registerPlayer(class Actor&, class Player*);
    MCAPI void sendDeathTelemetry(class Actor&);
    MCAPI void setHealthBarVisible(class Actor&, bool);
    MCAPI void setHealthPercent(class Actor&, float);
    MCAPI void setLastHealth(int);
    MCAPI void setLastPlayerUpdate(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    MCAPI void setName(class Actor&, std::string const&);
    MCAPI bool tryRemoveBoss(class Actor&, class Player&);
    MCAPI void unRegisterPlayer(class Actor&, class Player*);

private:
    MCAPI void _sendBossEvent(class Actor&, enum BossEventUpdateType, class Player*);
};