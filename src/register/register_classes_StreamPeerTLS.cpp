#include <godot_cpp/classes/stream_peer_tls.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/variant/string.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_StreamPeerTLS() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<StreamPeerTLS>("StreamPeerTLS")
            .constructor<>()
            .base<StreamPeer>()
            .fun<static_cast<void(StreamPeerTLS::*)()>(&StreamPeerTLS::poll)>("poll")
            .fun<static_cast<Error(StreamPeerTLS::*)(const Ref<StreamPeer> &,const Ref<TLSOptions> &)>(&StreamPeerTLS::accept_stream)>("accept_stream")
            .fun<static_cast<Error(StreamPeerTLS::*)(const Ref<StreamPeer> &,const String &,const Ref<TLSOptions> &)>(&StreamPeerTLS::connect_to_stream)>("connect_to_stream")
            .fun<static_cast<StreamPeerTLS::Status(StreamPeerTLS::*)()const>(&StreamPeerTLS::get_status)>("get_status")
            .fun<static_cast<Ref<StreamPeer>(StreamPeerTLS::*)()const>(&StreamPeerTLS::get_stream)>("get_stream")
            .fun<static_cast<void(StreamPeerTLS::*)()>(&StreamPeerTLS::disconnect_from_stream)>("disconnect_from_stream")
;    qjs::Value _Status = context->newObject();
    _Status["STATUS_DISCONNECTED"] = StreamPeerTLS::Status::STATUS_DISCONNECTED;
    _Status["STATUS_HANDSHAKING"] = StreamPeerTLS::Status::STATUS_HANDSHAKING;
    _Status["STATUS_CONNECTED"] = StreamPeerTLS::Status::STATUS_CONNECTED;
    _Status["STATUS_ERROR"] = StreamPeerTLS::Status::STATUS_ERROR;
    _Status["STATUS_ERROR_HOSTNAME_MISMATCH"] = StreamPeerTLS::Status::STATUS_ERROR_HOSTNAME_MISMATCH;
    _module.add("Status", std::move(_Status));
}