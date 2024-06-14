
#include <godot_cpp/classes/navigation_link3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationLink3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<NavigationLink3D>("NavigationLink3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<bool (NavigationLink3D::*)() const>(&NavigationLink3D::is_enabled), static_cast<void (NavigationLink3D::*)(bool)>(&NavigationLink3D::set_enabled)>((new std::string("enabled"))->c_str())
			.property<static_cast<bool (NavigationLink3D::*)() const>(&NavigationLink3D::is_bidirectional), static_cast<void (NavigationLink3D::*)(bool)>(&NavigationLink3D::set_bidirectional)>((new std::string("bidirectional"))->c_str())
			.property<static_cast<uint32_t (NavigationLink3D::*)() const>(&NavigationLink3D::get_navigation_layers), static_cast<void (NavigationLink3D::*)(uint32_t)>(&NavigationLink3D::set_navigation_layers)>((new std::string("navigation_layers"))->c_str())
			.property<static_cast<Vector3 (NavigationLink3D::*)() const>(&NavigationLink3D::get_start_position), static_cast<void (NavigationLink3D::*)(const Vector3 &)>(&NavigationLink3D::set_start_position)>((new std::string("start_position"))->c_str())
			.property<static_cast<Vector3 (NavigationLink3D::*)() const>(&NavigationLink3D::get_end_position), static_cast<void (NavigationLink3D::*)(const Vector3 &)>(&NavigationLink3D::set_end_position)>((new std::string("end_position"))->c_str())
			.property<static_cast<double (NavigationLink3D::*)() const>(&NavigationLink3D::get_enter_cost), static_cast<void (NavigationLink3D::*)(double)>(&NavigationLink3D::set_enter_cost)>((new std::string("enter_cost"))->c_str())
			.property<static_cast<double (NavigationLink3D::*)() const>(&NavigationLink3D::get_travel_cost), static_cast<void (NavigationLink3D::*)(double)>(&NavigationLink3D::set_travel_cost)>((new std::string("travel_cost"))->c_str())
			.fun<static_cast<RID (NavigationLink3D::*)() const>(&NavigationLink3D::get_rid)>((new std::string("get_rid"))->c_str())
			.fun<static_cast<void (NavigationLink3D::*)(int32_t, bool)>(&NavigationLink3D::set_navigation_layer_value)>((new std::string("set_navigation_layer_value"))->c_str())
			.fun<static_cast<bool (NavigationLink3D::*)(int32_t) const>(&NavigationLink3D::get_navigation_layer_value)>((new std::string("get_navigation_layer_value"))->c_str())
			.fun<static_cast<void (NavigationLink3D::*)(const Vector3 &)>(&NavigationLink3D::set_global_start_position)>((new std::string("set_global_start_position"))->c_str())
			.fun<static_cast<Vector3 (NavigationLink3D::*)() const>(&NavigationLink3D::get_global_start_position)>((new std::string("get_global_start_position"))->c_str())
			.fun<static_cast<void (NavigationLink3D::*)(const Vector3 &)>(&NavigationLink3D::set_global_end_position)>((new std::string("set_global_end_position"))->c_str())
			.fun<static_cast<Vector3 (NavigationLink3D::*)() const>(&NavigationLink3D::get_global_end_position)>((new std::string("get_global_end_position"))->c_str());
}