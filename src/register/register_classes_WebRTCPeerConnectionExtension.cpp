#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/web_rtc_peer_connection_extension.hpp>

using namespace godot;

void register_classes_WebRTCPeerConnectionExtension() {
    qjs::Context::Module &_module = _General;
    _module.class_<WebRTCPeerConnectionExtension>("WebRTCPeerConnectionExtension")
           .constructor<>()
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