#include <godot_cpp/classes/groove_joint2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_GrooveJoint2D() {
	qjs::Context::Module &_module = _Node2D;
	_module.class_<GrooveJoint2D>("GrooveJoint2D")
			.constructor<>()
			.property<&GrooveJoint2D::get_length, &GrooveJoint2D::set_length>("length")
			.property<&GrooveJoint2D::get_initial_offset, &GrooveJoint2D::set_initial_offset>("initial_offset");
}