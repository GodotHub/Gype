#include <godot_cpp/classes/dtls_server.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/packet_peer_dtls.hpp>
#include <godot_cpp/classes/packet_peer_udp.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_DTLSServer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<DTLSServer>("DTLSServer")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<Error (DTLSServer::*)(const Ref<TLSOptions> &)>(&DTLSServer::setup)>((new std::string("setup"))->c_str())
			.fun<static_cast<Ref<PacketPeerDTLS> (DTLSServer::*)(const Ref<PacketPeerUDP> &)>(&DTLSServer::take_connection)>((new std::string("take_connection"))->c_str());
}