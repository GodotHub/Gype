
#include <godot_cpp/classes/e_net_packet_peer.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ENetPacketPeer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ENetPacketPeer>("ENetPacketPeer")
			.constructor<>()
			.base<PacketPeer>()
			.static_fun<&ENetPacketPeer::PACKET_LOSS_SCALE>((new std::string("PACKET_LOSS_SCALE"))->c_str())
			.static_fun<&ENetPacketPeer::PACKET_THROTTLE_SCALE>((new std::string("PACKET_THROTTLE_SCALE"))->c_str())
			.static_fun<&ENetPacketPeer::FLAG_RELIABLE>((new std::string("FLAG_RELIABLE"))->c_str())
			.static_fun<&ENetPacketPeer::FLAG_UNSEQUENCED>((new std::string("FLAG_UNSEQUENCED"))->c_str())
			.static_fun<&ENetPacketPeer::FLAG_UNRELIABLE_FRAGMENT>((new std::string("FLAG_UNRELIABLE_FRAGMENT"))->c_str())
			.fun<static_cast<void (ENetPacketPeer::*)(int32_t)>(&ENetPacketPeer::peer_disconnect)>((new std::string("peer_disconnect"))->c_str())
			.fun<static_cast<void (ENetPacketPeer::*)(int32_t)>(&ENetPacketPeer::peer_disconnect_later)>((new std::string("peer_disconnect_later"))->c_str())
			.fun<static_cast<void (ENetPacketPeer::*)(int32_t)>(&ENetPacketPeer::peer_disconnect_now)>((new std::string("peer_disconnect_now"))->c_str())
			.fun<static_cast<void (ENetPacketPeer::*)()>(&ENetPacketPeer::ping)>((new std::string("ping"))->c_str())
			.fun<static_cast<void (ENetPacketPeer::*)(int32_t)>(&ENetPacketPeer::ping_interval)>((new std::string("ping_interval"))->c_str())
			.fun<static_cast<void (ENetPacketPeer::*)()>(&ENetPacketPeer::reset)>((new std::string("reset"))->c_str())
			.fun<static_cast<Error (ENetPacketPeer::*)(int32_t, const PackedByteArray &, int32_t)>(&ENetPacketPeer::send)>((new std::string("send"))->c_str())
			.fun<static_cast<void (ENetPacketPeer::*)(int32_t, int32_t, int32_t)>(&ENetPacketPeer::throttle_configure)>((new std::string("throttle_configure"))->c_str())
			.fun<static_cast<void (ENetPacketPeer::*)(int32_t, int32_t, int32_t)>(&ENetPacketPeer::set_timeout)>((new std::string("set_timeout"))->c_str())
			.fun<static_cast<String (ENetPacketPeer::*)() const>(&ENetPacketPeer::get_remote_address)>((new std::string("get_remote_address"))->c_str())
			.fun<static_cast<int32_t (ENetPacketPeer::*)() const>(&ENetPacketPeer::get_remote_port)>((new std::string("get_remote_port"))->c_str())
			.fun<static_cast<double (ENetPacketPeer::*)(ENetPacketPeer::PeerStatistic)>(&ENetPacketPeer::get_statistic)>((new std::string("get_statistic"))->c_str())
			.fun<static_cast<ENetPacketPeer::PeerState (ENetPacketPeer::*)() const>(&ENetPacketPeer::get_state)>((new std::string("get_state"))->c_str())
			.fun<static_cast<int32_t (ENetPacketPeer::*)() const>(&ENetPacketPeer::get_channels)>((new std::string("get_channels"))->c_str())
			.fun<static_cast<bool (ENetPacketPeer::*)() const>(&ENetPacketPeer::is_active)>((new std::string("is_active"))->c_str());
	qjs::Value _PeerState = context->newObject();
	_PeerState[(new std::string("STATE_DISCONNECTED"))->c_str()] = ENetPacketPeer::PeerState::STATE_DISCONNECTED;
	_PeerState[(new std::string("STATE_CONNECTING"))->c_str()] = ENetPacketPeer::PeerState::STATE_CONNECTING;
	_PeerState[(new std::string("STATE_ACKNOWLEDGING_CONNECT"))->c_str()] = ENetPacketPeer::PeerState::STATE_ACKNOWLEDGING_CONNECT;
	_PeerState[(new std::string("STATE_CONNECTION_PENDING"))->c_str()] = ENetPacketPeer::PeerState::STATE_CONNECTION_PENDING;
	_PeerState[(new std::string("STATE_CONNECTION_SUCCEEDED"))->c_str()] = ENetPacketPeer::PeerState::STATE_CONNECTION_SUCCEEDED;
	_PeerState[(new std::string("STATE_CONNECTED"))->c_str()] = ENetPacketPeer::PeerState::STATE_CONNECTED;
	_PeerState[(new std::string("STATE_DISCONNECT_LATER"))->c_str()] = ENetPacketPeer::PeerState::STATE_DISCONNECT_LATER;
	_PeerState[(new std::string("STATE_DISCONNECTING"))->c_str()] = ENetPacketPeer::PeerState::STATE_DISCONNECTING;
	_PeerState[(new std::string("STATE_ACKNOWLEDGING_DISCONNECT"))->c_str()] = ENetPacketPeer::PeerState::STATE_ACKNOWLEDGING_DISCONNECT;
	_PeerState[(new std::string("STATE_ZOMBIE"))->c_str()] = ENetPacketPeer::PeerState::STATE_ZOMBIE;
	_module.add("PeerState", std::move(_PeerState));
	qjs::Value _PeerStatistic = context->newObject();
	_PeerStatistic[(new std::string("PEER_PACKET_LOSS"))->c_str()] = ENetPacketPeer::PeerStatistic::PEER_PACKET_LOSS;
	_PeerStatistic[(new std::string("PEER_PACKET_LOSS_VARIANCE"))->c_str()] = ENetPacketPeer::PeerStatistic::PEER_PACKET_LOSS_VARIANCE;
	_PeerStatistic[(new std::string("PEER_PACKET_LOSS_EPOCH"))->c_str()] = ENetPacketPeer::PeerStatistic::PEER_PACKET_LOSS_EPOCH;
	_PeerStatistic[(new std::string("PEER_ROUND_TRIP_TIME"))->c_str()] = ENetPacketPeer::PeerStatistic::PEER_ROUND_TRIP_TIME;
	_PeerStatistic[(new std::string("PEER_ROUND_TRIP_TIME_VARIANCE"))->c_str()] = ENetPacketPeer::PeerStatistic::PEER_ROUND_TRIP_TIME_VARIANCE;
	_PeerStatistic[(new std::string("PEER_LAST_ROUND_TRIP_TIME"))->c_str()] = ENetPacketPeer::PeerStatistic::PEER_LAST_ROUND_TRIP_TIME;
	_PeerStatistic[(new std::string("PEER_LAST_ROUND_TRIP_TIME_VARIANCE"))->c_str()] = ENetPacketPeer::PeerStatistic::PEER_LAST_ROUND_TRIP_TIME_VARIANCE;
	_PeerStatistic[(new std::string("PEER_PACKET_THROTTLE"))->c_str()] = ENetPacketPeer::PeerStatistic::PEER_PACKET_THROTTLE;
	_PeerStatistic[(new std::string("PEER_PACKET_THROTTLE_LIMIT"))->c_str()] = ENetPacketPeer::PeerStatistic::PEER_PACKET_THROTTLE_LIMIT;
	_PeerStatistic[(new std::string("PEER_PACKET_THROTTLE_COUNTER"))->c_str()] = ENetPacketPeer::PeerStatistic::PEER_PACKET_THROTTLE_COUNTER;
	_PeerStatistic[(new std::string("PEER_PACKET_THROTTLE_EPOCH"))->c_str()] = ENetPacketPeer::PeerStatistic::PEER_PACKET_THROTTLE_EPOCH;
	_PeerStatistic[(new std::string("PEER_PACKET_THROTTLE_ACCELERATION"))->c_str()] = ENetPacketPeer::PeerStatistic::PEER_PACKET_THROTTLE_ACCELERATION;
	_PeerStatistic[(new std::string("PEER_PACKET_THROTTLE_DECELERATION"))->c_str()] = ENetPacketPeer::PeerStatistic::PEER_PACKET_THROTTLE_DECELERATION;
	_PeerStatistic[(new std::string("PEER_PACKET_THROTTLE_INTERVAL"))->c_str()] = ENetPacketPeer::PeerStatistic::PEER_PACKET_THROTTLE_INTERVAL;
	_module.add("PeerStatistic", std::move(_PeerStatistic));
}