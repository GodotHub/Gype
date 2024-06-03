#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/ray_cast2d.hpp>

using namespace godot;

void register_classes_RayCast2D() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<RayCast2D>("RayCast2D")
           .constructor<>()
           .property<RayCast2D::is_enabled, RayCast2D::set_enabled>("enabled")
           .property<RayCast2D::get_exclude_parent_body, RayCast2D::set_exclude_parent_body>("exclude_parent")
           .property<RayCast2D::get_target_position, RayCast2D::set_target_position>("target_position")
           .property<RayCast2D::get_collision_mask, RayCast2D::set_collision_mask>("collision_mask")
           .property<RayCast2D::is_hit_from_inside_enabled, RayCast2D::set_hit_from_inside>("hit_from_inside")
           .property<RayCast2D::is_collide_with_areas_enabled, RayCast2D::set_collide_with_areas>("collide_with_areas")
           .property<RayCast2D::is_collide_with_bodies_enabled, RayCast2D::set_collide_with_bodies>("collide_with_bodies")
		    .fun<static_cast<bool(RayCast2D::*)()const>(&RayCast2D::is_colliding)>("is_colliding")
		    .fun<static_cast<void(RayCast2D::*)()>(&RayCast2D::force_raycast_update)>("force_raycast_update")
		    .fun<static_cast<Object *(RayCast2D::*)()const>(&RayCast2D::get_collider)>("get_collider")
		    .fun<static_cast<RID(RayCast2D::*)()const>(&RayCast2D::get_collider_rid)>("get_collider_rid")
		    .fun<static_cast<int32_t(RayCast2D::*)()const>(&RayCast2D::get_collider_shape)>("get_collider_shape")
		    .fun<static_cast<Vector2(RayCast2D::*)()const>(&RayCast2D::get_collision_point)>("get_collision_point")
		    .fun<static_cast<Vector2(RayCast2D::*)()const>(&RayCast2D::get_collision_normal)>("get_collision_normal")
		    .fun<static_cast<void(RayCast2D::*)(const RID &)>(&RayCast2D::add_exception_rid)>("add_exception_rid")
		    .fun<static_cast<void(RayCast2D::*)(CollisionObject2D *)>(&RayCast2D::add_exception)>("add_exception")
		    .fun<static_cast<void(RayCast2D::*)(const RID &)>(&RayCast2D::remove_exception_rid)>("remove_exception_rid")
		    .fun<static_cast<void(RayCast2D::*)(CollisionObject2D *)>(&RayCast2D::remove_exception)>("remove_exception")
		    .fun<static_cast<void(RayCast2D::*)()>(&RayCast2D::clear_exceptions)>("clear_exceptions")
		    .fun<static_cast<void(RayCast2D::*)(int32_t,bool)>(&RayCast2D::set_collision_mask_value)>("set_collision_mask_value")
		    .fun<static_cast<bool(RayCast2D::*)(int32_t)const>(&RayCast2D::get_collision_mask_value)>("get_collision_mask_value")
;}