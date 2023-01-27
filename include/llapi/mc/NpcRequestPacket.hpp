/**
 * @file  NpcRequestPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NpcRequestPacket.
 *
 */
class NpcRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCREQUESTPACKET
public:
    class NpcRequestPacket& operator=(class NpcRequestPacket const &) = delete;
    NpcRequestPacket(class NpcRequestPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1625423136
     */
    virtual ~NpcRequestPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@NpcRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1064153176
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@NpcRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -233349547
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@NpcRequestPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1068655470
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@NpcRequestPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1926995474
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0NpcRequestPacket@@QEAA@XZ
     * @hash   -2092426798
     */
    MCAPI NpcRequestPacket();
    /**
     * @symbol ?getInteractText@NpcRequestPacket@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1686800036
     */
    MCAPI std::string const & getInteractText() const;
    /**
     * @symbol ?getNpcName@NpcRequestPacket@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   200548958
     */
    MCAPI std::string const & getNpcName() const;
    /**
     * @symbol ?getSceneName@NpcRequestPacket@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1930746162
     */
    MCAPI std::string const & getSceneName() const;
    /**
     * @symbol ?getSkin@NpcRequestPacket@@QEBAHXZ
     * @hash   1984572726
     */
    MCAPI int getSkin() const;
    /**
     * @symbol ?requestSetInteractText@NpcRequestPacket@@SA?AV1@VActorRuntimeID@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1270033687
     */
    MCAPI static class NpcRequestPacket requestSetInteractText(class ActorRuntimeID, std::string);
    /**
     * @symbol ?requestSetName@NpcRequestPacket@@SA?AV1@VActorRuntimeID@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -73562873
     */
    MCAPI static class NpcRequestPacket requestSetName(class ActorRuntimeID, std::string);
    /**
     * @symbol ?requestSetSkin@NpcRequestPacket@@SA?AV1@VActorRuntimeID@@H@Z
     * @hash   -2061551159
     */
    MCAPI static class NpcRequestPacket requestSetSkin(class ActorRuntimeID, int);

//private:
    /**
     * @symbol ??0NpcRequestPacket@@AEAA@VActorRuntimeID@@W4RequestType@0@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@E@Z
     * @hash   -522536155
     */
    MCAPI NpcRequestPacket(class ActorRuntimeID, enum class NpcRequestPacket::RequestType, std::string, unsigned char);

private:

};