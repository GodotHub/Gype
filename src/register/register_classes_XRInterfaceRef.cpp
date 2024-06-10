#include "register/register_classes.h"
#include <godot_cpp/classes/xr_interface.hpp>

using namespace godot;

void register_classes_XRInterfaceRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<XRInterface>>("XRInterfaceRef").constructor<XRInterface *>();
}