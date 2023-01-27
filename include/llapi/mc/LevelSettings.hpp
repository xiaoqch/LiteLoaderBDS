/**
 * @file  LevelSettings.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Social.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelSettings.
 *
 */
class LevelSettings {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSETTINGS
public:
    class LevelSettings& operator=(class LevelSettings const &) = delete;
#endif

public:
    /**
     * @symbol ??0LevelSettings@@QEAA@AEBVLevelData@@V?$AutomaticID@VDimension@@H@@@Z
     * @hash   976388601
     */
    MCAPI LevelSettings(class LevelData const &, class AutomaticID<class Dimension, int>);
    /**
     * @symbol ??0LevelSettings@@QEAA@XZ
     * @hash   -850139821
     */
    MCAPI LevelSettings();
    /**
     * @symbol ??0LevelSettings@@QEAA@$$QEAV0@@Z
     * @hash   -419992777
     */
    MCAPI LevelSettings(class LevelSettings &&);
    /**
     * @symbol ??0LevelSettings@@QEAA@AEBV0@@Z
     * @hash   -1308174415
     */
    MCAPI LevelSettings(class LevelSettings const &);
    /**
     * @symbol ?achievementsWillBeDisabledOnLoad@LevelSettings@@QEBA_NXZ
     * @hash   -1381908894
     */
    MCAPI bool achievementsWillBeDisabledOnLoad() const;
    /**
     * @symbol ?educationFeaturesEnabled@LevelSettings@@QEBA_NXZ
     * @hash   -578752510
     */
    MCAPI bool educationFeaturesEnabled() const;
    /**
     * @symbol ?educationProductID@LevelSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -432302048
     */
    MCAPI std::string const & educationProductID() const;
    /**
     * @symbol ?forceGameType@LevelSettings@@QEBA_NXZ
     * @hash   1769294192
     */
    MCAPI bool forceGameType() const;
    /**
     * @symbol ?getBaseGameVersion@LevelSettings@@QEBAAEBVBaseGameVersion@@XZ
     * @hash   574303380
     */
    MCAPI class BaseGameVersion const & getBaseGameVersion() const;
    /**
     * @symbol ?getBiomeOverride@LevelSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -405344088
     */
    MCAPI std::string const & getBiomeOverride() const;
    /**
     * @symbol ?getChatRestrictionLevel@LevelSettings@@QEBA?AW4ChatRestrictionLevel@@XZ
     * @hash   1434176632
     */
    MCAPI enum class ChatRestrictionLevel getChatRestrictionLevel() const;
    /**
     * @symbol ?getCustomSkinsDisabled@LevelSettings@@QEBA_NXZ
     * @hash   -841742190
     */
    MCAPI bool getCustomSkinsDisabled() const;
    /**
     * @symbol ?getDefaultPermissions@LevelSettings@@QEBAAEBVPermissionsHandler@@XZ
     * @hash   -404261744
     */
    MCAPI class PermissionsHandler const & getDefaultPermissions() const;
    /**
     * @symbol ?getDefaultSpawn@LevelSettings@@QEBAAEBVBlockPos@@XZ
     * @hash   57918942
     */
    MCAPI class BlockPos const & getDefaultSpawn() const;
    /**
     * @symbol ?getDisablePlayerInteractions@LevelSettings@@QEBA_NXZ
     * @hash   -1733521518
     */
    MCAPI bool getDisablePlayerInteractions() const;
    /**
     * @symbol ?getEduSharedUriResource@LevelSettings@@QEBAAEBUEduSharedUriResource@@XZ
     * @hash   588513596
     */
    MCAPI struct EduSharedUriResource const & getEduSharedUriResource() const;
    /**
     * @symbol ?getEducationEditionOffer@LevelSettings@@QEBA?AW4EducationEditionOffer@@XZ
     * @hash   1556829804
     */
    MCAPI enum class EducationEditionOffer getEducationEditionOffer() const;
    /**
     * @symbol ?getEducationLevelSettings@LevelSettings@@QEBAAEBV?$optional@UEducationLevelSettings@@@std@@XZ
     * @hash   -1811982813
     */
    MCAPI class std::optional<struct EducationLevelSettings> const & getEducationLevelSettings() const;
    /**
     * @symbol ?getExperiments@LevelSettings@@QEBAAEBVExperiments@@XZ
     * @hash   1446506548
     */
    MCAPI class Experiments const & getExperiments() const;
    /**
     * @symbol ?getGameDifficulty@LevelSettings@@QEBA?AW4Difficulty@@XZ
     * @hash   -1071391998
     */
    MCAPI enum class Difficulty getGameDifficulty() const;
    /**
     * @symbol ?getGameRules@LevelSettings@@QEBAAEBVGameRules@@XZ
     * @hash   -1113811756
     */
    MCAPI class GameRules const & getGameRules() const;
    /**
     * @symbol ?getGameType@LevelSettings@@QEBA?AW4GameType@@XZ
     * @hash   -1799454272
     */
    MCAPI enum class GameType getGameType() const;
    /**
     * @symbol ?getGenerator@LevelSettings@@QEBA?AW4GeneratorType@@XZ
     * @hash   -605101480
     */
    MCAPI enum class GeneratorType getGenerator() const;
    /**
     * @symbol ?getImmutableWorld@LevelSettings@@QEBA_NXZ
     * @hash   -1525614160
     */
    MCAPI bool getImmutableWorld() const;
    /**
     * @symbol ?getLanBroadcastIntent@LevelSettings@@QEBA_NXZ
     * @hash   1797055568
     */
    MCAPI bool getLanBroadcastIntent() const;
    /**
     * @symbol ?getLightningLevel@LevelSettings@@QEBAMXZ
     * @hash   1676009766
     */
    MCAPI float getLightningLevel() const;
    /**
     * @symbol ?getLimitedWorldDepth@LevelSettings@@QEBAHXZ
     * @hash   -1801979008
     */
    MCAPI int getLimitedWorldDepth() const;
    /**
     * @symbol ?getLimitedWorldWidth@LevelSettings@@QEBAHXZ
     * @hash   -557154618
     */
    MCAPI int getLimitedWorldWidth() const;
    /**
     * @symbol ?getMultiplayerGameIntent@LevelSettings@@QEBA_NXZ
     * @hash   799925010
     */
    MCAPI bool getMultiplayerGameIntent() const;
    /**
     * @symbol ?getNetherType@LevelSettings@@QEBA?AW4NetherWorldType@@XZ
     * @hash   -1517114238
     */
    MCAPI enum class NetherWorldType getNetherType() const;
    /**
     * @symbol ?getOnlySpawnV1Villagers@LevelSettings@@QEBA_NXZ
     * @hash   -1142739424
     */
    MCAPI bool getOnlySpawnV1Villagers() const;
    /**
     * @symbol ?getPersonaDisabled@LevelSettings@@QEBA_NXZ
     * @hash   -1545999374
     */
    MCAPI bool getPersonaDisabled() const;
    /**
     * @symbol ?getPlatformBroadcastIntent@LevelSettings@@QEBA?AW4GamePublishSetting@Social@@XZ
     * @hash   -1131453016
     */
    MCAPI enum class Social::GamePublishSetting getPlatformBroadcastIntent() const;
    /**
     * @symbol ?getRainLevel@LevelSettings@@QEBAMXZ
     * @hash   630736072
     */
    MCAPI float getRainLevel() const;
    /**
     * @symbol ?getSeed@LevelSettings@@QEBA?AVLevelSeed64@@XZ
     * @hash   826343420
     */
    MCAPI class LevelSeed64 getSeed() const;
    /**
     * @symbol ?getServerChunkTickRange@LevelSettings@@QEBAIXZ
     * @hash   -1653970102
     */
    MCAPI unsigned int getServerChunkTickRange() const;
    /**
     * @symbol ?getSpawnSettings@LevelSettings@@QEBA?AUSpawnSettings@@XZ
     * @hash   902671338
     */
    MCAPI struct SpawnSettings getSpawnSettings() const;
    /**
     * @symbol ?getTime@LevelSettings@@QEBAHXZ
     * @hash   -1801929570
     */
    MCAPI int getTime() const;
    /**
     * @symbol ?getWorldVersion@LevelSettings@@QEBA?AW4WorldVersion@@XZ
     * @hash   475327516
     */
    MCAPI enum class WorldVersion getWorldVersion() const;
    /**
     * @symbol ?getXBLBroadcastIntent@LevelSettings@@QEBA?AW4GamePublishSetting@Social@@XZ
     * @hash   -919378956
     */
    MCAPI enum class Social::GamePublishSetting getXBLBroadcastIntent() const;
    /**
     * @symbol ?hasAchievementsDisabled@LevelSettings@@QEBA_NXZ
     * @hash   668986272
     */
    MCAPI bool hasAchievementsDisabled() const;
    /**
     * @symbol ?hasBonusChestEnabled@LevelSettings@@QEBA_NXZ
     * @hash   195727906
     */
    MCAPI bool hasBonusChestEnabled() const;
    /**
     * @symbol ?hasCommandsEnabled@LevelSettings@@QEBA_NXZ
     * @hash   946839218
     */
    MCAPI bool hasCommandsEnabled() const;
    /**
     * @symbol ?hasConfirmedPlatformLockedContent@LevelSettings@@QEBA_NXZ
     * @hash   1567680224
     */
    MCAPI bool hasConfirmedPlatformLockedContent() const;
    /**
     * @symbol ?hasLockedBehaviorPack@LevelSettings@@QEBA_NXZ
     * @hash   1433314416
     */
    MCAPI bool hasLockedBehaviorPack() const;
    /**
     * @symbol ?hasLockedResourcePack@LevelSettings@@QEBA_NXZ
     * @hash   -1386017280
     */
    MCAPI bool hasLockedResourcePack() const;
    /**
     * @symbol ?hasStartWithMapEnabled@LevelSettings@@QEBA_NXZ
     * @hash   -1254061326
     */
    MCAPI bool hasStartWithMapEnabled() const;
    /**
     * @symbol ?isEditorWorld@LevelSettings@@QEBA_NXZ
     * @hash   -324769824
     */
    MCAPI bool isEditorWorld() const;
    /**
     * @symbol ?isFromLockedTemplate@LevelSettings@@QEBA_NXZ
     * @hash   1819852898
     */
    MCAPI bool isFromLockedTemplate() const;
    /**
     * @symbol ?isFromWorldTemplate@LevelSettings@@QEBA_NXZ
     * @hash   1630940176
     */
    MCAPI bool isFromWorldTemplate() const;
    /**
     * @symbol ?isTexturepacksRequired@LevelSettings@@QEBA_NXZ
     * @hash   -40726974
     */
    MCAPI bool isTexturepacksRequired() const;
    /**
     * @symbol ?isWorldTemplateOptionLocked@LevelSettings@@QEBA_NXZ
     * @hash   525034704
     */
    MCAPI bool isWorldTemplateOptionLocked() const;
    /**
     * @symbol ??4LevelSettings@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   1214881202
     */
    MCAPI class LevelSettings & operator=(class LevelSettings &&);
    /**
     * @symbol ?overrideSavedSettings@LevelSettings@@QEBAXAEAVLevelData@@@Z
     * @hash   614265356
     */
    MCAPI void overrideSavedSettings(class LevelData &) const;
    /**
     * @symbol ?setBaseGameVersion@LevelSettings@@QEAAAEAV1@AEBVBaseGameVersion@@@Z
     * @hash   1254553825
     */
    MCAPI class LevelSettings & setBaseGameVersion(class BaseGameVersion const &);
    /**
     * @symbol ?setChatRestrictionLevel@LevelSettings@@QEAAAEAV1@W4ChatRestrictionLevel@@@Z
     * @hash   -49873009
     */
    MCAPI class LevelSettings & setChatRestrictionLevel(enum class ChatRestrictionLevel);
    /**
     * @symbol ?setCommandsEnabled@LevelSettings@@QEAAAEAV1@_N@Z
     * @hash   1422634541
     */
    MCAPI class LevelSettings & setCommandsEnabled(bool);
    /**
     * @symbol ?setCustomSkinsDisabled@LevelSettings@@QEAAAEAV1@_N@Z
     * @hash   -988588947
     */
    MCAPI class LevelSettings & setCustomSkinsDisabled(bool);
    /**
     * @symbol ?setDefaultPlayerPermissions@LevelSettings@@QEAAAEAV1@W4PlayerPermissionLevel@@@Z
     * @hash   852273499
     */
    MCAPI class LevelSettings & setDefaultPlayerPermissions(enum class PlayerPermissionLevel);
    /**
     * @symbol ?setDifficulty@LevelSettings@@QEAAAEAV1@W4Difficulty@@@Z
     * @hash   1341874739
     */
    MCAPI class LevelSettings & setDifficulty(enum class Difficulty);
    /**
     * @symbol ?setDisablePlayerInteractions@LevelSettings@@QEAAAEAV1@_N@Z
     * @hash   1856557467
     */
    MCAPI class LevelSettings & setDisablePlayerInteractions(bool);
    /**
     * @symbol ?setEduSharedUriResource@LevelSettings@@QEAAAEAV1@AEBUEduSharedUriResource@@@Z
     * @hash   -1336056973
     */
    MCAPI class LevelSettings & setEduSharedUriResource(struct EduSharedUriResource const &);
    /**
     * @symbol ?setEducationFeaturesEnabled@LevelSettings@@QEAAAEAV1@_N@Z
     * @hash   142279181
     */
    MCAPI class LevelSettings & setEducationFeaturesEnabled(bool);
    /**
     * @symbol ?setEducationProductID@LevelSettings@@QEAAAEAV1@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1114479329
     */
    MCAPI class LevelSettings & setEducationProductID(std::string);
    /**
     * @symbol ?setForceGameType@LevelSettings@@QEAAAEAV1@_N@Z
     * @hash   1567880785
     */
    MCAPI class LevelSettings & setForceGameType(bool);
    /**
     * @symbol ?setGameRules@LevelSettings@@QEAAAEAV1@VGameRules@@@Z
     * @hash   -316629345
     */
    MCAPI class LevelSettings & setGameRules(class GameRules);
    /**
     * @symbol ?setGameType@LevelSettings@@QEAAAEAV1@W4GameType@@@Z
     * @hash   1350894719
     */
    MCAPI class LevelSettings & setGameType(enum class GameType);
    /**
     * @symbol ?setGeneratorType@LevelSettings@@QEAAAEAV1@W4GeneratorType@@@Z
     * @hash   -1193849177
     */
    MCAPI class LevelSettings & setGeneratorType(enum class GeneratorType);
    /**
     * @symbol ?setIsEditorWorld@LevelSettings@@QEAAAEAV1@_N@Z
     * @hash   -629070631
     */
    MCAPI class LevelSettings & setIsEditorWorld(bool);
    /**
     * @symbol ?setOnlySpawnV1Villagers@LevelSettings@@QEAAX_N@Z
     * @hash   -1106482980
     */
    MCAPI void setOnlySpawnV1Villagers(bool);
    /**
     * @symbol ?setOverrideSavedSettings@LevelSettings@@QEAAAEAV1@_N@Z
     * @hash   -271341581
     */
    MCAPI class LevelSettings & setOverrideSavedSettings(bool);
    /**
     * @symbol ?setPlatformBroadcastIntent@LevelSettings@@QEAAAEAV1@W4GamePublishSetting@Social@@@Z
     * @hash   -1256527159
     */
    MCAPI class LevelSettings & setPlatformBroadcastIntent(enum class Social::GamePublishSetting);
    /**
     * @symbol ?setRandomSeed@LevelSettings@@QEAAAEAV1@VLevelSeed64@@@Z
     * @hash   -929273445
     */
    MCAPI class LevelSettings & setRandomSeed(class LevelSeed64);
    /**
     * @symbol ?setServerChunkTickRange@LevelSettings@@QEAAAEAV1@I@Z
     * @hash   382481693
     */
    MCAPI class LevelSettings & setServerChunkTickRange(unsigned int);
    /**
     * @symbol ?setSpawnSettings@LevelSettings@@QEAAAEAV1@USpawnSettings@@@Z
     * @hash   -197143859
     */
    MCAPI class LevelSettings & setSpawnSettings(struct SpawnSettings);
    /**
     * @symbol ?setTexturePackRequired@LevelSettings@@QEAAAEAV1@_N@Z
     * @hash   1579405305
     */
    MCAPI class LevelSettings & setTexturePackRequired(bool);
    /**
     * @symbol ?setUseMsaGamertagsOnly@LevelSettings@@QEAAAEAV1@_N@Z
     * @hash   2082966029
     */
    MCAPI class LevelSettings & setUseMsaGamertagsOnly(bool);
    /**
     * @symbol ?setXblBroadcastIntent@LevelSettings@@QEAAAEAV1@W4GamePublishSetting@Social@@@Z
     * @hash   -1096410229
     */
    MCAPI class LevelSettings & setXblBroadcastIntent(enum class Social::GamePublishSetting);
    /**
     * @symbol ?shouldOverrideSavedSettings@LevelSettings@@QEBA_NXZ
     * @hash   425255968
     */
    MCAPI bool shouldOverrideSavedSettings() const;
    /**
     * @symbol ?useMsaGamertagsOnly@LevelSettings@@QEBA_NXZ
     * @hash   -302861584
     */
    MCAPI bool useMsaGamertagsOnly() const;
    /**
     * @symbol ??1LevelSettings@@QEAA@XZ
     * @hash   1985937459
     */
    MCAPI ~LevelSettings();
    /**
     * @symbol ?parseSeedString@LevelSettings@@SA?AV?$optional@VLevelSeed64@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     * @hash   1061257418
     */
    MCAPI static class std::optional<class LevelSeed64> parseSeedString(std::string const &);

};