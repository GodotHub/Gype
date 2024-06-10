#include "register/register_classes.h"
#include <godot_cpp/classes/multiplayer_peer_extension.hpp>

using namespace godot;

void register_classes_MultiplayerPeerExtensionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<MultiplayerPeerExtension>>("MultiplayerPeerExtensionRef").constructor<MultiplayerPeerExtension *>();
}