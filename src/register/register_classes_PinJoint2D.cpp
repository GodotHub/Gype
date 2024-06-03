#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_PinJoint2D() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<PinJoint2D>("PinJoint2D")
           .constructor<>()
           .property<PinJoint2D::get_softness, PinJoint2D::set_softness>("softness")
           .property<PinJoint2D::is_angular_limit_enabled, PinJoint2D::set_angular_limit_enabled>("angular_limit_enabled")
           .property<PinJoint2D::get_angular_limit_lower, PinJoint2D::set_angular_limit_lower>("angular_limit_lower")
           .property<PinJoint2D::get_angular_limit_upper, PinJoint2D::set_angular_limit_upper>("angular_limit_upper")
           .property<PinJoint2D::is_motor_enabled, PinJoint2D::set_motor_enabled>("motor_enabled")
           .property<PinJoint2D::get_motor_target_velocity, PinJoint2D::set_motor_target_velocity>("motor_target_velocity")
;}