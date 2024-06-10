#include "register/register_classes.h"
#include <godot_cpp/classes/curve3d.hpp>

using namespace godot;

void register_classes_Curve3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Curve3D>>("Curve3DRef").constructor<Curve3D *>();
}