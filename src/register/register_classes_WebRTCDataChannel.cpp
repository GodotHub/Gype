
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/web_rtc_data_channel.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_WebRTCDataChannel() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<WebRTCDataChannel>("WebRTCDataChannel")
			.constructor<>()
			.base<PacketPeer>()
			.property<static_cast<WebRTCDataChannel::WriteMode (WebRTCDataChannel::*)() const>(&WebRTCDataChannel::get_write_mode), static_cast<void (WebRTCDataChannel::*)(WebRTCDataChannel::WriteMode)>(&WebRTCDataChannel::set_write_mode)>((new std::string("write_mode"))->c_str())
			.fun<static_cast<Error (WebRTCDataChannel::*)()>(&WebRTCDataChannel::poll)>((new std::string("poll"))->c_str())
			.fun<static_cast<void (WebRTCDataChannel::*)()>(&WebRTCDataChannel::close)>((new std::string("close"))->c_str())
			.fun<static_cast<bool (WebRTCDataChannel::*)() const>(&WebRTCDataChannel::was_string_packet)>((new std::string("was_string_packet"))->c_str())
			.fun<static_cast<WebRTCDataChannel::ChannelState (WebRTCDataChannel::*)() const>(&WebRTCDataChannel::get_ready_state)>((new std::string("get_ready_state"))->c_str())
			.fun<static_cast<String (WebRTCDataChannel::*)() const>(&WebRTCDataChannel::get_label)>((new std::string("get_label"))->c_str())
			.fun<static_cast<bool (WebRTCDataChannel::*)() const>(&WebRTCDataChannel::is_ordered)>((new std::string("is_ordered"))->c_str())
			.fun<static_cast<int32_t (WebRTCDataChannel::*)() const>(&WebRTCDataChannel::get_id)>((new std::string("get_id"))->c_str())
			.fun<static_cast<int32_t (WebRTCDataChannel::*)() const>(&WebRTCDataChannel::get_max_packet_life_time)>((new std::string("get_max_packet_life_time"))->c_str())
			.fun<static_cast<int32_t (WebRTCDataChannel::*)() const>(&WebRTCDataChannel::get_max_retransmits)>((new std::string("get_max_retransmits"))->c_str())
			.fun<static_cast<String (WebRTCDataChannel::*)() const>(&WebRTCDataChannel::get_protocol)>((new std::string("get_protocol"))->c_str())
			.fun<static_cast<bool (WebRTCDataChannel::*)() const>(&WebRTCDataChannel::is_negotiated)>((new std::string("is_negotiated"))->c_str())
			.fun<static_cast<int32_t (WebRTCDataChannel::*)() const>(&WebRTCDataChannel::get_buffered_amount)>((new std::string("get_buffered_amount"))->c_str());
	qjs::Value _WriteMode = context->newObject();
	_WriteMode[(new std::string("WRITE_MODE_TEXT"))->c_str()] = WebRTCDataChannel::WriteMode::WRITE_MODE_TEXT;
	_WriteMode[(new std::string("WRITE_MODE_BINARY"))->c_str()] = WebRTCDataChannel::WriteMode::WRITE_MODE_BINARY;
	_module.add("WriteMode", std::move(_WriteMode));
	qjs::Value _ChannelState = context->newObject();
	_ChannelState[(new std::string("STATE_CONNECTING"))->c_str()] = WebRTCDataChannel::ChannelState::STATE_CONNECTING;
	_ChannelState[(new std::string("STATE_OPEN"))->c_str()] = WebRTCDataChannel::ChannelState::STATE_OPEN;
	_ChannelState[(new std::string("STATE_CLOSING"))->c_str()] = WebRTCDataChannel::ChannelState::STATE_CLOSING;
	_ChannelState[(new std::string("STATE_CLOSED"))->c_str()] = WebRTCDataChannel::ChannelState::STATE_CLOSED;
	_module.add("ChannelState", std::move(_ChannelState));
}