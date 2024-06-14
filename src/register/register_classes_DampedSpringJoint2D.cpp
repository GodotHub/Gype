#include <godot_cpp/classes/damped_spring_joint2d.hpp>
#include <godot_cpp/classes/joint2d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_DampedSpringJoint2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<DampedSpringJoint2D>("DampedSpringJoint2D")
			.constructor<>()
			.base<Joint2D>()
			.property<static_cast<double (DampedSpringJoint2D::*)() const>(&DampedSpringJoint2D::get_length), static_cast<void (DampedSpringJoint2D::*)(double)>(&DampedSpringJoint2D::set_length)>((new std::string("length"))->c_str())
			.property<static_cast<double (DampedSpringJoint2D::*)() const>(&DampedSpringJoint2D::get_rest_length), static_cast<void (DampedSpringJoint2D::*)(double)>(&DampedSpringJoint2D::set_rest_length)>((new std::string("rest_length"))->c_str())
			.property<static_cast<double (DampedSpringJoint2D::*)() const>(&DampedSpringJoint2D::get_stiffness), static_cast<void (DampedSpringJoint2D::*)(double)>(&DampedSpringJoint2D::set_stiffness)>((new std::string("stiffness"))->c_str())
			.property<static_cast<double (DampedSpringJoint2D::*)() const>(&DampedSpringJoint2D::get_damping), static_cast<void (DampedSpringJoint2D::*)(double)>(&DampedSpringJoint2D::set_damping)>((new std::string("damping"))->c_str());
}