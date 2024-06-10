#include "register/register_classes.h"
#include <godot_cpp/classes/environment.hpp>

using namespace godot;

void register_classes_EnvironmentRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Environment>>("EnvironmentRef").constructor<Environment *>();
}