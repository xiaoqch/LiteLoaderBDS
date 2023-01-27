/**
 * @file  ScriptMinecraftCommonModuleFactory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptMinecraftCommonModuleFactory.
 *
 */
class ScriptMinecraftCommonModuleFactory {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMINECRAFTCOMMONMODULEFACTORY
public:
    class ScriptMinecraftCommonModuleFactory& operator=(class ScriptMinecraftCommonModuleFactory const &) = delete;
    ScriptMinecraftCommonModuleFactory(class ScriptMinecraftCommonModuleFactory const &) = delete;
#endif

public:
    /**
     * @symbol ??0ScriptMinecraftCommonModuleFactory@@QEAA@XZ
     * @hash   -1993211779
     */
    MCAPI ScriptMinecraftCommonModuleFactory();
    /**
     * @symbol ?addCommon@ScriptMinecraftCommonModuleFactory@@QEAAXAEAVModuleBindingBuilder@Scripting@@@Z
     * @hash   1205706162
     */
    MCAPI void addCommon(class Scripting::ModuleBindingBuilder &);
    /**
     * @symbol ??1ScriptMinecraftCommonModuleFactory@@QEAA@XZ
     * @hash   2009341275
     */
    MCAPI ~ScriptMinecraftCommonModuleFactory();

};