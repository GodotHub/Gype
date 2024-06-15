#include <godot_cpp/classes/web_rtc_data_channel.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_WebRTCDataChannel() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<WebRTCDataChannel>("WebRTCDataChannel")
            .constructor<>()
            .base<PacketPeer>()
            .property<static_cast<WebRTCDataChannel::WriteMode(WebRTCDataChannel::*)()const>(&WebRTCDataChannel::get_write_mode),static_cast<void(WebRTCDataChannel::*)(WebRTCDataChannel::WriteMode)>(&WebRTCDataChannel::set_write_mode)>("write_mode")
            .fun<static_cast<Error(WebRTCDataChannel::*)()>(&WebRTCDataChannel::poll)>("poll")
            .fun<static_cast<void(WebRTCDataChannel::*)()>(&WebRTCDataChannel::close)>("close")
            .fun<static_cast<bool(WebRTCDataChannel::*)()const>(&WebRTCDataChannel::was_string_packet)>("was_string_packet")
            .fun<static_cast<WebRTCDataChannel::ChannelState(WebRTCDataChannel::*)()const>(&WebRTCDataChannel::get_ready_state)>("get_ready_state")
            .fun<static_cast<String(WebRTCDataChannel::*)()const>(&WebRTCDataChannel::get_label)>("get_label")
            .fun<static_cast<bool(WebRTCDataChannel::*)()const>(&WebRTCDataChannel::is_ordered)>("is_ordered")
            .fun<static_cast<int32_t(WebRTCDataChannel::*)()const>(&WebRTCDataChannel::get_id)>("get_id")
            .fun<static_cast<int32_t(WebRTCDataChannel::*)()const>(&WebRTCDataChannel::get_max_packet_life_time)>("get_max_packet_life_time")
            .fun<static_cast<int32_t(WebRTCDataChannel::*)()const>(&WebRTCDataChannel::get_max_retransmits)>("get_max_retransmits")
            .fun<static_cast<String(WebRTCDataChannel::*)()const>(&WebRTCDataChannel::get_protocol)>("get_protocol")
            .fun<static_cast<bool(WebRTCDataChannel::*)()const>(&WebRTCDataChannel::is_negotiated)>("is_negotiated")
            .fun<static_cast<int32_t(WebRTCDataChannel::*)()const>(&WebRTCDataChannel::get_buffered_amount)>("get_buffered_amount")
;    qjs::Value _WriteMode = context->newObject();
    _WriteMode["WRITE_MODE_TEXT"] = WebRTCDataChannel::WriteMode::WRITE_MODE_TEXT;
    _WriteMode["WRITE_MODE_BINARY"] = WebRTCDataChannel::WriteMode::WRITE_MODE_BINARY;
    _module.add("WriteMode", std::move(_WriteMode));
    qjs::Value _ChannelState = context->newObject();
    _ChannelState["STATE_CONNECTING"] = WebRTCDataChannel::ChannelState::STATE_CONNECTING;
    _ChannelState["STATE_OPEN"] = WebRTCDataChannel::ChannelState::STATE_OPEN;
    _ChannelState["STATE_CLOSING"] = WebRTCDataChannel::ChannelState::STATE_CLOSING;
    _ChannelState["STATE_CLOSED"] = WebRTCDataChannel::ChannelState::STATE_CLOSED;
    _module.add("ChannelState", std::move(_ChannelState));
}