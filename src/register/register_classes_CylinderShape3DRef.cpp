#include "register/register_classes.h"
#include <godot_cpp/classes/cylinder_shape3d.hpp>

using namespace godot;

void register_classes_CylinderShape3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CylinderShape3D>>("CylinderShape3DRef").constructor<CylinderShape3D *>();
}