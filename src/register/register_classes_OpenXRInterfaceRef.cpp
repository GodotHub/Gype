#include "register/register_classes.h"
#include <godot_cpp/classes/open_xr_interface.hpp>

using namespace godot;

void register_classes_OpenXRInterfaceRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<OpenXRInterface>>("OpenXRInterfaceRef").constructor<OpenXRInterface *>();
}