#include <godot_cpp/classes/hinge_joint3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_HingeJoint3D() {
	qjs::Context::Module &_module = _Node3D;
	_module.class_<HingeJoint3D>("HingeJoint3D")
			.constructor<>()
			.fun<static_cast<void (HingeJoint3D::*)(HingeJoint3D::Param, double)>(&HingeJoint3D::set_param)>("set_param")
			.fun<static_cast<double (HingeJoint3D::*)(HingeJoint3D::Param) const>(&HingeJoint3D::get_param)>("get_param")
			.fun<static_cast<void (HingeJoint3D::*)(HingeJoint3D::Flag, bool)>(&HingeJoint3D::set_flag)>("set_flag")
			.fun<static_cast<bool (HingeJoint3D::*)(HingeJoint3D::Flag) const>(&HingeJoint3D::get_flag)>("get_flag");
}