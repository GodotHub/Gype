
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/multiplayer_peer_extension.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MultiplayerPeerExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<MultiplayerPeerExtension>("MultiplayerPeerExtension")
			.constructor<>()
			.base<MultiplayerPeer>()
			.fun<static_cast<Error (MultiplayerPeerExtension::*)(const uint8_t **, int32_t *)>(&MultiplayerPeerExtension::_get_packet)>((new std::string("_get_packet"))->c_str())
			.fun<static_cast<Error (MultiplayerPeerExtension::*)(const uint8_t *, int32_t)>(&MultiplayerPeerExtension::_put_packet)>((new std::string("_put_packet"))->c_str())
			.fun<static_cast<int32_t (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_get_available_packet_count)>((new std::string("_get_available_packet_count"))->c_str())
			.fun<static_cast<int32_t (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_get_max_packet_size)>((new std::string("_get_max_packet_size"))->c_str())
			.fun<static_cast<PackedByteArray (MultiplayerPeerExtension::*)()>(&MultiplayerPeerExtension::_get_packet_script)>((new std::string("_get_packet_script"))->c_str())
			.fun<static_cast<Error (MultiplayerPeerExtension::*)(const PackedByteArray &)>(&MultiplayerPeerExtension::_put_packet_script)>((new std::string("_put_packet_script"))->c_str())
			.fun<static_cast<int32_t (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_get_packet_channel)>((new std::string("_get_packet_channel"))->c_str())
			.fun<static_cast<MultiplayerPeer::TransferMode (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_get_packet_mode)>((new std::string("_get_packet_mode"))->c_str())
			.fun<static_cast<void (MultiplayerPeerExtension::*)(int32_t)>(&MultiplayerPeerExtension::_set_transfer_channel)>((new std::string("_set_transfer_channel"))->c_str())
			.fun<static_cast<int32_t (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_get_transfer_channel)>((new std::string("_get_transfer_channel"))->c_str())
			.fun<static_cast<void (MultiplayerPeerExtension::*)(MultiplayerPeer::TransferMode)>(&MultiplayerPeerExtension::_set_transfer_mode)>((new std::string("_set_transfer_mode"))->c_str())
			.fun<static_cast<MultiplayerPeer::TransferMode (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_get_transfer_mode)>((new std::string("_get_transfer_mode"))->c_str())
			.fun<static_cast<void (MultiplayerPeerExtension::*)(int32_t)>(&MultiplayerPeerExtension::_set_target_peer)>((new std::string("_set_target_peer"))->c_str())
			.fun<static_cast<int32_t (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_get_packet_peer)>((new std::string("_get_packet_peer"))->c_str())
			.fun<static_cast<bool (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_is_server)>((new std::string("_is_server"))->c_str())
			.fun<static_cast<void (MultiplayerPeerExtension::*)()>(&MultiplayerPeerExtension::_poll)>((new std::string("_poll"))->c_str())
			.fun<static_cast<void (MultiplayerPeerExtension::*)()>(&MultiplayerPeerExtension::_close)>((new std::string("_close"))->c_str())
			.fun<static_cast<void (MultiplayerPeerExtension::*)(int32_t, bool)>(&MultiplayerPeerExtension::_disconnect_peer)>((new std::string("_disconnect_peer"))->c_str())
			.fun<static_cast<int32_t (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_get_unique_id)>((new std::string("_get_unique_id"))->c_str())
			.fun<static_cast<void (MultiplayerPeerExtension::*)(bool)>(&MultiplayerPeerExtension::_set_refuse_new_connections)>((new std::string("_set_refuse_new_connections"))->c_str())
			.fun<static_cast<bool (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_is_refusing_new_connections)>((new std::string("_is_refusing_new_connections"))->c_str())
			.fun<static_cast<bool (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_is_server_relay_supported)>((new std::string("_is_server_relay_supported"))->c_str())
			.fun<static_cast<MultiplayerPeer::ConnectionStatus (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_get_connection_status)>((new std::string("_get_connection_status"))->c_str());
}