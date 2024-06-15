#include <godot_cpp/classes/navigation_obstacle3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_NavigationObstacle3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<NavigationObstacle3D>("NavigationObstacle3D")
            .constructor<>()
            .base<Node3D>()
            .property<static_cast<double(NavigationObstacle3D::*)()const>(&NavigationObstacle3D::get_radius),static_cast<void(NavigationObstacle3D::*)(double)>(&NavigationObstacle3D::set_radius)>("radius")
            .property<static_cast<double(NavigationObstacle3D::*)()const>(&NavigationObstacle3D::get_height),static_cast<void(NavigationObstacle3D::*)(double)>(&NavigationObstacle3D::set_height)>("height")
            .property<static_cast<PackedVector3Array(NavigationObstacle3D::*)()const>(&NavigationObstacle3D::get_vertices),static_cast<void(NavigationObstacle3D::*)(const PackedVector3Array &)>(&NavigationObstacle3D::set_vertices)>("vertices")
            .property<static_cast<bool(NavigationObstacle3D::*)()const>(&NavigationObstacle3D::get_affect_navigation_mesh),static_cast<void(NavigationObstacle3D::*)(bool)>(&NavigationObstacle3D::set_affect_navigation_mesh)>("affect_navigation_mesh")
            .property<static_cast<bool(NavigationObstacle3D::*)()const>(&NavigationObstacle3D::get_carve_navigation_mesh),static_cast<void(NavigationObstacle3D::*)(bool)>(&NavigationObstacle3D::set_carve_navigation_mesh)>("carve_navigation_mesh")
            .property<static_cast<bool(NavigationObstacle3D::*)()const>(&NavigationObstacle3D::get_avoidance_enabled),static_cast<void(NavigationObstacle3D::*)(bool)>(&NavigationObstacle3D::set_avoidance_enabled)>("avoidance_enabled")
            .property<static_cast<Vector3(NavigationObstacle3D::*)()const>(&NavigationObstacle3D::get_velocity),static_cast<void(NavigationObstacle3D::*)(const Vector3 &)>(&NavigationObstacle3D::set_velocity)>("velocity")
            .property<static_cast<uint32_t(NavigationObstacle3D::*)()const>(&NavigationObstacle3D::get_avoidance_layers),static_cast<void(NavigationObstacle3D::*)(uint32_t)>(&NavigationObstacle3D::set_avoidance_layers)>("avoidance_layers")
            .property<static_cast<bool(NavigationObstacle3D::*)()const>(&NavigationObstacle3D::get_use_3d_avoidance),static_cast<void(NavigationObstacle3D::*)(bool)>(&NavigationObstacle3D::set_use_3d_avoidance)>("use_3d_avoidance")
            .fun<static_cast<RID(NavigationObstacle3D::*)()const>(&NavigationObstacle3D::get_rid)>("get_rid")
            .fun<static_cast<void(NavigationObstacle3D::*)(const RID &)>(&NavigationObstacle3D::set_navigation_map)>("set_navigation_map")
            .fun<static_cast<RID(NavigationObstacle3D::*)()const>(&NavigationObstacle3D::get_navigation_map)>("get_navigation_map")
            .fun<static_cast<void(NavigationObstacle3D::*)(int32_t,bool)>(&NavigationObstacle3D::set_avoidance_layer_value)>("set_avoidance_layer_value")
            .fun<static_cast<bool(NavigationObstacle3D::*)(int32_t)const>(&NavigationObstacle3D::get_avoidance_layer_value)>("get_avoidance_layer_value")
;}