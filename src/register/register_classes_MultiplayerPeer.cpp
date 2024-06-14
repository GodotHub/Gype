
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MultiplayerPeer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<MultiplayerPeer>("MultiplayerPeer")
			.constructor<>()
			.base<PacketPeer>()
			.static_fun<&MultiplayerPeer::TARGET_PEER_BROADCAST>((new std::string("TARGET_PEER_BROADCAST"))->c_str())
			.static_fun<&MultiplayerPeer::TARGET_PEER_SERVER>((new std::string("TARGET_PEER_SERVER"))->c_str())
			.property<static_cast<bool (MultiplayerPeer::*)() const>(&MultiplayerPeer::is_refusing_new_connections), static_cast<void (MultiplayerPeer::*)(bool)>(&MultiplayerPeer::set_refuse_new_connections)>((new std::string("refuse_new_connections"))->c_str())
			.property<static_cast<MultiplayerPeer::TransferMode (MultiplayerPeer::*)() const>(&MultiplayerPeer::get_transfer_mode), static_cast<void (MultiplayerPeer::*)(MultiplayerPeer::TransferMode)>(&MultiplayerPeer::set_transfer_mode)>((new std::string("transfer_mode"))->c_str())
			.property<static_cast<int32_t (MultiplayerPeer::*)() const>(&MultiplayerPeer::get_transfer_channel), static_cast<void (MultiplayerPeer::*)(int32_t)>(&MultiplayerPeer::set_transfer_channel)>((new std::string("transfer_channel"))->c_str())
			.fun<static_cast<void (MultiplayerPeer::*)(int32_t)>(&MultiplayerPeer::set_target_peer)>((new std::string("set_target_peer"))->c_str())
			.fun<static_cast<int32_t (MultiplayerPeer::*)() const>(&MultiplayerPeer::get_packet_peer)>((new std::string("get_packet_peer"))->c_str())
			.fun<static_cast<int32_t (MultiplayerPeer::*)() const>(&MultiplayerPeer::get_packet_channel)>((new std::string("get_packet_channel"))->c_str())
			.fun<static_cast<MultiplayerPeer::TransferMode (MultiplayerPeer::*)() const>(&MultiplayerPeer::get_packet_mode)>((new std::string("get_packet_mode"))->c_str())
			.fun<static_cast<void (MultiplayerPeer::*)()>(&MultiplayerPeer::poll)>((new std::string("poll"))->c_str())
			.fun<static_cast<void (MultiplayerPeer::*)()>(&MultiplayerPeer::close)>((new std::string("close"))->c_str())
			.fun<static_cast<void (MultiplayerPeer::*)(int32_t, bool)>(&MultiplayerPeer::disconnect_peer)>((new std::string("disconnect_peer"))->c_str())
			.fun<static_cast<MultiplayerPeer::ConnectionStatus (MultiplayerPeer::*)() const>(&MultiplayerPeer::get_connection_status)>((new std::string("get_connection_status"))->c_str())
			.fun<static_cast<int32_t (MultiplayerPeer::*)() const>(&MultiplayerPeer::get_unique_id)>((new std::string("get_unique_id"))->c_str())
			.fun<static_cast<uint32_t (MultiplayerPeer::*)() const>(&MultiplayerPeer::generate_unique_id)>((new std::string("generate_unique_id"))->c_str())
			.fun<static_cast<bool (MultiplayerPeer::*)() const>(&MultiplayerPeer::is_server_relay_supported)>((new std::string("is_server_relay_supported"))->c_str());
	qjs::Value _ConnectionStatus = context->newObject();
	_ConnectionStatus[(new std::string("CONNECTION_DISCONNECTED"))->c_str()] = MultiplayerPeer::ConnectionStatus::CONNECTION_DISCONNECTED;
	_ConnectionStatus[(new std::string("CONNECTION_CONNECTING"))->c_str()] = MultiplayerPeer::ConnectionStatus::CONNECTION_CONNECTING;
	_ConnectionStatus[(new std::string("CONNECTION_CONNECTED"))->c_str()] = MultiplayerPeer::ConnectionStatus::CONNECTION_CONNECTED;
	_module.add("ConnectionStatus", std::move(_ConnectionStatus));
	qjs::Value _TransferMode = context->newObject();
	_TransferMode[(new std::string("TRANSFER_MODE_UNRELIABLE"))->c_str()] = MultiplayerPeer::TransferMode::TRANSFER_MODE_UNRELIABLE;
	_TransferMode[(new std::string("TRANSFER_MODE_UNRELIABLE_ORDERED"))->c_str()] = MultiplayerPeer::TransferMode::TRANSFER_MODE_UNRELIABLE_ORDERED;
	_TransferMode[(new std::string("TRANSFER_MODE_RELIABLE"))->c_str()] = MultiplayerPeer::TransferMode::TRANSFER_MODE_RELIABLE;
	_module.add("TransferMode", std::move(_TransferMode));
}