#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/packet_peer_dtls.hpp>
#include <godot_cpp/classes/packet_peer_udp.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PacketPeerDTLS() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PacketPeerDTLS>("PacketPeerDTLS")
			.constructor<>()
			.base<PacketPeer>()
			.fun<static_cast<void (PacketPeerDTLS::*)()>(&PacketPeerDTLS::poll)>((new std::string("poll"))->c_str())
			.fun<static_cast<Error (PacketPeerDTLS::*)(const Ref<PacketPeerUDP> &, const String &, const Ref<TLSOptions> &)>(&PacketPeerDTLS::connect_to_peer)>((new std::string("connect_to_peer"))->c_str())
			.fun<static_cast<PacketPeerDTLS::Status (PacketPeerDTLS::*)() const>(&PacketPeerDTLS::get_status)>((new std::string("get_status"))->c_str())
			.fun<static_cast<void (PacketPeerDTLS::*)()>(&PacketPeerDTLS::disconnect_from_peer)>((new std::string("disconnect_from_peer"))->c_str());
	qjs::Value _Status = context->newObject();
	_Status[(new std::string("STATUS_DISCONNECTED"))->c_str()] = PacketPeerDTLS::Status::STATUS_DISCONNECTED;
	_Status[(new std::string("STATUS_HANDSHAKING"))->c_str()] = PacketPeerDTLS::Status::STATUS_HANDSHAKING;
	_Status[(new std::string("STATUS_CONNECTED"))->c_str()] = PacketPeerDTLS::Status::STATUS_CONNECTED;
	_Status[(new std::string("STATUS_ERROR"))->c_str()] = PacketPeerDTLS::Status::STATUS_ERROR;
	_Status[(new std::string("STATUS_ERROR_HOSTNAME_MISMATCH"))->c_str()] = PacketPeerDTLS::Status::STATUS_ERROR_HOSTNAME_MISMATCH;
	_module.add("Status", std::move(_Status));
}