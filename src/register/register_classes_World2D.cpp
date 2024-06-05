#include <godot_cpp/classes/physics_direct_space_state2d.hpp>
#include <godot_cpp/classes/world2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_World2D() {
	qjs::Context::Module &_module = _General;
	_module.class_<World2D>("World2D")
			.constructor<>()
			.property<&World2D::get_canvas>("canvas")
			.property<&World2D::get_space>("space")
			.property<&World2D::get_navigation_map>("navigation_map")
			.property<&World2D::get_direct_space_state>("direct_space_state");
}