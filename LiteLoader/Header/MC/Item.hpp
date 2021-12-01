// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_ITEM
#include "Extra/ItemAPI.hpp"
#undef EXTRA_INCLUDE_PART_ITEM
class Item {
#include "Extra/ItemAPI.hpp"
public:
    virtual ~Item();
    virtual bool initServer(class Json::Value&, class SemVersion const&);
    virtual void tearDown();
    virtual int getMaxUseDuration(class ItemStack const*) const;
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void executeEvent(class ItemStackBase&, std::string const&, class RenderParams&) const;
    virtual void unk_vfn_7();
    virtual bool isArmor() const;
    virtual bool isBlockPlanterItem() const;
    virtual void unk_vfn_10();
    virtual bool isCamera() const;
    virtual void unk_vfn_12();
    virtual bool isDamageable() const;
    virtual bool isDyeable() const;
    virtual bool isDye() const;
    virtual int /*enum ItemColor*/ getItemColor() const;
    virtual bool isFertilizer() const;
    virtual void unk_vfn_18();
    virtual bool isThrowable() const;
    virtual bool isUseable() const;
    virtual class ItemComponent* getComponent(class HashedString const&) const;
    virtual class ICameraItemComponent* getCamera() const;
    virtual class IFoodItemComponent* getFood() const;
    virtual class FuelItemComponent* getFuel() const;
    virtual class Item& setMaxStackSize(unsigned char);
    virtual class Item& setStackedByData(bool);
    virtual class Item& setMaxDamage(int);
    virtual class Item& setHandEquipped();
    virtual class Item& setUseAnimation(int /*enum UseAnimation*/);
    virtual class Item& setMaxUseDuration(int);
    virtual class Item& setRequiresWorldBuilder(bool);
    virtual class Item& setExplodable(bool);
    virtual class Item& setFireResistant(bool);
    virtual class Item& setIsGlint(bool);
    virtual class Item& setShouldDespawn(bool);
    virtual int /*enum BlockShape*/ getBlockShape() const;
    virtual bool canBeDepleted() const;
    virtual bool canDestroySpecial(class Block const&) const;
    virtual int getLevelDataForAuxValue(int) const;
    virtual bool isStackedByData() const;
    virtual short getMaxDamage() const;
    virtual int getAttackDamage() const;
    virtual bool isHandEquipped() const;
    virtual bool isGlint(class ItemStackBase const&) const;
    virtual void unk_vfn_45();
    virtual int getPatternIndex() const;
    virtual void unk_vfn_47();
    virtual bool isWearableThroughLootTable(class CompoundTag const*) const;
    virtual bool canDestroyInCreative() const;
    virtual bool isDestructive(int) const;
    virtual bool isLiquidClipItem(int) const;
    virtual bool shouldInteractionWithBlockBypassLiquid(class Block const&) const;
    virtual bool requiresInteract() const;
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;
    virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;
    virtual int getEnchantSlot() const;
    virtual int getEnchantValue() const;
    virtual int getArmorValue() const;
    virtual void unk_vfn_59();
    virtual bool isValidAuxValue(int) const;
    virtual int getDamageChance(int) const;
    virtual float getViewDamping() const;
    virtual void unk_vfn_63();
    virtual void unk_vfn_64();
    virtual void unk_vfn_65();
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;
    virtual bool hasCustomColor(class CompoundTag const*) const;
    virtual void unk_vfn_68();
    virtual void clearColor(class ItemStackBase&) const;
    virtual void clearColor(class CompoundTag*) const;
    virtual void setColor(class ItemStackBase&, class mce::Color const&) const;
    virtual void unk_vfn_72();
    virtual void unk_vfn_73();
    virtual struct ActorDefinitionIdentifier getActorIdentifier(class ItemStack const&) const;
    virtual void unk_vfn_75();
    virtual void unk_vfn_76();
    virtual int buildIdAux(short, class CompoundTag const*) const;
    virtual bool canUseOnSimTick() const;
    virtual class ItemStack& use(class ItemStack&, class Player&) const;
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    virtual int /*enum ItemUseMethod*/ useTimeDepleted(class ItemStack&, class Level*, class Player*) const;
    virtual void releaseUsing(class ItemStack&, class Player*, int) const;
    virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;
    virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;
    virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;
    virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
    virtual void unk_vfn_89();
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const;
    virtual std::string buildCategoryDescriptionName() const;
    virtual void readUserData(class ItemStackBase&, class IDataInput&, class ReadOnlyBinaryStream&) const;
    virtual void writeUserData(class ItemStackBase const&, class IDataOutput&) const;
    virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const;
    virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const;
    virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const;
    virtual class HashedString const& getCooldownType() const;
    virtual int getCooldownTime() const;
    virtual void fixupCommon(class ItemStackBase&) const;
    virtual void fixupCommon(class ItemStackBase&, class Level&) const;
    virtual short getDamageValue(class CompoundTag const*) const;
    virtual void setDamageValue(class ItemStackBase&, short) const;
    virtual void unk_vfn_104();
    virtual void unk_vfn_105();
    virtual bool validFishInteraction(int) const;
    virtual bool isSameItem(class ItemStackBase const&, class ItemStackBase const&) const;
    virtual void initClient(class Json::Value&, class SemVersion const&);
    virtual std::string getInteractText(class Player const&) const;
    virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;
    virtual bool isEmissive(int) const;
    virtual struct Brightness getLightEmission(int) const;
    virtual struct TextureUVCoordinateSet const& getIcon(class ItemStackBase const&, int, bool) const;
    virtual int getIconYOffset() const;
    virtual class Item& setIcon(std::string const&, int);
    virtual class Item& setIcon(struct TextureUVCoordinateSet const&);
    virtual class Item& setIconAtlas(std::string const&, int);
    virtual bool canBeCharged() const;
    virtual void playSoundIncrementally(class ItemStack const&, class Mob&) const;
    virtual void unk_vfn_120();
    virtual float getFurnaceBurnIntervalMultipler(class ItemStackBase const&) const;
    virtual float getFurnaceXPmultiplier(class ItemStackBase const&) const;
    virtual std::string getAuxValuesDescription() const;
    virtual bool _checkUseOnPermissions(class Actor&, class ItemStackBase&, unsigned char const&, class BlockPos const&) const;
    virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&) const;
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos, unsigned char, float, float, float) const;

public:
    MCAPI void addOnResetBAIcallback(class std::function<void(void)> const&);
    MCAPI class Item& addTag(class HashedString const&);
    MCAPI bool allowOffhand() const;
    MCAPI class ItemDescriptor buildDescriptor(short, class CompoundTag const*) const;
    MCAPI float destroySpeedBonus(class ItemStackBase const&) const;
    MCAPI void fixupOnLoad(class ItemStackBase&) const;
    MCAPI void fixupOnLoad(class ItemStackBase&, class Level&) const;
    MCAPI std::vector<struct CommandName> getCommandNames() const;
    MCAPI enum CreativeItemCategory getCreativeCategory() const;
    MCAPI std::string const& getCreativeGroup() const;
    MCAPI std::string const& getDescriptionId() const;
    MCAPI int getFrameCount() const;
    MCAPI std::string const& getFullItemName() const;
    MCAPI class HashedString const& getFullNameHash() const;
    MCAPI short getId() const;
    MCAPI class WeakPtr<class BlockLegacy> const& getLegacyBlock() const;
    MCAPI std::string const& getNamespace() const;
    MCAPI class HashedString const& getRawNameHash() const;
    MCAPI std::string const& getRawNameId() const;
    MCAPI class BaseGameVersion const& getRequiredBaseGameVersion() const;
    MCAPI std::string getSerializedName() const;
    MCAPI enum UseAnimation getUseAnimation() const;
    MCAPI bool hasTag(class HashedString const&) const;
    MCAPI bool hasTag(unsigned __int64 const&) const;
    MCAPI bool isElytra() const;
    MCAPI bool isExplodable() const;
    MCAPI bool isFireResistant() const;
    MCAPI bool isNameTag() const;
    MCAPI bool isSeed() const;
    MCAPI class Item& setAllowOffhand(bool);
    MCAPI class Item& setCategory(enum CreativeItemCategory);
    MCAPI class Item& setCreativeGroup(std::string const&);
    MCAPI class Item& setDescriptionId(std::string const&);
    MCAPI class Item& setFurnaceBurnIntervalMultiplier(float);
    MCAPI class Item& setFurnaceXPmultiplier(float);
    MCAPI class Item& setIsMirroredArt(bool);
    MCAPI class Item& setMinRequiredBaseGameVersion(class BaseGameVersion const&);
    MCAPI bool shouldDespawn() const;
    MCAPI bool updateCustomBlockEntityTag(class BlockSource&, class ItemStackBase&, class BlockPos const&) const;
    MCAPI bool useOn(class ItemStack&, class Actor&, int, int, int, unsigned char, float, float, float) const;

    MCAPI static std::string const ICON_DESCRIPTION_PREFIX;
    MCAPI static std::string const TAG_DAMAGE;
    MCAPI static void addCreativeItem(class Block const&);
    MCAPI static void addCreativeItem(class ItemInstance const&);
    MCAPI static void addCreativeItem(class ItemStack const&);
    MCAPI static void addLooseCreativeItems(bool, class BaseGameVersion const&);
    MCAPI static void beginCreativeGroup(std::string const&, class ItemInstance const&);
    MCAPI static void beginCreativeGroup(std::string const&, short, short, class CompoundTag const*);
    MCAPI static void beginCreativeGroup(std::string const&, class Block const*, class CompoundTag const*);
    MCAPI static void endCreativeGroup();
    MCAPI static void endCreativeItemDefinitions(bool);
    MCAPI static struct TextureUVCoordinateSet const& getIconTextureUVSet(class TextureAtlasItem const&, int, int);
    MCAPI static class TextureAtlasItem const& getTextureItem(std::string const&);
    MCAPI static struct TextureUVCoordinateSet getTextureUVCoordinateSet(std::string const&, int);
    MCAPI static bool isElytra(class ItemDescriptor const&);
    MCAPI static bool isElytraBroken(int);
    MCAPI static bool isFlyEnabled(class ItemInstance const&);
    MCAPI static bool isSameTypeAndItem(class ItemStackBase const&, class ItemStackBase const&);
    MCAPI static bool const mGenerateDenyParticleEffect;
    MCAPI static struct TextureUVCoordinateSet mInvalidTextureUVCoordinateSet;
    MCAPI static class std::weak_ptr<class AtlasItemManager> mItemTextureItems;
    MCAPI static void setAtlasItemManager(class std::shared_ptr<class AtlasItemManager>);
    MCAPI static void startCreativeItemDefinitions(bool, class CreativeItemRegistry*);
    MCAPI static struct NewBlockID toBlockId(short);

private:
    MCAPI static void _addLooseCreativeItemsClient();
    MCAPI static std::unique_ptr<class std::set<short, struct std::less<short>, class std::allocator<short>>> mServerItemsUsedInCreativeItems;

protected:
    MCAPI void _helpChangeInventoryItemInPlace(class Actor&, class ItemStack&, class ItemStack&, enum ItemAcquisitionMethod) const;
};