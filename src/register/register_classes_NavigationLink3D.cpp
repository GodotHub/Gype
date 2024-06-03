#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_NavigationLink3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<NavigationLink3D>("NavigationLink3D")
           .constructor<>()
           .property<NavigationLink3D::is_enabled, NavigationLink3D::set_enabled>("enabled")
           .property<NavigationLink3D::is_bidirectional, NavigationLink3D::set_bidirectional>("bidirectional")
           .property<NavigationLink3D::get_navigation_layers, NavigationLink3D::set_navigation_layers>("navigation_layers")
           .property<NavigationLink3D::get_start_position, NavigationLink3D::set_start_position>("start_position")
           .property<NavigationLink3D::get_end_position, NavigationLink3D::set_end_position>("end_position")
           .property<NavigationLink3D::get_enter_cost, NavigationLink3D::set_enter_cost>("enter_cost")
           .property<NavigationLink3D::get_travel_cost, NavigationLink3D::set_travel_cost>("travel_cost")
		   .fun<static_cast<RID(NavigationLink3D::*)()const>(&NavigationLink3D::get_rid)>("get_rid")
		   .fun<static_cast<void(NavigationLink3D::*)(int32_t,bool)>(&NavigationLink3D::set_navigation_layer_value)>("set_navigation_layer_value")
		   .fun<static_cast<bool(NavigationLink3D::*)(int32_t)const>(&NavigationLink3D::get_navigation_layer_value)>("get_navigation_layer_value")
		   .fun<static_cast<void(NavigationLink3D::*)(const Vector3 &)>(&NavigationLink3D::set_global_start_position)>("set_global_start_position")
		   .fun<static_cast<Vector3(NavigationLink3D::*)()const>(&NavigationLink3D::get_global_start_position)>("get_global_start_position")
		   .fun<static_cast<void(NavigationLink3D::*)(const Vector3 &)>(&NavigationLink3D::set_global_end_position)>("set_global_end_position")
		   .fun<static_cast<Vector3(NavigationLink3D::*)()const>(&NavigationLink3D::get_global_end_position)>("get_global_end_position")
;}