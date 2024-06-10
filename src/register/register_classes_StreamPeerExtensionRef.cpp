#include "register/register_classes.h"
#include <godot_cpp/classes/stream_peer_extension.hpp>

using namespace godot;

void register_classes_StreamPeerExtensionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<StreamPeerExtension>>("StreamPeerExtensionRef").constructor<StreamPeerExtension *>();
}