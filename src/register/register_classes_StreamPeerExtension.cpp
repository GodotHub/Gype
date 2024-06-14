
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/stream_peer_extension.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_StreamPeerExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<StreamPeerExtension>("StreamPeerExtension")
			.constructor<>()
			.base<StreamPeer>()
			.fun<static_cast<Error (StreamPeerExtension::*)(uint8_t *, int32_t, int32_t *)>(&StreamPeerExtension::_get_data)>((new std::string("_get_data"))->c_str())
			.fun<static_cast<Error (StreamPeerExtension::*)(uint8_t *, int32_t, int32_t *)>(&StreamPeerExtension::_get_partial_data)>((new std::string("_get_partial_data"))->c_str())
			.fun<static_cast<Error (StreamPeerExtension::*)(const uint8_t *, int32_t, int32_t *)>(&StreamPeerExtension::_put_data)>((new std::string("_put_data"))->c_str())
			.fun<static_cast<Error (StreamPeerExtension::*)(const uint8_t *, int32_t, int32_t *)>(&StreamPeerExtension::_put_partial_data)>((new std::string("_put_partial_data"))->c_str())
			.fun<static_cast<int32_t (StreamPeerExtension::*)() const>(&StreamPeerExtension::_get_available_bytes)>((new std::string("_get_available_bytes"))->c_str());
}