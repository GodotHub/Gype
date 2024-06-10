#include <godot_cpp/classes/navigation_obstacle3d.hpp>
#include <godot_cpp/variant/rid.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationObstacle3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<NavigationObstacle3D>("NavigationObstacle3D")
			.constructor<>()
			.property<&NavigationObstacle3D::get_avoidance_enabled, &NavigationObstacle3D::set_avoidance_enabled>("avoidance_enabled")
			.property<&NavigationObstacle3D::get_velocity, &NavigationObstacle3D::set_velocity>("velocity")
			.property<&NavigationObstacle3D::get_radius, &NavigationObstacle3D::set_radius>("radius")
			.property<&NavigationObstacle3D::get_height, &NavigationObstacle3D::set_height>("height")
			.property<&NavigationObstacle3D::get_vertices, &NavigationObstacle3D::set_vertices>("vertices")
			.property<&NavigationObstacle3D::get_avoidance_layers, &NavigationObstacle3D::set_avoidance_layers>("avoidance_layers")
			.property<&NavigationObstacle3D::get_use_3d_avoidance, &NavigationObstacle3D::set_use_3d_avoidance>("use_3d_avoidance")
			.fun<static_cast<RID (NavigationObstacle3D::*)() const>(&NavigationObstacle3D::get_rid)>("get_rid")
			.fun<static_cast<void (NavigationObstacle3D::*)(const RID &)>(&NavigationObstacle3D::set_navigation_map)>("set_navigation_map")
			.fun<static_cast<RID (NavigationObstacle3D::*)() const>(&NavigationObstacle3D::get_navigation_map)>("get_navigation_map")
			.fun<static_cast<void (NavigationObstacle3D::*)(int32_t, bool)>(&NavigationObstacle3D::set_avoidance_layer_value)>("set_avoidance_layer_value")
			.fun<static_cast<bool (NavigationObstacle3D::*)(int32_t) const>(&NavigationObstacle3D::get_avoidance_layer_value)>("get_avoidance_layer_value");
}