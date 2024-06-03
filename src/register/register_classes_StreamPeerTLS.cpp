#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/stream_peer_tls.hpp>

using namespace godot;

void register_classes_StreamPeerTLS() {
    qjs::Context::Module &_module = _General;
    _module.class_<StreamPeerTLS>("StreamPeerTLS")
           .constructor<>()
		    .fun<static_cast<void(StreamPeerTLS::*)()>(&StreamPeerTLS::poll)>("poll")
		    .fun<static_cast<Error(StreamPeerTLS::*)(const Ref<StreamPeer> &,const Ref<TLSOptions> &)>(&StreamPeerTLS::accept_stream)>("accept_stream")
		    .fun<static_cast<Error(StreamPeerTLS::*)(const Ref<StreamPeer> &,const String &,const Ref<TLSOptions> &)>(&StreamPeerTLS::connect_to_stream)>("connect_to_stream")
		    .fun<static_cast<StreamPeerTLS::Status(StreamPeerTLS::*)()const>(&StreamPeerTLS::get_status)>("get_status")
		    .fun<static_cast<Ref<StreamPeer>(StreamPeerTLS::*)()const>(&StreamPeerTLS::get_stream)>("get_stream")
		    .fun<static_cast<void(StreamPeerTLS::*)()>(&StreamPeerTLS::disconnect_from_stream)>("disconnect_from_stream")
;}