#include "register/register_classes.h"
#include <godot_cpp/classes/missing_resource.hpp>

using namespace godot;

void register_classes_MissingResourceRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<MissingResource>>("MissingResourceRef").constructor<MissingResource *>();
}