#include "register/register_classes.h"
#include <godot_cpp/classes/curve2d.hpp>

using namespace godot;

void register_classes_Curve2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Curve2D>>("Curve2DRef").constructor<Curve2D *>();
}