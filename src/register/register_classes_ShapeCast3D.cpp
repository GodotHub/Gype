#include <godot_cpp/classes/shape_cast3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/collision_object3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ShapeCast3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<ShapeCast3D>("ShapeCast3D")
            .constructor<>()
            .base<Node3D>()
            .property<static_cast<bool(ShapeCast3D::*)()const>(&ShapeCast3D::is_enabled),static_cast<void(ShapeCast3D::*)(bool)>(&ShapeCast3D::set_enabled)>("enabled")
            .property<static_cast<Ref<Shape3D>(ShapeCast3D::*)()const>(&ShapeCast3D::get_shape),static_cast<void(ShapeCast3D::*)(const Ref<Shape3D> &)>(&ShapeCast3D::set_shape)>("shape")
            .property<static_cast<bool(ShapeCast3D::*)()const>(&ShapeCast3D::get_exclude_parent_body),static_cast<void(ShapeCast3D::*)(bool)>(&ShapeCast3D::set_exclude_parent_body)>("exclude_parent")
            .property<static_cast<Vector3(ShapeCast3D::*)()const>(&ShapeCast3D::get_target_position),static_cast<void(ShapeCast3D::*)(const Vector3 &)>(&ShapeCast3D::set_target_position)>("target_position")
            .property<static_cast<double(ShapeCast3D::*)()const>(&ShapeCast3D::get_margin),static_cast<void(ShapeCast3D::*)(double)>(&ShapeCast3D::set_margin)>("margin")
            .property<static_cast<int32_t(ShapeCast3D::*)()const>(&ShapeCast3D::get_max_results),static_cast<void(ShapeCast3D::*)(int32_t)>(&ShapeCast3D::set_max_results)>("max_results")
            .property<static_cast<uint32_t(ShapeCast3D::*)()const>(&ShapeCast3D::get_collision_mask),static_cast<void(ShapeCast3D::*)(uint32_t)>(&ShapeCast3D::set_collision_mask)>("collision_mask")
            .property<static_cast<bool(ShapeCast3D::*)()const>(&ShapeCast3D::is_collide_with_areas_enabled),static_cast<void(ShapeCast3D::*)(bool)>(&ShapeCast3D::set_collide_with_areas)>("collide_with_areas")
            .property<static_cast<bool(ShapeCast3D::*)()const>(&ShapeCast3D::is_collide_with_bodies_enabled),static_cast<void(ShapeCast3D::*)(bool)>(&ShapeCast3D::set_collide_with_bodies)>("collide_with_bodies")
            .property<static_cast<Color(ShapeCast3D::*)()const>(&ShapeCast3D::get_debug_shape_custom_color),static_cast<void(ShapeCast3D::*)(const Color &)>(&ShapeCast3D::set_debug_shape_custom_color)>("debug_shape_custom_color")
            .fun<static_cast<void(ShapeCast3D::*)(const Ref<Resource> &)>(&ShapeCast3D::resource_changed)>("resource_changed")
            .fun<static_cast<bool(ShapeCast3D::*)()const>(&ShapeCast3D::is_colliding)>("is_colliding")
            .fun<static_cast<int32_t(ShapeCast3D::*)()const>(&ShapeCast3D::get_collision_count)>("get_collision_count")
            .fun<static_cast<void(ShapeCast3D::*)()>(&ShapeCast3D::force_shapecast_update)>("force_shapecast_update")
            .fun<static_cast<Object *(ShapeCast3D::*)(int32_t)const>(&ShapeCast3D::get_collider)>("get_collider")
            .fun<static_cast<RID(ShapeCast3D::*)(int32_t)const>(&ShapeCast3D::get_collider_rid)>("get_collider_rid")
            .fun<static_cast<int32_t(ShapeCast3D::*)(int32_t)const>(&ShapeCast3D::get_collider_shape)>("get_collider_shape")
            .fun<static_cast<Vector3(ShapeCast3D::*)(int32_t)const>(&ShapeCast3D::get_collision_point)>("get_collision_point")
            .fun<static_cast<Vector3(ShapeCast3D::*)(int32_t)const>(&ShapeCast3D::get_collision_normal)>("get_collision_normal")
            .fun<static_cast<double(ShapeCast3D::*)()const>(&ShapeCast3D::get_closest_collision_safe_fraction)>("get_closest_collision_safe_fraction")
            .fun<static_cast<double(ShapeCast3D::*)()const>(&ShapeCast3D::get_closest_collision_unsafe_fraction)>("get_closest_collision_unsafe_fraction")
            .fun<static_cast<void(ShapeCast3D::*)(const RID &)>(&ShapeCast3D::add_exception_rid)>("add_exception_rid")
            .fun<static_cast<void(ShapeCast3D::*)(CollisionObject3D *)>(&ShapeCast3D::add_exception)>("add_exception")
            .fun<static_cast<void(ShapeCast3D::*)(const RID &)>(&ShapeCast3D::remove_exception_rid)>("remove_exception_rid")
            .fun<static_cast<void(ShapeCast3D::*)(CollisionObject3D *)>(&ShapeCast3D::remove_exception)>("remove_exception")
            .fun<static_cast<void(ShapeCast3D::*)()>(&ShapeCast3D::clear_exceptions)>("clear_exceptions")
            .fun<static_cast<void(ShapeCast3D::*)(int32_t,bool)>(&ShapeCast3D::set_collision_mask_value)>("set_collision_mask_value")
            .fun<static_cast<bool(ShapeCast3D::*)(int32_t)const>(&ShapeCast3D::get_collision_mask_value)>("get_collision_mask_value")
;}