#include "register/register_classes.h"
#include <godot_cpp/classes/stream_peer_gzip.hpp>

using namespace godot;

void register_classes_StreamPeerGZIPRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<StreamPeerGZIP>>("StreamPeerGZIPRef").constructor<StreamPeerGZIP *>();
}