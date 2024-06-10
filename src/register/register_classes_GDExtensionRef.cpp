#include "register/register_classes.h"
#include <godot_cpp/classes/gd_extension.hpp>

using namespace godot;

void register_classes_GDExtensionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<GDExtension>>("GDExtensionRef").constructor<GDExtension *>();
}