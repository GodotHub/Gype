#include "register/register_classes.h"
#include <godot_cpp/classes/world_boundary_shape2d.hpp>

using namespace godot;

void register_classes_WorldBoundaryShape2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<WorldBoundaryShape2D>>("WorldBoundaryShape2DRef").constructor<WorldBoundaryShape2D *>();
}