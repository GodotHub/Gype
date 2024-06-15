#include <godot_cpp/classes/generic6_dof_joint3d.hpp>
#include <godot_cpp/classes/joint3d.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Generic6DOFJoint3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<Generic6DOFJoint3D>("Generic6DOFJoint3D")
            .constructor<>()
            .base<Joint3D>()
            .fun<static_cast<void(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param,double)>(&Generic6DOFJoint3D::set_param_x)>("set_param_x")
            .fun<static_cast<double(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param)const>(&Generic6DOFJoint3D::get_param_x)>("get_param_x")
            .fun<static_cast<void(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param,double)>(&Generic6DOFJoint3D::set_param_y)>("set_param_y")
            .fun<static_cast<double(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param)const>(&Generic6DOFJoint3D::get_param_y)>("get_param_y")
            .fun<static_cast<void(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param,double)>(&Generic6DOFJoint3D::set_param_z)>("set_param_z")
            .fun<static_cast<double(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param)const>(&Generic6DOFJoint3D::get_param_z)>("get_param_z")
            .fun<static_cast<void(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag,bool)>(&Generic6DOFJoint3D::set_flag_x)>("set_flag_x")
            .fun<static_cast<bool(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag)const>(&Generic6DOFJoint3D::get_flag_x)>("get_flag_x")
            .fun<static_cast<void(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag,bool)>(&Generic6DOFJoint3D::set_flag_y)>("set_flag_y")
            .fun<static_cast<bool(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag)const>(&Generic6DOFJoint3D::get_flag_y)>("get_flag_y")
            .fun<static_cast<void(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag,bool)>(&Generic6DOFJoint3D::set_flag_z)>("set_flag_z")
            .fun<static_cast<bool(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag)const>(&Generic6DOFJoint3D::get_flag_z)>("get_flag_z")
;    qjs::Value _Param = context->newObject();
    _Param["PARAM_LINEAR_LOWER_LIMIT"] = Generic6DOFJoint3D::Param::PARAM_LINEAR_LOWER_LIMIT;
    _Param["PARAM_LINEAR_UPPER_LIMIT"] = Generic6DOFJoint3D::Param::PARAM_LINEAR_UPPER_LIMIT;
    _Param["PARAM_LINEAR_LIMIT_SOFTNESS"] = Generic6DOFJoint3D::Param::PARAM_LINEAR_LIMIT_SOFTNESS;
    _Param["PARAM_LINEAR_RESTITUTION"] = Generic6DOFJoint3D::Param::PARAM_LINEAR_RESTITUTION;
    _Param["PARAM_LINEAR_DAMPING"] = Generic6DOFJoint3D::Param::PARAM_LINEAR_DAMPING;
    _Param["PARAM_LINEAR_MOTOR_TARGET_VELOCITY"] = Generic6DOFJoint3D::Param::PARAM_LINEAR_MOTOR_TARGET_VELOCITY;
    _Param["PARAM_LINEAR_MOTOR_FORCE_LIMIT"] = Generic6DOFJoint3D::Param::PARAM_LINEAR_MOTOR_FORCE_LIMIT;
    _Param["PARAM_LINEAR_SPRING_STIFFNESS"] = Generic6DOFJoint3D::Param::PARAM_LINEAR_SPRING_STIFFNESS;
    _Param["PARAM_LINEAR_SPRING_DAMPING"] = Generic6DOFJoint3D::Param::PARAM_LINEAR_SPRING_DAMPING;
    _Param["PARAM_LINEAR_SPRING_EQUILIBRIUM_POINT"] = Generic6DOFJoint3D::Param::PARAM_LINEAR_SPRING_EQUILIBRIUM_POINT;
    _Param["PARAM_ANGULAR_LOWER_LIMIT"] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_LOWER_LIMIT;
    _Param["PARAM_ANGULAR_UPPER_LIMIT"] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_UPPER_LIMIT;
    _Param["PARAM_ANGULAR_LIMIT_SOFTNESS"] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_LIMIT_SOFTNESS;
    _Param["PARAM_ANGULAR_DAMPING"] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_DAMPING;
    _Param["PARAM_ANGULAR_RESTITUTION"] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_RESTITUTION;
    _Param["PARAM_ANGULAR_FORCE_LIMIT"] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_FORCE_LIMIT;
    _Param["PARAM_ANGULAR_ERP"] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_ERP;
    _Param["PARAM_ANGULAR_MOTOR_TARGET_VELOCITY"] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_MOTOR_TARGET_VELOCITY;
    _Param["PARAM_ANGULAR_MOTOR_FORCE_LIMIT"] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_MOTOR_FORCE_LIMIT;
    _Param["PARAM_ANGULAR_SPRING_STIFFNESS"] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_SPRING_STIFFNESS;
    _Param["PARAM_ANGULAR_SPRING_DAMPING"] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_SPRING_DAMPING;
    _Param["PARAM_ANGULAR_SPRING_EQUILIBRIUM_POINT"] = Generic6DOFJoint3D::Param::PARAM_ANGULAR_SPRING_EQUILIBRIUM_POINT;
    _Param["PARAM_MAX"] = Generic6DOFJoint3D::Param::PARAM_MAX;
    _module.add("Param", std::move(_Param));
    qjs::Value _Flag = context->newObject();
    _Flag["FLAG_ENABLE_LINEAR_LIMIT"] = Generic6DOFJoint3D::Flag::FLAG_ENABLE_LINEAR_LIMIT;
    _Flag["FLAG_ENABLE_ANGULAR_LIMIT"] = Generic6DOFJoint3D::Flag::FLAG_ENABLE_ANGULAR_LIMIT;
    _Flag["FLAG_ENABLE_LINEAR_SPRING"] = Generic6DOFJoint3D::Flag::FLAG_ENABLE_LINEAR_SPRING;
    _Flag["FLAG_ENABLE_ANGULAR_SPRING"] = Generic6DOFJoint3D::Flag::FLAG_ENABLE_ANGULAR_SPRING;
    _Flag["FLAG_ENABLE_MOTOR"] = Generic6DOFJoint3D::Flag::FLAG_ENABLE_MOTOR;
    _Flag["FLAG_ENABLE_LINEAR_MOTOR"] = Generic6DOFJoint3D::Flag::FLAG_ENABLE_LINEAR_MOTOR;
    _Flag["FLAG_MAX"] = Generic6DOFJoint3D::Flag::FLAG_MAX;
    _module.add("Flag", std::move(_Flag));
}