#include <godot_cpp/classes/separation_ray_shape3d.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SeparationRayShape3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SeparationRayShape3D>("SeparationRayShape3D")
			.constructor<>()
			.base<Shape3D>()
			.property<static_cast<double (SeparationRayShape3D::*)() const>(&SeparationRayShape3D::get_length), static_cast<void (SeparationRayShape3D::*)(double)>(&SeparationRayShape3D::set_length)>((new std::string("length"))->c_str())
			.property<static_cast<bool (SeparationRayShape3D::*)() const>(&SeparationRayShape3D::get_slide_on_slope), static_cast<void (SeparationRayShape3D::*)(bool)>(&SeparationRayShape3D::set_slide_on_slope)>((new std::string("slide_on_slope"))->c_str());
}