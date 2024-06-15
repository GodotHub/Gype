#include <godot_cpp/classes/e_net_packet_peer.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ENetPacketPeer() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<ENetPacketPeer>("ENetPacketPeer")
            .constructor<>()
            .base<PacketPeer>()
            .static_fun<&ENetPacketPeer::PACKET_LOSS_SCALE>("PACKET_LOSS_SCALE")
            .static_fun<&ENetPacketPeer::PACKET_THROTTLE_SCALE>("PACKET_THROTTLE_SCALE")
            .static_fun<&ENetPacketPeer::FLAG_RELIABLE>("FLAG_RELIABLE")
            .static_fun<&ENetPacketPeer::FLAG_UNSEQUENCED>("FLAG_UNSEQUENCED")
            .static_fun<&ENetPacketPeer::FLAG_UNRELIABLE_FRAGMENT>("FLAG_UNRELIABLE_FRAGMENT")
            .fun<static_cast<void(ENetPacketPeer::*)(int32_t)>(&ENetPacketPeer::peer_disconnect)>("peer_disconnect")
            .fun<static_cast<void(ENetPacketPeer::*)(int32_t)>(&ENetPacketPeer::peer_disconnect_later)>("peer_disconnect_later")
            .fun<static_cast<void(ENetPacketPeer::*)(int32_t)>(&ENetPacketPeer::peer_disconnect_now)>("peer_disconnect_now")
            .fun<static_cast<void(ENetPacketPeer::*)()>(&ENetPacketPeer::ping)>("ping")
            .fun<static_cast<void(ENetPacketPeer::*)(int32_t)>(&ENetPacketPeer::ping_interval)>("ping_interval")
            .fun<static_cast<void(ENetPacketPeer::*)()>(&ENetPacketPeer::reset)>("reset")
            .fun<static_cast<Error(ENetPacketPeer::*)(int32_t,const PackedByteArray &,int32_t)>(&ENetPacketPeer::send)>("send")
            .fun<static_cast<void(ENetPacketPeer::*)(int32_t,int32_t,int32_t)>(&ENetPacketPeer::throttle_configure)>("throttle_configure")
            .fun<static_cast<void(ENetPacketPeer::*)(int32_t,int32_t,int32_t)>(&ENetPacketPeer::set_timeout)>("set_timeout")
            .fun<static_cast<String(ENetPacketPeer::*)()const>(&ENetPacketPeer::get_remote_address)>("get_remote_address")
            .fun<static_cast<int32_t(ENetPacketPeer::*)()const>(&ENetPacketPeer::get_remote_port)>("get_remote_port")
            .fun<static_cast<double(ENetPacketPeer::*)(ENetPacketPeer::PeerStatistic)>(&ENetPacketPeer::get_statistic)>("get_statistic")
            .fun<static_cast<ENetPacketPeer::PeerState(ENetPacketPeer::*)()const>(&ENetPacketPeer::get_state)>("get_state")
            .fun<static_cast<int32_t(ENetPacketPeer::*)()const>(&ENetPacketPeer::get_channels)>("get_channels")
            .fun<static_cast<bool(ENetPacketPeer::*)()const>(&ENetPacketPeer::is_active)>("is_active")
;    qjs::Value _PeerState = context->newObject();
    _PeerState["STATE_DISCONNECTED"] = ENetPacketPeer::PeerState::STATE_DISCONNECTED;
    _PeerState["STATE_CONNECTING"] = ENetPacketPeer::PeerState::STATE_CONNECTING;
    _PeerState["STATE_ACKNOWLEDGING_CONNECT"] = ENetPacketPeer::PeerState::STATE_ACKNOWLEDGING_CONNECT;
    _PeerState["STATE_CONNECTION_PENDING"] = ENetPacketPeer::PeerState::STATE_CONNECTION_PENDING;
    _PeerState["STATE_CONNECTION_SUCCEEDED"] = ENetPacketPeer::PeerState::STATE_CONNECTION_SUCCEEDED;
    _PeerState["STATE_CONNECTED"] = ENetPacketPeer::PeerState::STATE_CONNECTED;
    _PeerState["STATE_DISCONNECT_LATER"] = ENetPacketPeer::PeerState::STATE_DISCONNECT_LATER;
    _PeerState["STATE_DISCONNECTING"] = ENetPacketPeer::PeerState::STATE_DISCONNECTING;
    _PeerState["STATE_ACKNOWLEDGING_DISCONNECT"] = ENetPacketPeer::PeerState::STATE_ACKNOWLEDGING_DISCONNECT;
    _PeerState["STATE_ZOMBIE"] = ENetPacketPeer::PeerState::STATE_ZOMBIE;
    _module.add("PeerState", std::move(_PeerState));
    qjs::Value _PeerStatistic = context->newObject();
    _PeerStatistic["PEER_PACKET_LOSS"] = ENetPacketPeer::PeerStatistic::PEER_PACKET_LOSS;
    _PeerStatistic["PEER_PACKET_LOSS_VARIANCE"] = ENetPacketPeer::PeerStatistic::PEER_PACKET_LOSS_VARIANCE;
    _PeerStatistic["PEER_PACKET_LOSS_EPOCH"] = ENetPacketPeer::PeerStatistic::PEER_PACKET_LOSS_EPOCH;
    _PeerStatistic["PEER_ROUND_TRIP_TIME"] = ENetPacketPeer::PeerStatistic::PEER_ROUND_TRIP_TIME;
    _PeerStatistic["PEER_ROUND_TRIP_TIME_VARIANCE"] = ENetPacketPeer::PeerStatistic::PEER_ROUND_TRIP_TIME_VARIANCE;
    _PeerStatistic["PEER_LAST_ROUND_TRIP_TIME"] = ENetPacketPeer::PeerStatistic::PEER_LAST_ROUND_TRIP_TIME;
    _PeerStatistic["PEER_LAST_ROUND_TRIP_TIME_VARIANCE"] = ENetPacketPeer::PeerStatistic::PEER_LAST_ROUND_TRIP_TIME_VARIANCE;
    _PeerStatistic["PEER_PACKET_THROTTLE"] = ENetPacketPeer::PeerStatistic::PEER_PACKET_THROTTLE;
    _PeerStatistic["PEER_PACKET_THROTTLE_LIMIT"] = ENetPacketPeer::PeerStatistic::PEER_PACKET_THROTTLE_LIMIT;
    _PeerStatistic["PEER_PACKET_THROTTLE_COUNTER"] = ENetPacketPeer::PeerStatistic::PEER_PACKET_THROTTLE_COUNTER;
    _PeerStatistic["PEER_PACKET_THROTTLE_EPOCH"] = ENetPacketPeer::PeerStatistic::PEER_PACKET_THROTTLE_EPOCH;
    _PeerStatistic["PEER_PACKET_THROTTLE_ACCELERATION"] = ENetPacketPeer::PeerStatistic::PEER_PACKET_THROTTLE_ACCELERATION;
    _PeerStatistic["PEER_PACKET_THROTTLE_DECELERATION"] = ENetPacketPeer::PeerStatistic::PEER_PACKET_THROTTLE_DECELERATION;
    _PeerStatistic["PEER_PACKET_THROTTLE_INTERVAL"] = ENetPacketPeer::PeerStatistic::PEER_PACKET_THROTTLE_INTERVAL;
    _module.add("PeerStatistic", std::move(_PeerStatistic));
}