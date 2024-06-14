#include <godot_cpp/classes/physics_direct_space_state2d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/world2d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_World2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<World2D>("World2D")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<RID (World2D::*)() const>(&World2D::get_canvas)>((new std::string("canvas"))->c_str())
			.property<static_cast<RID (World2D::*)() const>(&World2D::get_space)>((new std::string("space"))->c_str())
			.property<static_cast<RID (World2D::*)() const>(&World2D::get_navigation_map)>((new std::string("navigation_map"))->c_str())
			.property<static_cast<PhysicsDirectSpaceState2D *(World2D::*)()>(&World2D::get_direct_space_state)>((new std::string("direct_space_state"))->c_str());
}