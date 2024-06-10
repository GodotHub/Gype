#include "register/register_classes.h"
#include <godot_cpp/classes/multiplayer_api_extension.hpp>

using namespace godot;

void register_classes_MultiplayerAPIExtensionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<MultiplayerAPIExtension>>("MultiplayerAPIExtensionRef").constructor<MultiplayerAPIExtension *>();
}