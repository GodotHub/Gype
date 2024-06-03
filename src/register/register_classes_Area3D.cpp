#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_Area3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<Area3D>("Area3D")
           .constructor<>()
           .property<Area3D::is_monitoring, Area3D::set_monitoring>("monitoring")
           .property<Area3D::is_monitorable, Area3D::set_monitorable>("monitorable")
           .property<Area3D::get_priority, Area3D::set_priority>("priority")
           .property<Area3D::get_gravity_space_override_mode, Area3D::set_gravity_space_override_mode>("gravity_space_override")
           .property<Area3D::is_gravity_a_point, Area3D::set_gravity_is_point>("gravity_point")
           .property<Area3D::get_gravity_point_unit_distance, Area3D::set_gravity_point_unit_distance>("gravity_point_unit_distance")
           .property<Area3D::get_gravity_point_center, Area3D::set_gravity_point_center>("gravity_point_center")
           .property<Area3D::get_gravity_direction, Area3D::set_gravity_direction>("gravity_direction")
           .property<Area3D::get_gravity, Area3D::set_gravity>("gravity")
           .property<Area3D::get_linear_damp_space_override_mode, Area3D::set_linear_damp_space_override_mode>("linear_damp_space_override")
           .property<Area3D::get_linear_damp, Area3D::set_linear_damp>("linear_damp")
           .property<Area3D::get_angular_damp_space_override_mode, Area3D::set_angular_damp_space_override_mode>("angular_damp_space_override")
           .property<Area3D::get_angular_damp, Area3D::set_angular_damp>("angular_damp")
           .property<Area3D::get_wind_force_magnitude, Area3D::set_wind_force_magnitude>("wind_force_magnitude")
           .property<Area3D::get_wind_attenuation_factor, Area3D::set_wind_attenuation_factor>("wind_attenuation_factor")
           .property<Area3D::get_wind_source_path, Area3D::set_wind_source_path>("wind_source_path")
           .property<Area3D::is_overriding_audio_bus, Area3D::set_audio_bus_override>("audio_bus_override")
           .property<Area3D::get_audio_bus_name, Area3D::set_audio_bus_name>("audio_bus_name")
           .property<Area3D::is_using_reverb_bus, Area3D::set_use_reverb_bus>("reverb_bus_enabled")
           .property<Area3D::get_reverb_bus_name, Area3D::set_reverb_bus_name>("reverb_bus_name")
           .property<Area3D::get_reverb_amount, Area3D::set_reverb_amount>("reverb_bus_amount")
           .property<Area3D::get_reverb_uniformity, Area3D::set_reverb_uniformity>("reverb_bus_uniformity")
		   .fun<static_cast<TypedArray<Node3D>(Area3D::*)()const>(&Area3D::get_overlapping_bodies)>("get_overlapping_bodies")
		   .fun<static_cast<TypedArray<Area3D>(Area3D::*)()const>(&Area3D::get_overlapping_areas)>("get_overlapping_areas")
		   .fun<static_cast<bool(Area3D::*)()const>(&Area3D::has_overlapping_bodies)>("has_overlapping_bodies")
		   .fun<static_cast<bool(Area3D::*)()const>(&Area3D::has_overlapping_areas)>("has_overlapping_areas")
		   .fun<static_cast<bool(Area3D::*)(Node *)const>(&Area3D::overlaps_body)>("overlaps_body")
		   .fun<static_cast<bool(Area3D::*)(Node *)const>(&Area3D::overlaps_area)>("overlaps_area")
;}