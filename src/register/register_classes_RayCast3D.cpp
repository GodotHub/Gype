#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/ray_cast3d.hpp>

using namespace godot;

void register_classes_RayCast3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<RayCast3D>("RayCast3D")
           .constructor<>()
           .property<RayCast3D::is_enabled, RayCast3D::set_enabled>("enabled")
           .property<RayCast3D::get_exclude_parent_body, RayCast3D::set_exclude_parent_body>("exclude_parent")
           .property<RayCast3D::get_target_position, RayCast3D::set_target_position>("target_position")
           .property<RayCast3D::get_collision_mask, RayCast3D::set_collision_mask>("collision_mask")
           .property<RayCast3D::is_hit_from_inside_enabled, RayCast3D::set_hit_from_inside>("hit_from_inside")
           .property<RayCast3D::is_hit_back_faces_enabled, RayCast3D::set_hit_back_faces>("hit_back_faces")
           .property<RayCast3D::is_collide_with_areas_enabled, RayCast3D::set_collide_with_areas>("collide_with_areas")
           .property<RayCast3D::is_collide_with_bodies_enabled, RayCast3D::set_collide_with_bodies>("collide_with_bodies")
           .property<RayCast3D::get_debug_shape_custom_color, RayCast3D::set_debug_shape_custom_color>("debug_shape_custom_color")
           .property<RayCast3D::get_debug_shape_thickness, RayCast3D::set_debug_shape_thickness>("debug_shape_thickness")
		    .fun<static_cast<bool(RayCast3D::*)()const>(&RayCast3D::is_colliding)>("is_colliding")
		    .fun<static_cast<void(RayCast3D::*)()>(&RayCast3D::force_raycast_update)>("force_raycast_update")
		    .fun<static_cast<Object *(RayCast3D::*)()const>(&RayCast3D::get_collider)>("get_collider")
		    .fun<static_cast<RID(RayCast3D::*)()const>(&RayCast3D::get_collider_rid)>("get_collider_rid")
		    .fun<static_cast<int32_t(RayCast3D::*)()const>(&RayCast3D::get_collider_shape)>("get_collider_shape")
		    .fun<static_cast<Vector3(RayCast3D::*)()const>(&RayCast3D::get_collision_point)>("get_collision_point")
		    .fun<static_cast<Vector3(RayCast3D::*)()const>(&RayCast3D::get_collision_normal)>("get_collision_normal")
		    .fun<static_cast<int32_t(RayCast3D::*)()const>(&RayCast3D::get_collision_face_index)>("get_collision_face_index")
		    .fun<static_cast<void(RayCast3D::*)(const RID &)>(&RayCast3D::add_exception_rid)>("add_exception_rid")
		    .fun<static_cast<void(RayCast3D::*)(CollisionObject3D *)>(&RayCast3D::add_exception)>("add_exception")
		    .fun<static_cast<void(RayCast3D::*)(const RID &)>(&RayCast3D::remove_exception_rid)>("remove_exception_rid")
		    .fun<static_cast<void(RayCast3D::*)(CollisionObject3D *)>(&RayCast3D::remove_exception)>("remove_exception")
		    .fun<static_cast<void(RayCast3D::*)()>(&RayCast3D::clear_exceptions)>("clear_exceptions")
		    .fun<static_cast<void(RayCast3D::*)(int32_t,bool)>(&RayCast3D::set_collision_mask_value)>("set_collision_mask_value")
		    .fun<static_cast<bool(RayCast3D::*)(int32_t)const>(&RayCast3D::get_collision_mask_value)>("get_collision_mask_value")
;}