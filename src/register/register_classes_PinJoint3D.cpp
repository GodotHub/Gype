#include <godot_cpp/classes/pin_joint3d.hpp>
#include <godot_cpp/classes/joint3d.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PinJoint3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<PinJoint3D>("PinJoint3D")
            .constructor<>()
            .base<Joint3D>()
            .fun<static_cast<void(PinJoint3D::*)(PinJoint3D::Param,double)>(&PinJoint3D::set_param)>("set_param")
            .fun<static_cast<double(PinJoint3D::*)(PinJoint3D::Param)const>(&PinJoint3D::get_param)>("get_param")
;    qjs::Value _Param = context->newObject();
    _Param["PARAM_BIAS"] = PinJoint3D::Param::PARAM_BIAS;
    _Param["PARAM_DAMPING"] = PinJoint3D::Param::PARAM_DAMPING;
    _Param["PARAM_IMPULSE_CLAMP"] = PinJoint3D::Param::PARAM_IMPULSE_CLAMP;
    _module.add("Param", std::move(_Param));
}