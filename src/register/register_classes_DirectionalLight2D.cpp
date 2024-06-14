#include <godot_cpp/classes/directional_light2d.hpp>
#include <godot_cpp/classes/light2d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_DirectionalLight2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<DirectionalLight2D>("DirectionalLight2D")
			.constructor<>()
			.base<Light2D>()
			.property<static_cast<double (DirectionalLight2D::*)() const>(&DirectionalLight2D::get_max_distance), static_cast<void (DirectionalLight2D::*)(double)>(&DirectionalLight2D::set_max_distance)>((new std::string("max_distance"))->c_str());
}