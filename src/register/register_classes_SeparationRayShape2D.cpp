#include <godot_cpp/classes/separation_ray_shape2d.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SeparationRayShape2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SeparationRayShape2D>("SeparationRayShape2D")
			.constructor<>()
			.base<Shape2D>()
			.property<static_cast<double (SeparationRayShape2D::*)() const>(&SeparationRayShape2D::get_length), static_cast<void (SeparationRayShape2D::*)(double)>(&SeparationRayShape2D::set_length)>((new std::string("length"))->c_str())
			.property<static_cast<bool (SeparationRayShape2D::*)() const>(&SeparationRayShape2D::get_slide_on_slope), static_cast<void (SeparationRayShape2D::*)(bool)>(&SeparationRayShape2D::set_slide_on_slope)>((new std::string("slide_on_slope"))->c_str());
}