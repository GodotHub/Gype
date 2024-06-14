
#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/navigation_region3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationRegion3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<NavigationRegion3D>("NavigationRegion3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<Ref<NavigationMesh> (NavigationRegion3D::*)() const>(&NavigationRegion3D::get_navigation_mesh), static_cast<void (NavigationRegion3D::*)(const Ref<NavigationMesh> &)>(&NavigationRegion3D::set_navigation_mesh)>((new std::string("navigation_mesh"))->c_str())
			.property<static_cast<bool (NavigationRegion3D::*)() const>(&NavigationRegion3D::is_enabled), static_cast<void (NavigationRegion3D::*)(bool)>(&NavigationRegion3D::set_enabled)>((new std::string("enabled"))->c_str())
			.property<static_cast<bool (NavigationRegion3D::*)() const>(&NavigationRegion3D::get_use_edge_connections), static_cast<void (NavigationRegion3D::*)(bool)>(&NavigationRegion3D::set_use_edge_connections)>((new std::string("use_edge_connections"))->c_str())
			.property<static_cast<uint32_t (NavigationRegion3D::*)() const>(&NavigationRegion3D::get_navigation_layers), static_cast<void (NavigationRegion3D::*)(uint32_t)>(&NavigationRegion3D::set_navigation_layers)>((new std::string("navigation_layers"))->c_str())
			.property<static_cast<double (NavigationRegion3D::*)() const>(&NavigationRegion3D::get_enter_cost), static_cast<void (NavigationRegion3D::*)(double)>(&NavigationRegion3D::set_enter_cost)>((new std::string("enter_cost"))->c_str())
			.property<static_cast<double (NavigationRegion3D::*)() const>(&NavigationRegion3D::get_travel_cost), static_cast<void (NavigationRegion3D::*)(double)>(&NavigationRegion3D::set_travel_cost)>((new std::string("travel_cost"))->c_str())
			.fun<static_cast<RID (NavigationRegion3D::*)() const>(&NavigationRegion3D::get_rid)>((new std::string("get_rid"))->c_str())
			.fun<static_cast<void (NavigationRegion3D::*)(const RID &)>(&NavigationRegion3D::set_navigation_map)>((new std::string("set_navigation_map"))->c_str())
			.fun<static_cast<RID (NavigationRegion3D::*)() const>(&NavigationRegion3D::get_navigation_map)>((new std::string("get_navigation_map"))->c_str())
			.fun<static_cast<void (NavigationRegion3D::*)(int32_t, bool)>(&NavigationRegion3D::set_navigation_layer_value)>((new std::string("set_navigation_layer_value"))->c_str())
			.fun<static_cast<bool (NavigationRegion3D::*)(int32_t) const>(&NavigationRegion3D::get_navigation_layer_value)>((new std::string("get_navigation_layer_value"))->c_str())
			.fun<static_cast<RID (NavigationRegion3D::*)() const>(&NavigationRegion3D::get_region_rid)>((new std::string("get_region_rid"))->c_str())
			.fun<static_cast<void (NavigationRegion3D::*)(bool)>(&NavigationRegion3D::bake_navigation_mesh)>((new std::string("bake_navigation_mesh"))->c_str())
			.fun<static_cast<bool (NavigationRegion3D::*)() const>(&NavigationRegion3D::is_baking)>((new std::string("is_baking"))->c_str());
}