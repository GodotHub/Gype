#include <godot_cpp/classes/marker3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Marker3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<Marker3D>("Marker3D")
			.constructor<>()
			.property<&Marker3D::get_gizmo_extents, &Marker3D::set_gizmo_extents>("gizmo_extents");
}