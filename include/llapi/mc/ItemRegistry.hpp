/**
 * @file  ItemRegistry.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemRegistry.
 *
 */
class ItemRegistry {

#define AFTER_EXTRA
// Add Member There
public:
struct ItemHashAlias {
    ItemHashAlias() = delete;
    ItemHashAlias(ItemHashAlias const&) = delete;
    ItemHashAlias(ItemHashAlias const&&) = delete;
};
struct ItemAlias {
    ItemAlias() = delete;
    ItemAlias(ItemAlias const&) = delete;
    ItemAlias(ItemAlias const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMREGISTRY
public:
    class ItemRegistry& operator=(class ItemRegistry const &) = delete;
    ItemRegistry(class ItemRegistry const &) = delete;
    ItemRegistry() = delete;
#endif

public:
    /**
     * @symbol ?MINECRAFT_NAMESPACE@ItemRegistry@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     * @hash   -1003922943
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const MINECRAFT_NAMESPACE;
    /**
     * @symbol ?getNameToItemMap@ItemRegistry@@SAAEBV?$unordered_map@VHashedString@@V?$WeakPtr@VItem@@@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@V?$WeakPtr@VItem@@@@@std@@@4@@std@@XZ
     * @hash   -977094883
     */
    MCAPI static class std::unordered_map<class HashedString, class WeakPtr<class Item>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class WeakPtr<class Item>>>> const & getNameToItemMap();
    /**
     * @symbol ?isComponentBasedItemSchema@ItemRegistry@@SA_NAEBVSemVersion@@@Z
     * @hash   -1129906261
     */
    MCAPI static bool isComponentBasedItemSchema(class SemVersion const &);
    /**
     * @symbol ?mCanAddTags@ItemRegistry@@2V?$shared_ptr@U?$atomic@H@std@@@std@@A
     * @hash   2048852142
     */
    MCAPI static class std::shared_ptr<struct std::atomic<int>> mCanAddTags;
    /**
     * @symbol ?mCheckForItemWorldCompatibility@ItemRegistry@@2_NA
     * @hash   -1215925388
     */
    MCAPI static bool mCheckForItemWorldCompatibility;
    /**
     * @symbol ?mCompatibilityCheckLock@ItemRegistry@@2Vmutex@std@@A
     * @hash   1576832709
     */
    MCAPI static class std::mutex mCompatibilityCheckLock;
    /**
     * @symbol ?mDeadItemRegistry@ItemRegistry@@2V?$vector@V?$SharedPtr@VItem@@@@V?$allocator@V?$SharedPtr@VItem@@@@@std@@@std@@A
     * @hash   -1692340623
     */
    MCAPI static std::vector<class SharedPtr<class Item>> mDeadItemRegistry;
    /**
     * @symbol ?mInternalInstance@ItemRegistry@@2V1@A
     * @hash   -776699036
     */
    MCAPI static class ItemRegistry mInternalInstance;
    /**
     * @symbol ?mResponseFactory@ItemRegistry@@2V?$unique_ptr@VItemEventResponseFactory@@U?$default_delete@VItemEventResponseFactory@@@std@@@std@@A
     * @hash   191503979
     */
    MCAPI static std::unique_ptr<class ItemEventResponseFactory> mResponseFactory;
    /**
     * @symbol ?mServerInitializingCreativeItems@ItemRegistry@@2_NA
     * @hash   -278018245
     */
    MCAPI static bool mServerInitializingCreativeItems;
    /**
     * @symbol ?mWorldBaseGameVersion@ItemRegistry@@2VBaseGameVersion@@A
     * @hash   1677808671
     */
    MCAPI static class BaseGameVersion mWorldBaseGameVersion;
    /**
     * @symbol ?remapToFullLegacyNameByHash@ItemRegistry@@SA_K_K@Z
     * @hash   1784967217
     */
    MCAPI static unsigned __int64 remapToFullLegacyNameByHash(unsigned __int64);
    /**
     * @symbol ?remapToLegacyNameByHash@ItemRegistry@@SA_K_K@Z
     * @hash   -980038303
     */
    MCAPI static unsigned __int64 remapToLegacyNameByHash(unsigned __int64);
    /**
     * @symbol ?setOwningThreadId@ItemRegistry@@SAXVid@thread@std@@@Z
     * @hash   -846592118
     */
    MCAPI static void setOwningThreadId(class std::thread::id);

//private:
    /**
     * @symbol ?_loadItemData@ItemRegistry@@AEAAXAEAVResourcePackManager@@V?$function@$$A6AXAEAV?$WeakPtr@VItem@@@@AEAVValue@Json@@AEBVSemVersion@@@Z@std@@_NW4ItemVersion@@@Z
     * @hash   -832915952
     */
    MCAPI void _loadItemData(class ResourcePackManager &, class std::function<void (class WeakPtr<class Item> &, class Json::Value &, class SemVersion const &)>, bool, enum class ItemVersion);
    /**
     * @symbol ?_loadItemDefinition@ItemRegistry@@AEAAXAEAVValue@Json@@_NV?$function@$$A6AXAEAV?$WeakPtr@VItem@@@@AEAVValue@Json@@AEBVSemVersion@@@Z@std@@1W4ItemVersion@@W4PackType@@@Z
     * @hash   2147321689
     */
    MCAPI void _loadItemDefinition(class Json::Value &, bool, class std::function<void (class WeakPtr<class Item> &, class Json::Value &, class SemVersion const &)>, bool, enum class ItemVersion, enum class PackType);
    /**
     * @symbol ?_parseItemDefinition@ItemRegistry@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@_NV?$function@$$A6AXAEAV?$WeakPtr@VItem@@@@AEAVValue@Json@@AEBVSemVersion@@@Z@3@1W4ItemVersion@@W4PackType@@@Z
     * @hash   1048721403
     */
    MCAPI std::string _parseItemDefinition(std::string const &, bool, class std::function<void (class WeakPtr<class Item> &, class Json::Value &, class SemVersion const &)>, bool, enum class ItemVersion, enum class PackType);
    /**
     * @symbol ?addItemToTagMap@ItemRegistry@@AEAAXAEBVItem@@@Z
     * @hash   1211795337
     */
    MCAPI void addItemToTagMap(class Item const &);
    /**
     * @symbol ?allowTagUpdate@ItemRegistry@@AEAA?AVTagUpdateToken@@XZ
     * @hash   837878681
     */
    MCAPI class TagUpdateToken allowTagUpdate();
    /**
     * @symbol ?alterAvailableCreativeItems@ItemRegistry@@AEAAXPEAVActorInfoRegistry@@AEAVLevelData@@@Z
     * @hash   1382195056
     */
    MCAPI void alterAvailableCreativeItems(class ActorInfoRegistry *, class LevelData &);
    /**
     * @symbol ?canAddTags@ItemRegistry@@AEBA_NXZ
     * @hash   -1508970577
     */
    MCAPI bool canAddTags() const;
    /**
     * @symbol ?clearItemAndCreativeItemRegistry@ItemRegistry@@AEAAXXZ
     * @hash   -1316640366
     */
    MCAPI void clearItemAndCreativeItemRegistry();
    /**
     * @symbol ?digestServerItemComponents@ItemRegistry@@AEAAXAEBV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@@2@@std@@@Z
     * @hash   124542455
     */
    MCAPI void digestServerItemComponents(std::vector<struct std::pair<std::string, class CompoundTag>> const &);
    /**
     * @symbol ?finishedRegistration@ItemRegistry@@AEAAXXZ
     * @hash   -828047593
     */
    MCAPI void finishedRegistration();
    /**
     * @symbol ?getItem@ItemRegistry@@AEAA?AV?$WeakPtr@VItem@@@@AEBVHashedString@@@Z
     * @hash   1147636746
     */
    MCAPI class WeakPtr<class Item> getItem(class HashedString const &);
    /**
     * @symbol ?getItem@ItemRegistry@@AEAA?AV?$WeakPtr@VItem@@@@F@Z
     * @hash   -1059151487
     */
    MCAPI class WeakPtr<class Item> getItem(short);
    /**
     * @symbol ?getItemCount@ItemRegistry@@AEAAHXZ
     * @hash   1945379127
     */
    MCAPI int getItemCount();
    /**
     * @symbol ?getItemResponseFactory@ItemRegistry@@AEAAPEAVItemEventResponseFactory@@XZ
     * @hash   1180655544
     */
    MCAPI class ItemEventResponseFactory * getItemResponseFactory();
    /**
     * @symbol ?getNameFromAlias@ItemRegistry@@AEBA?AU?$pair@VHashedString@@H@std@@AEBVHashedString@@H@Z
     * @hash   506071906
     */
    MCAPI struct std::pair<class HashedString, int> getNameFromAlias(class HashedString const &, int) const;
    /**
     * @symbol ?getNameFromLegacyID@ItemRegistry@@AEAA?AVHashedString@@F@Z
     * @hash   -1484707348
     */
    MCAPI class HashedString getNameFromLegacyID(short);
    /**
     * @symbol ?getRef@ItemRegistry@@AEAA?AVItemRegistryRef@@XZ
     * @hash   -175090113
     */
    MCAPI class ItemRegistryRef getRef();
    /**
     * @symbol ?initCreativeItemsServer@ItemRegistry@@AEAAXPEAVActorInfoRegistry@@PEAVBlockDefinitionGroup@@_NAEBVExperiments@@V?$function@$$A6AXVItemRegistryRef@@PEAVActorInfoRegistry@@PEAVBlockDefinitionGroup@@PEAVCreativeItemRegistry@@_NAEBVBaseGameVersion@@AEBVExperiments@@@Z@std@@@Z
     * @hash   1739436197
     */
    MCAPI void initCreativeItemsServer(class ActorInfoRegistry *, class BlockDefinitionGroup *, bool, class Experiments const &, class std::function<void (class ItemRegistryRef, class ActorInfoRegistry *, class BlockDefinitionGroup *, class CreativeItemRegistry *, bool, class BaseGameVersion const &, class Experiments const &)>);
    /**
     * @symbol ?initServerData@ItemRegistry@@AEAAXAEAVResourcePackManager@@AEBVExperiments@@W4ItemVersion@@@Z
     * @hash   1610959503
     */
    MCAPI void initServerData(class ResourcePackManager &, class Experiments const &, enum class ItemVersion);
    /**
     * @symbol ?isCreativeItem@ItemRegistry@@AEAA_NAEBVItemInstance@@@Z
     * @hash   -513544225
     */
    MCAPI bool isCreativeItem(class ItemInstance const &);
    /**
     * @symbol ?lookupByName@ItemRegistry@@AEBA?AV?$WeakPtr@VItem@@@@AEAH0V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
     * @hash   -1691972389
     */
    MCAPI class WeakPtr<class Item> lookupByName(int &, int &, class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @symbol ?lookupByName@ItemRegistry@@AEBA?AV?$WeakPtr@VItem@@@@AEAHV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
     * @hash   -795810290
     */
    MCAPI class WeakPtr<class Item> lookupByName(int &, class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @symbol ?lookupByName@ItemRegistry@@AEBA?AV?$WeakPtr@VItem@@@@AEBVHashedString@@@Z
     * @hash   -1030249098
     */
    MCAPI class WeakPtr<class Item> lookupByName(class HashedString const &) const;
    /**
     * @symbol ?lookupByNameNoAlias@ItemRegistry@@AEBA?AV?$WeakPtr@VItem@@@@AEBVHashedString@@@Z
     * @hash   2050383631
     */
    MCAPI class WeakPtr<class Item> lookupByNameNoAlias(class HashedString const &) const;
    /**
     * @symbol ?lookupByNameNoAlias@ItemRegistry@@AEBA?AV?$WeakPtr@VItem@@@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
     * @hash   443854276
     */
    MCAPI class WeakPtr<class Item> lookupByNameNoAlias(class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @symbol ?lookupByNameNoParsing@ItemRegistry@@AEBA?AV?$WeakPtr@VItem@@@@AEAHAEBVHashedString@@@Z
     * @hash   -59963392
     */
    MCAPI class WeakPtr<class Item> lookupByNameNoParsing(int &, class HashedString const &) const;
    /**
     * @symbol ?lookupByTag@ItemRegistry@@AEBAAEBV?$unordered_set@PEBVItem@@U?$hash@PEBVItem@@@std@@U?$equal_to@PEBVItem@@@3@V?$allocator@PEBVItem@@@3@@std@@AEBUItemTag@@@Z
     * @hash   45622320
     */
    MCAPI class std::unordered_set<class Item const *, struct std::hash<class Item const *>, struct std::equal_to<class Item const *>, class std::allocator<class Item const *>> const & lookupByTag(struct ItemTag const &) const;
    /**
     * @symbol ?lookupByVanillaName@ItemRegistry@@AEBA?AV?$WeakPtr@VItem@@@@AEBVHashedString@@@Z
     * @hash   -1810848419
     */
    MCAPI class WeakPtr<class Item> lookupByVanillaName(class HashedString const &) const;
    /**
     * @symbol ?registerAlias@ItemRegistry@@AEAAXAEBVHashedString@@0AEBVBaseGameVersion@@@Z
     * @hash   -215956501
     */
    MCAPI void registerAlias(class HashedString const &, class HashedString const &, class BaseGameVersion const &);
    /**
     * @symbol ?registerComplexAlias@ItemRegistry@@AEAA?AV?$WeakPtr@VItem@@@@AEBVHashedString@@V?$function@$$A6A?AVHashedString@@F@Z@std@@@Z
     * @hash   599476273
     */
    MCAPI class WeakPtr<class Item> registerComplexAlias(class HashedString const &, class std::function<class HashedString (short)>);
    /**
     * @symbol ?registerItem@ItemRegistry@@AEAAXV?$SharedPtr@VItem@@@@@Z
     * @hash   -979623743
     */
    MCAPI void registerItem(class SharedPtr<class Item>);
    /**
     * @symbol ?registerLegacyID@ItemRegistry@@AEAAXAEBVHashedString@@F@Z
     * @hash   2098513914
     */
    MCAPI void registerLegacyID(class HashedString const &, short);
    /**
     * @symbol ?registerLegacyMapping@ItemRegistry@@AEAAXAEBVHashedString@@0AEBVBaseGameVersion@@@Z
     * @hash   -23876074
     */
    MCAPI void registerLegacyMapping(class HashedString const &, class HashedString const &, class BaseGameVersion const &);
    /**
     * @symbol ?setWorldBaseGameVersion@ItemRegistry@@AEAAXAEBVBaseGameVersion@@@Z
     * @hash   -862494237
     */
    MCAPI void setWorldBaseGameVersion(class BaseGameVersion const &);
    /**
     * @symbol ?shutdown@ItemRegistry@@AEAAXXZ
     * @hash   -502632974
     */
    MCAPI void shutdown();
    /**
     * @symbol ?startRegistration@ItemRegistry@@AEAAXXZ
     * @hash   -1808160057
     */
    MCAPI void startRegistration();
    /**
     * @symbol ?unregisterItem@ItemRegistry@@AEAAXAEBVHashedString@@@Z
     * @hash   -1669978832
     */
    MCAPI void unregisterItem(class HashedString const &);
    /**
     * @symbol ?validateServerItemComponents@ItemRegistry@@AEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@@2@@3@@Z
     * @hash   -875826946
     */
    MCAPI std::vector<std::string> validateServerItemComponents(std::vector<struct std::pair<std::string, class CompoundTag>> const &);

private:
    /**
     * @symbol ?mAttachableDefinitions@ItemRegistry@@0V?$vector@VHashedString@@V?$allocator@VHashedString@@@std@@@std@@A
     * @hash   -1007487807
     */
    MCAPI static std::vector<class HashedString> mAttachableDefinitions;
    /**
     * @symbol ?mComplexAliasLookupMap@ItemRegistry@@0V?$unordered_map@VHashedString@@V?$function@$$A6A?AVHashedString@@F@Z@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$function@$$A6A?AVHashedString@@F@Z@std@@@std@@@3@@std@@A
     * @hash   -2134333677
     */
    MCAPI static class std::unordered_map<class HashedString, class std::function<class HashedString (short)>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::function<class HashedString (short)>>>> mComplexAliasLookupMap;
    /**
     * @symbol ?mEmptyItemSet@ItemRegistry@@0V?$unordered_set@PEBVItem@@U?$hash@PEBVItem@@@std@@U?$equal_to@PEBVItem@@@3@V?$allocator@PEBVItem@@@3@@std@@B
     * @hash   -1032357537
     */
    MCAPI static class std::unordered_set<class Item const *, struct std::hash<class Item const *>, struct std::equal_to<class Item const *>, class std::allocator<class Item const *>> const mEmptyItemSet;
    /**
     * @symbol ?mIdToItemMap@ItemRegistry@@0V?$unordered_map@HV?$WeakPtr@VItem@@@@U?$hash@H@std@@U?$equal_to@H@3@V?$allocator@U?$pair@$$CBHV?$WeakPtr@VItem@@@@@std@@@3@@std@@A
     * @hash   -658774188
     */
    MCAPI static class std::unordered_map<int, class WeakPtr<class Item>, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, class WeakPtr<class Item>>>> mIdToItemMap;
    /**
     * @symbol ?mItemAliasLookupMap@ItemRegistry@@0V?$unordered_map@VHashedString@@UItemAlias@ItemRegistry@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@5@V?$allocator@U?$pair@$$CBVHashedString@@UItemAlias@ItemRegistry@@@std@@@5@@std@@A
     * @hash   2068171094
     */
    MCAPI static class std::unordered_map<class HashedString, struct ItemRegistry::ItemAlias, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, struct ItemRegistry::ItemAlias>>> mItemAliasLookupMap;
    /**
     * @symbol ?mItemRegistry@ItemRegistry@@0V?$vector@V?$SharedPtr@VItem@@@@V?$allocator@V?$SharedPtr@VItem@@@@@std@@@std@@A
     * @hash   240329962
     */
    MCAPI static std::vector<class SharedPtr<class Item>> mItemRegistry;
    /**
     * @symbol ?mLegacyIDToNameMap@ItemRegistry@@0V?$unordered_map@FVHashedString@@U?$hash@F@std@@U?$equal_to@F@3@V?$allocator@U?$pair@$$CBFVHashedString@@@std@@@3@@std@@A
     * @hash   -1795162111
     */
    MCAPI static class std::unordered_map<short, class HashedString, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, class HashedString>>> mLegacyIDToNameMap;
    /**
     * @symbol ?mMaxItemID@ItemRegistry@@0FA
     * @hash   -2108025437
     */
    MCAPI static short mMaxItemID;
    /**
     * @symbol ?mNameToItemMap@ItemRegistry@@0V?$unordered_map@VHashedString@@V?$WeakPtr@VItem@@@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@V?$WeakPtr@VItem@@@@@std@@@4@@std@@A
     * @hash   -788085072
     */
    MCAPI static class std::unordered_map<class HashedString, class WeakPtr<class Item>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class WeakPtr<class Item>>>> mNameToItemMap;
    /**
     * @symbol ?mOwnerThread@ItemRegistry@@0Vid@thread@std@@A
     * @hash   1239627939
     */
    MCAPI static class std::thread::id mOwnerThread;
    /**
     * @symbol ?mReverseAliasLookupMap@ItemRegistry@@0V?$unordered_map@_KUItemHashAlias@ItemRegistry@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUItemHashAlias@ItemRegistry@@@std@@@4@@std@@A
     * @hash   892673967
     */
    MCAPI static class std::unordered_map<unsigned __int64, struct ItemRegistry::ItemHashAlias, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, struct ItemRegistry::ItemHashAlias>>> mReverseAliasLookupMap;
    /**
     * @symbol ?mReverseFullNameAliasLookupMap@ItemRegistry@@0V?$unordered_map@_KUItemHashAlias@ItemRegistry@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUItemHashAlias@ItemRegistry@@@std@@@4@@std@@A
     * @hash   953842441
     */
    MCAPI static class std::unordered_map<unsigned __int64, struct ItemRegistry::ItemHashAlias, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, struct ItemRegistry::ItemHashAlias>>> mReverseFullNameAliasLookupMap;
    /**
     * @symbol ?mTagToItemsMap@ItemRegistry@@0V?$unordered_map@UItemTag@@V?$unordered_set@PEBVItem@@U?$hash@PEBVItem@@@std@@U?$equal_to@PEBVItem@@@3@V?$allocator@PEBVItem@@@3@@std@@U?$hash@UItemTag@@@3@U?$equal_to@UItemTag@@@3@V?$allocator@U?$pair@$$CBUItemTag@@V?$unordered_set@PEBVItem@@U?$hash@PEBVItem@@@std@@U?$equal_to@PEBVItem@@@3@V?$allocator@PEBVItem@@@3@@std@@@std@@@3@@std@@A
     * @hash   -278519976
     */
    MCAPI static class std::unordered_map<struct ItemTag, class std::unordered_set<class Item const *, struct std::hash<class Item const *>, struct std::equal_to<class Item const *>, class std::allocator<class Item const *>>, struct std::hash<struct ItemTag>, struct std::equal_to<struct ItemTag>, class std::allocator<struct std::pair<struct ItemTag const, class std::unordered_set<class Item const *, struct std::hash<class Item const *>, struct std::equal_to<class Item const *>, class std::allocator<class Item const *>>>>> mTagToItemsMap;
    /**
     * @symbol ?mTileItemNameToItemMap@ItemRegistry@@0V?$unordered_map@VHashedString@@V?$WeakPtr@VItem@@@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@V?$WeakPtr@VItem@@@@@std@@@4@@std@@A
     * @hash   1811261295
     */
    MCAPI static class std::unordered_map<class HashedString, class WeakPtr<class Item>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class WeakPtr<class Item>>>> mTileItemNameToItemMap;
    /**
     * @symbol ?mTileNamespaceToItemMap@ItemRegistry@@0V?$unordered_map@VHashedString@@V?$WeakPtr@VItem@@@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@V?$WeakPtr@VItem@@@@@std@@@4@@std@@A
     * @hash   -1523281304
     */
    MCAPI static class std::unordered_map<class HashedString, class WeakPtr<class Item>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class WeakPtr<class Item>>>> mTileNamespaceToItemMap;

};