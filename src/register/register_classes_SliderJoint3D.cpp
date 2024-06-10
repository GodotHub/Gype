#include <godot_cpp/classes/slider_joint3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SliderJoint3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<SliderJoint3D>("SliderJoint3D")
			.constructor<>()
			.fun<static_cast<void (SliderJoint3D::*)(SliderJoint3D::Param, double)>(&SliderJoint3D::set_param)>("set_param")
			.fun<static_cast<double (SliderJoint3D::*)(SliderJoint3D::Param) const>(&SliderJoint3D::get_param)>("get_param");
}