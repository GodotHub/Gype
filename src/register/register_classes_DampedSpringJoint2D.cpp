#include <godot_cpp/classes/damped_spring_joint2d.hpp>
#include <godot_cpp/classes/joint2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_DampedSpringJoint2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<DampedSpringJoint2D>("DampedSpringJoint2D")
            .constructor<>()
            .base<Joint2D>()
            .property<static_cast<double(DampedSpringJoint2D::*)()const>(&DampedSpringJoint2D::get_length),static_cast<void(DampedSpringJoint2D::*)(double)>(&DampedSpringJoint2D::set_length)>("length")
            .property<static_cast<double(DampedSpringJoint2D::*)()const>(&DampedSpringJoint2D::get_rest_length),static_cast<void(DampedSpringJoint2D::*)(double)>(&DampedSpringJoint2D::set_rest_length)>("rest_length")
            .property<static_cast<double(DampedSpringJoint2D::*)()const>(&DampedSpringJoint2D::get_stiffness),static_cast<void(DampedSpringJoint2D::*)(double)>(&DampedSpringJoint2D::set_stiffness)>("stiffness")
            .property<static_cast<double(DampedSpringJoint2D::*)()const>(&DampedSpringJoint2D::get_damping),static_cast<void(DampedSpringJoint2D::*)(double)>(&DampedSpringJoint2D::set_damping)>("damping")
;}