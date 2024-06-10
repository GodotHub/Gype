#include <godot_cpp/classes/capsule_shape2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CapsuleShape2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CapsuleShape2D>("CapsuleShape2D")
			.constructor<>()
			.property<&CapsuleShape2D::get_radius, &CapsuleShape2D::set_radius>("radius")
			.property<&CapsuleShape2D::get_height, &CapsuleShape2D::set_height>("height");
}