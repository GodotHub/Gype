#include <godot_cpp/classes/packet_peer_dtls.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/packet_peer_udp.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/variant/string.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PacketPeerDTLS() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PacketPeerDTLS>("PacketPeerDTLS")
            .constructor<>()
            .base<PacketPeer>()
            .fun<static_cast<void(PacketPeerDTLS::*)()>(&PacketPeerDTLS::poll)>("poll")
            .fun<static_cast<Error(PacketPeerDTLS::*)(const Ref<PacketPeerUDP> &,const String &,const Ref<TLSOptions> &)>(&PacketPeerDTLS::connect_to_peer)>("connect_to_peer")
            .fun<static_cast<PacketPeerDTLS::Status(PacketPeerDTLS::*)()const>(&PacketPeerDTLS::get_status)>("get_status")
            .fun<static_cast<void(PacketPeerDTLS::*)()>(&PacketPeerDTLS::disconnect_from_peer)>("disconnect_from_peer")
;    qjs::Value _Status = context->newObject();
    _Status["STATUS_DISCONNECTED"] = PacketPeerDTLS::Status::STATUS_DISCONNECTED;
    _Status["STATUS_HANDSHAKING"] = PacketPeerDTLS::Status::STATUS_HANDSHAKING;
    _Status["STATUS_CONNECTED"] = PacketPeerDTLS::Status::STATUS_CONNECTED;
    _Status["STATUS_ERROR"] = PacketPeerDTLS::Status::STATUS_ERROR;
    _Status["STATUS_ERROR_HOSTNAME_MISMATCH"] = PacketPeerDTLS::Status::STATUS_ERROR_HOSTNAME_MISMATCH;
    _module.add("Status", std::move(_Status));
}