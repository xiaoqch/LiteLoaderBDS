// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_NETWORKHANDLER
#include "Extra/NetworkHandlerAPI.hpp"
#undef EXTRA_INCLUDE_PART_NETWORKHANDLER
class NetworkHandler {
#include "Extra/NetworkHandlerAPI.hpp"
public:
    virtual void unk_vfn_0();
    virtual void _onDisable();
    virtual void _onEnable();

public:
    MCAPI bool AddConnectionIfNeeded(unsigned __int64, class std::shared_ptr<struct NetherNetInstance> const&);
    MCAPI void disconnect();
    MCAPI void enableAsyncFlush(class NetworkIdentifier const&);
    MCAPI std::vector<std::unique_ptr<class NetworkHandler::Connection>> const& getConnections() const;
    MCAPI class Connector& getConnector();
    MCAPI class std::weak_ptr<class EncryptedNetworkPeer> getEncryptedPeerForUser(class NetworkIdentifier const&);
    MCAPI class NetworkIdentifier getLocalNetworkId() const;
    MCAPI class NetworkStatistics const* getNetworkStatistics() const;
    MCAPI class NetworkPeer* getPeerForUser(class NetworkIdentifier const&);
    MCAPI class NetworkIdentifier getPrimaryNetworkId() const;
    MCAPI class ResourcePackFileUploadManager& getResourcePackUploadManager(class PacketSender&, class NetworkIdentifier const&, std::string const&);
    MCAPI class NetworkIdentifier getServerId() const;
    MCAPI class ServerLocator& getServerLocator();
    MCAPI bool host(struct ConnectionDefinition const&);
    MCAPI void initializeSelectedTransportType();
    MCAPI bool isHostingPlayer(class NetworkIdentifier const&, unsigned char const&) const;
    MCAPI bool isServer() const;
    MCAPI void registerServerInstance(class NetEventCallback&);
    MCAPI void runEvents(bool);
    MCAPI void send(class NetworkIdentifier const&, class Packet const&, unsigned char);
    MCAPI void setCloseConnection(class NetworkIdentifier const&);
    MCAPI void unregisterClientOrServerInstance(unsigned char const&);
    MCAPI void update(std::vector<class WeakEntityRef> const*);

    MCAPI static class std::shared_ptr<struct NetherNetInstance> mNetherNetInstance;

private:
    MCAPI class NetworkHandler::Connection* _getConnectionFromId(class NetworkIdentifier const&) const;
    MCAPI void _handlePacketViolation(enum StreamReadResult, enum PacketViolationResponse, enum MinecraftPacketIds, class NetworkIdentifier const&, class NetworkHandler::Connection&, unsigned char, std::string const&);
    MCAPI void _sendInternal(class NetworkIdentifier const&, class Packet const&, std::string const&);
    MCAPI bool _sortAndPacketizeEvents(class NetworkHandler::Connection&, class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
};