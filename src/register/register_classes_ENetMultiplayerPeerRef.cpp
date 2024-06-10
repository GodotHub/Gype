#include "register/register_classes.h"
#include <godot_cpp/classes/e_net_multiplayer_peer.hpp>

using namespace godot;

void register_classes_ENetMultiplayerPeerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ENetMultiplayerPeer>>("ENetMultiplayerPeerRef").constructor<ENetMultiplayerPeer *>();
}