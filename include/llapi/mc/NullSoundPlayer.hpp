/**
 * @file  NullSoundPlayer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NullSoundPlayer.
 *
 */
class NullSoundPlayer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NULLSOUNDPLAYER
public:
    class NullSoundPlayer& operator=(class NullSoundPlayer const &) = delete;
    NullSoundPlayer(class NullSoundPlayer const &) = delete;
    NullSoundPlayer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -868666217
     */
    virtual ~NullSoundPlayer();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   -1315668094
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1314744573
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1313821052
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   -1312897531
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @hash   -1311974010
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @hash   -1311050489
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @hash   -1252374712
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1251451191
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @hash   -235350813
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @hash   -292179548
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @hash   -291256027
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @hash   -585130362
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @hash   -584206841
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  15
     * @symbol ?getCurrentlyPlayingMusicName@NullSoundPlayer@@UEAA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   653717413
     */
    virtual class Core::PathBuffer<std::string> const getCurrentlyPlayingMusicName();
    /**
     * @vftbl  16
     * @hash   -229809687
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  17
     * @symbol ?registerLoop@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6AXAEAULoopingSoundState@@@Z@3@MM@Z
     * @hash   -593633375
     */
    virtual unsigned __int64 registerLoop(std::string const &, class std::function<void (struct LoopingSoundState &)>, float, float);
    /**
     * @vftbl  18
     * @hash   -285714901
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  19
     * @hash   -579589236
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  20
     * @hash   -206721662
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl  21
     * @hash   -263550397
     */
    virtual void __unk_vfn_21();
    /**
     * @vftbl  22
     * @symbol ?tryGetPlayingSoundAttributes@NullSoundPlayer@@UEBA?AV?$optional@UPlayingSoundAttributes@@@std@@_K@Z
     * @hash   1705378637
     */
    virtual class std::optional<struct PlayingSoundAttributes> tryGetPlayingSoundAttributes(unsigned __int64) const;
    /**
     * @vftbl  23
     * @symbol ?tryGetLoopingSoundAttributes@NullSoundPlayer@@UEBA?AV?$optional@ULoopingSoundAttributes@@@std@@_K@Z
     * @hash   1925153165
     */
    virtual class std::optional<struct LoopingSoundAttributes> tryGetLoopingSoundAttributes(unsigned __int64) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NULLSOUNDPLAYER
    /**
     * @symbol ?fadeOut@NullSoundPlayer@@UEAAX_KM@Z
     * @hash   131044254
     */
    MCVAPI void fadeOut(unsigned __int64, float);
    /**
     * @symbol ?fadeToStopMusic@NullSoundPlayer@@UEAAXM@Z
     * @hash   -787588072
     */
    MCVAPI void fadeToStopMusic(float);
    /**
     * @symbol ?getItem@NullSoundPlayer@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@AEAVSoundItem@@@Z
     * @hash   -2126602553
     */
    MCVAPI bool getItem(std::string const &, class Core::Path const &, class SoundItem &) const;
    /**
     * @symbol ?isLoadingMusic@NullSoundPlayer@@UEBA_NXZ
     * @hash   426584770
     */
    MCVAPI bool isLoadingMusic() const;
    /**
     * @symbol ?isPlayingMusic@NullSoundPlayer@@UEBA_NAEBVPath@Core@@@Z
     * @hash   127140355
     */
    MCVAPI bool isPlayingMusic(class Core::Path const &) const;
    /**
     * @symbol ?isPlayingMusicEvent@NullSoundPlayer@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1165490114
     */
    MCVAPI bool isPlayingMusicEvent(std::string const &) const;
    /**
     * @symbol ?isPlayingSound@NullSoundPlayer@@UEBA_N_K@Z
     * @hash   1778616712
     */
    MCVAPI bool isPlayingSound(unsigned __int64) const;
    /**
     * @symbol ?play@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
     * @hash   1794034162
     */
    MCVAPI unsigned __int64 play(std::string const &, class Vec3 const &, float, float);
    /**
     * @symbol ?playAttached@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$function@$$A6AXAEAUSoundInstanceProperties@@@Z@3@@Z
     * @hash   317282298
     */
    MCVAPI unsigned __int64 playAttached(std::string const &, class std::function<void (struct SoundInstanceProperties &)> &&);
    /**
     * @symbol ?playMusic@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MAEAI@Z
     * @hash   -7642573
     */
    MCVAPI void playMusic(std::string const &, float, unsigned int &);
    /**
     * @symbol ?playMusic@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z
     * @hash   855359589
     */
    MCVAPI void playMusic(std::string const &, float);
    /**
     * @symbol ?playUI@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MM@Z
     * @hash   1548520236
     */
    MCVAPI unsigned __int64 playUI(std::string const &, float, float);
    /**
     * @symbol ?setMusicVolumeMultiplier@NullSoundPlayer@@UEAAXM@Z
     * @hash   734768838
     */
    MCVAPI void setMusicVolumeMultiplier(float);
    /**
     * @symbol ?stop@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1225615860
     */
    MCVAPI void stop(std::string const &);
    /**
     * @symbol ?stop@NullSoundPlayer@@UEAAX_K@Z
     * @hash   645246804
     */
    MCVAPI void stop(unsigned __int64);
    /**
     * @symbol ?stopAllDelayedSoundActions@NullSoundPlayer@@UEAAXXZ
     * @hash   112368143
     */
    MCVAPI void stopAllDelayedSoundActions();
    /**
     * @symbol ?stopAllSounds@NullSoundPlayer@@UEAAXXZ
     * @hash   -1255296959
     */
    MCVAPI void stopAllSounds();
    /**
     * @symbol ?stopMusic@NullSoundPlayer@@UEAAXXZ
     * @hash   -798245087
     */
    MCVAPI void stopMusic();
    /**
     * @symbol ?unregisterLoop@NullSoundPlayer@@UEAAX_K_N@Z
     * @hash   -2058515114
     */
    MCVAPI void unregisterLoop(unsigned __int64, bool);
#endif

};