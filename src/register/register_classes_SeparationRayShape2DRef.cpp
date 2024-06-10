#include "register/register_classes.h"
#include <godot_cpp/classes/separation_ray_shape2d.hpp>

using namespace godot;

void register_classes_SeparationRayShape2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SeparationRayShape2D>>("SeparationRayShape2DRef").constructor<SeparationRayShape2D *>();
}