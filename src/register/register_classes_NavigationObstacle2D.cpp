
#include <godot_cpp/classes/navigation_obstacle2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationObstacle2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<NavigationObstacle2D>("NavigationObstacle2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<double (NavigationObstacle2D::*)() const>(&NavigationObstacle2D::get_radius), static_cast<void (NavigationObstacle2D::*)(double)>(&NavigationObstacle2D::set_radius)>((new std::string("radius"))->c_str())
			.property<static_cast<PackedVector2Array (NavigationObstacle2D::*)() const>(&NavigationObstacle2D::get_vertices), static_cast<void (NavigationObstacle2D::*)(const PackedVector2Array &)>(&NavigationObstacle2D::set_vertices)>((new std::string("vertices"))->c_str())
			.property<static_cast<bool (NavigationObstacle2D::*)() const>(&NavigationObstacle2D::get_affect_navigation_mesh), static_cast<void (NavigationObstacle2D::*)(bool)>(&NavigationObstacle2D::set_affect_navigation_mesh)>((new std::string("affect_navigation_mesh"))->c_str())
			.property<static_cast<bool (NavigationObstacle2D::*)() const>(&NavigationObstacle2D::get_carve_navigation_mesh), static_cast<void (NavigationObstacle2D::*)(bool)>(&NavigationObstacle2D::set_carve_navigation_mesh)>((new std::string("carve_navigation_mesh"))->c_str())
			.property<static_cast<bool (NavigationObstacle2D::*)() const>(&NavigationObstacle2D::get_avoidance_enabled), static_cast<void (NavigationObstacle2D::*)(bool)>(&NavigationObstacle2D::set_avoidance_enabled)>((new std::string("avoidance_enabled"))->c_str())
			.property<static_cast<Vector2 (NavigationObstacle2D::*)() const>(&NavigationObstacle2D::get_velocity), static_cast<void (NavigationObstacle2D::*)(const Vector2 &)>(&NavigationObstacle2D::set_velocity)>((new std::string("velocity"))->c_str())
			.property<static_cast<uint32_t (NavigationObstacle2D::*)() const>(&NavigationObstacle2D::get_avoidance_layers), static_cast<void (NavigationObstacle2D::*)(uint32_t)>(&NavigationObstacle2D::set_avoidance_layers)>((new std::string("avoidance_layers"))->c_str())
			.fun<static_cast<RID (NavigationObstacle2D::*)() const>(&NavigationObstacle2D::get_rid)>((new std::string("get_rid"))->c_str())
			.fun<static_cast<void (NavigationObstacle2D::*)(const RID &)>(&NavigationObstacle2D::set_navigation_map)>((new std::string("set_navigation_map"))->c_str())
			.fun<static_cast<RID (NavigationObstacle2D::*)() const>(&NavigationObstacle2D::get_navigation_map)>((new std::string("get_navigation_map"))->c_str())
			.fun<static_cast<void (NavigationObstacle2D::*)(int32_t, bool)>(&NavigationObstacle2D::set_avoidance_layer_value)>((new std::string("set_avoidance_layer_value"))->c_str())
			.fun<static_cast<bool (NavigationObstacle2D::*)(int32_t) const>(&NavigationObstacle2D::get_avoidance_layer_value)>((new std::string("get_avoidance_layer_value"))->c_str());
}