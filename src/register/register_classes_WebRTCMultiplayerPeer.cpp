#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/web_rtc_multiplayer_peer.hpp>

using namespace godot;

void register_classes_WebRTCMultiplayerPeer() {
    qjs::Context::Module &_module = _General;
    _module.class_<WebRTCMultiplayerPeer>("WebRTCMultiplayerPeer")
           .constructor<>()
		    .fun<static_cast<Error(WebRTCMultiplayerPeer::*)(const Array &)>(&WebRTCMultiplayerPeer::create_server)>("create_server")
		    .fun<static_cast<Error(WebRTCMultiplayerPeer::*)(int32_t,const Array &)>(&WebRTCMultiplayerPeer::create_client)>("create_client")
		    .fun<static_cast<Error(WebRTCMultiplayerPeer::*)(int32_t,const Array &)>(&WebRTCMultiplayerPeer::create_mesh)>("create_mesh")
		    .fun<static_cast<Error(WebRTCMultiplayerPeer::*)(const Ref<WebRTCPeerConnection> &,int32_t,int32_t)>(&WebRTCMultiplayerPeer::add_peer)>("add_peer")
		    .fun<static_cast<void(WebRTCMultiplayerPeer::*)(int32_t)>(&WebRTCMultiplayerPeer::remove_peer)>("remove_peer")
		    .fun<static_cast<bool(WebRTCMultiplayerPeer::*)(int32_t)>(&WebRTCMultiplayerPeer::has_peer)>("has_peer")
		    .fun<static_cast<Dictionary(WebRTCMultiplayerPeer::*)(int32_t)>(&WebRTCMultiplayerPeer::get_peer)>("get_peer")
		    .fun<static_cast<Dictionary(WebRTCMultiplayerPeer::*)()>(&WebRTCMultiplayerPeer::get_peers)>("get_peers")
;}