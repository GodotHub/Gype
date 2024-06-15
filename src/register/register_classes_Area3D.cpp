#include <godot_cpp/classes/area3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/collision_object3d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Area3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<Area3D>("Area3D")
            .constructor<>()
            .base<CollisionObject3D>()
            .property<static_cast<bool(Area3D::*)()const>(&Area3D::is_monitoring),static_cast<void(Area3D::*)(bool)>(&Area3D::set_monitoring)>("monitoring")
            .property<static_cast<bool(Area3D::*)()const>(&Area3D::is_monitorable),static_cast<void(Area3D::*)(bool)>(&Area3D::set_monitorable)>("monitorable")
            .property<static_cast<int32_t(Area3D::*)()const>(&Area3D::get_priority),static_cast<void(Area3D::*)(int32_t)>(&Area3D::set_priority)>("priority")
            .property<static_cast<Area3D::SpaceOverride(Area3D::*)()const>(&Area3D::get_gravity_space_override_mode),static_cast<void(Area3D::*)(Area3D::SpaceOverride)>(&Area3D::set_gravity_space_override_mode)>("gravity_space_override")
            .property<static_cast<bool(Area3D::*)()const>(&Area3D::is_gravity_a_point),static_cast<void(Area3D::*)(bool)>(&Area3D::set_gravity_is_point)>("gravity_point")
            .property<static_cast<double(Area3D::*)()const>(&Area3D::get_gravity_point_unit_distance),static_cast<void(Area3D::*)(double)>(&Area3D::set_gravity_point_unit_distance)>("gravity_point_unit_distance")
            .property<static_cast<Vector3(Area3D::*)()const>(&Area3D::get_gravity_point_center),static_cast<void(Area3D::*)(const Vector3 &)>(&Area3D::set_gravity_point_center)>("gravity_point_center")
            .property<static_cast<Vector3(Area3D::*)()const>(&Area3D::get_gravity_direction),static_cast<void(Area3D::*)(const Vector3 &)>(&Area3D::set_gravity_direction)>("gravity_direction")
            .property<static_cast<double(Area3D::*)()const>(&Area3D::get_gravity),static_cast<void(Area3D::*)(double)>(&Area3D::set_gravity)>("gravity")
            .property<static_cast<Area3D::SpaceOverride(Area3D::*)()const>(&Area3D::get_linear_damp_space_override_mode),static_cast<void(Area3D::*)(Area3D::SpaceOverride)>(&Area3D::set_linear_damp_space_override_mode)>("linear_damp_space_override")
            .property<static_cast<double(Area3D::*)()const>(&Area3D::get_linear_damp),static_cast<void(Area3D::*)(double)>(&Area3D::set_linear_damp)>("linear_damp")
            .property<static_cast<Area3D::SpaceOverride(Area3D::*)()const>(&Area3D::get_angular_damp_space_override_mode),static_cast<void(Area3D::*)(Area3D::SpaceOverride)>(&Area3D::set_angular_damp_space_override_mode)>("angular_damp_space_override")
            .property<static_cast<double(Area3D::*)()const>(&Area3D::get_angular_damp),static_cast<void(Area3D::*)(double)>(&Area3D::set_angular_damp)>("angular_damp")
            .property<static_cast<double(Area3D::*)()const>(&Area3D::get_wind_force_magnitude),static_cast<void(Area3D::*)(double)>(&Area3D::set_wind_force_magnitude)>("wind_force_magnitude")
            .property<static_cast<double(Area3D::*)()const>(&Area3D::get_wind_attenuation_factor),static_cast<void(Area3D::*)(double)>(&Area3D::set_wind_attenuation_factor)>("wind_attenuation_factor")
            .property<static_cast<NodePath(Area3D::*)()const>(&Area3D::get_wind_source_path),static_cast<void(Area3D::*)(const NodePath &)>(&Area3D::set_wind_source_path)>("wind_source_path")
            .property<static_cast<bool(Area3D::*)()const>(&Area3D::is_overriding_audio_bus),static_cast<void(Area3D::*)(bool)>(&Area3D::set_audio_bus_override)>("audio_bus_override")
            .property<static_cast<StringName(Area3D::*)()const>(&Area3D::get_audio_bus_name),static_cast<void(Area3D::*)(const StringName &)>(&Area3D::set_audio_bus_name)>("audio_bus_name")
            .property<static_cast<bool(Area3D::*)()const>(&Area3D::is_using_reverb_bus),static_cast<void(Area3D::*)(bool)>(&Area3D::set_use_reverb_bus)>("reverb_bus_enabled")
            .property<static_cast<StringName(Area3D::*)()const>(&Area3D::get_reverb_bus_name),static_cast<void(Area3D::*)(const StringName &)>(&Area3D::set_reverb_bus_name)>("reverb_bus_name")
            .property<static_cast<double(Area3D::*)()const>(&Area3D::get_reverb_amount),static_cast<void(Area3D::*)(double)>(&Area3D::set_reverb_amount)>("reverb_bus_amount")
            .property<static_cast<double(Area3D::*)()const>(&Area3D::get_reverb_uniformity),static_cast<void(Area3D::*)(double)>(&Area3D::set_reverb_uniformity)>("reverb_bus_uniformity")
            .fun<static_cast<TypedArray<Node3D>(Area3D::*)()const>(&Area3D::get_overlapping_bodies)>("get_overlapping_bodies")
            .fun<static_cast<TypedArray<Area3D>(Area3D::*)()const>(&Area3D::get_overlapping_areas)>("get_overlapping_areas")
            .fun<static_cast<bool(Area3D::*)()const>(&Area3D::has_overlapping_bodies)>("has_overlapping_bodies")
            .fun<static_cast<bool(Area3D::*)()const>(&Area3D::has_overlapping_areas)>("has_overlapping_areas")
            .fun<static_cast<bool(Area3D::*)(Node *)const>(&Area3D::overlaps_body)>("overlaps_body")
            .fun<static_cast<bool(Area3D::*)(Node *)const>(&Area3D::overlaps_area)>("overlaps_area")
;    qjs::Value _SpaceOverride = context->newObject();
    _SpaceOverride["SPACE_OVERRIDE_DISABLED"] = Area3D::SpaceOverride::SPACE_OVERRIDE_DISABLED;
    _SpaceOverride["SPACE_OVERRIDE_COMBINE"] = Area3D::SpaceOverride::SPACE_OVERRIDE_COMBINE;
    _SpaceOverride["SPACE_OVERRIDE_COMBINE_REPLACE"] = Area3D::SpaceOverride::SPACE_OVERRIDE_COMBINE_REPLACE;
    _SpaceOverride["SPACE_OVERRIDE_REPLACE"] = Area3D::SpaceOverride::SPACE_OVERRIDE_REPLACE;
    _SpaceOverride["SPACE_OVERRIDE_REPLACE_COMBINE"] = Area3D::SpaceOverride::SPACE_OVERRIDE_REPLACE_COMBINE;
    _module.add("SpaceOverride", std::move(_SpaceOverride));
}