#include <godot_cpp/classes/navigation_polygon.hpp>
#include <godot_cpp/classes/navigation_region2d.hpp>
#include <godot_cpp/variant/rid.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationRegion2D() {
	qjs::Context::Module &_module = _Node2D;
	_module.class_<NavigationRegion2D>("NavigationRegion2D")
			.constructor<>()
			.property<&NavigationRegion2D::get_navigation_polygon, &NavigationRegion2D::set_navigation_polygon>("navigation_polygon")
			.property<&NavigationRegion2D::is_enabled, &NavigationRegion2D::set_enabled>("enabled")
			.property<&NavigationRegion2D::get_use_edge_connections, &NavigationRegion2D::set_use_edge_connections>("use_edge_connections")
			.property<&NavigationRegion2D::get_navigation_layers, &NavigationRegion2D::set_navigation_layers>("navigation_layers")
			.property<&NavigationRegion2D::get_enter_cost, &NavigationRegion2D::set_enter_cost>("enter_cost")
			.property<&NavigationRegion2D::get_travel_cost, &NavigationRegion2D::set_travel_cost>("travel_cost")
			.property<&NavigationRegion2D::get_constrain_avoidance, &NavigationRegion2D::set_constrain_avoidance>("constrain_avoidance")
			.property<&NavigationRegion2D::get_avoidance_layers, &NavigationRegion2D::set_avoidance_layers>("avoidance_layers")
			.fun<static_cast<RID (NavigationRegion2D::*)() const>(&NavigationRegion2D::get_rid)>("get_rid")
			.fun<static_cast<void (NavigationRegion2D::*)(const RID &)>(&NavigationRegion2D::set_navigation_map)>("set_navigation_map")
			.fun<static_cast<RID (NavigationRegion2D::*)() const>(&NavigationRegion2D::get_navigation_map)>("get_navigation_map")
			.fun<static_cast<void (NavigationRegion2D::*)(int32_t, bool)>(&NavigationRegion2D::set_navigation_layer_value)>("set_navigation_layer_value")
			.fun<static_cast<bool (NavigationRegion2D::*)(int32_t) const>(&NavigationRegion2D::get_navigation_layer_value)>("get_navigation_layer_value")
			.fun<static_cast<void (NavigationRegion2D::*)(int32_t, bool)>(&NavigationRegion2D::set_avoidance_layer_value)>("set_avoidance_layer_value")
			.fun<static_cast<bool (NavigationRegion2D::*)(int32_t) const>(&NavigationRegion2D::get_avoidance_layer_value)>("get_avoidance_layer_value")
			.fun<static_cast<RID (NavigationRegion2D::*)() const>(&NavigationRegion2D::get_region_rid)>("get_region_rid")
			.fun<static_cast<void (NavigationRegion2D::*)(bool)>(&NavigationRegion2D::bake_navigation_polygon)>("bake_navigation_polygon");
}