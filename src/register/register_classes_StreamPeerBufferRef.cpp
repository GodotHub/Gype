#include "register/register_classes.h"
#include <godot_cpp/classes/stream_peer_buffer.hpp>

using namespace godot;

void register_classes_StreamPeerBufferRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<StreamPeerBuffer>>("StreamPeerBufferRef").constructor<StreamPeerBuffer *>();
}