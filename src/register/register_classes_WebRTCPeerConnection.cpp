#include <godot_cpp/classes/web_rtc_peer_connection.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/web_rtc_data_channel.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_WebRTCPeerConnection() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<WebRTCPeerConnection>("WebRTCPeerConnection")
            .constructor<>()
            .base<RefCounted>()
            .static_fun<static_cast<void(*)(const StringName &)>(&WebRTCPeerConnection::set_default_extension)>("set_default_extension")
            .fun<static_cast<Error(WebRTCPeerConnection::*)(const Dictionary &)>(&WebRTCPeerConnection::initialize)>("initialize")
            .fun<static_cast<Ref<WebRTCDataChannel>(WebRTCPeerConnection::*)(const String &,const Dictionary &)>(&WebRTCPeerConnection::create_data_channel)>("create_data_channel")
            .fun<static_cast<Error(WebRTCPeerConnection::*)()>(&WebRTCPeerConnection::create_offer)>("create_offer")
            .fun<static_cast<Error(WebRTCPeerConnection::*)(const String &,const String &)>(&WebRTCPeerConnection::set_local_description)>("set_local_description")
            .fun<static_cast<Error(WebRTCPeerConnection::*)(const String &,const String &)>(&WebRTCPeerConnection::set_remote_description)>("set_remote_description")
            .fun<static_cast<Error(WebRTCPeerConnection::*)(const String &,int32_t,const String &)>(&WebRTCPeerConnection::add_ice_candidate)>("add_ice_candidate")
            .fun<static_cast<Error(WebRTCPeerConnection::*)()>(&WebRTCPeerConnection::poll)>("poll")
            .fun<static_cast<void(WebRTCPeerConnection::*)()>(&WebRTCPeerConnection::close)>("close")
            .fun<static_cast<WebRTCPeerConnection::ConnectionState(WebRTCPeerConnection::*)()const>(&WebRTCPeerConnection::get_connection_state)>("get_connection_state")
            .fun<static_cast<WebRTCPeerConnection::GatheringState(WebRTCPeerConnection::*)()const>(&WebRTCPeerConnection::get_gathering_state)>("get_gathering_state")
            .fun<static_cast<WebRTCPeerConnection::SignalingState(WebRTCPeerConnection::*)()const>(&WebRTCPeerConnection::get_signaling_state)>("get_signaling_state")
;    qjs::Value _ConnectionState = context->newObject();
    _ConnectionState["STATE_NEW"] = WebRTCPeerConnection::ConnectionState::STATE_NEW;
    _ConnectionState["STATE_CONNECTING"] = WebRTCPeerConnection::ConnectionState::STATE_CONNECTING;
    _ConnectionState["STATE_CONNECTED"] = WebRTCPeerConnection::ConnectionState::STATE_CONNECTED;
    _ConnectionState["STATE_DISCONNECTED"] = WebRTCPeerConnection::ConnectionState::STATE_DISCONNECTED;
    _ConnectionState["STATE_FAILED"] = WebRTCPeerConnection::ConnectionState::STATE_FAILED;
    _ConnectionState["STATE_CLOSED"] = WebRTCPeerConnection::ConnectionState::STATE_CLOSED;
    _module.add("ConnectionState", std::move(_ConnectionState));
    qjs::Value _GatheringState = context->newObject();
    _GatheringState["GATHERING_STATE_NEW"] = WebRTCPeerConnection::GatheringState::GATHERING_STATE_NEW;
    _GatheringState["GATHERING_STATE_GATHERING"] = WebRTCPeerConnection::GatheringState::GATHERING_STATE_GATHERING;
    _GatheringState["GATHERING_STATE_COMPLETE"] = WebRTCPeerConnection::GatheringState::GATHERING_STATE_COMPLETE;
    _module.add("GatheringState", std::move(_GatheringState));
    qjs::Value _SignalingState = context->newObject();
    _SignalingState["SIGNALING_STATE_STABLE"] = WebRTCPeerConnection::SignalingState::SIGNALING_STATE_STABLE;
    _SignalingState["SIGNALING_STATE_HAVE_LOCAL_OFFER"] = WebRTCPeerConnection::SignalingState::SIGNALING_STATE_HAVE_LOCAL_OFFER;
    _SignalingState["SIGNALING_STATE_HAVE_REMOTE_OFFER"] = WebRTCPeerConnection::SignalingState::SIGNALING_STATE_HAVE_REMOTE_OFFER;
    _SignalingState["SIGNALING_STATE_HAVE_LOCAL_PRANSWER"] = WebRTCPeerConnection::SignalingState::SIGNALING_STATE_HAVE_LOCAL_PRANSWER;
    _SignalingState["SIGNALING_STATE_HAVE_REMOTE_PRANSWER"] = WebRTCPeerConnection::SignalingState::SIGNALING_STATE_HAVE_REMOTE_PRANSWER;
    _SignalingState["SIGNALING_STATE_CLOSED"] = WebRTCPeerConnection::SignalingState::SIGNALING_STATE_CLOSED;
    _module.add("SignalingState", std::move(_SignalingState));
}