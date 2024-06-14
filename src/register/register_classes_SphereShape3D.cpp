#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/classes/sphere_shape3d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SphereShape3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SphereShape3D>("SphereShape3D")
			.constructor<>()
			.base<Shape3D>()
			.property<static_cast<double (SphereShape3D::*)() const>(&SphereShape3D::get_radius), static_cast<void (SphereShape3D::*)(double)>(&SphereShape3D::set_radius)>((new std::string("radius"))->c_str());
}