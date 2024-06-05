#include <godot_cpp/classes/damped_spring_joint2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_DampedSpringJoint2D() {
	qjs::Context::Module &_module = _Node2D;
	_module.class_<DampedSpringJoint2D>("DampedSpringJoint2D")
			.constructor<>()
			.property<&DampedSpringJoint2D::get_length, &DampedSpringJoint2D::set_length>("length")
			.property<&DampedSpringJoint2D::get_rest_length, &DampedSpringJoint2D::set_rest_length>("rest_length")
			.property<&DampedSpringJoint2D::get_stiffness, &DampedSpringJoint2D::set_stiffness>("stiffness")
			.property<&DampedSpringJoint2D::get_damping, &DampedSpringJoint2D::set_damping>("damping");
}