#include "register/register_classes.h"
#include <godot_cpp/classes/physics_ray_query_parameters3d.hpp>

using namespace godot;

void register_classes_PhysicsRayQueryParameters3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PhysicsRayQueryParameters3D>>("PhysicsRayQueryParameters3DRef").constructor<PhysicsRayQueryParameters3D *>();
}