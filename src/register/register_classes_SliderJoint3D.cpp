#include <godot_cpp/classes/joint3d.hpp>
#include <godot_cpp/classes/slider_joint3d.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SliderJoint3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<SliderJoint3D>("SliderJoint3D")
			.constructor<>()
			.base<Joint3D>()
			.fun<static_cast<void (SliderJoint3D::*)(SliderJoint3D::Param, double)>(&SliderJoint3D::set_param)>((new std::string("set_param"))->c_str())
			.fun<static_cast<double (SliderJoint3D::*)(SliderJoint3D::Param) const>(&SliderJoint3D::get_param)>((new std::string("get_param"))->c_str());
	qjs::Value _Param = context->newObject();
	_Param[(new std::string("PARAM_LINEAR_LIMIT_UPPER"))->c_str()] = SliderJoint3D::Param::PARAM_LINEAR_LIMIT_UPPER;
	_Param[(new std::string("PARAM_LINEAR_LIMIT_LOWER"))->c_str()] = SliderJoint3D::Param::PARAM_LINEAR_LIMIT_LOWER;
	_Param[(new std::string("PARAM_LINEAR_LIMIT_SOFTNESS"))->c_str()] = SliderJoint3D::Param::PARAM_LINEAR_LIMIT_SOFTNESS;
	_Param[(new std::string("PARAM_LINEAR_LIMIT_RESTITUTION"))->c_str()] = SliderJoint3D::Param::PARAM_LINEAR_LIMIT_RESTITUTION;
	_Param[(new std::string("PARAM_LINEAR_LIMIT_DAMPING"))->c_str()] = SliderJoint3D::Param::PARAM_LINEAR_LIMIT_DAMPING;
	_Param[(new std::string("PARAM_LINEAR_MOTION_SOFTNESS"))->c_str()] = SliderJoint3D::Param::PARAM_LINEAR_MOTION_SOFTNESS;
	_Param[(new std::string("PARAM_LINEAR_MOTION_RESTITUTION"))->c_str()] = SliderJoint3D::Param::PARAM_LINEAR_MOTION_RESTITUTION;
	_Param[(new std::string("PARAM_LINEAR_MOTION_DAMPING"))->c_str()] = SliderJoint3D::Param::PARAM_LINEAR_MOTION_DAMPING;
	_Param[(new std::string("PARAM_LINEAR_ORTHOGONAL_SOFTNESS"))->c_str()] = SliderJoint3D::Param::PARAM_LINEAR_ORTHOGONAL_SOFTNESS;
	_Param[(new std::string("PARAM_LINEAR_ORTHOGONAL_RESTITUTION"))->c_str()] = SliderJoint3D::Param::PARAM_LINEAR_ORTHOGONAL_RESTITUTION;
	_Param[(new std::string("PARAM_LINEAR_ORTHOGONAL_DAMPING"))->c_str()] = SliderJoint3D::Param::PARAM_LINEAR_ORTHOGONAL_DAMPING;
	_Param[(new std::string("PARAM_ANGULAR_LIMIT_UPPER"))->c_str()] = SliderJoint3D::Param::PARAM_ANGULAR_LIMIT_UPPER;
	_Param[(new std::string("PARAM_ANGULAR_LIMIT_LOWER"))->c_str()] = SliderJoint3D::Param::PARAM_ANGULAR_LIMIT_LOWER;
	_Param[(new std::string("PARAM_ANGULAR_LIMIT_SOFTNESS"))->c_str()] = SliderJoint3D::Param::PARAM_ANGULAR_LIMIT_SOFTNESS;
	_Param[(new std::string("PARAM_ANGULAR_LIMIT_RESTITUTION"))->c_str()] = SliderJoint3D::Param::PARAM_ANGULAR_LIMIT_RESTITUTION;
	_Param[(new std::string("PARAM_ANGULAR_LIMIT_DAMPING"))->c_str()] = SliderJoint3D::Param::PARAM_ANGULAR_LIMIT_DAMPING;
	_Param[(new std::string("PARAM_ANGULAR_MOTION_SOFTNESS"))->c_str()] = SliderJoint3D::Param::PARAM_ANGULAR_MOTION_SOFTNESS;
	_Param[(new std::string("PARAM_ANGULAR_MOTION_RESTITUTION"))->c_str()] = SliderJoint3D::Param::PARAM_ANGULAR_MOTION_RESTITUTION;
	_Param[(new std::string("PARAM_ANGULAR_MOTION_DAMPING"))->c_str()] = SliderJoint3D::Param::PARAM_ANGULAR_MOTION_DAMPING;
	_Param[(new std::string("PARAM_ANGULAR_ORTHOGONAL_SOFTNESS"))->c_str()] = SliderJoint3D::Param::PARAM_ANGULAR_ORTHOGONAL_SOFTNESS;
	_Param[(new std::string("PARAM_ANGULAR_ORTHOGONAL_RESTITUTION"))->c_str()] = SliderJoint3D::Param::PARAM_ANGULAR_ORTHOGONAL_RESTITUTION;
	_Param[(new std::string("PARAM_ANGULAR_ORTHOGONAL_DAMPING"))->c_str()] = SliderJoint3D::Param::PARAM_ANGULAR_ORTHOGONAL_DAMPING;
	_Param[(new std::string("PARAM_MAX"))->c_str()] = SliderJoint3D::Param::PARAM_MAX;
	_module.add("Param", std::move(_Param));
}