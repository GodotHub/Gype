#include "register/register_classes.h"
#include <godot_cpp/classes/physics_point_query_parameters3d.hpp>

using namespace godot;

void register_classes_PhysicsPointQueryParameters3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PhysicsPointQueryParameters3D>>("PhysicsPointQueryParameters3DRef").constructor<PhysicsPointQueryParameters3D *>();
}