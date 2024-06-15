#include <godot_cpp/classes/web_rtc_data_channel_extension.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/web_rtc_data_channel.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_WebRTCDataChannelExtension() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<WebRTCDataChannelExtension>("WebRTCDataChannelExtension")
            .constructor<>()
            .base<WebRTCDataChannel>()
            .fun<static_cast<Error(WebRTCDataChannelExtension::*)(const uint8_t **,int32_t*)>(&WebRTCDataChannelExtension::_get_packet)>("_get_packet")
            .fun<static_cast<Error(WebRTCDataChannelExtension::*)(const uint8_t*,int32_t)>(&WebRTCDataChannelExtension::_put_packet)>("_put_packet")
            .fun<static_cast<int32_t(WebRTCDataChannelExtension::*)()const>(&WebRTCDataChannelExtension::_get_available_packet_count)>("_get_available_packet_count")
            .fun<static_cast<int32_t(WebRTCDataChannelExtension::*)()const>(&WebRTCDataChannelExtension::_get_max_packet_size)>("_get_max_packet_size")
            .fun<static_cast<Error(WebRTCDataChannelExtension::*)()>(&WebRTCDataChannelExtension::_poll)>("_poll")
            .fun<static_cast<void(WebRTCDataChannelExtension::*)()>(&WebRTCDataChannelExtension::_close)>("_close")
            .fun<static_cast<void(WebRTCDataChannelExtension::*)(WebRTCDataChannel::WriteMode)>(&WebRTCDataChannelExtension::_set_write_mode)>("_set_write_mode")
            .fun<static_cast<WebRTCDataChannel::WriteMode(WebRTCDataChannelExtension::*)()const>(&WebRTCDataChannelExtension::_get_write_mode)>("_get_write_mode")
            .fun<static_cast<bool(WebRTCDataChannelExtension::*)()const>(&WebRTCDataChannelExtension::_was_string_packet)>("_was_string_packet")
            .fun<static_cast<WebRTCDataChannel::ChannelState(WebRTCDataChannelExtension::*)()const>(&WebRTCDataChannelExtension::_get_ready_state)>("_get_ready_state")
            .fun<static_cast<String(WebRTCDataChannelExtension::*)()const>(&WebRTCDataChannelExtension::_get_label)>("_get_label")
            .fun<static_cast<bool(WebRTCDataChannelExtension::*)()const>(&WebRTCDataChannelExtension::_is_ordered)>("_is_ordered")
            .fun<static_cast<int32_t(WebRTCDataChannelExtension::*)()const>(&WebRTCDataChannelExtension::_get_id)>("_get_id")
            .fun<static_cast<int32_t(WebRTCDataChannelExtension::*)()const>(&WebRTCDataChannelExtension::_get_max_packet_life_time)>("_get_max_packet_life_time")
            .fun<static_cast<int32_t(WebRTCDataChannelExtension::*)()const>(&WebRTCDataChannelExtension::_get_max_retransmits)>("_get_max_retransmits")
            .fun<static_cast<String(WebRTCDataChannelExtension::*)()const>(&WebRTCDataChannelExtension::_get_protocol)>("_get_protocol")
            .fun<static_cast<bool(WebRTCDataChannelExtension::*)()const>(&WebRTCDataChannelExtension::_is_negotiated)>("_is_negotiated")
            .fun<static_cast<int32_t(WebRTCDataChannelExtension::*)()const>(&WebRTCDataChannelExtension::_get_buffered_amount)>("_get_buffered_amount")
;}