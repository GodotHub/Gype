#include <godot_cpp/classes/web_socket_multiplayer_peer.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/classes/web_socket_peer.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_WebSocketMultiplayerPeer() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<WebSocketMultiplayerPeer>("WebSocketMultiplayerPeer")
            .constructor<>()
            .base<MultiplayerPeer>()
            .property<static_cast<PackedStringArray(WebSocketMultiplayerPeer::*)()const>(&WebSocketMultiplayerPeer::get_supported_protocols),static_cast<void(WebSocketMultiplayerPeer::*)(const PackedStringArray &)>(&WebSocketMultiplayerPeer::set_supported_protocols)>("supported_protocols")
            .property<static_cast<PackedStringArray(WebSocketMultiplayerPeer::*)()const>(&WebSocketMultiplayerPeer::get_handshake_headers),static_cast<void(WebSocketMultiplayerPeer::*)(const PackedStringArray &)>(&WebSocketMultiplayerPeer::set_handshake_headers)>("handshake_headers")
            .property<static_cast<int32_t(WebSocketMultiplayerPeer::*)()const>(&WebSocketMultiplayerPeer::get_inbound_buffer_size),static_cast<void(WebSocketMultiplayerPeer::*)(int32_t)>(&WebSocketMultiplayerPeer::set_inbound_buffer_size)>("inbound_buffer_size")
            .property<static_cast<int32_t(WebSocketMultiplayerPeer::*)()const>(&WebSocketMultiplayerPeer::get_outbound_buffer_size),static_cast<void(WebSocketMultiplayerPeer::*)(int32_t)>(&WebSocketMultiplayerPeer::set_outbound_buffer_size)>("outbound_buffer_size")
            .property<static_cast<double(WebSocketMultiplayerPeer::*)()const>(&WebSocketMultiplayerPeer::get_handshake_timeout),static_cast<void(WebSocketMultiplayerPeer::*)(double)>(&WebSocketMultiplayerPeer::set_handshake_timeout)>("handshake_timeout")
            .property<static_cast<int32_t(WebSocketMultiplayerPeer::*)()const>(&WebSocketMultiplayerPeer::get_max_queued_packets),static_cast<void(WebSocketMultiplayerPeer::*)(int32_t)>(&WebSocketMultiplayerPeer::set_max_queued_packets)>("max_queued_packets")
            .fun<static_cast<Error(WebSocketMultiplayerPeer::*)(const String &,const Ref<TLSOptions> &)>(&WebSocketMultiplayerPeer::create_client)>("create_client")
            .fun<static_cast<Error(WebSocketMultiplayerPeer::*)(int32_t,const String &,const Ref<TLSOptions> &)>(&WebSocketMultiplayerPeer::create_server)>("create_server")
            .fun<static_cast<Ref<WebSocketPeer>(WebSocketMultiplayerPeer::*)(int32_t)const>(&WebSocketMultiplayerPeer::get_peer)>("get_peer")
            .fun<static_cast<String(WebSocketMultiplayerPeer::*)(int32_t)const>(&WebSocketMultiplayerPeer::get_peer_address)>("get_peer_address")
            .fun<static_cast<int32_t(WebSocketMultiplayerPeer::*)(int32_t)const>(&WebSocketMultiplayerPeer::get_peer_port)>("get_peer_port")
;}