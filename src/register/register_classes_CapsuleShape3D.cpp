#include <godot_cpp/classes/capsule_shape3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_CapsuleShape3D() {
	qjs::Context::Module &_module = _General;
	_module.class_<CapsuleShape3D>("CapsuleShape3D")
			.constructor<>()
			.property<&CapsuleShape3D::get_radius, &CapsuleShape3D::set_radius>("radius")
			.property<&CapsuleShape3D::get_height, &CapsuleShape3D::set_height>("height");
}