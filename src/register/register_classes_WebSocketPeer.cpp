#include <godot_cpp/classes/web_socket_peer.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_WebSocketPeer() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<WebSocketPeer>("WebSocketPeer")
            .constructor<>()
            .base<PacketPeer>()
            .property<static_cast<PackedStringArray(WebSocketPeer::*)()const>(&WebSocketPeer::get_supported_protocols),static_cast<void(WebSocketPeer::*)(const PackedStringArray &)>(&WebSocketPeer::set_supported_protocols)>("supported_protocols")
            .property<static_cast<PackedStringArray(WebSocketPeer::*)()const>(&WebSocketPeer::get_handshake_headers),static_cast<void(WebSocketPeer::*)(const PackedStringArray &)>(&WebSocketPeer::set_handshake_headers)>("handshake_headers")
            .property<static_cast<int32_t(WebSocketPeer::*)()const>(&WebSocketPeer::get_inbound_buffer_size),static_cast<void(WebSocketPeer::*)(int32_t)>(&WebSocketPeer::set_inbound_buffer_size)>("inbound_buffer_size")
            .property<static_cast<int32_t(WebSocketPeer::*)()const>(&WebSocketPeer::get_outbound_buffer_size),static_cast<void(WebSocketPeer::*)(int32_t)>(&WebSocketPeer::set_outbound_buffer_size)>("outbound_buffer_size")
            .property<static_cast<int32_t(WebSocketPeer::*)()const>(&WebSocketPeer::get_max_queued_packets),static_cast<void(WebSocketPeer::*)(int32_t)>(&WebSocketPeer::set_max_queued_packets)>("max_queued_packets")
            .fun<static_cast<Error(WebSocketPeer::*)(const String &,const Ref<TLSOptions> &)>(&WebSocketPeer::connect_to_url)>("connect_to_url")
            .fun<static_cast<Error(WebSocketPeer::*)(const Ref<StreamPeer> &)>(&WebSocketPeer::accept_stream)>("accept_stream")
            .fun<static_cast<Error(WebSocketPeer::*)(const PackedByteArray &,WebSocketPeer::WriteMode)>(&WebSocketPeer::send)>("send")
            .fun<static_cast<Error(WebSocketPeer::*)(const String &)>(&WebSocketPeer::send_text)>("send_text")
            .fun<static_cast<bool(WebSocketPeer::*)()const>(&WebSocketPeer::was_string_packet)>("was_string_packet")
            .fun<static_cast<void(WebSocketPeer::*)()>(&WebSocketPeer::poll)>("poll")
            .fun<static_cast<void(WebSocketPeer::*)(int32_t,const String &)>(&WebSocketPeer::close)>("close")
            .fun<static_cast<String(WebSocketPeer::*)()const>(&WebSocketPeer::get_connected_host)>("get_connected_host")
            .fun<static_cast<uint16_t(WebSocketPeer::*)()const>(&WebSocketPeer::get_connected_port)>("get_connected_port")
            .fun<static_cast<String(WebSocketPeer::*)()const>(&WebSocketPeer::get_selected_protocol)>("get_selected_protocol")
            .fun<static_cast<String(WebSocketPeer::*)()const>(&WebSocketPeer::get_requested_url)>("get_requested_url")
            .fun<static_cast<void(WebSocketPeer::*)(bool)>(&WebSocketPeer::set_no_delay)>("set_no_delay")
            .fun<static_cast<int32_t(WebSocketPeer::*)()const>(&WebSocketPeer::get_current_outbound_buffered_amount)>("get_current_outbound_buffered_amount")
            .fun<static_cast<WebSocketPeer::State(WebSocketPeer::*)()const>(&WebSocketPeer::get_ready_state)>("get_ready_state")
            .fun<static_cast<int32_t(WebSocketPeer::*)()const>(&WebSocketPeer::get_close_code)>("get_close_code")
            .fun<static_cast<String(WebSocketPeer::*)()const>(&WebSocketPeer::get_close_reason)>("get_close_reason")
;    qjs::Value _WriteMode = context->newObject();
    _WriteMode["WRITE_MODE_TEXT"] = WebSocketPeer::WriteMode::WRITE_MODE_TEXT;
    _WriteMode["WRITE_MODE_BINARY"] = WebSocketPeer::WriteMode::WRITE_MODE_BINARY;
    _module.add("WriteMode", std::move(_WriteMode));
    qjs::Value _State = context->newObject();
    _State["STATE_CONNECTING"] = WebSocketPeer::State::STATE_CONNECTING;
    _State["STATE_OPEN"] = WebSocketPeer::State::STATE_OPEN;
    _State["STATE_CLOSING"] = WebSocketPeer::State::STATE_CLOSING;
    _State["STATE_CLOSED"] = WebSocketPeer::State::STATE_CLOSED;
    _module.add("State", std::move(_State));
}