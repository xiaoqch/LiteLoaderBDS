/**
 * @file  JigsawEditorData.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class JigsawEditorData.
 *
 */
class JigsawEditorData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWEDITORDATA
public:
    class JigsawEditorData& operator=(class JigsawEditorData const &) = delete;
    JigsawEditorData(class JigsawEditorData const &) = delete;
#endif

public:
    /**
     * @symbol ??0JigsawEditorData@@QEAA@XZ
     * @hash   245565332
     */
    MCAPI JigsawEditorData();
    /**
     * @symbol ??0JigsawEditorData@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000W4JigsawJointType@@@Z
     * @hash   -2080454606
     */
    MCAPI JigsawEditorData(std::string const &, std::string const &, std::string const &, std::string const &, enum class JigsawJointType);
    /**
     * @symbol ??0JigsawEditorData@@QEAA@$$QEAV0@@Z
     * @hash   -1289531623
     */
    MCAPI JigsawEditorData(class JigsawEditorData &&);
    /**
     * @symbol ?getFinalBlock@JigsawEditorData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1865455188
     */
    MCAPI std::string const & getFinalBlock() const;
    /**
     * @symbol ?getJointType@JigsawEditorData@@QEBAAEBW4JigsawJointType@@XZ
     * @hash   -80305190
     */
    MCAPI enum class JigsawJointType const & getJointType() const;
    /**
     * @symbol ?getName@JigsawEditorData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1041981316
     */
    MCAPI std::string const & getName() const;
    /**
     * @symbol ?getTarget@JigsawEditorData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1078571916
     */
    MCAPI std::string const & getTarget() const;
    /**
     * @symbol ?getTargetPool@JigsawEditorData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   961545372
     */
    MCAPI std::string const & getTargetPool() const;
    /**
     * @symbol ?load@JigsawEditorData@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   2029002197
     */
    MCAPI void load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?save@JigsawEditorData@@QEBAXAEAVCompoundTag@@@Z
     * @hash   483021814
     */
    MCAPI void save(class CompoundTag &) const;
    /**
     * @symbol ?setFinalBlock@JigsawEditorData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1126238766
     */
    MCAPI void setFinalBlock(std::string const &);
    /**
     * @symbol ?setJointType@JigsawEditorData@@QEAAXAEBW4JigsawJointType@@@Z
     * @hash   -4653174
     */
    MCAPI void setJointType(enum class JigsawJointType const &);
    /**
     * @symbol ?setName@JigsawEditorData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   787801134
     */
    MCAPI void setName(std::string const &);
    /**
     * @symbol ?setTarget@JigsawEditorData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1572719886
     */
    MCAPI void setTarget(std::string const &);
    /**
     * @symbol ?setTargetPool@JigsawEditorData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   599789614
     */
    MCAPI void setTargetPool(std::string const &);
    /**
     * @symbol ??1JigsawEditorData@@QEAA@XZ
     * @hash   1405755890
     */
    MCAPI ~JigsawEditorData();

//private:

private:
    /**
     * @symbol ?JOINT_TYPE_TO_NAME@JigsawEditorData@@0V?$unordered_map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@B
     * @hash   -1747528764
     */
    MCAPI static class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const JOINT_TYPE_TO_NAME;

};