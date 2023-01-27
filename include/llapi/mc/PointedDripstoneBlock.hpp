/**
 * @file  PointedDripstoneBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "HeavyBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PointedDripstoneBlock.
 *
 */
class PointedDripstoneBlock : public HeavyBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POINTEDDRIPSTONEBLOCK
public:
    class PointedDripstoneBlock& operator=(class PointedDripstoneBlock const &) = delete;
    PointedDripstoneBlock(class PointedDripstoneBlock const &) = delete;
    PointedDripstoneBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1621075974
     */
    virtual ~PointedDripstoneBlock();
    /**
     * @vftbl  8
     * @symbol ?randomlyModifyPosition@PointedDripstoneBlock@@UEBA?AVVec3@@AEBVBlockPos@@@Z
     * @hash   259922721
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /**
     * @vftbl  10
     * @symbol ?getAABB@PointedDripstoneBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     * @hash   2124072876
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  15
     * @symbol ?onProjectileHit@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
     * @hash   -1292061193
     */
    virtual void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
    /**
     * @vftbl  19
     * @hash   -227039124
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @hash   -198409973
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -178092511
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -176245469
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -175321948
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -174398427
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -172551385
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -171627864
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -170704343
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -169780822
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -149463360
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -148539839
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -145769276
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -144845755
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -143922234
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -142998713
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -142075192
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -141151671
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @hash   -117140125
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @hash   -92205058
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @hash   -91281537
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  82
     * @hash   -33099714
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  92
     * @symbol ?mayPlace@PointedDripstoneBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -552181804
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -15581586
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@PointedDripstoneBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
     * @hash   1467772958
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl  105
     * @hash   1432640646
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  106
     * @symbol ?getPlacementBlock@PointedDripstoneBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     * @hash   -1533061141
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @vftbl  123
     * @hash   1488051906
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @hash   1489898948
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1490822469
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @hash   1514834015
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  143
     * @symbol ?getVisualShape@PointedDripstoneBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     * @hash   -1042120042
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  146
     * @symbol ?getVariant@PointedDripstoneBlock@@UEBAHAEBVBlock@@@Z
     * @hash   -1623098692
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  151
     * @symbol ?animateTick@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1549018145
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  152
     * @symbol ?init@PointedDripstoneBlock@@UEAAAEAVBlockLegacy@@XZ
     * @hash   812839495
     */
    virtual class BlockLegacy & init();
    /**
     * @vftbl  156
     * @hash   1569252562
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  157
     * @symbol ?getSilkTouchItemInstance@PointedDripstoneBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
     * @hash   -843297869
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /**
     * @vftbl  166
     * @hash   1547586817
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl  167
     * @hash   1548510338
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl  168
     * @hash   1549433859
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  170
     * @symbol ?onFallOn@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
     * @hash   -1094672348
     */
    virtual void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /**
     * @vftbl  172
     * @hash   1630274140
     */
    virtual void __unk_vfn_172();
    /**
     * @vftbl  173
     * @symbol ?tick@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1944145630
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  174
     * @symbol ?randomTick@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1587027953
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1633968224
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  179
     * @symbol ?canSurvive@PointedDripstoneBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1099520836
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  186
     * @hash   1662597375
     */
    virtual void __unk_vfn_186();
    /**
     * @vftbl  188
     * @symbol ?getResourceItem@PointedDripstoneBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   1878432778
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  192
     * @symbol ?getDustColor@PointedDripstoneBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z
     * @hash   -1085586856
     */
    virtual class mce::Color getDustColor(class Block const &) const;
    /**
     * @vftbl  193
     * @symbol ?getDustParticleName@PointedDripstoneBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     * @hash   -1687788397
     */
    virtual std::string getDustParticleName(class Block const &) const;
    /**
     * @vftbl  194
     * @hash   1681922124
     */
    virtual void __unk_vfn_194();
    /**
     * @vftbl  195
     * @symbol ?onLand@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   133536954
     */
    virtual void onLand(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  197
     * @symbol ?startFalling@PointedDripstoneBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@_N@Z
     * @hash   1233150590
     */
    virtual void startFalling(class BlockSource &, class BlockPos const &, class Block const &, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POINTEDDRIPSTONEBLOCK
    /**
     * @symbol ?falling@PointedDripstoneBlock@@UEBA_NXZ
     * @hash   1399094019
     */
    MCVAPI bool falling() const;
#endif
    /**
     * @symbol ??0PointedDripstoneBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -675714278
     */
    MCAPI PointedDripstoneBlock(std::string const &, int);
    /**
     * @symbol ?addDripParticle@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@W4ParticleType@@@Z
     * @hash   -2013741568
     */
    MCAPI static void addDripParticle(class BlockSource &, class BlockPos const &, enum class ParticleType);
    /**
     * @symbol ?canGrow@PointedDripstoneBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -2140914977
     */
    MCAPI static bool canGrow(class BlockSource &, class BlockPos const &, class BlockPos const &);
    /**
     * @symbol ?fillCauldron@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1512254375
     */
    MCAPI static void fillCauldron(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?findStalactiteTipAboveCauldron@PointedDripstoneBlock@@SA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   668001067
     */
    MCAPI static class std::optional<class BlockPos> findStalactiteTipAboveCauldron(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?getCauldronFillLiquidType@PointedDripstoneBlock@@SA?AV?$optional@W4MaterialType@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -2103128385
     */
    MCAPI static class std::optional<enum class MaterialType> getCauldronFillLiquidType(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?getStalactiteTipBelowFillSource@PointedDripstoneBlock@@SA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1654583289
     */
    MCAPI static class std::optional<class BlockPos> getStalactiteTipBelowFillSource(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?growStalactite@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1907137111
     */
    MCAPI static void growStalactite(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?growStalagmite@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1614724473
     */
    MCAPI static void growStalagmite(class BlockSource &, class BlockPos const &);

//private:
    /**
     * @symbol ?_updateBlockThickness@PointedDripstoneBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1523618060
     */
    MCAPI void _updateBlockThickness(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_calculateDripstoneThickness@PointedDripstoneBlock@@CA?AW4DripstoneThickness@@AEAVBlockSource@@AEBVBlockPos@@E_N@Z
     * @hash   2134862898
     */
    MCAPI static enum class DripstoneThickness _calculateDripstoneThickness(class BlockSource &, class BlockPos const &, unsigned char, bool);
    /**
     * @symbol ?_canDrip@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -345712926
     */
    MCAPI static bool _canDrip(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_canFillCauldron@PointedDripstoneBlock@@CA_NAEBVBlock@@@Z
     * @hash   -1163027684
     */
    MCAPI static bool _canFillCauldron(class Block const &);
    /**
     * @symbol ?_canTipGrow@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   930934201
     */
    MCAPI static bool _canTipGrow(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_createDripstone@PointedDripstoneBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@EW4DripstoneThickness@@@Z
     * @hash   238969938
     */
    MCAPI static void _createDripstone(class BlockSource &, class BlockPos const &, unsigned char, enum class DripstoneThickness);
    /**
     * @symbol ?_findBlockVertically@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@EV?$function@$$A6A_NAEAVBlockSource@@AEBVBlockPos@@@Z@3@2H@Z
     * @hash   631295631
     */
    MCAPI static class std::optional<class BlockPos> _findBlockVertically(class BlockSource &, class BlockPos const &, unsigned char, class std::function<bool (class BlockSource &, class BlockPos const &)>, class std::function<bool (class BlockSource &, class BlockPos const &)>, int);
    /**
     * @symbol ?_findRootBlock@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   -1840528725
     */
    MCAPI static class std::optional<class BlockPos> _findRootBlock(class BlockSource &, class BlockPos const &, int);
    /**
     * @symbol ?_findTip@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@EH_N@Z
     * @hash   -1073725106
     */
    MCAPI static class std::optional<class BlockPos> _findTip(class BlockSource &, class BlockPos const &, unsigned char, int, bool);
    /**
     * @symbol ?_getBlockAboveStalactiteRoot@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   198890914
     */
    MCAPI static class std::optional<class BlockPos> _getBlockAboveStalactiteRoot(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_getRandomBlockPositionOffset@PointedDripstoneBlock@@CA?AVVec3@@AEBVBlockPos@@@Z
     * @hash   781112473
     */
    MCAPI static class Vec3 _getRandomBlockPositionOffset(class BlockPos const &);
    /**
     * @symbol ?_grow@PointedDripstoneBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@E@Z
     * @hash   -704923987
     */
    MCAPI static void _grow(class BlockSource &, class BlockPos const &, unsigned char);
    /**
     * @symbol ?_growStalagmiteBelow@PointedDripstoneBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   2107494130
     */
    MCAPI static void _growStalagmiteBelow(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_isStalactiteBase@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -131113142
     */
    MCAPI static bool _isStalactiteBase(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_isTip@PointedDripstoneBlock@@CA_NAEBVBlock@@E_N@Z
     * @hash   931587783
     */
    MCAPI static bool _isTip(class Block const &, unsigned char, bool);
    /**
     * @symbol ?_isValidPointedDripstonePlacement@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z
     * @hash   -1952957221
     */
    MCAPI static bool _isValidPointedDripstonePlacement(class BlockSource &, class BlockPos const &, bool);
    /**
     * @symbol ?_mayPlaceHanging@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   567106907
     */
    MCAPI static bool _mayPlaceHanging(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_mayPlaceStanding@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -306454551
     */
    MCAPI static bool _mayPlaceStanding(class BlockSource &, class BlockPos const &);

private:

};