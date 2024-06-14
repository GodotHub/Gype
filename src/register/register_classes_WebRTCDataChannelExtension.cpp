
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/web_rtc_data_channel.hpp>
#include <godot_cpp/classes/web_rtc_data_channel_extension.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_WebRTCDataChannelExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<WebRTCDataChannelExtension>("WebRTCDataChannelExtension")
			.constructor<>()
			.base<WebRTCDataChannel>()
			.fun<static_cast<Error (WebRTCDataChannelExtension::*)(const uint8_t **, int32_t *)>(&WebRTCDataChannelExtension::_get_packet)>((new std::string("_get_packet"))->c_str())
			.fun<static_cast<Error (WebRTCDataChannelExtension::*)(const uint8_t *, int32_t)>(&WebRTCDataChannelExtension::_put_packet)>((new std::string("_put_packet"))->c_str())
			.fun<static_cast<int32_t (WebRTCDataChannelExtension::*)() const>(&WebRTCDataChannelExtension::_get_available_packet_count)>((new std::string("_get_available_packet_count"))->c_str())
			.fun<static_cast<int32_t (WebRTCDataChannelExtension::*)() const>(&WebRTCDataChannelExtension::_get_max_packet_size)>((new std::string("_get_max_packet_size"))->c_str())
			.fun<static_cast<Error (WebRTCDataChannelExtension::*)()>(&WebRTCDataChannelExtension::_poll)>((new std::string("_poll"))->c_str())
			.fun<static_cast<void (WebRTCDataChannelExtension::*)()>(&WebRTCDataChannelExtension::_close)>((new std::string("_close"))->c_str())
			.fun<static_cast<void (WebRTCDataChannelExtension::*)(WebRTCDataChannel::WriteMode)>(&WebRTCDataChannelExtension::_set_write_mode)>((new std::string("_set_write_mode"))->c_str())
			.fun<static_cast<WebRTCDataChannel::WriteMode (WebRTCDataChannelExtension::*)() const>(&WebRTCDataChannelExtension::_get_write_mode)>((new std::string("_get_write_mode"))->c_str())
			.fun<static_cast<bool (WebRTCDataChannelExtension::*)() const>(&WebRTCDataChannelExtension::_was_string_packet)>((new std::string("_was_string_packet"))->c_str())
			.fun<static_cast<WebRTCDataChannel::ChannelState (WebRTCDataChannelExtension::*)() const>(&WebRTCDataChannelExtension::_get_ready_state)>((new std::string("_get_ready_state"))->c_str())
			.fun<static_cast<String (WebRTCDataChannelExtension::*)() const>(&WebRTCDataChannelExtension::_get_label)>((new std::string("_get_label"))->c_str())
			.fun<static_cast<bool (WebRTCDataChannelExtension::*)() const>(&WebRTCDataChannelExtension::_is_ordered)>((new std::string("_is_ordered"))->c_str())
			.fun<static_cast<int32_t (WebRTCDataChannelExtension::*)() const>(&WebRTCDataChannelExtension::_get_id)>((new std::string("_get_id"))->c_str())
			.fun<static_cast<int32_t (WebRTCDataChannelExtension::*)() const>(&WebRTCDataChannelExtension::_get_max_packet_life_time)>((new std::string("_get_max_packet_life_time"))->c_str())
			.fun<static_cast<int32_t (WebRTCDataChannelExtension::*)() const>(&WebRTCDataChannelExtension::_get_max_retransmits)>((new std::string("_get_max_retransmits"))->c_str())
			.fun<static_cast<String (WebRTCDataChannelExtension::*)() const>(&WebRTCDataChannelExtension::_get_protocol)>((new std::string("_get_protocol"))->c_str())
			.fun<static_cast<bool (WebRTCDataChannelExtension::*)() const>(&WebRTCDataChannelExtension::_is_negotiated)>((new std::string("_is_negotiated"))->c_str())
			.fun<static_cast<int32_t (WebRTCDataChannelExtension::*)() const>(&WebRTCDataChannelExtension::_get_buffered_amount)>((new std::string("_get_buffered_amount"))->c_str());
}