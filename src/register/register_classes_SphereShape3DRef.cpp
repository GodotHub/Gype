#include "register/register_classes.h"
#include <godot_cpp/classes/sphere_shape3d.hpp>

using namespace godot;

void register_classes_SphereShape3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SphereShape3D>>("SphereShape3DRef").constructor<SphereShape3D *>();
}