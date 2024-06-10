#include "register/register_classes.h"
#include <godot_cpp/classes/open_xr_action.hpp>

using namespace godot;

void register_classes_OpenXRActionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<OpenXRAction>>("OpenXRActionRef").constructor<OpenXRAction *>();
}