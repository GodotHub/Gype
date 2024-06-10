#include <godot_cpp/classes/cylinder_shape3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CylinderShape3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CylinderShape3D>("CylinderShape3D")
			.constructor<>()
			.property<&CylinderShape3D::get_height, &CylinderShape3D::set_height>("height")
			.property<&CylinderShape3D::get_radius, &CylinderShape3D::set_radius>("radius");
}