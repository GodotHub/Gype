#include <godot_cpp/classes/navigation_obstacle2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_NavigationObstacle2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<NavigationObstacle2D>("NavigationObstacle2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<double(NavigationObstacle2D::*)()const>(&NavigationObstacle2D::get_radius),static_cast<void(NavigationObstacle2D::*)(double)>(&NavigationObstacle2D::set_radius)>("radius")
            .property<static_cast<PackedVector2Array(NavigationObstacle2D::*)()const>(&NavigationObstacle2D::get_vertices),static_cast<void(NavigationObstacle2D::*)(const PackedVector2Array &)>(&NavigationObstacle2D::set_vertices)>("vertices")
            .property<static_cast<bool(NavigationObstacle2D::*)()const>(&NavigationObstacle2D::get_affect_navigation_mesh),static_cast<void(NavigationObstacle2D::*)(bool)>(&NavigationObstacle2D::set_affect_navigation_mesh)>("affect_navigation_mesh")
            .property<static_cast<bool(NavigationObstacle2D::*)()const>(&NavigationObstacle2D::get_carve_navigation_mesh),static_cast<void(NavigationObstacle2D::*)(bool)>(&NavigationObstacle2D::set_carve_navigation_mesh)>("carve_navigation_mesh")
            .property<static_cast<bool(NavigationObstacle2D::*)()const>(&NavigationObstacle2D::get_avoidance_enabled),static_cast<void(NavigationObstacle2D::*)(bool)>(&NavigationObstacle2D::set_avoidance_enabled)>("avoidance_enabled")
            .property<static_cast<Vector2(NavigationObstacle2D::*)()const>(&NavigationObstacle2D::get_velocity),static_cast<void(NavigationObstacle2D::*)(const Vector2 &)>(&NavigationObstacle2D::set_velocity)>("velocity")
            .property<static_cast<uint32_t(NavigationObstacle2D::*)()const>(&NavigationObstacle2D::get_avoidance_layers),static_cast<void(NavigationObstacle2D::*)(uint32_t)>(&NavigationObstacle2D::set_avoidance_layers)>("avoidance_layers")
            .fun<static_cast<RID(NavigationObstacle2D::*)()const>(&NavigationObstacle2D::get_rid)>("get_rid")
            .fun<static_cast<void(NavigationObstacle2D::*)(const RID &)>(&NavigationObstacle2D::set_navigation_map)>("set_navigation_map")
            .fun<static_cast<RID(NavigationObstacle2D::*)()const>(&NavigationObstacle2D::get_navigation_map)>("get_navigation_map")
            .fun<static_cast<void(NavigationObstacle2D::*)(int32_t,bool)>(&NavigationObstacle2D::set_avoidance_layer_value)>("set_avoidance_layer_value")
            .fun<static_cast<bool(NavigationObstacle2D::*)(int32_t)const>(&NavigationObstacle2D::get_avoidance_layer_value)>("get_avoidance_layer_value")
;}