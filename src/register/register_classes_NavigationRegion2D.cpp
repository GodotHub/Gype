#include <godot_cpp/classes/navigation_region2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/navigation_polygon.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_NavigationRegion2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<NavigationRegion2D>("NavigationRegion2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<Ref<NavigationPolygon>(NavigationRegion2D::*)()const>(&NavigationRegion2D::get_navigation_polygon),static_cast<void(NavigationRegion2D::*)(const Ref<NavigationPolygon> &)>(&NavigationRegion2D::set_navigation_polygon)>("navigation_polygon")
            .property<static_cast<bool(NavigationRegion2D::*)()const>(&NavigationRegion2D::is_enabled),static_cast<void(NavigationRegion2D::*)(bool)>(&NavigationRegion2D::set_enabled)>("enabled")
            .property<static_cast<bool(NavigationRegion2D::*)()const>(&NavigationRegion2D::get_use_edge_connections),static_cast<void(NavigationRegion2D::*)(bool)>(&NavigationRegion2D::set_use_edge_connections)>("use_edge_connections")
            .property<static_cast<uint32_t(NavigationRegion2D::*)()const>(&NavigationRegion2D::get_navigation_layers),static_cast<void(NavigationRegion2D::*)(uint32_t)>(&NavigationRegion2D::set_navigation_layers)>("navigation_layers")
            .property<static_cast<double(NavigationRegion2D::*)()const>(&NavigationRegion2D::get_enter_cost),static_cast<void(NavigationRegion2D::*)(double)>(&NavigationRegion2D::set_enter_cost)>("enter_cost")
            .property<static_cast<double(NavigationRegion2D::*)()const>(&NavigationRegion2D::get_travel_cost),static_cast<void(NavigationRegion2D::*)(double)>(&NavigationRegion2D::set_travel_cost)>("travel_cost")
            .fun<static_cast<RID(NavigationRegion2D::*)()const>(&NavigationRegion2D::get_rid)>("get_rid")
            .fun<static_cast<void(NavigationRegion2D::*)(const RID &)>(&NavigationRegion2D::set_navigation_map)>("set_navigation_map")
            .fun<static_cast<RID(NavigationRegion2D::*)()const>(&NavigationRegion2D::get_navigation_map)>("get_navigation_map")
            .fun<static_cast<void(NavigationRegion2D::*)(int32_t,bool)>(&NavigationRegion2D::set_navigation_layer_value)>("set_navigation_layer_value")
            .fun<static_cast<bool(NavigationRegion2D::*)(int32_t)const>(&NavigationRegion2D::get_navigation_layer_value)>("get_navigation_layer_value")
            .fun<static_cast<RID(NavigationRegion2D::*)()const>(&NavigationRegion2D::get_region_rid)>("get_region_rid")
            .fun<static_cast<void(NavigationRegion2D::*)(bool)>(&NavigationRegion2D::bake_navigation_polygon)>("bake_navigation_polygon")
            .fun<static_cast<bool(NavigationRegion2D::*)()const>(&NavigationRegion2D::is_baking)>("is_baking")
;}