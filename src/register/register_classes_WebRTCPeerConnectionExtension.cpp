#include <godot_cpp/classes/web_rtc_peer_connection_extension.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/web_rtc_data_channel.hpp>
#include <godot_cpp/classes/web_rtc_peer_connection.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_WebRTCPeerConnectionExtension() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<WebRTCPeerConnectionExtension>("WebRTCPeerConnectionExtension")
            .constructor<>()
            .base<WebRTCPeerConnection>()
            .fun<static_cast<WebRTCPeerConnection::ConnectionState(WebRTCPeerConnectionExtension::*)()const>(&WebRTCPeerConnectionExtension::_get_connection_state)>("_get_connection_state")
            .fun<static_cast<WebRTCPeerConnection::GatheringState(WebRTCPeerConnectionExtension::*)()const>(&WebRTCPeerConnectionExtension::_get_gathering_state)>("_get_gathering_state")
            .fun<static_cast<WebRTCPeerConnection::SignalingState(WebRTCPeerConnectionExtension::*)()const>(&WebRTCPeerConnectionExtension::_get_signaling_state)>("_get_signaling_state")
            .fun<static_cast<Error(WebRTCPeerConnectionExtension::*)(const Dictionary &)>(&WebRTCPeerConnectionExtension::_initialize)>("_initialize")
            .fun<static_cast<Ref<WebRTCDataChannel>(WebRTCPeerConnectionExtension::*)(const String &,const Dictionary &)>(&WebRTCPeerConnectionExtension::_create_data_channel)>("_create_data_channel")
            .fun<static_cast<Error(WebRTCPeerConnectionExtension::*)()>(&WebRTCPeerConnectionExtension::_create_offer)>("_create_offer")
            .fun<static_cast<Error(WebRTCPeerConnectionExtension::*)(const String &,const String &)>(&WebRTCPeerConnectionExtension::_set_remote_description)>("_set_remote_description")
            .fun<static_cast<Error(WebRTCPeerConnectionExtension::*)(const String &,const String &)>(&WebRTCPeerConnectionExtension::_set_local_description)>("_set_local_description")
            .fun<static_cast<Error(WebRTCPeerConnectionExtension::*)(const String &,int32_t,const String &)>(&WebRTCPeerConnectionExtension::_add_ice_candidate)>("_add_ice_candidate")
            .fun<static_cast<Error(WebRTCPeerConnectionExtension::*)()>(&WebRTCPeerConnectionExtension::_poll)>("_poll")
            .fun<static_cast<void(WebRTCPeerConnectionExtension::*)()>(&WebRTCPeerConnectionExtension::_close)>("_close")
;}