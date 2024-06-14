
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/stream_peer_gzip.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_StreamPeerGZIP() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<StreamPeerGZIP>("StreamPeerGZIP")
			.constructor<>()
			.base<StreamPeer>()
			.fun<static_cast<Error (StreamPeerGZIP::*)(bool, int32_t)>(&StreamPeerGZIP::start_compression)>((new std::string("start_compression"))->c_str())
			.fun<static_cast<Error (StreamPeerGZIP::*)(bool, int32_t)>(&StreamPeerGZIP::start_decompression)>((new std::string("start_decompression"))->c_str())
			.fun<static_cast<Error (StreamPeerGZIP::*)()>(&StreamPeerGZIP::finish)>((new std::string("finish"))->c_str())
			.fun<static_cast<void (StreamPeerGZIP::*)()>(&StreamPeerGZIP::clear)>((new std::string("clear"))->c_str());
}