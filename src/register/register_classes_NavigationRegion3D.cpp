#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/navigation_region3d.hpp>
#include <godot_cpp/variant/rid.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationRegion3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<NavigationRegion3D>("NavigationRegion3D")
			.constructor<>()
			.property<&NavigationRegion3D::get_navigation_mesh, &NavigationRegion3D::set_navigation_mesh>("navigation_mesh")
			.property<&NavigationRegion3D::is_enabled, &NavigationRegion3D::set_enabled>("enabled")
			.property<&NavigationRegion3D::get_use_edge_connections, &NavigationRegion3D::set_use_edge_connections>("use_edge_connections")
			.property<&NavigationRegion3D::get_navigation_layers, &NavigationRegion3D::set_navigation_layers>("navigation_layers")
			.property<&NavigationRegion3D::get_enter_cost, &NavigationRegion3D::set_enter_cost>("enter_cost")
			.property<&NavigationRegion3D::get_travel_cost, &NavigationRegion3D::set_travel_cost>("travel_cost")
			.fun<static_cast<RID (NavigationRegion3D::*)() const>(&NavigationRegion3D::get_rid)>("get_rid")
			.fun<static_cast<void (NavigationRegion3D::*)(const RID &)>(&NavigationRegion3D::set_navigation_map)>("set_navigation_map")
			.fun<static_cast<RID (NavigationRegion3D::*)() const>(&NavigationRegion3D::get_navigation_map)>("get_navigation_map")
			.fun<static_cast<void (NavigationRegion3D::*)(int32_t, bool)>(&NavigationRegion3D::set_navigation_layer_value)>("set_navigation_layer_value")
			.fun<static_cast<bool (NavigationRegion3D::*)(int32_t) const>(&NavigationRegion3D::get_navigation_layer_value)>("get_navigation_layer_value")
			.fun<static_cast<RID (NavigationRegion3D::*)() const>(&NavigationRegion3D::get_region_rid)>("get_region_rid")
			.fun<static_cast<void (NavigationRegion3D::*)(bool)>(&NavigationRegion3D::bake_navigation_mesh)>("bake_navigation_mesh");
}