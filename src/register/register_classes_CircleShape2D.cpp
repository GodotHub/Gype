#include <godot_cpp/classes/circle_shape2d.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CircleShape2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CircleShape2D>("CircleShape2D")
			.constructor<>()
			.base<Shape2D>()
			.property<static_cast<double (CircleShape2D::*)() const>(&CircleShape2D::get_radius), static_cast<void (CircleShape2D::*)(double)>(&CircleShape2D::set_radius)>((new std::string("radius"))->c_str());
}