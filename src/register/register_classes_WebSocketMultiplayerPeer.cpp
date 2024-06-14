
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/classes/web_socket_multiplayer_peer.hpp>
#include <godot_cpp/classes/web_socket_peer.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_WebSocketMultiplayerPeer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<WebSocketMultiplayerPeer>("WebSocketMultiplayerPeer")
			.constructor<>()
			.base<MultiplayerPeer>()
			.property<static_cast<PackedStringArray (WebSocketMultiplayerPeer::*)() const>(&WebSocketMultiplayerPeer::get_supported_protocols), static_cast<void (WebSocketMultiplayerPeer::*)(const PackedStringArray &)>(&WebSocketMultiplayerPeer::set_supported_protocols)>((new std::string("supported_protocols"))->c_str())
			.property<static_cast<PackedStringArray (WebSocketMultiplayerPeer::*)() const>(&WebSocketMultiplayerPeer::get_handshake_headers), static_cast<void (WebSocketMultiplayerPeer::*)(const PackedStringArray &)>(&WebSocketMultiplayerPeer::set_handshake_headers)>((new std::string("handshake_headers"))->c_str())
			.property<static_cast<int32_t (WebSocketMultiplayerPeer::*)() const>(&WebSocketMultiplayerPeer::get_inbound_buffer_size), static_cast<void (WebSocketMultiplayerPeer::*)(int32_t)>(&WebSocketMultiplayerPeer::set_inbound_buffer_size)>((new std::string("inbound_buffer_size"))->c_str())
			.property<static_cast<int32_t (WebSocketMultiplayerPeer::*)() const>(&WebSocketMultiplayerPeer::get_outbound_buffer_size), static_cast<void (WebSocketMultiplayerPeer::*)(int32_t)>(&WebSocketMultiplayerPeer::set_outbound_buffer_size)>((new std::string("outbound_buffer_size"))->c_str())
			.property<static_cast<double (WebSocketMultiplayerPeer::*)() const>(&WebSocketMultiplayerPeer::get_handshake_timeout), static_cast<void (WebSocketMultiplayerPeer::*)(double)>(&WebSocketMultiplayerPeer::set_handshake_timeout)>((new std::string("handshake_timeout"))->c_str())
			.property<static_cast<int32_t (WebSocketMultiplayerPeer::*)() const>(&WebSocketMultiplayerPeer::get_max_queued_packets), static_cast<void (WebSocketMultiplayerPeer::*)(int32_t)>(&WebSocketMultiplayerPeer::set_max_queued_packets)>((new std::string("max_queued_packets"))->c_str())
			.fun<static_cast<Error (WebSocketMultiplayerPeer::*)(const String &, const Ref<TLSOptions> &)>(&WebSocketMultiplayerPeer::create_client)>((new std::string("create_client"))->c_str())
			.fun<static_cast<Error (WebSocketMultiplayerPeer::*)(int32_t, const String &, const Ref<TLSOptions> &)>(&WebSocketMultiplayerPeer::create_server)>((new std::string("create_server"))->c_str())
			.fun<static_cast<Ref<WebSocketPeer> (WebSocketMultiplayerPeer::*)(int32_t) const>(&WebSocketMultiplayerPeer::get_peer)>((new std::string("get_peer"))->c_str())
			.fun<static_cast<String (WebSocketMultiplayerPeer::*)(int32_t) const>(&WebSocketMultiplayerPeer::get_peer_address)>((new std::string("get_peer_address"))->c_str())
			.fun<static_cast<int32_t (WebSocketMultiplayerPeer::*)(int32_t) const>(&WebSocketMultiplayerPeer::get_peer_port)>((new std::string("get_peer_port"))->c_str());
}