
#include <godot_cpp/classes/collision_object3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ray_cast3d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RayCast3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<RayCast3D>("RayCast3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<bool (RayCast3D::*)() const>(&RayCast3D::is_enabled), static_cast<void (RayCast3D::*)(bool)>(&RayCast3D::set_enabled)>((new std::string("enabled"))->c_str())
			.property<static_cast<bool (RayCast3D::*)() const>(&RayCast3D::get_exclude_parent_body), static_cast<void (RayCast3D::*)(bool)>(&RayCast3D::set_exclude_parent_body)>((new std::string("exclude_parent"))->c_str())
			.property<static_cast<Vector3 (RayCast3D::*)() const>(&RayCast3D::get_target_position), static_cast<void (RayCast3D::*)(const Vector3 &)>(&RayCast3D::set_target_position)>((new std::string("target_position"))->c_str())
			.property<static_cast<uint32_t (RayCast3D::*)() const>(&RayCast3D::get_collision_mask), static_cast<void (RayCast3D::*)(uint32_t)>(&RayCast3D::set_collision_mask)>((new std::string("collision_mask"))->c_str())
			.property<static_cast<bool (RayCast3D::*)() const>(&RayCast3D::is_hit_from_inside_enabled), static_cast<void (RayCast3D::*)(bool)>(&RayCast3D::set_hit_from_inside)>((new std::string("hit_from_inside"))->c_str())
			.property<static_cast<bool (RayCast3D::*)() const>(&RayCast3D::is_hit_back_faces_enabled), static_cast<void (RayCast3D::*)(bool)>(&RayCast3D::set_hit_back_faces)>((new std::string("hit_back_faces"))->c_str())
			.property<static_cast<bool (RayCast3D::*)() const>(&RayCast3D::is_collide_with_areas_enabled), static_cast<void (RayCast3D::*)(bool)>(&RayCast3D::set_collide_with_areas)>((new std::string("collide_with_areas"))->c_str())
			.property<static_cast<bool (RayCast3D::*)() const>(&RayCast3D::is_collide_with_bodies_enabled), static_cast<void (RayCast3D::*)(bool)>(&RayCast3D::set_collide_with_bodies)>((new std::string("collide_with_bodies"))->c_str())
			.property<static_cast<Color (RayCast3D::*)() const>(&RayCast3D::get_debug_shape_custom_color), static_cast<void (RayCast3D::*)(const Color &)>(&RayCast3D::set_debug_shape_custom_color)>((new std::string("debug_shape_custom_color"))->c_str())
			.property<static_cast<int32_t (RayCast3D::*)() const>(&RayCast3D::get_debug_shape_thickness), static_cast<void (RayCast3D::*)(int32_t)>(&RayCast3D::set_debug_shape_thickness)>((new std::string("debug_shape_thickness"))->c_str())
			.fun<static_cast<bool (RayCast3D::*)() const>(&RayCast3D::is_colliding)>((new std::string("is_colliding"))->c_str())
			.fun<static_cast<void (RayCast3D::*)()>(&RayCast3D::force_raycast_update)>((new std::string("force_raycast_update"))->c_str())
			.fun<static_cast<Object *(RayCast3D::*)() const>(&RayCast3D::get_collider)>((new std::string("get_collider"))->c_str())
			.fun<static_cast<RID (RayCast3D::*)() const>(&RayCast3D::get_collider_rid)>((new std::string("get_collider_rid"))->c_str())
			.fun<static_cast<int32_t (RayCast3D::*)() const>(&RayCast3D::get_collider_shape)>((new std::string("get_collider_shape"))->c_str())
			.fun<static_cast<Vector3 (RayCast3D::*)() const>(&RayCast3D::get_collision_point)>((new std::string("get_collision_point"))->c_str())
			.fun<static_cast<Vector3 (RayCast3D::*)() const>(&RayCast3D::get_collision_normal)>((new std::string("get_collision_normal"))->c_str())
			.fun<static_cast<int32_t (RayCast3D::*)() const>(&RayCast3D::get_collision_face_index)>((new std::string("get_collision_face_index"))->c_str())
			.fun<static_cast<void (RayCast3D::*)(const RID &)>(&RayCast3D::add_exception_rid)>((new std::string("add_exception_rid"))->c_str())
			.fun<static_cast<void (RayCast3D::*)(CollisionObject3D *)>(&RayCast3D::add_exception)>((new std::string("add_exception"))->c_str())
			.fun<static_cast<void (RayCast3D::*)(const RID &)>(&RayCast3D::remove_exception_rid)>((new std::string("remove_exception_rid"))->c_str())
			.fun<static_cast<void (RayCast3D::*)(CollisionObject3D *)>(&RayCast3D::remove_exception)>((new std::string("remove_exception"))->c_str())
			.fun<static_cast<void (RayCast3D::*)()>(&RayCast3D::clear_exceptions)>((new std::string("clear_exceptions"))->c_str())
			.fun<static_cast<void (RayCast3D::*)(int32_t, bool)>(&RayCast3D::set_collision_mask_value)>((new std::string("set_collision_mask_value"))->c_str())
			.fun<static_cast<bool (RayCast3D::*)(int32_t) const>(&RayCast3D::get_collision_mask_value)>((new std::string("get_collision_mask_value"))->c_str());
}