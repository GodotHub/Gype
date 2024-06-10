#include "register/register_classes.h"
#include <godot_cpp/classes/separation_ray_shape3d.hpp>

using namespace godot;

void register_classes_SeparationRayShape3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SeparationRayShape3D>>("SeparationRayShape3DRef").constructor<SeparationRayShape3D *>();
}