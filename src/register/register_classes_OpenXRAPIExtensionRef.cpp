#include "register/register_classes.h"
#include <godot_cpp/classes/open_xrapi_extension.hpp>

using namespace godot;

void register_classes_OpenXRAPIExtensionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<OpenXRAPIExtension>>("OpenXRAPIExtensionRef").constructor<OpenXRAPIExtension *>();
}