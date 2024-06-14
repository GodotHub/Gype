#include <godot_cpp/classes/cone_twist_joint3d.hpp>
#include <godot_cpp/classes/joint3d.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ConeTwistJoint3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<ConeTwistJoint3D>("ConeTwistJoint3D")
			.constructor<>()
			.base<Joint3D>()
			.property<static_cast<double (ConeTwistJoint3D::*)(ConeTwistJoint3D::Param) const>(&ConeTwistJoint3D::get_param), static_cast<void (ConeTwistJoint3D::*)(ConeTwistJoint3D::Param, double)>(&ConeTwistJoint3D::set_param)>((new std::string("swing_span"))->c_str())
			.property<static_cast<double (ConeTwistJoint3D::*)(ConeTwistJoint3D::Param) const>(&ConeTwistJoint3D::get_param), static_cast<void (ConeTwistJoint3D::*)(ConeTwistJoint3D::Param, double)>(&ConeTwistJoint3D::set_param)>((new std::string("twist_span"))->c_str())
			.property<static_cast<double (ConeTwistJoint3D::*)(ConeTwistJoint3D::Param) const>(&ConeTwistJoint3D::get_param), static_cast<void (ConeTwistJoint3D::*)(ConeTwistJoint3D::Param, double)>(&ConeTwistJoint3D::set_param)>((new std::string("bias"))->c_str())
			.property<static_cast<double (ConeTwistJoint3D::*)(ConeTwistJoint3D::Param) const>(&ConeTwistJoint3D::get_param), static_cast<void (ConeTwistJoint3D::*)(ConeTwistJoint3D::Param, double)>(&ConeTwistJoint3D::set_param)>((new std::string("softness"))->c_str())
			.property<static_cast<double (ConeTwistJoint3D::*)(ConeTwistJoint3D::Param) const>(&ConeTwistJoint3D::get_param), static_cast<void (ConeTwistJoint3D::*)(ConeTwistJoint3D::Param, double)>(&ConeTwistJoint3D::set_param)>((new std::string("relaxation"))->c_str());
	qjs::Value _Param = context->newObject();
	_Param[(new std::string("PARAM_SWING_SPAN"))->c_str()] = ConeTwistJoint3D::Param::PARAM_SWING_SPAN;
	_Param[(new std::string("PARAM_TWIST_SPAN"))->c_str()] = ConeTwistJoint3D::Param::PARAM_TWIST_SPAN;
	_Param[(new std::string("PARAM_BIAS"))->c_str()] = ConeTwistJoint3D::Param::PARAM_BIAS;
	_Param[(new std::string("PARAM_SOFTNESS"))->c_str()] = ConeTwistJoint3D::Param::PARAM_SOFTNESS;
	_Param[(new std::string("PARAM_RELAXATION"))->c_str()] = ConeTwistJoint3D::Param::PARAM_RELAXATION;
	_Param[(new std::string("PARAM_MAX"))->c_str()] = ConeTwistJoint3D::Param::PARAM_MAX;
	_module.add("Param", std::move(_Param));
}