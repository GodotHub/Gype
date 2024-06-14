
#include <godot_cpp/classes/navigation_polygon.hpp>
#include <godot_cpp/classes/navigation_region2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationRegion2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<NavigationRegion2D>("NavigationRegion2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<Ref<NavigationPolygon> (NavigationRegion2D::*)() const>(&NavigationRegion2D::get_navigation_polygon), static_cast<void (NavigationRegion2D::*)(const Ref<NavigationPolygon> &)>(&NavigationRegion2D::set_navigation_polygon)>((new std::string("navigation_polygon"))->c_str())
			.property<static_cast<bool (NavigationRegion2D::*)() const>(&NavigationRegion2D::is_enabled), static_cast<void (NavigationRegion2D::*)(bool)>(&NavigationRegion2D::set_enabled)>((new std::string("enabled"))->c_str())
			.property<static_cast<bool (NavigationRegion2D::*)() const>(&NavigationRegion2D::get_use_edge_connections), static_cast<void (NavigationRegion2D::*)(bool)>(&NavigationRegion2D::set_use_edge_connections)>((new std::string("use_edge_connections"))->c_str())
			.property<static_cast<uint32_t (NavigationRegion2D::*)() const>(&NavigationRegion2D::get_navigation_layers), static_cast<void (NavigationRegion2D::*)(uint32_t)>(&NavigationRegion2D::set_navigation_layers)>((new std::string("navigation_layers"))->c_str())
			.property<static_cast<double (NavigationRegion2D::*)() const>(&NavigationRegion2D::get_enter_cost), static_cast<void (NavigationRegion2D::*)(double)>(&NavigationRegion2D::set_enter_cost)>((new std::string("enter_cost"))->c_str())
			.property<static_cast<double (NavigationRegion2D::*)() const>(&NavigationRegion2D::get_travel_cost), static_cast<void (NavigationRegion2D::*)(double)>(&NavigationRegion2D::set_travel_cost)>((new std::string("travel_cost"))->c_str())
			.fun<static_cast<RID (NavigationRegion2D::*)() const>(&NavigationRegion2D::get_rid)>((new std::string("get_rid"))->c_str())
			.fun<static_cast<void (NavigationRegion2D::*)(const RID &)>(&NavigationRegion2D::set_navigation_map)>((new std::string("set_navigation_map"))->c_str())
			.fun<static_cast<RID (NavigationRegion2D::*)() const>(&NavigationRegion2D::get_navigation_map)>((new std::string("get_navigation_map"))->c_str())
			.fun<static_cast<void (NavigationRegion2D::*)(int32_t, bool)>(&NavigationRegion2D::set_navigation_layer_value)>((new std::string("set_navigation_layer_value"))->c_str())
			.fun<static_cast<bool (NavigationRegion2D::*)(int32_t) const>(&NavigationRegion2D::get_navigation_layer_value)>((new std::string("get_navigation_layer_value"))->c_str())
			.fun<static_cast<RID (NavigationRegion2D::*)() const>(&NavigationRegion2D::get_region_rid)>((new std::string("get_region_rid"))->c_str())
			.fun<static_cast<void (NavigationRegion2D::*)(bool)>(&NavigationRegion2D::bake_navigation_polygon)>((new std::string("bake_navigation_polygon"))->c_str())
			.fun<static_cast<bool (NavigationRegion2D::*)() const>(&NavigationRegion2D::is_baking)>((new std::string("is_baking"))->c_str());
}