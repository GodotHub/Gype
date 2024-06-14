#include <godot_cpp/classes/hinge_joint3d.hpp>
#include <godot_cpp/classes/joint3d.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_HingeJoint3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<HingeJoint3D>("HingeJoint3D")
			.constructor<>()
			.base<Joint3D>()
			.fun<static_cast<void (HingeJoint3D::*)(HingeJoint3D::Param, double)>(&HingeJoint3D::set_param)>((new std::string("set_param"))->c_str())
			.fun<static_cast<double (HingeJoint3D::*)(HingeJoint3D::Param) const>(&HingeJoint3D::get_param)>((new std::string("get_param"))->c_str())
			.fun<static_cast<void (HingeJoint3D::*)(HingeJoint3D::Flag, bool)>(&HingeJoint3D::set_flag)>((new std::string("set_flag"))->c_str())
			.fun<static_cast<bool (HingeJoint3D::*)(HingeJoint3D::Flag) const>(&HingeJoint3D::get_flag)>((new std::string("get_flag"))->c_str());
	qjs::Value _Param = context->newObject();
	_Param[(new std::string("PARAM_BIAS"))->c_str()] = HingeJoint3D::Param::PARAM_BIAS;
	_Param[(new std::string("PARAM_LIMIT_UPPER"))->c_str()] = HingeJoint3D::Param::PARAM_LIMIT_UPPER;
	_Param[(new std::string("PARAM_LIMIT_LOWER"))->c_str()] = HingeJoint3D::Param::PARAM_LIMIT_LOWER;
	_Param[(new std::string("PARAM_LIMIT_BIAS"))->c_str()] = HingeJoint3D::Param::PARAM_LIMIT_BIAS;
	_Param[(new std::string("PARAM_LIMIT_SOFTNESS"))->c_str()] = HingeJoint3D::Param::PARAM_LIMIT_SOFTNESS;
	_Param[(new std::string("PARAM_LIMIT_RELAXATION"))->c_str()] = HingeJoint3D::Param::PARAM_LIMIT_RELAXATION;
	_Param[(new std::string("PARAM_MOTOR_TARGET_VELOCITY"))->c_str()] = HingeJoint3D::Param::PARAM_MOTOR_TARGET_VELOCITY;
	_Param[(new std::string("PARAM_MOTOR_MAX_IMPULSE"))->c_str()] = HingeJoint3D::Param::PARAM_MOTOR_MAX_IMPULSE;
	_Param[(new std::string("PARAM_MAX"))->c_str()] = HingeJoint3D::Param::PARAM_MAX;
	_module.add("Param", std::move(_Param));
	qjs::Value _Flag = context->newObject();
	_Flag[(new std::string("FLAG_USE_LIMIT"))->c_str()] = HingeJoint3D::Flag::FLAG_USE_LIMIT;
	_Flag[(new std::string("FLAG_ENABLE_MOTOR"))->c_str()] = HingeJoint3D::Flag::FLAG_ENABLE_MOTOR;
	_Flag[(new std::string("FLAG_MAX"))->c_str()] = HingeJoint3D::Flag::FLAG_MAX;
	_module.add("Flag", std::move(_Flag));
}