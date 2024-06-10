#include "register/register_classes.h"
#include <godot_cpp/classes/world_boundary_shape3d.hpp>

using namespace godot;

void register_classes_WorldBoundaryShape3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<WorldBoundaryShape3D>>("WorldBoundaryShape3DRef").constructor<WorldBoundaryShape3D *>();
}