#include <godot_cpp/classes/area2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/collision_object2d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Area2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<Area2D>("Area2D")
            .constructor<>()
            .base<CollisionObject2D>()
            .property<static_cast<bool(Area2D::*)()const>(&Area2D::is_monitoring),static_cast<void(Area2D::*)(bool)>(&Area2D::set_monitoring)>("monitoring")
            .property<static_cast<bool(Area2D::*)()const>(&Area2D::is_monitorable),static_cast<void(Area2D::*)(bool)>(&Area2D::set_monitorable)>("monitorable")
            .property<static_cast<int32_t(Area2D::*)()const>(&Area2D::get_priority),static_cast<void(Area2D::*)(int32_t)>(&Area2D::set_priority)>("priority")
            .property<static_cast<Area2D::SpaceOverride(Area2D::*)()const>(&Area2D::get_gravity_space_override_mode),static_cast<void(Area2D::*)(Area2D::SpaceOverride)>(&Area2D::set_gravity_space_override_mode)>("gravity_space_override")
            .property<static_cast<bool(Area2D::*)()const>(&Area2D::is_gravity_a_point),static_cast<void(Area2D::*)(bool)>(&Area2D::set_gravity_is_point)>("gravity_point")
            .property<static_cast<double(Area2D::*)()const>(&Area2D::get_gravity_point_unit_distance),static_cast<void(Area2D::*)(double)>(&Area2D::set_gravity_point_unit_distance)>("gravity_point_unit_distance")
            .property<static_cast<Vector2(Area2D::*)()const>(&Area2D::get_gravity_point_center),static_cast<void(Area2D::*)(const Vector2 &)>(&Area2D::set_gravity_point_center)>("gravity_point_center")
            .property<static_cast<Vector2(Area2D::*)()const>(&Area2D::get_gravity_direction),static_cast<void(Area2D::*)(const Vector2 &)>(&Area2D::set_gravity_direction)>("gravity_direction")
            .property<static_cast<double(Area2D::*)()const>(&Area2D::get_gravity),static_cast<void(Area2D::*)(double)>(&Area2D::set_gravity)>("gravity")
            .property<static_cast<Area2D::SpaceOverride(Area2D::*)()const>(&Area2D::get_linear_damp_space_override_mode),static_cast<void(Area2D::*)(Area2D::SpaceOverride)>(&Area2D::set_linear_damp_space_override_mode)>("linear_damp_space_override")
            .property<static_cast<double(Area2D::*)()const>(&Area2D::get_linear_damp),static_cast<void(Area2D::*)(double)>(&Area2D::set_linear_damp)>("linear_damp")
            .property<static_cast<Area2D::SpaceOverride(Area2D::*)()const>(&Area2D::get_angular_damp_space_override_mode),static_cast<void(Area2D::*)(Area2D::SpaceOverride)>(&Area2D::set_angular_damp_space_override_mode)>("angular_damp_space_override")
            .property<static_cast<double(Area2D::*)()const>(&Area2D::get_angular_damp),static_cast<void(Area2D::*)(double)>(&Area2D::set_angular_damp)>("angular_damp")
            .property<static_cast<bool(Area2D::*)()const>(&Area2D::is_overriding_audio_bus),static_cast<void(Area2D::*)(bool)>(&Area2D::set_audio_bus_override)>("audio_bus_override")
            .property<static_cast<StringName(Area2D::*)()const>(&Area2D::get_audio_bus_name),static_cast<void(Area2D::*)(const StringName &)>(&Area2D::set_audio_bus_name)>("audio_bus_name")
            .fun<static_cast<TypedArray<Node2D>(Area2D::*)()const>(&Area2D::get_overlapping_bodies)>("get_overlapping_bodies")
            .fun<static_cast<TypedArray<Area2D>(Area2D::*)()const>(&Area2D::get_overlapping_areas)>("get_overlapping_areas")
            .fun<static_cast<bool(Area2D::*)()const>(&Area2D::has_overlapping_bodies)>("has_overlapping_bodies")
            .fun<static_cast<bool(Area2D::*)()const>(&Area2D::has_overlapping_areas)>("has_overlapping_areas")
            .fun<static_cast<bool(Area2D::*)(Node *)const>(&Area2D::overlaps_body)>("overlaps_body")
            .fun<static_cast<bool(Area2D::*)(Node *)const>(&Area2D::overlaps_area)>("overlaps_area")
;    qjs::Value _SpaceOverride = context->newObject();
    _SpaceOverride["SPACE_OVERRIDE_DISABLED"] = Area2D::SpaceOverride::SPACE_OVERRIDE_DISABLED;
    _SpaceOverride["SPACE_OVERRIDE_COMBINE"] = Area2D::SpaceOverride::SPACE_OVERRIDE_COMBINE;
    _SpaceOverride["SPACE_OVERRIDE_COMBINE_REPLACE"] = Area2D::SpaceOverride::SPACE_OVERRIDE_COMBINE_REPLACE;
    _SpaceOverride["SPACE_OVERRIDE_REPLACE"] = Area2D::SpaceOverride::SPACE_OVERRIDE_REPLACE;
    _SpaceOverride["SPACE_OVERRIDE_REPLACE_COMBINE"] = Area2D::SpaceOverride::SPACE_OVERRIDE_REPLACE_COMBINE;
    _module.add("SpaceOverride", std::move(_SpaceOverride));
}