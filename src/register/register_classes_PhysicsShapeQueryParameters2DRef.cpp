#include "register/register_classes.h"
#include <godot_cpp/classes/physics_shape_query_parameters2d.hpp>

using namespace godot;

void register_classes_PhysicsShapeQueryParameters2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PhysicsShapeQueryParameters2D>>("PhysicsShapeQueryParameters2DRef").constructor<PhysicsShapeQueryParameters2D *>();
}