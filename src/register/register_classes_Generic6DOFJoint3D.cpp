#include <godot_cpp/classes/generic6_dof_joint3d.hpp>
#include <godot_cpp/classes/joint3d.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Generic6DOFJoint3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<Generic6DOFJoint3D>("Generic6DOFJoint3D")
			.constructor<>()
			.base<Joint3D>()
			.fun<static_cast<void (Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param, double)>(&Generic6DOFJoint3D::set_param_x)>((new std::string("set_param_x"))->c_str())
			.fun<static_cast<double (Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param) const>(&Generic6DOFJoint3D::get_param_x)>((new std::string("get_param_x"))->c_str())
			.fun<static_cast<void (Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param, double)>(&Generic6DOFJoint3D::set_param_y)>((new std::string("set_param_y"))->c_str())
			.fun<static_cast<double (Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param) const>(&Generic6DOFJoint3D::get_param_y)>((new std::string("get_param_y"))->c_str())
			.fun<static_cast<void (Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param, double)>(&Generic6DOFJoint3D::set_param_z)>((new std::string("set_param_z"))->c_str())
			.fun<static_cast<double (Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param) const>(&Generic6DOFJoint3D::get_param_z)>((new std::string("get_param_z"))->c_str())
			.fun<static_cast<void (Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag, bool)>(&Generic6DOFJoint3D::set_flag_x)>((new std::string("set_flag_x"))->c_str())
			.fun<static_cast<bool (Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag) const>(&Generic6DOFJoint3D::get_flag_x)>((new std::string("get_flag_x"))->c_str())
			.fun<static_cast<void (Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag, bool)>(&Generic6DOFJoint3D::set_flag_y)>((new std::string("set_flag_y"))->c_str())
			.fun<static_cast<bool (Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag) const>(&Generic6DOFJoint3D::get_flag_y)>((new std::string("get_flag_y"))->c_str())
			.fun<static_cast<void (Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag, bool)>(&Generic6DOFJoint3D::set_flag_z)>((new std::string("set_flag_z"))->c_str())
			.fun<static_cast<bool (Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag) const>(&Generic6DOFJoint3D::get_flag_z)>((new std::string("get_flag_z"))->c_str());
	qjs::Value _Param = context->newObject();
	_Param[(new std::string("PARAM_LINEAR_LOWER_LIMIT"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_LINEAR_LOWER_LIMIT;
	_Param[(new std::string("PARAM_LINEAR_UPPER_LIMIT"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_LINEAR_UPPER_LIMIT;
	_Param[(new std::string("PARAM_LINEAR_LIMIT_SOFTNESS"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_LINEAR_LIMIT_SOFTNESS;
	_Param[(new std::string("PARAM_LINEAR_RESTITUTION"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_LINEAR_RESTITUTION;
	_Param[(new std::string("PARAM_LINEAR_DAMPING"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_LINEAR_DAMPING;
	_Param[(new std::string("PARAM_LINEAR_MOTOR_TARGET_VELOCITY"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_LINEAR_MOTOR_TARGET_VELOCITY;
	_Param[(new std::string("PARAM_LINEAR_MOTOR_FORCE_LIMIT"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_LINEAR_MOTOR_FORCE_LIMIT;
	_Param[(new std::string("PARAM_LINEAR_SPRING_STIFFNESS"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_LINEAR_SPRING_STIFFNESS;
	_Param[(new std::string("PARAM_LINEAR_SPRING_DAMPING"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_LINEAR_SPRING_DAMPING;
	_Param[(new std::string("PARAM_LINEAR_SPRING_EQUILIBRIUM_POINT"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_LINEAR_SPRING_EQUILIBRIUM_POINT;
	_Param[(new std::string("PARAM_ANGULAR_LOWER_LIMIT"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_LOWER_LIMIT;
	_Param[(new std::string("PARAM_ANGULAR_UPPER_LIMIT"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_UPPER_LIMIT;
	_Param[(new std::string("PARAM_ANGULAR_LIMIT_SOFTNESS"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_LIMIT_SOFTNESS;
	_Param[(new std::string("PARAM_ANGULAR_DAMPING"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_DAMPING;
	_Param[(new std::string("PARAM_ANGULAR_RESTITUTION"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_RESTITUTION;
	_Param[(new std::string("PARAM_ANGULAR_FORCE_LIMIT"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_FORCE_LIMIT;
	_Param[(new std::string("PARAM_ANGULAR_ERP"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_ERP;
	_Param[(new std::string("PARAM_ANGULAR_MOTOR_TARGET_VELOCITY"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_MOTOR_TARGET_VELOCITY;
	_Param[(new std::string("PARAM_ANGULAR_MOTOR_FORCE_LIMIT"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_MOTOR_FORCE_LIMIT;
	_Param[(new std::string("PARAM_ANGULAR_SPRING_STIFFNESS"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_SPRING_STIFFNESS;
	_Param[(new std::string("PARAM_ANGULAR_SPRING_DAMPING"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_SPRING_DAMPING;
	_Param[(new std::string("PARAM_ANGULAR_SPRING_EQUILIBRIUM_POINT"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_SPRING_EQUILIBRIUM_POINT;
	_Param[(new std::string("PARAM_MAX"))->c_str()] = Generic6DOFJoint3D::Param::PARAM_MAX;
	_module.add("Param", std::move(_Param));
	qjs::Value _Flag = context->newObject();
	_Flag[(new std::string("FLAG_ENABLE_LINEAR_LIMIT"))->c_str()] = Generic6DOFJoint3D::Flag::FLAG_ENABLE_LINEAR_LIMIT;
	_Flag[(new std::string("FLAG_ENABLE_ANGULAR_LIMIT"))->c_str()] = Generic6DOFJoint3D::Flag::FLAG_ENABLE_ANGULAR_LIMIT;
	_Flag[(new std::string("FLAG_ENABLE_LINEAR_SPRING"))->c_str()] = Generic6DOFJoint3D::Flag::FLAG_ENABLE_LINEAR_SPRING;
	_Flag[(new std::string("FLAG_ENABLE_ANGULAR_SPRING"))->c_str()] = Generic6DOFJoint3D::Flag::FLAG_ENABLE_ANGULAR_SPRING;
	_Flag[(new std::string("FLAG_ENABLE_MOTOR"))->c_str()] = Generic6DOFJoint3D::Flag::FLAG_ENABLE_MOTOR;
	_Flag[(new std::string("FLAG_ENABLE_LINEAR_MOTOR"))->c_str()] = Generic6DOFJoint3D::Flag::FLAG_ENABLE_LINEAR_MOTOR;
	_Flag[(new std::string("FLAG_MAX"))->c_str()] = Generic6DOFJoint3D::Flag::FLAG_MAX;
	_module.add("Flag", std::move(_Flag));
}