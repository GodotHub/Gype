
#include <godot_cpp/classes/navigation_link2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationLink2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<NavigationLink2D>("NavigationLink2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<bool (NavigationLink2D::*)() const>(&NavigationLink2D::is_enabled), static_cast<void (NavigationLink2D::*)(bool)>(&NavigationLink2D::set_enabled)>((new std::string("enabled"))->c_str())
			.property<static_cast<bool (NavigationLink2D::*)() const>(&NavigationLink2D::is_bidirectional), static_cast<void (NavigationLink2D::*)(bool)>(&NavigationLink2D::set_bidirectional)>((new std::string("bidirectional"))->c_str())
			.property<static_cast<uint32_t (NavigationLink2D::*)() const>(&NavigationLink2D::get_navigation_layers), static_cast<void (NavigationLink2D::*)(uint32_t)>(&NavigationLink2D::set_navigation_layers)>((new std::string("navigation_layers"))->c_str())
			.property<static_cast<Vector2 (NavigationLink2D::*)() const>(&NavigationLink2D::get_start_position), static_cast<void (NavigationLink2D::*)(const Vector2 &)>(&NavigationLink2D::set_start_position)>((new std::string("start_position"))->c_str())
			.property<static_cast<Vector2 (NavigationLink2D::*)() const>(&NavigationLink2D::get_end_position), static_cast<void (NavigationLink2D::*)(const Vector2 &)>(&NavigationLink2D::set_end_position)>((new std::string("end_position"))->c_str())
			.property<static_cast<double (NavigationLink2D::*)() const>(&NavigationLink2D::get_enter_cost), static_cast<void (NavigationLink2D::*)(double)>(&NavigationLink2D::set_enter_cost)>((new std::string("enter_cost"))->c_str())
			.property<static_cast<double (NavigationLink2D::*)() const>(&NavigationLink2D::get_travel_cost), static_cast<void (NavigationLink2D::*)(double)>(&NavigationLink2D::set_travel_cost)>((new std::string("travel_cost"))->c_str())
			.fun<static_cast<RID (NavigationLink2D::*)() const>(&NavigationLink2D::get_rid)>((new std::string("get_rid"))->c_str())
			.fun<static_cast<void (NavigationLink2D::*)(int32_t, bool)>(&NavigationLink2D::set_navigation_layer_value)>((new std::string("set_navigation_layer_value"))->c_str())
			.fun<static_cast<bool (NavigationLink2D::*)(int32_t) const>(&NavigationLink2D::get_navigation_layer_value)>((new std::string("get_navigation_layer_value"))->c_str())
			.fun<static_cast<void (NavigationLink2D::*)(const Vector2 &)>(&NavigationLink2D::set_global_start_position)>((new std::string("set_global_start_position"))->c_str())
			.fun<static_cast<Vector2 (NavigationLink2D::*)() const>(&NavigationLink2D::get_global_start_position)>((new std::string("get_global_start_position"))->c_str())
			.fun<static_cast<void (NavigationLink2D::*)(const Vector2 &)>(&NavigationLink2D::set_global_end_position)>((new std::string("set_global_end_position"))->c_str())
			.fun<static_cast<Vector2 (NavigationLink2D::*)() const>(&NavigationLink2D::get_global_end_position)>((new std::string("get_global_end_position"))->c_str());
}