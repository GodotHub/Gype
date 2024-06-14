
#include <godot_cpp/classes/area2d.hpp>
#include <godot_cpp/classes/collision_object2d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Area2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<Area2D>("Area2D")
			.constructor<>()
			.base<CollisionObject2D>()
			.property<static_cast<bool (Area2D::*)() const>(&Area2D::is_monitoring), static_cast<void (Area2D::*)(bool)>(&Area2D::set_monitoring)>((new std::string("monitoring"))->c_str())
			.property<static_cast<bool (Area2D::*)() const>(&Area2D::is_monitorable), static_cast<void (Area2D::*)(bool)>(&Area2D::set_monitorable)>((new std::string("monitorable"))->c_str())
			.property<static_cast<int32_t (Area2D::*)() const>(&Area2D::get_priority), static_cast<void (Area2D::*)(int32_t)>(&Area2D::set_priority)>((new std::string("priority"))->c_str())
			.property<static_cast<Area2D::SpaceOverride (Area2D::*)() const>(&Area2D::get_gravity_space_override_mode), static_cast<void (Area2D::*)(Area2D::SpaceOverride)>(&Area2D::set_gravity_space_override_mode)>((new std::string("gravity_space_override"))->c_str())
			.property<static_cast<bool (Area2D::*)() const>(&Area2D::is_gravity_a_point), static_cast<void (Area2D::*)(bool)>(&Area2D::set_gravity_is_point)>((new std::string("gravity_point"))->c_str())
			.property<static_cast<double (Area2D::*)() const>(&Area2D::get_gravity_point_unit_distance), static_cast<void (Area2D::*)(double)>(&Area2D::set_gravity_point_unit_distance)>((new std::string("gravity_point_unit_distance"))->c_str())
			.property<static_cast<Vector2 (Area2D::*)() const>(&Area2D::get_gravity_point_center), static_cast<void (Area2D::*)(const Vector2 &)>(&Area2D::set_gravity_point_center)>((new std::string("gravity_point_center"))->c_str())
			.property<static_cast<Vector2 (Area2D::*)() const>(&Area2D::get_gravity_direction), static_cast<void (Area2D::*)(const Vector2 &)>(&Area2D::set_gravity_direction)>((new std::string("gravity_direction"))->c_str())
			.property<static_cast<double (Area2D::*)() const>(&Area2D::get_gravity), static_cast<void (Area2D::*)(double)>(&Area2D::set_gravity)>((new std::string("gravity"))->c_str())
			.property<static_cast<Area2D::SpaceOverride (Area2D::*)() const>(&Area2D::get_linear_damp_space_override_mode), static_cast<void (Area2D::*)(Area2D::SpaceOverride)>(&Area2D::set_linear_damp_space_override_mode)>((new std::string("linear_damp_space_override"))->c_str())
			.property<static_cast<double (Area2D::*)() const>(&Area2D::get_linear_damp), static_cast<void (Area2D::*)(double)>(&Area2D::set_linear_damp)>((new std::string("linear_damp"))->c_str())
			.property<static_cast<Area2D::SpaceOverride (Area2D::*)() const>(&Area2D::get_angular_damp_space_override_mode), static_cast<void (Area2D::*)(Area2D::SpaceOverride)>(&Area2D::set_angular_damp_space_override_mode)>((new std::string("angular_damp_space_override"))->c_str())
			.property<static_cast<double (Area2D::*)() const>(&Area2D::get_angular_damp), static_cast<void (Area2D::*)(double)>(&Area2D::set_angular_damp)>((new std::string("angular_damp"))->c_str())
			.property<static_cast<bool (Area2D::*)() const>(&Area2D::is_overriding_audio_bus), static_cast<void (Area2D::*)(bool)>(&Area2D::set_audio_bus_override)>((new std::string("audio_bus_override"))->c_str())
			.property<static_cast<StringName (Area2D::*)() const>(&Area2D::get_audio_bus_name), static_cast<void (Area2D::*)(const StringName &)>(&Area2D::set_audio_bus_name)>((new std::string("audio_bus_name"))->c_str())
			.fun<static_cast<TypedArray<Node2D> (Area2D::*)() const>(&Area2D::get_overlapping_bodies)>((new std::string("get_overlapping_bodies"))->c_str())
			.fun<static_cast<TypedArray<Area2D> (Area2D::*)() const>(&Area2D::get_overlapping_areas)>((new std::string("get_overlapping_areas"))->c_str())
			.fun<static_cast<bool (Area2D::*)() const>(&Area2D::has_overlapping_bodies)>((new std::string("has_overlapping_bodies"))->c_str())
			.fun<static_cast<bool (Area2D::*)() const>(&Area2D::has_overlapping_areas)>((new std::string("has_overlapping_areas"))->c_str())
			.fun<static_cast<bool (Area2D::*)(Node *) const>(&Area2D::overlaps_body)>((new std::string("overlaps_body"))->c_str())
			.fun<static_cast<bool (Area2D::*)(Node *) const>(&Area2D::overlaps_area)>((new std::string("overlaps_area"))->c_str());
	qjs::Value _SpaceOverride = context->newObject();
	_SpaceOverride[(new std::string("SPACE_OVERRIDE_DISABLED"))->c_str()] = Area2D::SpaceOverride::SPACE_OVERRIDE_DISABLED;
	_SpaceOverride[(new std::string("SPACE_OVERRIDE_COMBINE"))->c_str()] = Area2D::SpaceOverride::SPACE_OVERRIDE_COMBINE;
	_SpaceOverride[(new std::string("SPACE_OVERRIDE_COMBINE_REPLACE"))->c_str()] = Area2D::SpaceOverride::SPACE_OVERRIDE_COMBINE_REPLACE;
	_SpaceOverride[(new std::string("SPACE_OVERRIDE_REPLACE"))->c_str()] = Area2D::SpaceOverride::SPACE_OVERRIDE_REPLACE;
	_SpaceOverride[(new std::string("SPACE_OVERRIDE_REPLACE_COMBINE"))->c_str()] = Area2D::SpaceOverride::SPACE_OVERRIDE_REPLACE_COMBINE;
	_module.add("SpaceOverride", std::move(_SpaceOverride));
}