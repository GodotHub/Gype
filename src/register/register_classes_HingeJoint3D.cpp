#include <godot_cpp/classes/hinge_joint3d.hpp>
#include <godot_cpp/classes/joint3d.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_HingeJoint3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<HingeJoint3D>("HingeJoint3D")
            .constructor<>()
            .base<Joint3D>()
            .fun<static_cast<void(HingeJoint3D::*)(HingeJoint3D::Param,double)>(&HingeJoint3D::set_param)>("set_param")
            .fun<static_cast<double(HingeJoint3D::*)(HingeJoint3D::Param)const>(&HingeJoint3D::get_param)>("get_param")
            .fun<static_cast<void(HingeJoint3D::*)(HingeJoint3D::Flag,bool)>(&HingeJoint3D::set_flag)>("set_flag")
            .fun<static_cast<bool(HingeJoint3D::*)(HingeJoint3D::Flag)const>(&HingeJoint3D::get_flag)>("get_flag")
;    qjs::Value _Param = context->newObject();
    _Param["PARAM_BIAS"] = HingeJoint3D::Param::PARAM_BIAS;
    _Param["PARAM_LIMIT_UPPER"] = HingeJoint3D::Param::PARAM_LIMIT_UPPER;
    _Param["PARAM_LIMIT_LOWER"] = HingeJoint3D::Param::PARAM_LIMIT_LOWER;
    _Param["PARAM_LIMIT_BIAS"] = HingeJoint3D::Param::PARAM_LIMIT_BIAS;
    _Param["PARAM_LIMIT_SOFTNESS"] = HingeJoint3D::Param::PARAM_LIMIT_SOFTNESS;
    _Param["PARAM_LIMIT_RELAXATION"] = HingeJoint3D::Param::PARAM_LIMIT_RELAXATION;
    _Param["PARAM_MOTOR_TARGET_VELOCITY"] = HingeJoint3D::Param::PARAM_MOTOR_TARGET_VELOCITY;
    _Param["PARAM_MOTOR_MAX_IMPULSE"] = HingeJoint3D::Param::PARAM_MOTOR_MAX_IMPULSE;
    _Param["PARAM_MAX"] = HingeJoint3D::Param::PARAM_MAX;
    _module.add("Param", std::move(_Param));
    qjs::Value _Flag = context->newObject();
    _Flag["FLAG_USE_LIMIT"] = HingeJoint3D::Flag::FLAG_USE_LIMIT;
    _Flag["FLAG_ENABLE_MOTOR"] = HingeJoint3D::Flag::FLAG_ENABLE_MOTOR;
    _Flag["FLAG_MAX"] = HingeJoint3D::Flag::FLAG_MAX;
    _module.add("Flag", std::move(_Flag));
}