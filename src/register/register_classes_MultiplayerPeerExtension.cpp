#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/multiplayer_peer_extension.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MultiplayerPeerExtension() {
	qjs::Context::Module &_module = _General;
	_module.class_<MultiplayerPeerExtension>("MultiplayerPeerExtension")
			.constructor<>()
			.fun<static_cast<Error (MultiplayerPeerExtension::*)(const uint8_t **, int32_t *)>(&MultiplayerPeerExtension::_get_packet)>("_get_packet")
			.fun<static_cast<Error (MultiplayerPeerExtension::*)(const uint8_t *, int32_t)>(&MultiplayerPeerExtension::_put_packet)>("_put_packet")
			.fun<static_cast<int32_t (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_get_available_packet_count)>("_get_available_packet_count")
			.fun<static_cast<int32_t (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_get_max_packet_size)>("_get_max_packet_size")
			.fun<static_cast<PackedByteArray (MultiplayerPeerExtension::*)()>(&MultiplayerPeerExtension::_get_packet_script)>("_get_packet_script")
			.fun<static_cast<Error (MultiplayerPeerExtension::*)(const PackedByteArray &)>(&MultiplayerPeerExtension::_put_packet_script)>("_put_packet_script")
			.fun<static_cast<int32_t (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_get_packet_channel)>("_get_packet_channel")
			.fun<static_cast<MultiplayerPeer::TransferMode (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_get_packet_mode)>("_get_packet_mode")
			.fun<static_cast<void (MultiplayerPeerExtension::*)(int32_t)>(&MultiplayerPeerExtension::_set_transfer_channel)>("_set_transfer_channel")
			.fun<static_cast<int32_t (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_get_transfer_channel)>("_get_transfer_channel")
			.fun<static_cast<void (MultiplayerPeerExtension::*)(MultiplayerPeer::TransferMode)>(&MultiplayerPeerExtension::_set_transfer_mode)>("_set_transfer_mode")
			.fun<static_cast<MultiplayerPeer::TransferMode (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_get_transfer_mode)>("_get_transfer_mode")
			.fun<static_cast<void (MultiplayerPeerExtension::*)(int32_t)>(&MultiplayerPeerExtension::_set_target_peer)>("_set_target_peer")
			.fun<static_cast<int32_t (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_get_packet_peer)>("_get_packet_peer")
			.fun<static_cast<bool (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_is_server)>("_is_server")
			.fun<static_cast<void (MultiplayerPeerExtension::*)()>(&MultiplayerPeerExtension::_poll)>("_poll")
			.fun<static_cast<void (MultiplayerPeerExtension::*)()>(&MultiplayerPeerExtension::_close)>("_close")
			.fun<static_cast<void (MultiplayerPeerExtension::*)(int32_t, bool)>(&MultiplayerPeerExtension::_disconnect_peer)>("_disconnect_peer")
			.fun<static_cast<int32_t (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_get_unique_id)>("_get_unique_id")
			.fun<static_cast<void (MultiplayerPeerExtension::*)(bool)>(&MultiplayerPeerExtension::_set_refuse_new_connections)>("_set_refuse_new_connections")
			.fun<static_cast<bool (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_is_refusing_new_connections)>("_is_refusing_new_connections")
			.fun<static_cast<bool (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_is_server_relay_supported)>("_is_server_relay_supported")
			.fun<static_cast<MultiplayerPeer::ConnectionStatus (MultiplayerPeerExtension::*)() const>(&MultiplayerPeerExtension::_get_connection_status)>("_get_connection_status");
}