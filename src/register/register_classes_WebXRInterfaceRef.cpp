#include "register/register_classes.h"
#include <godot_cpp/classes/web_xr_interface.hpp>

using namespace godot;

void register_classes_WebXRInterfaceRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<WebXRInterface>>("WebXRInterfaceRef").constructor<WebXRInterface *>();
}