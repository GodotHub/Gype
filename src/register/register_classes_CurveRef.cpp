#include "register/register_classes.h"
#include <godot_cpp/classes/curve.hpp>

using namespace godot;

void register_classes_CurveRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Curve>>("CurveRef").constructor<Curve *>();
}