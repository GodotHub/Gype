#include <godot_cpp/classes/navigation_link3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_NavigationLink3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<NavigationLink3D>("NavigationLink3D")
            .constructor<>()
            .base<Node3D>()
            .property<static_cast<bool(NavigationLink3D::*)()const>(&NavigationLink3D::is_enabled),static_cast<void(NavigationLink3D::*)(bool)>(&NavigationLink3D::set_enabled)>("enabled")
            .property<static_cast<bool(NavigationLink3D::*)()const>(&NavigationLink3D::is_bidirectional),static_cast<void(NavigationLink3D::*)(bool)>(&NavigationLink3D::set_bidirectional)>("bidirectional")
            .property<static_cast<uint32_t(NavigationLink3D::*)()const>(&NavigationLink3D::get_navigation_layers),static_cast<void(NavigationLink3D::*)(uint32_t)>(&NavigationLink3D::set_navigation_layers)>("navigation_layers")
            .property<static_cast<Vector3(NavigationLink3D::*)()const>(&NavigationLink3D::get_start_position),static_cast<void(NavigationLink3D::*)(const Vector3 &)>(&NavigationLink3D::set_start_position)>("start_position")
            .property<static_cast<Vector3(NavigationLink3D::*)()const>(&NavigationLink3D::get_end_position),static_cast<void(NavigationLink3D::*)(const Vector3 &)>(&NavigationLink3D::set_end_position)>("end_position")
            .property<static_cast<double(NavigationLink3D::*)()const>(&NavigationLink3D::get_enter_cost),static_cast<void(NavigationLink3D::*)(double)>(&NavigationLink3D::set_enter_cost)>("enter_cost")
            .property<static_cast<double(NavigationLink3D::*)()const>(&NavigationLink3D::get_travel_cost),static_cast<void(NavigationLink3D::*)(double)>(&NavigationLink3D::set_travel_cost)>("travel_cost")
            .fun<static_cast<RID(NavigationLink3D::*)()const>(&NavigationLink3D::get_rid)>("get_rid")
            .fun<static_cast<void(NavigationLink3D::*)(int32_t,bool)>(&NavigationLink3D::set_navigation_layer_value)>("set_navigation_layer_value")
            .fun<static_cast<bool(NavigationLink3D::*)(int32_t)const>(&NavigationLink3D::get_navigation_layer_value)>("get_navigation_layer_value")
            .fun<static_cast<void(NavigationLink3D::*)(const Vector3 &)>(&NavigationLink3D::set_global_start_position)>("set_global_start_position")
            .fun<static_cast<Vector3(NavigationLink3D::*)()const>(&NavigationLink3D::get_global_start_position)>("get_global_start_position")
            .fun<static_cast<void(NavigationLink3D::*)(const Vector3 &)>(&NavigationLink3D::set_global_end_position)>("set_global_end_position")
            .fun<static_cast<Vector3(NavigationLink3D::*)()const>(&NavigationLink3D::get_global_end_position)>("get_global_end_position")
;}