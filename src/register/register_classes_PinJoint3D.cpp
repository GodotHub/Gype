#include <godot_cpp/classes/joint3d.hpp>
#include <godot_cpp/classes/pin_joint3d.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PinJoint3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<PinJoint3D>("PinJoint3D")
			.constructor<>()
			.base<Joint3D>()
			.fun<static_cast<void (PinJoint3D::*)(PinJoint3D::Param, double)>(&PinJoint3D::set_param)>((new std::string("set_param"))->c_str())
			.fun<static_cast<double (PinJoint3D::*)(PinJoint3D::Param) const>(&PinJoint3D::get_param)>((new std::string("get_param"))->c_str());
	qjs::Value _Param = context->newObject();
	_Param[(new std::string("PARAM_BIAS"))->c_str()] = PinJoint3D::Param::PARAM_BIAS;
	_Param[(new std::string("PARAM_DAMPING"))->c_str()] = PinJoint3D::Param::PARAM_DAMPING;
	_Param[(new std::string("PARAM_IMPULSE_CLAMP"))->c_str()] = PinJoint3D::Param::PARAM_IMPULSE_CLAMP;
	_module.add("Param", std::move(_Param));
}