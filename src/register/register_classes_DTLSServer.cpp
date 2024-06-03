#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/dtls_server.hpp>

using namespace godot;

void register_classes_DTLSServer() {
    qjs::Context::Module &_module = _General;
    _module.class_<DTLSServer>("DTLSServer")
           .constructor<>()
		    .fun<static_cast<Error(DTLSServer::*)(const Ref<TLSOptions> &)>(&DTLSServer::setup)>("setup")
		    .fun<static_cast<Ref<PacketPeerDTLS>(DTLSServer::*)(const Ref<PacketPeerUDP> &)>(&DTLSServer::take_connection)>("take_connection")
;}