#include <godot_cpp/classes/character_body2d.hpp>
#include <godot_cpp/classes/kinematic_collision2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CharacterBody2D() {
	qjs::Context::Module &_module = _Node2D;
	_module.class_<CharacterBody2D>("CharacterBody2D")
			.constructor<>()
			.property<&CharacterBody2D::get_motion_mode, &CharacterBody2D::set_motion_mode>("motion_mode")
			.property<&CharacterBody2D::get_up_direction, &CharacterBody2D::set_up_direction>("up_direction")
			.property<&CharacterBody2D::get_velocity, &CharacterBody2D::set_velocity>("velocity")
			.property<&CharacterBody2D::is_slide_on_ceiling_enabled, &CharacterBody2D::set_slide_on_ceiling_enabled>("slide_on_ceiling")
			.property<&CharacterBody2D::get_max_slides, &CharacterBody2D::set_max_slides>("max_slides")
			.property<&CharacterBody2D::get_wall_min_slide_angle, &CharacterBody2D::set_wall_min_slide_angle>("wall_min_slide_angle")
			.property<&CharacterBody2D::is_floor_stop_on_slope_enabled, &CharacterBody2D::set_floor_stop_on_slope_enabled>("floor_stop_on_slope")
			.property<&CharacterBody2D::is_floor_constant_speed_enabled, &CharacterBody2D::set_floor_constant_speed_enabled>("floor_constant_speed")
			.property<&CharacterBody2D::is_floor_block_on_wall_enabled, &CharacterBody2D::set_floor_block_on_wall_enabled>("floor_block_on_wall")
			.property<&CharacterBody2D::get_floor_max_angle, &CharacterBody2D::set_floor_max_angle>("floor_max_angle")
			.property<&CharacterBody2D::get_floor_snap_length, &CharacterBody2D::set_floor_snap_length>("floor_snap_length")
			.property<&CharacterBody2D::get_platform_on_leave, &CharacterBody2D::set_platform_on_leave>("platform_on_leave")
			.property<&CharacterBody2D::get_platform_floor_layers, &CharacterBody2D::set_platform_floor_layers>("platform_floor_layers")
			.property<&CharacterBody2D::get_platform_wall_layers, &CharacterBody2D::set_platform_wall_layers>("platform_wall_layers")
			.property<&CharacterBody2D::get_safe_margin, &CharacterBody2D::set_safe_margin>("safe_margin")
			.fun<static_cast<bool (CharacterBody2D::*)()>(&CharacterBody2D::move_and_slide)>("move_and_slide")
			.fun<static_cast<void (CharacterBody2D::*)()>(&CharacterBody2D::apply_floor_snap)>("apply_floor_snap")
			.fun<static_cast<bool (CharacterBody2D::*)() const>(&CharacterBody2D::is_on_floor)>("is_on_floor")
			.fun<static_cast<bool (CharacterBody2D::*)() const>(&CharacterBody2D::is_on_floor_only)>("is_on_floor_only")
			.fun<static_cast<bool (CharacterBody2D::*)() const>(&CharacterBody2D::is_on_ceiling)>("is_on_ceiling")
			.fun<static_cast<bool (CharacterBody2D::*)() const>(&CharacterBody2D::is_on_ceiling_only)>("is_on_ceiling_only")
			.fun<static_cast<bool (CharacterBody2D::*)() const>(&CharacterBody2D::is_on_wall)>("is_on_wall")
			.fun<static_cast<bool (CharacterBody2D::*)() const>(&CharacterBody2D::is_on_wall_only)>("is_on_wall_only")
			.fun<static_cast<Vector2 (CharacterBody2D::*)() const>(&CharacterBody2D::get_floor_normal)>("get_floor_normal")
			.fun<static_cast<Vector2 (CharacterBody2D::*)() const>(&CharacterBody2D::get_wall_normal)>("get_wall_normal")
			.fun<static_cast<Vector2 (CharacterBody2D::*)() const>(&CharacterBody2D::get_last_motion)>("get_last_motion")
			.fun<static_cast<Vector2 (CharacterBody2D::*)() const>(&CharacterBody2D::get_position_delta)>("get_position_delta")
			.fun<static_cast<Vector2 (CharacterBody2D::*)() const>(&CharacterBody2D::get_real_velocity)>("get_real_velocity")
			.fun<static_cast<double (CharacterBody2D::*)(const Vector2 &) const>(&CharacterBody2D::get_floor_angle)>("get_floor_angle")
			.fun<static_cast<Vector2 (CharacterBody2D::*)() const>(&CharacterBody2D::get_platform_velocity)>("get_platform_velocity")
			.fun<static_cast<int32_t (CharacterBody2D::*)() const>(&CharacterBody2D::get_slide_collision_count)>("get_slide_collision_count")
			.fun<static_cast<Ref<KinematicCollision2D> (CharacterBody2D::*)(int32_t)>(&CharacterBody2D::get_slide_collision)>("get_slide_collision")
			.fun<static_cast<Ref<KinematicCollision2D> (CharacterBody2D::*)()>(&CharacterBody2D::get_last_slide_collision)>("get_last_slide_collision");
}