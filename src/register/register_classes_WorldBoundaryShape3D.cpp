#include <godot_cpp/classes/world_boundary_shape3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_WorldBoundaryShape3D() {
	qjs::Context::Module &_module = _General;
	_module.class_<WorldBoundaryShape3D>("WorldBoundaryShape3D")
			.constructor<>()
			.property<&WorldBoundaryShape3D::get_plane, &WorldBoundaryShape3D::set_plane>("plane");
}