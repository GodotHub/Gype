
#include <godot_cpp/classes/collision_object2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ray_cast2d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RayCast2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<RayCast2D>("RayCast2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<bool (RayCast2D::*)() const>(&RayCast2D::is_enabled), static_cast<void (RayCast2D::*)(bool)>(&RayCast2D::set_enabled)>((new std::string("enabled"))->c_str())
			.property<static_cast<bool (RayCast2D::*)() const>(&RayCast2D::get_exclude_parent_body), static_cast<void (RayCast2D::*)(bool)>(&RayCast2D::set_exclude_parent_body)>((new std::string("exclude_parent"))->c_str())
			.property<static_cast<Vector2 (RayCast2D::*)() const>(&RayCast2D::get_target_position), static_cast<void (RayCast2D::*)(const Vector2 &)>(&RayCast2D::set_target_position)>((new std::string("target_position"))->c_str())
			.property<static_cast<uint32_t (RayCast2D::*)() const>(&RayCast2D::get_collision_mask), static_cast<void (RayCast2D::*)(uint32_t)>(&RayCast2D::set_collision_mask)>((new std::string("collision_mask"))->c_str())
			.property<static_cast<bool (RayCast2D::*)() const>(&RayCast2D::is_hit_from_inside_enabled), static_cast<void (RayCast2D::*)(bool)>(&RayCast2D::set_hit_from_inside)>((new std::string("hit_from_inside"))->c_str())
			.property<static_cast<bool (RayCast2D::*)() const>(&RayCast2D::is_collide_with_areas_enabled), static_cast<void (RayCast2D::*)(bool)>(&RayCast2D::set_collide_with_areas)>((new std::string("collide_with_areas"))->c_str())
			.property<static_cast<bool (RayCast2D::*)() const>(&RayCast2D::is_collide_with_bodies_enabled), static_cast<void (RayCast2D::*)(bool)>(&RayCast2D::set_collide_with_bodies)>((new std::string("collide_with_bodies"))->c_str())
			.fun<static_cast<bool (RayCast2D::*)() const>(&RayCast2D::is_colliding)>((new std::string("is_colliding"))->c_str())
			.fun<static_cast<void (RayCast2D::*)()>(&RayCast2D::force_raycast_update)>((new std::string("force_raycast_update"))->c_str())
			.fun<static_cast<Object *(RayCast2D::*)() const>(&RayCast2D::get_collider)>((new std::string("get_collider"))->c_str())
			.fun<static_cast<RID (RayCast2D::*)() const>(&RayCast2D::get_collider_rid)>((new std::string("get_collider_rid"))->c_str())
			.fun<static_cast<int32_t (RayCast2D::*)() const>(&RayCast2D::get_collider_shape)>((new std::string("get_collider_shape"))->c_str())
			.fun<static_cast<Vector2 (RayCast2D::*)() const>(&RayCast2D::get_collision_point)>((new std::string("get_collision_point"))->c_str())
			.fun<static_cast<Vector2 (RayCast2D::*)() const>(&RayCast2D::get_collision_normal)>((new std::string("get_collision_normal"))->c_str())
			.fun<static_cast<void (RayCast2D::*)(const RID &)>(&RayCast2D::add_exception_rid)>((new std::string("add_exception_rid"))->c_str())
			.fun<static_cast<void (RayCast2D::*)(CollisionObject2D *)>(&RayCast2D::add_exception)>((new std::string("add_exception"))->c_str())
			.fun<static_cast<void (RayCast2D::*)(const RID &)>(&RayCast2D::remove_exception_rid)>((new std::string("remove_exception_rid"))->c_str())
			.fun<static_cast<void (RayCast2D::*)(CollisionObject2D *)>(&RayCast2D::remove_exception)>((new std::string("remove_exception"))->c_str())
			.fun<static_cast<void (RayCast2D::*)()>(&RayCast2D::clear_exceptions)>((new std::string("clear_exceptions"))->c_str())
			.fun<static_cast<void (RayCast2D::*)(int32_t, bool)>(&RayCast2D::set_collision_mask_value)>((new std::string("set_collision_mask_value"))->c_str())
			.fun<static_cast<bool (RayCast2D::*)(int32_t) const>(&RayCast2D::get_collision_mask_value)>((new std::string("get_collision_mask_value"))->c_str());
}