#include <godot_cpp/classes/pin_joint2d.hpp>
#include <godot_cpp/classes/joint2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PinJoint2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<PinJoint2D>("PinJoint2D")
            .constructor<>()
            .base<Joint2D>()
            .property<static_cast<double(PinJoint2D::*)()const>(&PinJoint2D::get_softness),static_cast<void(PinJoint2D::*)(double)>(&PinJoint2D::set_softness)>("softness")
            .property<static_cast<bool(PinJoint2D::*)()const>(&PinJoint2D::is_angular_limit_enabled),static_cast<void(PinJoint2D::*)(bool)>(&PinJoint2D::set_angular_limit_enabled)>("angular_limit_enabled")
            .property<static_cast<double(PinJoint2D::*)()const>(&PinJoint2D::get_angular_limit_lower),static_cast<void(PinJoint2D::*)(double)>(&PinJoint2D::set_angular_limit_lower)>("angular_limit_lower")
            .property<static_cast<double(PinJoint2D::*)()const>(&PinJoint2D::get_angular_limit_upper),static_cast<void(PinJoint2D::*)(double)>(&PinJoint2D::set_angular_limit_upper)>("angular_limit_upper")
            .property<static_cast<bool(PinJoint2D::*)()const>(&PinJoint2D::is_motor_enabled),static_cast<void(PinJoint2D::*)(bool)>(&PinJoint2D::set_motor_enabled)>("motor_enabled")
            .property<static_cast<double(PinJoint2D::*)()const>(&PinJoint2D::get_motor_target_velocity),static_cast<void(PinJoint2D::*)(double)>(&PinJoint2D::set_motor_target_velocity)>("motor_target_velocity")
;}