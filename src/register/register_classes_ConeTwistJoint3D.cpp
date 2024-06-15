#include <godot_cpp/classes/cone_twist_joint3d.hpp>
#include <godot_cpp/classes/joint3d.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ConeTwistJoint3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<ConeTwistJoint3D>("ConeTwistJoint3D")
            .constructor<>()
            .base<Joint3D>()
            .property<static_cast<double(ConeTwistJoint3D::*)(ConeTwistJoint3D::Param)const>(&ConeTwistJoint3D::get_param),static_cast<void(ConeTwistJoint3D::*)(ConeTwistJoint3D::Param,double)>(&ConeTwistJoint3D::set_param)>("swing_span")
            .property<static_cast<double(ConeTwistJoint3D::*)(ConeTwistJoint3D::Param)const>(&ConeTwistJoint3D::get_param),static_cast<void(ConeTwistJoint3D::*)(ConeTwistJoint3D::Param,double)>(&ConeTwistJoint3D::set_param)>("twist_span")
            .property<static_cast<double(ConeTwistJoint3D::*)(ConeTwistJoint3D::Param)const>(&ConeTwistJoint3D::get_param),static_cast<void(ConeTwistJoint3D::*)(ConeTwistJoint3D::Param,double)>(&ConeTwistJoint3D::set_param)>("bias")
            .property<static_cast<double(ConeTwistJoint3D::*)(ConeTwistJoint3D::Param)const>(&ConeTwistJoint3D::get_param),static_cast<void(ConeTwistJoint3D::*)(ConeTwistJoint3D::Param,double)>(&ConeTwistJoint3D::set_param)>("softness")
            .property<static_cast<double(ConeTwistJoint3D::*)(ConeTwistJoint3D::Param)const>(&ConeTwistJoint3D::get_param),static_cast<void(ConeTwistJoint3D::*)(ConeTwistJoint3D::Param,double)>(&ConeTwistJoint3D::set_param)>("relaxation")
;    qjs::Value _Param = context->newObject();
    _Param["PARAM_SWING_SPAN"] = ConeTwistJoint3D::Param::PARAM_SWING_SPAN;
    _Param["PARAM_TWIST_SPAN"] = ConeTwistJoint3D::Param::PARAM_TWIST_SPAN;
    _Param["PARAM_BIAS"] = ConeTwistJoint3D::Param::PARAM_BIAS;
    _Param["PARAM_SOFTNESS"] = ConeTwistJoint3D::Param::PARAM_SOFTNESS;
    _Param["PARAM_RELAXATION"] = ConeTwistJoint3D::Param::PARAM_RELAXATION;
    _Param["PARAM_MAX"] = ConeTwistJoint3D::Param::PARAM_MAX;
    _module.add("Param", std::move(_Param));
}