#include <godot_cpp/classes/circle_shape2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CircleShape2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CircleShape2D>("CircleShape2D")
			.constructor<>()
			.property<&CircleShape2D::get_radius, &CircleShape2D::set_radius>("radius");
}