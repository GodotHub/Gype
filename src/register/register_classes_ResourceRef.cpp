#include "register/register_classes.h"
#include <godot_cpp/classes/resource.hpp>

using namespace godot;

void register_classes_ResourceRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Resource>>("ResourceRef").constructor<Resource *>();
}