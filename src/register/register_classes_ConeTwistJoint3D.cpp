#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/cone_twist_joint3d.hpp>

using namespace godot;

void register_classes_ConeTwistJoint3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<ConeTwistJoint3D>("ConeTwistJoint3D")
           .constructor<>()
           .property<ConeTwistJoint3D::get_param, ConeTwistJoint3D::set_param>("swing_span")
           .property<ConeTwistJoint3D::get_param, ConeTwistJoint3D::set_param>("twist_span")
           .property<ConeTwistJoint3D::get_param, ConeTwistJoint3D::set_param>("bias")
           .property<ConeTwistJoint3D::get_param, ConeTwistJoint3D::set_param>("softness")
           .property<ConeTwistJoint3D::get_param, ConeTwistJoint3D::set_param>("relaxation")
;}