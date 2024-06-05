#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/stream_peer_buffer.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_StreamPeerBuffer() {
	qjs::Context::Module &_module = _General;
	_module.class_<StreamPeerBuffer>("StreamPeerBuffer")
			.constructor<>()
			.property<&StreamPeerBuffer::get_data_array, &StreamPeerBuffer::set_data_array>("data_array")
			.fun<static_cast<void (StreamPeerBuffer::*)(int32_t)>(&StreamPeerBuffer::seek)>("seek")
			.fun<static_cast<int32_t (StreamPeerBuffer::*)() const>(&StreamPeerBuffer::get_size)>("get_size")
			.fun<static_cast<int32_t (StreamPeerBuffer::*)() const>(&StreamPeerBuffer::get_position)>("get_position")
			.fun<static_cast<void (StreamPeerBuffer::*)(int32_t)>(&StreamPeerBuffer::resize)>("resize")
			.fun<static_cast<void (StreamPeerBuffer::*)()>(&StreamPeerBuffer::clear)>("clear")
			.fun<static_cast<Ref<StreamPeerBuffer> (StreamPeerBuffer::*)() const>(&StreamPeerBuffer::duplicate)>("duplicate");
}