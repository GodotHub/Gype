#include "register/register_classes.h"
#include <godot_cpp/classes/physics_shape_query_parameters3d.hpp>

using namespace godot;

void register_classes_PhysicsShapeQueryParameters3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PhysicsShapeQueryParameters3D>>("PhysicsShapeQueryParameters3DRef").constructor<PhysicsShapeQueryParameters3D *>();
}