
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/classes/web_socket_peer.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_WebSocketPeer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<WebSocketPeer>("WebSocketPeer")
			.constructor<>()
			.base<PacketPeer>()
			.property<static_cast<PackedStringArray (WebSocketPeer::*)() const>(&WebSocketPeer::get_supported_protocols), static_cast<void (WebSocketPeer::*)(const PackedStringArray &)>(&WebSocketPeer::set_supported_protocols)>((new std::string("supported_protocols"))->c_str())
			.property<static_cast<PackedStringArray (WebSocketPeer::*)() const>(&WebSocketPeer::get_handshake_headers), static_cast<void (WebSocketPeer::*)(const PackedStringArray &)>(&WebSocketPeer::set_handshake_headers)>((new std::string("handshake_headers"))->c_str())
			.property<static_cast<int32_t (WebSocketPeer::*)() const>(&WebSocketPeer::get_inbound_buffer_size), static_cast<void (WebSocketPeer::*)(int32_t)>(&WebSocketPeer::set_inbound_buffer_size)>((new std::string("inbound_buffer_size"))->c_str())
			.property<static_cast<int32_t (WebSocketPeer::*)() const>(&WebSocketPeer::get_outbound_buffer_size), static_cast<void (WebSocketPeer::*)(int32_t)>(&WebSocketPeer::set_outbound_buffer_size)>((new std::string("outbound_buffer_size"))->c_str())
			.property<static_cast<int32_t (WebSocketPeer::*)() const>(&WebSocketPeer::get_max_queued_packets), static_cast<void (WebSocketPeer::*)(int32_t)>(&WebSocketPeer::set_max_queued_packets)>((new std::string("max_queued_packets"))->c_str())
			.fun<static_cast<Error (WebSocketPeer::*)(const String &, const Ref<TLSOptions> &)>(&WebSocketPeer::connect_to_url)>((new std::string("connect_to_url"))->c_str())
			.fun<static_cast<Error (WebSocketPeer::*)(const Ref<StreamPeer> &)>(&WebSocketPeer::accept_stream)>((new std::string("accept_stream"))->c_str())
			.fun<static_cast<Error (WebSocketPeer::*)(const PackedByteArray &, WebSocketPeer::WriteMode)>(&WebSocketPeer::send)>((new std::string("send"))->c_str())
			.fun<static_cast<Error (WebSocketPeer::*)(const String &)>(&WebSocketPeer::send_text)>((new std::string("send_text"))->c_str())
			.fun<static_cast<bool (WebSocketPeer::*)() const>(&WebSocketPeer::was_string_packet)>((new std::string("was_string_packet"))->c_str())
			.fun<static_cast<void (WebSocketPeer::*)()>(&WebSocketPeer::poll)>((new std::string("poll"))->c_str())
			.fun<static_cast<void (WebSocketPeer::*)(int32_t, const String &)>(&WebSocketPeer::close)>((new std::string("close"))->c_str())
			.fun<static_cast<String (WebSocketPeer::*)() const>(&WebSocketPeer::get_connected_host)>((new std::string("get_connected_host"))->c_str())
			.fun<static_cast<uint16_t (WebSocketPeer::*)() const>(&WebSocketPeer::get_connected_port)>((new std::string("get_connected_port"))->c_str())
			.fun<static_cast<String (WebSocketPeer::*)() const>(&WebSocketPeer::get_selected_protocol)>((new std::string("get_selected_protocol"))->c_str())
			.fun<static_cast<String (WebSocketPeer::*)() const>(&WebSocketPeer::get_requested_url)>((new std::string("get_requested_url"))->c_str())
			.fun<static_cast<void (WebSocketPeer::*)(bool)>(&WebSocketPeer::set_no_delay)>((new std::string("set_no_delay"))->c_str())
			.fun<static_cast<int32_t (WebSocketPeer::*)() const>(&WebSocketPeer::get_current_outbound_buffered_amount)>((new std::string("get_current_outbound_buffered_amount"))->c_str())
			.fun<static_cast<WebSocketPeer::State (WebSocketPeer::*)() const>(&WebSocketPeer::get_ready_state)>((new std::string("get_ready_state"))->c_str())
			.fun<static_cast<int32_t (WebSocketPeer::*)() const>(&WebSocketPeer::get_close_code)>((new std::string("get_close_code"))->c_str())
			.fun<static_cast<String (WebSocketPeer::*)() const>(&WebSocketPeer::get_close_reason)>((new std::string("get_close_reason"))->c_str());
	qjs::Value _WriteMode = context->newObject();
	_WriteMode[(new std::string("WRITE_MODE_TEXT"))->c_str()] = WebSocketPeer::WriteMode::WRITE_MODE_TEXT;
	_WriteMode[(new std::string("WRITE_MODE_BINARY"))->c_str()] = WebSocketPeer::WriteMode::WRITE_MODE_BINARY;
	_module.add("WriteMode", std::move(_WriteMode));
	qjs::Value _State = context->newObject();
	_State[(new std::string("STATE_CONNECTING"))->c_str()] = WebSocketPeer::State::STATE_CONNECTING;
	_State[(new std::string("STATE_OPEN"))->c_str()] = WebSocketPeer::State::STATE_OPEN;
	_State[(new std::string("STATE_CLOSING"))->c_str()] = WebSocketPeer::State::STATE_CLOSING;
	_State[(new std::string("STATE_CLOSED"))->c_str()] = WebSocketPeer::State::STATE_CLOSED;
	_module.add("State", std::move(_State));
}