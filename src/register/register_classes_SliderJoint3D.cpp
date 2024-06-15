#include <godot_cpp/classes/slider_joint3d.hpp>
#include <godot_cpp/classes/joint3d.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SliderJoint3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<SliderJoint3D>("SliderJoint3D")
            .constructor<>()
            .base<Joint3D>()
            .fun<static_cast<void(SliderJoint3D::*)(SliderJoint3D::Param,double)>(&SliderJoint3D::set_param)>("set_param")
            .fun<static_cast<double(SliderJoint3D::*)(SliderJoint3D::Param)const>(&SliderJoint3D::get_param)>("get_param")
;    qjs::Value _Param = context->newObject();
    _Param["PARAM_LINEAR_LIMIT_UPPER"] = SliderJoint3D::Param::PARAM_LINEAR_LIMIT_UPPER;
    _Param["PARAM_LINEAR_LIMIT_LOWER"] = SliderJoint3D::Param::PARAM_LINEAR_LIMIT_LOWER;
    _Param["PARAM_LINEAR_LIMIT_SOFTNESS"] = SliderJoint3D::Param::PARAM_LINEAR_LIMIT_SOFTNESS;
    _Param["PARAM_LINEAR_LIMIT_RESTITUTION"] = SliderJoint3D::Param::PARAM_LINEAR_LIMIT_RESTITUTION;
    _Param["PARAM_LINEAR_LIMIT_DAMPING"] = SliderJoint3D::Param::PARAM_LINEAR_LIMIT_DAMPING;
    _Param["PARAM_LINEAR_MOTION_SOFTNESS"] = SliderJoint3D::Param::PARAM_LINEAR_MOTION_SOFTNESS;
    _Param["PARAM_LINEAR_MOTION_RESTITUTION"] = SliderJoint3D::Param::PARAM_LINEAR_MOTION_RESTITUTION;
    _Param["PARAM_LINEAR_MOTION_DAMPING"] = SliderJoint3D::Param::PARAM_LINEAR_MOTION_DAMPING;
    _Param["PARAM_LINEAR_ORTHOGONAL_SOFTNESS"] = SliderJoint3D::Param::PARAM_LINEAR_ORTHOGONAL_SOFTNESS;
    _Param["PARAM_LINEAR_ORTHOGONAL_RESTITUTION"] = SliderJoint3D::Param::PARAM_LINEAR_ORTHOGONAL_RESTITUTION;
    _Param["PARAM_LINEAR_ORTHOGONAL_DAMPING"] = SliderJoint3D::Param::PARAM_LINEAR_ORTHOGONAL_DAMPING;
    _Param["PARAM_ANGULAR_LIMIT_UPPER"] = SliderJoint3D::Param::PARAM_ANGULAR_LIMIT_UPPER;
    _Param["PARAM_ANGULAR_LIMIT_LOWER"] = SliderJoint3D::Param::PARAM_ANGULAR_LIMIT_LOWER;
    _Param["PARAM_ANGULAR_LIMIT_SOFTNESS"] = SliderJoint3D::Param::PARAM_ANGULAR_LIMIT_SOFTNESS;
    _Param["PARAM_ANGULAR_LIMIT_RESTITUTION"] = SliderJoint3D::Param::PARAM_ANGULAR_LIMIT_RESTITUTION;
    _Param["PARAM_ANGULAR_LIMIT_DAMPING"] = SliderJoint3D::Param::PARAM_ANGULAR_LIMIT_DAMPING;
    _Param["PARAM_ANGULAR_MOTION_SOFTNESS"] = SliderJoint3D::Param::PARAM_ANGULAR_MOTION_SOFTNESS;
    _Param["PARAM_ANGULAR_MOTION_RESTITUTION"] = SliderJoint3D::Param::PARAM_ANGULAR_MOTION_RESTITUTION;
    _Param["PARAM_ANGULAR_MOTION_DAMPING"] = SliderJoint3D::Param::PARAM_ANGULAR_MOTION_DAMPING;
    _Param["PARAM_ANGULAR_ORTHOGONAL_SOFTNESS"] = SliderJoint3D::Param::PARAM_ANGULAR_ORTHOGONAL_SOFTNESS;
    _Param["PARAM_ANGULAR_ORTHOGONAL_RESTITUTION"] = SliderJoint3D::Param::PARAM_ANGULAR_ORTHOGONAL_RESTITUTION;
    _Param["PARAM_ANGULAR_ORTHOGONAL_DAMPING"] = SliderJoint3D::Param::PARAM_ANGULAR_ORTHOGONAL_DAMPING;
    _Param["PARAM_MAX"] = SliderJoint3D::Param::PARAM_MAX;
    _module.add("Param", std::move(_Param));
}