#include <godot_cpp/classes/groove_joint2d.hpp>
#include <godot_cpp/classes/joint2d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GrooveJoint2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<GrooveJoint2D>("GrooveJoint2D")
			.constructor<>()
			.base<Joint2D>()
			.property<static_cast<double (GrooveJoint2D::*)() const>(&GrooveJoint2D::get_length), static_cast<void (GrooveJoint2D::*)(double)>(&GrooveJoint2D::set_length)>((new std::string("length"))->c_str())
			.property<static_cast<double (GrooveJoint2D::*)() const>(&GrooveJoint2D::get_initial_offset), static_cast<void (GrooveJoint2D::*)(double)>(&GrooveJoint2D::set_initial_offset)>((new std::string("initial_offset"))->c_str());
}