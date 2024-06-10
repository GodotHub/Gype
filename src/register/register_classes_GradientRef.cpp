#include "register/register_classes.h"
#include <godot_cpp/classes/gradient.hpp>

using namespace godot;

void register_classes_GradientRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Gradient>>("GradientRef").constructor<Gradient *>();
}