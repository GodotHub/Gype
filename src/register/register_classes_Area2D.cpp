#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_Area2D() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<Area2D>("Area2D")
           .constructor<>()
           .property<Area2D::is_monitoring, Area2D::set_monitoring>("monitoring")
           .property<Area2D::is_monitorable, Area2D::set_monitorable>("monitorable")
           .property<Area2D::get_priority, Area2D::set_priority>("priority")
           .property<Area2D::get_gravity_space_override_mode, Area2D::set_gravity_space_override_mode>("gravity_space_override")
           .property<Area2D::is_gravity_a_point, Area2D::set_gravity_is_point>("gravity_point")
           .property<Area2D::get_gravity_point_unit_distance, Area2D::set_gravity_point_unit_distance>("gravity_point_unit_distance")
           .property<Area2D::get_gravity_point_center, Area2D::set_gravity_point_center>("gravity_point_center")
           .property<Area2D::get_gravity_direction, Area2D::set_gravity_direction>("gravity_direction")
           .property<Area2D::get_gravity, Area2D::set_gravity>("gravity")
           .property<Area2D::get_linear_damp_space_override_mode, Area2D::set_linear_damp_space_override_mode>("linear_damp_space_override")
           .property<Area2D::get_linear_damp, Area2D::set_linear_damp>("linear_damp")
           .property<Area2D::get_angular_damp_space_override_mode, Area2D::set_angular_damp_space_override_mode>("angular_damp_space_override")
           .property<Area2D::get_angular_damp, Area2D::set_angular_damp>("angular_damp")
           .property<Area2D::is_overriding_audio_bus, Area2D::set_audio_bus_override>("audio_bus_override")
           .property<Area2D::get_audio_bus_name, Area2D::set_audio_bus_name>("audio_bus_name")
		   .fun<static_cast<TypedArray<Node2D>(Area2D::*)()const>(&Area2D::get_overlapping_bodies)>("get_overlapping_bodies")
		   .fun<static_cast<TypedArray<Area2D>(Area2D::*)()const>(&Area2D::get_overlapping_areas)>("get_overlapping_areas")
		   .fun<static_cast<bool(Area2D::*)()const>(&Area2D::has_overlapping_bodies)>("has_overlapping_bodies")
		   .fun<static_cast<bool(Area2D::*)()const>(&Area2D::has_overlapping_areas)>("has_overlapping_areas")
		   .fun<static_cast<bool(Area2D::*)(Node *)const>(&Area2D::overlaps_body)>("overlaps_body")
		   .fun<static_cast<bool(Area2D::*)(Node *)const>(&Area2D::overlaps_area)>("overlaps_area")
;}