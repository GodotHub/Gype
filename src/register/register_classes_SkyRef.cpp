#include "register/register_classes.h"
#include <godot_cpp/classes/sky.hpp>

using namespace godot;

void register_classes_SkyRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Sky>>("SkyRef").constructor<Sky *>();
}