#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/stream_peer_tcp.hpp>

using namespace godot;

void register_classes_StreamPeerTCP() {
    qjs::Context::Module &_module = _General;
    _module.class_<StreamPeerTCP>("StreamPeerTCP")
           .constructor<>()
		    .fun<static_cast<Error(StreamPeerTCP::*)(int32_t,const String &)>(&StreamPeerTCP::bind)>("bind")
		    .fun<static_cast<Error(StreamPeerTCP::*)(const String &,int32_t)>(&StreamPeerTCP::connect_to_host)>("connect_to_host")
		    .fun<static_cast<Error(StreamPeerTCP::*)()>(&StreamPeerTCP::poll)>("poll")
		    .fun<static_cast<StreamPeerTCP::Status(StreamPeerTCP::*)()const>(&StreamPeerTCP::get_status)>("get_status")
		    .fun<static_cast<String(StreamPeerTCP::*)()const>(&StreamPeerTCP::get_connected_host)>("get_connected_host")
		    .fun<static_cast<int32_t(StreamPeerTCP::*)()const>(&StreamPeerTCP::get_connected_port)>("get_connected_port")
		    .fun<static_cast<int32_t(StreamPeerTCP::*)()const>(&StreamPeerTCP::get_local_port)>("get_local_port")
		    .fun<static_cast<void(StreamPeerTCP::*)()>(&StreamPeerTCP::disconnect_from_host)>("disconnect_from_host")
		    .fun<static_cast<void(StreamPeerTCP::*)(bool)>(&StreamPeerTCP::set_no_delay)>("set_no_delay")
;}