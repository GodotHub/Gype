#include <godot_cpp/classes/ray_cast3d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/collision_object3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RayCast3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<RayCast3D>("RayCast3D")
            .constructor<>()
            .base<Node3D>()
            .property<static_cast<bool(RayCast3D::*)()const>(&RayCast3D::is_enabled),static_cast<void(RayCast3D::*)(bool)>(&RayCast3D::set_enabled)>("enabled")
            .property<static_cast<bool(RayCast3D::*)()const>(&RayCast3D::get_exclude_parent_body),static_cast<void(RayCast3D::*)(bool)>(&RayCast3D::set_exclude_parent_body)>("exclude_parent")
            .property<static_cast<Vector3(RayCast3D::*)()const>(&RayCast3D::get_target_position),static_cast<void(RayCast3D::*)(const Vector3 &)>(&RayCast3D::set_target_position)>("target_position")
            .property<static_cast<uint32_t(RayCast3D::*)()const>(&RayCast3D::get_collision_mask),static_cast<void(RayCast3D::*)(uint32_t)>(&RayCast3D::set_collision_mask)>("collision_mask")
            .property<static_cast<bool(RayCast3D::*)()const>(&RayCast3D::is_hit_from_inside_enabled),static_cast<void(RayCast3D::*)(bool)>(&RayCast3D::set_hit_from_inside)>("hit_from_inside")
            .property<static_cast<bool(RayCast3D::*)()const>(&RayCast3D::is_hit_back_faces_enabled),static_cast<void(RayCast3D::*)(bool)>(&RayCast3D::set_hit_back_faces)>("hit_back_faces")
            .property<static_cast<bool(RayCast3D::*)()const>(&RayCast3D::is_collide_with_areas_enabled),static_cast<void(RayCast3D::*)(bool)>(&RayCast3D::set_collide_with_areas)>("collide_with_areas")
            .property<static_cast<bool(RayCast3D::*)()const>(&RayCast3D::is_collide_with_bodies_enabled),static_cast<void(RayCast3D::*)(bool)>(&RayCast3D::set_collide_with_bodies)>("collide_with_bodies")
            .property<static_cast<Color(RayCast3D::*)()const>(&RayCast3D::get_debug_shape_custom_color),static_cast<void(RayCast3D::*)(const Color &)>(&RayCast3D::set_debug_shape_custom_color)>("debug_shape_custom_color")
            .property<static_cast<int32_t(RayCast3D::*)()const>(&RayCast3D::get_debug_shape_thickness),static_cast<void(RayCast3D::*)(int32_t)>(&RayCast3D::set_debug_shape_thickness)>("debug_shape_thickness")
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