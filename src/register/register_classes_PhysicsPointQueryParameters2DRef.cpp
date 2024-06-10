#include "register/register_classes.h"
#include <godot_cpp/classes/physics_point_query_parameters2d.hpp>

using namespace godot;

void register_classes_PhysicsPointQueryParameters2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PhysicsPointQueryParameters2D>>("PhysicsPointQueryParameters2DRef").constructor<PhysicsPointQueryParameters2D *>();
}