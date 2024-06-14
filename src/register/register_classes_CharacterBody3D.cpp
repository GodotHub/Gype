
#include <godot_cpp/classes/character_body3d.hpp>
#include <godot_cpp/classes/kinematic_collision3d.hpp>
#include <godot_cpp/classes/physics_body3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CharacterBody3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<CharacterBody3D>("CharacterBody3D")
			.constructor<>()
			.base<PhysicsBody3D>()
			.property<static_cast<CharacterBody3D::MotionMode (CharacterBody3D::*)() const>(&CharacterBody3D::get_motion_mode), static_cast<void (CharacterBody3D::*)(CharacterBody3D::MotionMode)>(&CharacterBody3D::set_motion_mode)>((new std::string("motion_mode"))->c_str())
			.property<static_cast<Vector3 (CharacterBody3D::*)() const>(&CharacterBody3D::get_up_direction), static_cast<void (CharacterBody3D::*)(const Vector3 &)>(&CharacterBody3D::set_up_direction)>((new std::string("up_direction"))->c_str())
			.property<static_cast<bool (CharacterBody3D::*)() const>(&CharacterBody3D::is_slide_on_ceiling_enabled), static_cast<void (CharacterBody3D::*)(bool)>(&CharacterBody3D::set_slide_on_ceiling_enabled)>((new std::string("slide_on_ceiling"))->c_str())
			.property<static_cast<Vector3 (CharacterBody3D::*)() const>(&CharacterBody3D::get_velocity), static_cast<void (CharacterBody3D::*)(const Vector3 &)>(&CharacterBody3D::set_velocity)>((new std::string("velocity"))->c_str())
			.property<static_cast<int32_t (CharacterBody3D::*)() const>(&CharacterBody3D::get_max_slides), static_cast<void (CharacterBody3D::*)(int32_t)>(&CharacterBody3D::set_max_slides)>((new std::string("max_slides"))->c_str())
			.property<static_cast<double (CharacterBody3D::*)() const>(&CharacterBody3D::get_wall_min_slide_angle), static_cast<void (CharacterBody3D::*)(double)>(&CharacterBody3D::set_wall_min_slide_angle)>((new std::string("wall_min_slide_angle"))->c_str())
			.property<static_cast<bool (CharacterBody3D::*)() const>(&CharacterBody3D::is_floor_stop_on_slope_enabled), static_cast<void (CharacterBody3D::*)(bool)>(&CharacterBody3D::set_floor_stop_on_slope_enabled)>((new std::string("floor_stop_on_slope"))->c_str())
			.property<static_cast<bool (CharacterBody3D::*)() const>(&CharacterBody3D::is_floor_constant_speed_enabled), static_cast<void (CharacterBody3D::*)(bool)>(&CharacterBody3D::set_floor_constant_speed_enabled)>((new std::string("floor_constant_speed"))->c_str())
			.property<static_cast<bool (CharacterBody3D::*)() const>(&CharacterBody3D::is_floor_block_on_wall_enabled), static_cast<void (CharacterBody3D::*)(bool)>(&CharacterBody3D::set_floor_block_on_wall_enabled)>((new std::string("floor_block_on_wall"))->c_str())
			.property<static_cast<double (CharacterBody3D::*)() const>(&CharacterBody3D::get_floor_max_angle), static_cast<void (CharacterBody3D::*)(double)>(&CharacterBody3D::set_floor_max_angle)>((new std::string("floor_max_angle"))->c_str())
			.property<static_cast<double (CharacterBody3D::*)()>(&CharacterBody3D::get_floor_snap_length), static_cast<void (CharacterBody3D::*)(double)>(&CharacterBody3D::set_floor_snap_length)>((new std::string("floor_snap_length"))->c_str())
			.property<static_cast<CharacterBody3D::PlatformOnLeave (CharacterBody3D::*)() const>(&CharacterBody3D::get_platform_on_leave), static_cast<void (CharacterBody3D::*)(CharacterBody3D::PlatformOnLeave)>(&CharacterBody3D::set_platform_on_leave)>((new std::string("platform_on_leave"))->c_str())
			.property<static_cast<uint32_t (CharacterBody3D::*)() const>(&CharacterBody3D::get_platform_floor_layers), static_cast<void (CharacterBody3D::*)(uint32_t)>(&CharacterBody3D::set_platform_floor_layers)>((new std::string("platform_floor_layers"))->c_str())
			.property<static_cast<uint32_t (CharacterBody3D::*)() const>(&CharacterBody3D::get_platform_wall_layers), static_cast<void (CharacterBody3D::*)(uint32_t)>(&CharacterBody3D::set_platform_wall_layers)>((new std::string("platform_wall_layers"))->c_str())
			.property<static_cast<double (CharacterBody3D::*)() const>(&CharacterBody3D::get_safe_margin), static_cast<void (CharacterBody3D::*)(double)>(&CharacterBody3D::set_safe_margin)>((new std::string("safe_margin"))->c_str())
			.fun<static_cast<bool (CharacterBody3D::*)()>(&CharacterBody3D::move_and_slide)>((new std::string("move_and_slide"))->c_str())
			.fun<static_cast<void (CharacterBody3D::*)()>(&CharacterBody3D::apply_floor_snap)>((new std::string("apply_floor_snap"))->c_str())
			.fun<static_cast<bool (CharacterBody3D::*)() const>(&CharacterBody3D::is_on_floor)>((new std::string("is_on_floor"))->c_str())
			.fun<static_cast<bool (CharacterBody3D::*)() const>(&CharacterBody3D::is_on_floor_only)>((new std::string("is_on_floor_only"))->c_str())
			.fun<static_cast<bool (CharacterBody3D::*)() const>(&CharacterBody3D::is_on_ceiling)>((new std::string("is_on_ceiling"))->c_str())
			.fun<static_cast<bool (CharacterBody3D::*)() const>(&CharacterBody3D::is_on_ceiling_only)>((new std::string("is_on_ceiling_only"))->c_str())
			.fun<static_cast<bool (CharacterBody3D::*)() const>(&CharacterBody3D::is_on_wall)>((new std::string("is_on_wall"))->c_str())
			.fun<static_cast<bool (CharacterBody3D::*)() const>(&CharacterBody3D::is_on_wall_only)>((new std::string("is_on_wall_only"))->c_str())
			.fun<static_cast<Vector3 (CharacterBody3D::*)() const>(&CharacterBody3D::get_floor_normal)>((new std::string("get_floor_normal"))->c_str())
			.fun<static_cast<Vector3 (CharacterBody3D::*)() const>(&CharacterBody3D::get_wall_normal)>((new std::string("get_wall_normal"))->c_str())
			.fun<static_cast<Vector3 (CharacterBody3D::*)() const>(&CharacterBody3D::get_last_motion)>((new std::string("get_last_motion"))->c_str())
			.fun<static_cast<Vector3 (CharacterBody3D::*)() const>(&CharacterBody3D::get_position_delta)>((new std::string("get_position_delta"))->c_str())
			.fun<static_cast<Vector3 (CharacterBody3D::*)() const>(&CharacterBody3D::get_real_velocity)>((new std::string("get_real_velocity"))->c_str())
			.fun<static_cast<double (CharacterBody3D::*)(const Vector3 &) const>(&CharacterBody3D::get_floor_angle)>((new std::string("get_floor_angle"))->c_str())
			.fun<static_cast<Vector3 (CharacterBody3D::*)() const>(&CharacterBody3D::get_platform_velocity)>((new std::string("get_platform_velocity"))->c_str())
			.fun<static_cast<Vector3 (CharacterBody3D::*)() const>(&CharacterBody3D::get_platform_angular_velocity)>((new std::string("get_platform_angular_velocity"))->c_str())
			.fun<static_cast<int32_t (CharacterBody3D::*)() const>(&CharacterBody3D::get_slide_collision_count)>((new std::string("get_slide_collision_count"))->c_str())
			.fun<static_cast<Ref<KinematicCollision3D> (CharacterBody3D::*)(int32_t)>(&CharacterBody3D::get_slide_collision)>((new std::string("get_slide_collision"))->c_str())
			.fun<static_cast<Ref<KinematicCollision3D> (CharacterBody3D::*)()>(&CharacterBody3D::get_last_slide_collision)>((new std::string("get_last_slide_collision"))->c_str());
	qjs::Value _MotionMode = context->newObject();
	_MotionMode[(new std::string("MOTION_MODE_GROUNDED"))->c_str()] = CharacterBody3D::MotionMode::MOTION_MODE_GROUNDED;
	_MotionMode[(new std::string("MOTION_MODE_FLOATING"))->c_str()] = CharacterBody3D::MotionMode::MOTION_MODE_FLOATING;
	_module.add("MotionMode", std::move(_MotionMode));
	qjs::Value _PlatformOnLeave = context->newObject();
	_PlatformOnLeave[(new std::string("PLATFORM_ON_LEAVE_ADD_VELOCITY"))->c_str()] = CharacterBody3D::PlatformOnLeave::PLATFORM_ON_LEAVE_ADD_VELOCITY;
	_PlatformOnLeave[(new std::string("PLATFORM_ON_LEAVE_ADD_UPWARD_VELOCITY"))->c_str()] = CharacterBody3D::PlatformOnLeave::PLATFORM_ON_LEAVE_ADD_UPWARD_VELOCITY;
	_PlatformOnLeave[(new std::string("PLATFORM_ON_LEAVE_DO_NOTHING"))->c_str()] = CharacterBody3D::PlatformOnLeave::PLATFORM_ON_LEAVE_DO_NOTHING;
	_module.add("PlatformOnLeave", std::move(_PlatformOnLeave));
}