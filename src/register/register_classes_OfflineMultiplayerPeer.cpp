#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/offline_multiplayer_peer.hpp>

using namespace godot;

void register_classes_OfflineMultiplayerPeer() {
    qjs::Context::Module &_module = _General;
    _module.class_<OfflineMultiplayerPeer>("OfflineMultiplayerPeer")
           .constructor<>()
;}