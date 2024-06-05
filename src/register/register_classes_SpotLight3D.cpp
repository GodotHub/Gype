#include <godot_cpp/classes/spot_light3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_SpotLight3D() {
	qjs::Context::Module &_module = _Node3D;
	_module.class_<SpotLight3D>("SpotLight3D")
			.constructor<>()
			.property<&SpotLight3D::get_param, &SpotLight3D::set_param>("spot_range")
			.property<&SpotLight3D::get_param, &SpotLight3D::set_param>("spot_attenuation")
			.property<&SpotLight3D::get_param, &SpotLight3D::set_param>("spot_angle")
			.property<&SpotLight3D::get_param, &SpotLight3D::set_param>("spot_angle_attenuation");
}