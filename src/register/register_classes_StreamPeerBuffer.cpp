
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/stream_peer_buffer.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_StreamPeerBuffer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<StreamPeerBuffer>("StreamPeerBuffer")
			.constructor<>()
			.base<StreamPeer>()
			.property<static_cast<PackedByteArray (StreamPeerBuffer::*)() const>(&StreamPeerBuffer::get_data_array), static_cast<void (StreamPeerBuffer::*)(const PackedByteArray &)>(&StreamPeerBuffer::set_data_array)>((new std::string("data_array"))->c_str())
			.fun<static_cast<void (StreamPeerBuffer::*)(int32_t)>(&StreamPeerBuffer::seek)>((new std::string("seek"))->c_str())
			.fun<static_cast<int32_t (StreamPeerBuffer::*)() const>(&StreamPeerBuffer::get_size)>((new std::string("get_size"))->c_str())
			.fun<static_cast<int32_t (StreamPeerBuffer::*)() const>(&StreamPeerBuffer::get_position)>((new std::string("get_position"))->c_str())
			.fun<static_cast<void (StreamPeerBuffer::*)(int32_t)>(&StreamPeerBuffer::resize)>((new std::string("resize"))->c_str())
			.fun<static_cast<void (StreamPeerBuffer::*)()>(&StreamPeerBuffer::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<Ref<StreamPeerBuffer> (StreamPeerBuffer::*)() const>(&StreamPeerBuffer::duplicate)>((new std::string("duplicate"))->c_str());
}