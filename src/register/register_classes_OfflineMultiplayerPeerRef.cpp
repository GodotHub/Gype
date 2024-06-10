#include "register/register_classes.h"
#include <godot_cpp/classes/offline_multiplayer_peer.hpp>

using namespace godot;

void register_classes_OfflineMultiplayerPeerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<OfflineMultiplayerPeer>>("OfflineMultiplayerPeerRef").constructor<OfflineMultiplayerPeer *>();
}