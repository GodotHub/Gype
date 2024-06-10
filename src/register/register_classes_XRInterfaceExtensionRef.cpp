#include "register/register_classes.h"
#include <godot_cpp/classes/xr_interface_extension.hpp>

using namespace godot;

void register_classes_XRInterfaceExtensionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<XRInterfaceExtension>>("XRInterfaceExtensionRef").constructor<XRInterfaceExtension *>();
}