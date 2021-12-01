// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BlockLegacy.hpp"
#define EXTRA_INCLUDE_PART_NETHERFUNGUSBLOCK
#include "Extra/NetherFungusBlockAPI.hpp"
#undef EXTRA_INCLUDE_PART_NETHERFUNGUSBLOCK
class NetherFungusBlock : public BlockLegacy {
#include "Extra/NetherFungusBlockAPI.hpp"
public:
    virtual ~NetherFungusBlock();
    virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const&(class BlockPos const&)> const&, class BlockPos const&) const;
    virtual void unk_vfn_17();
    virtual bool isStrippable(class Block const&) const;
    virtual class Block const& getStrippedBlock(class Block const&) const;
    virtual class CopperBehavior const* tryGetCopperBehavior() const;
    virtual void unk_vfn_25();
    virtual void unk_vfn_26();
    virtual void unk_vfn_27();
    virtual void unk_vfn_29();
    virtual void unk_vfn_30();
    virtual void unk_vfn_31();
    virtual void unk_vfn_32();
    virtual void unk_vfn_33();
    virtual void unk_vfn_34();
    virtual void unk_vfn_35();
    virtual bool isDoubleSlabBlock() const;
    virtual void unk_vfn_37();
    virtual void unk_vfn_38();
    virtual void unk_vfn_39();
    virtual void unk_vfn_40();
    virtual void unk_vfn_41();
    virtual void unk_vfn_43();
    virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    virtual bool isValidAuxValue(int) const;
    virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    virtual void unk_vfn_51();
    virtual void unk_vfn_52();
    virtual bool canContainLiquid() const;
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    virtual void unk_vfn_58();
    virtual bool shouldDispense(class BlockSource&, class Container&) const;
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    virtual void unk_vfn_65();
    virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    virtual int /*enum BlockProperty*/ getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    virtual void unk_vfn_72();
    virtual bool isFilteredOut(int /*enum BlockRenderLayer*/) const;
    virtual void unk_vfn_74();
    virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, int /*enum FertilizerType*/) const;
    virtual bool mayConsumeFertilizer(class BlockSource&) const;
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    virtual bool mayPick() const;
    virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const*>*, float, int) const;
    virtual void unk_vfn_97();
    virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    virtual bool attack(class Player*, class BlockPos const&) const;
    virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    virtual int getExperienceDrop(class Random&) const;
    virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    virtual void unk_vfn_115();
    virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    virtual void unk_vfn_117();
    virtual void unk_vfn_118();
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    virtual void unk_vfn_123();
    virtual int getIconYOffset() const;
    virtual bool isAuxValueRelevantForPicking() const;
    virtual int getColor(class Block const&) const;
    virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    virtual void unk_vfn_139();
    virtual class Block const& getRenderBlock() const;
    virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    virtual int /*enum Flip*/ getFaceFlip(unsigned char, class Block const&) const;
    virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    virtual void unk_vfn_156();
    virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    virtual class Block const* tryGetInfested(class Block const&) const;
    virtual class Block const* tryGetUninfested(class Block const&) const;
    virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    virtual void onStandOn(class Actor&, class BlockPos const&) const;
    virtual void onStepOn(class Actor&, class BlockPos const&) const;
    virtual void unk_vfn_169();
    virtual void unk_vfn_170();
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    virtual void unk_vfn_177();
    virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    virtual void unk_vfn_183();
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    virtual void unk_vfn_187();
    virtual void unk_vfn_188();
};