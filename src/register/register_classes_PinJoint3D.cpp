#include <godot_cpp/classes/pin_joint3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PinJoint3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<PinJoint3D>("PinJoint3D")
			.constructor<>()
			.fun<static_cast<void (PinJoint3D::*)(PinJoint3D::Param, double)>(&PinJoint3D::set_param)>("set_param")
			.fun<static_cast<double (PinJoint3D::*)(PinJoint3D::Param) const>(&PinJoint3D::get_param)>("get_param");
}