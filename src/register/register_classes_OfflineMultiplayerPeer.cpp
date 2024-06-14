#include <godot_cpp/classes/offline_multiplayer_peer.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_OfflineMultiplayerPeer() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<OfflineMultiplayerPeer>("OfflineMultiplayerPeer")
            .constructor<>()
            .base<MultiplayerPeer>()
;}