#include <godot_cpp/classes/offline_multiplayer_peer.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OfflineMultiplayerPeer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<OfflineMultiplayerPeer>("OfflineMultiplayerPeer")
			.constructor<>();
}