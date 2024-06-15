#include <godot_cpp/classes/navigation_link2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_NavigationLink2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<NavigationLink2D>("NavigationLink2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<bool(NavigationLink2D::*)()const>(&NavigationLink2D::is_enabled),static_cast<void(NavigationLink2D::*)(bool)>(&NavigationLink2D::set_enabled)>("enabled")
            .property<static_cast<bool(NavigationLink2D::*)()const>(&NavigationLink2D::is_bidirectional),static_cast<void(NavigationLink2D::*)(bool)>(&NavigationLink2D::set_bidirectional)>("bidirectional")
            .property<static_cast<uint32_t(NavigationLink2D::*)()const>(&NavigationLink2D::get_navigation_layers),static_cast<void(NavigationLink2D::*)(uint32_t)>(&NavigationLink2D::set_navigation_layers)>("navigation_layers")
            .property<static_cast<Vector2(NavigationLink2D::*)()const>(&NavigationLink2D::get_start_position),static_cast<void(NavigationLink2D::*)(const Vector2 &)>(&NavigationLink2D::set_start_position)>("start_position")
            .property<static_cast<Vector2(NavigationLink2D::*)()const>(&NavigationLink2D::get_end_position),static_cast<void(NavigationLink2D::*)(const Vector2 &)>(&NavigationLink2D::set_end_position)>("end_position")
            .property<static_cast<double(NavigationLink2D::*)()const>(&NavigationLink2D::get_enter_cost),static_cast<void(NavigationLink2D::*)(double)>(&NavigationLink2D::set_enter_cost)>("enter_cost")
            .property<static_cast<double(NavigationLink2D::*)()const>(&NavigationLink2D::get_travel_cost),static_cast<void(NavigationLink2D::*)(double)>(&NavigationLink2D::set_travel_cost)>("travel_cost")
            .fun<static_cast<RID(NavigationLink2D::*)()const>(&NavigationLink2D::get_rid)>("get_rid")
            .fun<static_cast<void(NavigationLink2D::*)(int32_t,bool)>(&NavigationLink2D::set_navigation_layer_value)>("set_navigation_layer_value")
            .fun<static_cast<bool(NavigationLink2D::*)(int32_t)const>(&NavigationLink2D::get_navigation_layer_value)>("get_navigation_layer_value")
            .fun<static_cast<void(NavigationLink2D::*)(const Vector2 &)>(&NavigationLink2D::set_global_start_position)>("set_global_start_position")
            .fun<static_cast<Vector2(NavigationLink2D::*)()const>(&NavigationLink2D::get_global_start_position)>("get_global_start_position")
            .fun<static_cast<void(NavigationLink2D::*)(const Vector2 &)>(&NavigationLink2D::set_global_end_position)>("set_global_end_position")
            .fun<static_cast<Vector2(NavigationLink2D::*)()const>(&NavigationLink2D::get_global_end_position)>("get_global_end_position")
;}