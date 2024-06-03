#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/shape_cast2d.hpp>

using namespace godot;

void register_classes_ShapeCast2D() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<ShapeCast2D>("ShapeCast2D")
           .constructor<>()
           .property<ShapeCast2D::is_enabled, ShapeCast2D::set_enabled>("enabled")
           .property<ShapeCast2D::get_shape, ShapeCast2D::set_shape>("shape")
           .property<ShapeCast2D::get_exclude_parent_body, ShapeCast2D::set_exclude_parent_body>("exclude_parent")
           .property<ShapeCast2D::get_target_position, ShapeCast2D::set_target_position>("target_position")
           .property<ShapeCast2D::get_margin, ShapeCast2D::set_margin>("margin")
           .property<ShapeCast2D::get_max_results, ShapeCast2D::set_max_results>("max_results")
           .property<ShapeCast2D::get_collision_mask, ShapeCast2D::set_collision_mask>("collision_mask")
           .property<ShapeCast2D::_get_collision_result>("collision_result")
           .property<ShapeCast2D::is_collide_with_areas_enabled, ShapeCast2D::set_collide_with_areas>("collide_with_areas")
           .property<ShapeCast2D::is_collide_with_bodies_enabled, ShapeCast2D::set_collide_with_bodies>("collide_with_bodies")
		    .fun<static_cast<bool(ShapeCast2D::*)()const>(&ShapeCast2D::is_colliding)>("is_colliding")
		    .fun<static_cast<int32_t(ShapeCast2D::*)()const>(&ShapeCast2D::get_collision_count)>("get_collision_count")
		    .fun<static_cast<void(ShapeCast2D::*)()>(&ShapeCast2D::force_shapecast_update)>("force_shapecast_update")
		    .fun<static_cast<Object *(ShapeCast2D::*)(int32_t)const>(&ShapeCast2D::get_collider)>("get_collider")
		    .fun<static_cast<RID(ShapeCast2D::*)(int32_t)const>(&ShapeCast2D::get_collider_rid)>("get_collider_rid")
		    .fun<static_cast<int32_t(ShapeCast2D::*)(int32_t)const>(&ShapeCast2D::get_collider_shape)>("get_collider_shape")
		    .fun<static_cast<Vector2(ShapeCast2D::*)(int32_t)const>(&ShapeCast2D::get_collision_point)>("get_collision_point")
		    .fun<static_cast<Vector2(ShapeCast2D::*)(int32_t)const>(&ShapeCast2D::get_collision_normal)>("get_collision_normal")
		    .fun<static_cast<double(ShapeCast2D::*)()const>(&ShapeCast2D::get_closest_collision_safe_fraction)>("get_closest_collision_safe_fraction")
		    .fun<static_cast<double(ShapeCast2D::*)()const>(&ShapeCast2D::get_closest_collision_unsafe_fraction)>("get_closest_collision_unsafe_fraction")
		    .fun<static_cast<void(ShapeCast2D::*)(const RID &)>(&ShapeCast2D::add_exception_rid)>("add_exception_rid")
		    .fun<static_cast<void(ShapeCast2D::*)(CollisionObject2D *)>(&ShapeCast2D::add_exception)>("add_exception")
		    .fun<static_cast<void(ShapeCast2D::*)(const RID &)>(&ShapeCast2D::remove_exception_rid)>("remove_exception_rid")
		    .fun<static_cast<void(ShapeCast2D::*)(CollisionObject2D *)>(&ShapeCast2D::remove_exception)>("remove_exception")
		    .fun<static_cast<void(ShapeCast2D::*)()>(&ShapeCast2D::clear_exceptions)>("clear_exceptions")
		    .fun<static_cast<void(ShapeCast2D::*)(int32_t,bool)>(&ShapeCast2D::set_collision_mask_value)>("set_collision_mask_value")
		    .fun<static_cast<bool(ShapeCast2D::*)(int32_t)const>(&ShapeCast2D::get_collision_mask_value)>("get_collision_mask_value")
;}