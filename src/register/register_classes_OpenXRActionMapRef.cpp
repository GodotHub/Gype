#include "register/register_classes.h"
#include <godot_cpp/classes/open_xr_action_map.hpp>

using namespace godot;

void register_classes_OpenXRActionMapRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<OpenXRActionMap>>("OpenXRActionMapRef").constructor<OpenXRActionMap *>();
}