#include "register/register_classes.h"
#include <godot_cpp/classes/multiplayer_api.hpp>

using namespace godot;

void register_classes_MultiplayerAPIRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<MultiplayerAPI>>("MultiplayerAPIRef").constructor<MultiplayerAPI *>();
}