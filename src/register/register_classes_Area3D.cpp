
#include <godot_cpp/classes/area3d.hpp>
#include <godot_cpp/classes/collision_object3d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Area3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<Area3D>("Area3D")
			.constructor<>()
			.base<CollisionObject3D>()
			.property<static_cast<bool (Area3D::*)() const>(&Area3D::is_monitoring), static_cast<void (Area3D::*)(bool)>(&Area3D::set_monitoring)>((new std::string("monitoring"))->c_str())
			.property<static_cast<bool (Area3D::*)() const>(&Area3D::is_monitorable), static_cast<void (Area3D::*)(bool)>(&Area3D::set_monitorable)>((new std::string("monitorable"))->c_str())
			.property<static_cast<int32_t (Area3D::*)() const>(&Area3D::get_priority), static_cast<void (Area3D::*)(int32_t)>(&Area3D::set_priority)>((new std::string("priority"))->c_str())
			.property<static_cast<Area3D::SpaceOverride (Area3D::*)() const>(&Area3D::get_gravity_space_override_mode), static_cast<void (Area3D::*)(Area3D::SpaceOverride)>(&Area3D::set_gravity_space_override_mode)>((new std::string("gravity_space_override"))->c_str())
			.property<static_cast<bool (Area3D::*)() const>(&Area3D::is_gravity_a_point), static_cast<void (Area3D::*)(bool)>(&Area3D::set_gravity_is_point)>((new std::string("gravity_point"))->c_str())
			.property<static_cast<double (Area3D::*)() const>(&Area3D::get_gravity_point_unit_distance), static_cast<void (Area3D::*)(double)>(&Area3D::set_gravity_point_unit_distance)>((new std::string("gravity_point_unit_distance"))->c_str())
			.property<static_cast<Vector3 (Area3D::*)() const>(&Area3D::get_gravity_point_center), static_cast<void (Area3D::*)(const Vector3 &)>(&Area3D::set_gravity_point_center)>((new std::string("gravity_point_center"))->c_str())
			.property<static_cast<Vector3 (Area3D::*)() const>(&Area3D::get_gravity_direction), static_cast<void (Area3D::*)(const Vector3 &)>(&Area3D::set_gravity_direction)>((new std::string("gravity_direction"))->c_str())
			.property<static_cast<double (Area3D::*)() const>(&Area3D::get_gravity), static_cast<void (Area3D::*)(double)>(&Area3D::set_gravity)>((new std::string("gravity"))->c_str())
			.property<static_cast<Area3D::SpaceOverride (Area3D::*)() const>(&Area3D::get_linear_damp_space_override_mode), static_cast<void (Area3D::*)(Area3D::SpaceOverride)>(&Area3D::set_linear_damp_space_override_mode)>((new std::string("linear_damp_space_override"))->c_str())
			.property<static_cast<double (Area3D::*)() const>(&Area3D::get_linear_damp), static_cast<void (Area3D::*)(double)>(&Area3D::set_linear_damp)>((new std::string("linear_damp"))->c_str())
			.property<static_cast<Area3D::SpaceOverride (Area3D::*)() const>(&Area3D::get_angular_damp_space_override_mode), static_cast<void (Area3D::*)(Area3D::SpaceOverride)>(&Area3D::set_angular_damp_space_override_mode)>((new std::string("angular_damp_space_override"))->c_str())
			.property<static_cast<double (Area3D::*)() const>(&Area3D::get_angular_damp), static_cast<void (Area3D::*)(double)>(&Area3D::set_angular_damp)>((new std::string("angular_damp"))->c_str())
			.property<static_cast<double (Area3D::*)() const>(&Area3D::get_wind_force_magnitude), static_cast<void (Area3D::*)(double)>(&Area3D::set_wind_force_magnitude)>((new std::string("wind_force_magnitude"))->c_str())
			.property<static_cast<double (Area3D::*)() const>(&Area3D::get_wind_attenuation_factor), static_cast<void (Area3D::*)(double)>(&Area3D::set_wind_attenuation_factor)>((new std::string("wind_attenuation_factor"))->c_str())
			.property<static_cast<NodePath (Area3D::*)() const>(&Area3D::get_wind_source_path), static_cast<void (Area3D::*)(const NodePath &)>(&Area3D::set_wind_source_path)>((new std::string("wind_source_path"))->c_str())
			.property<static_cast<bool (Area3D::*)() const>(&Area3D::is_overriding_audio_bus), static_cast<void (Area3D::*)(bool)>(&Area3D::set_audio_bus_override)>((new std::string("audio_bus_override"))->c_str())
			.property<static_cast<StringName (Area3D::*)() const>(&Area3D::get_audio_bus_name), static_cast<void (Area3D::*)(const StringName &)>(&Area3D::set_audio_bus_name)>((new std::string("audio_bus_name"))->c_str())
			.property<static_cast<bool (Area3D::*)() const>(&Area3D::is_using_reverb_bus), static_cast<void (Area3D::*)(bool)>(&Area3D::set_use_reverb_bus)>((new std::string("reverb_bus_enabled"))->c_str())
			.property<static_cast<StringName (Area3D::*)() const>(&Area3D::get_reverb_bus_name), static_cast<void (Area3D::*)(const StringName &)>(&Area3D::set_reverb_bus_name)>((new std::string("reverb_bus_name"))->c_str())
			.property<static_cast<double (Area3D::*)() const>(&Area3D::get_reverb_amount), static_cast<void (Area3D::*)(double)>(&Area3D::set_reverb_amount)>((new std::string("reverb_bus_amount"))->c_str())
			.property<static_cast<double (Area3D::*)() const>(&Area3D::get_reverb_uniformity), static_cast<void (Area3D::*)(double)>(&Area3D::set_reverb_uniformity)>((new std::string("reverb_bus_uniformity"))->c_str())
			.fun<static_cast<TypedArray<Node3D> (Area3D::*)() const>(&Area3D::get_overlapping_bodies)>((new std::string("get_overlapping_bodies"))->c_str())
			.fun<static_cast<TypedArray<Area3D> (Area3D::*)() const>(&Area3D::get_overlapping_areas)>((new std::string("get_overlapping_areas"))->c_str())
			.fun<static_cast<bool (Area3D::*)() const>(&Area3D::has_overlapping_bodies)>((new std::string("has_overlapping_bodies"))->c_str())
			.fun<static_cast<bool (Area3D::*)() const>(&Area3D::has_overlapping_areas)>((new std::string("has_overlapping_areas"))->c_str())
			.fun<static_cast<bool (Area3D::*)(Node *) const>(&Area3D::overlaps_body)>((new std::string("overlaps_body"))->c_str())
			.fun<static_cast<bool (Area3D::*)(Node *) const>(&Area3D::overlaps_area)>((new std::string("overlaps_area"))->c_str());
	qjs::Value _SpaceOverride = context->newObject();
	_SpaceOverride[(new std::string("SPACE_OVERRIDE_DISABLED"))->c_str()] = Area3D::SpaceOverride::SPACE_OVERRIDE_DISABLED;
	_SpaceOverride[(new std::string("SPACE_OVERRIDE_COMBINE"))->c_str()] = Area3D::SpaceOverride::SPACE_OVERRIDE_COMBINE;
	_SpaceOverride[(new std::string("SPACE_OVERRIDE_COMBINE_REPLACE"))->c_str()] = Area3D::SpaceOverride::SPACE_OVERRIDE_COMBINE_REPLACE;
	_SpaceOverride[(new std::string("SPACE_OVERRIDE_REPLACE"))->c_str()] = Area3D::SpaceOverride::SPACE_OVERRIDE_REPLACE;
	_SpaceOverride[(new std::string("SPACE_OVERRIDE_REPLACE_COMBINE"))->c_str()] = Area3D::SpaceOverride::SPACE_OVERRIDE_REPLACE_COMBINE;
	_module.add("SpaceOverride", std::move(_SpaceOverride));
}