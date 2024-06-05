#include <godot_cpp/classes/navigation_obstacle2d.hpp>
#include <godot_cpp/variant/rid.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationObstacle2D() {
	qjs::Context::Module &_module = _Node2D;
	_module.class_<NavigationObstacle2D>("NavigationObstacle2D")
			.constructor<>()
			.property<&NavigationObstacle2D::get_avoidance_enabled, &NavigationObstacle2D::set_avoidance_enabled>("avoidance_enabled")
			.property<&NavigationObstacle2D::get_velocity, &NavigationObstacle2D::set_velocity>("velocity")
			.property<&NavigationObstacle2D::get_radius, &NavigationObstacle2D::set_radius>("radius")
			.property<&NavigationObstacle2D::get_vertices, &NavigationObstacle2D::set_vertices>("vertices")
			.property<&NavigationObstacle2D::get_avoidance_layers, &NavigationObstacle2D::set_avoidance_layers>("avoidance_layers")
			.fun<static_cast<RID (NavigationObstacle2D::*)() const>(&NavigationObstacle2D::get_rid)>("get_rid")
			.fun<static_cast<void (NavigationObstacle2D::*)(const RID &)>(&NavigationObstacle2D::set_navigation_map)>("set_navigation_map")
			.fun<static_cast<RID (NavigationObstacle2D::*)() const>(&NavigationObstacle2D::get_navigation_map)>("get_navigation_map")
			.fun<static_cast<void (NavigationObstacle2D::*)(int32_t, bool)>(&NavigationObstacle2D::set_avoidance_layer_value)>("set_avoidance_layer_value")
			.fun<static_cast<bool (NavigationObstacle2D::*)(int32_t) const>(&NavigationObstacle2D::get_avoidance_layer_value)>("get_avoidance_layer_value");
}