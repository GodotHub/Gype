#include "register/register_classes.h"
#include <godot_cpp/classes/physics_ray_query_parameters2d.hpp>

using namespace godot;

void register_classes_PhysicsRayQueryParameters2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PhysicsRayQueryParameters2D>>("PhysicsRayQueryParameters2DRef").constructor<PhysicsRayQueryParameters2D *>();
}