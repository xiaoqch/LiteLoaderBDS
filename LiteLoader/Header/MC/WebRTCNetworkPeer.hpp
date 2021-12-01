// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "NetworkPeer.hpp"
#define EXTRA_INCLUDE_PART_WEBRTCNETWORKPEER
#include "Extra/WebRTCNetworkPeerAPI.hpp"
#undef EXTRA_INCLUDE_PART_WEBRTCNETWORKPEER
class WebRTCNetworkPeer : public NetworkPeer {
#include "Extra/WebRTCNetworkPeerAPI.hpp"
public:
    virtual ~WebRTCNetworkPeer();
    virtual void sendPacket(std::string const&, int /*enum NetworkPeer::Reliability*/, int, unsigned short, int /*enum Compressibility*/);
    virtual int /*enum NetworkPeer::DataStatus*/ receivePacket(std::string&, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>> const&);
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;
    virtual void update();

public:
    MCAPI void setRemoteUserID(unsigned __int64);

    MCAPI static void pullIncomingData(class std::shared_ptr<struct NetherNetInstance> const&, class NetworkHandler&);

private:
    MCAPI void _updateConnectionStatus();
};