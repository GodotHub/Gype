#include "register/register_classes.h"
#include <godot_cpp/classes/open_xrip_binding.hpp>

using namespace godot;

void register_classes_OpenXRIPBindingRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<OpenXRIPBinding>>("OpenXRIPBindingRef").constructor<OpenXRIPBinding *>();
}