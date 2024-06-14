
#include <godot_cpp/classes/collision_object2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/classes/shape_cast2d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ShapeCast2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<ShapeCast2D>("ShapeCast2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<bool (ShapeCast2D::*)() const>(&ShapeCast2D::is_enabled), static_cast<void (ShapeCast2D::*)(bool)>(&ShapeCast2D::set_enabled)>((new std::string("enabled"))->c_str())
			.property<static_cast<Ref<Shape2D> (ShapeCast2D::*)() const>(&ShapeCast2D::get_shape), static_cast<void (ShapeCast2D::*)(const Ref<Shape2D> &)>(&ShapeCast2D::set_shape)>((new std::string("shape"))->c_str())
			.property<static_cast<bool (ShapeCast2D::*)() const>(&ShapeCast2D::get_exclude_parent_body), static_cast<void (ShapeCast2D::*)(bool)>(&ShapeCast2D::set_exclude_parent_body)>((new std::string("exclude_parent"))->c_str())
			.property<static_cast<Vector2 (ShapeCast2D::*)() const>(&ShapeCast2D::get_target_position), static_cast<void (ShapeCast2D::*)(const Vector2 &)>(&ShapeCast2D::set_target_position)>((new std::string("target_position"))->c_str())
			.property<static_cast<double (ShapeCast2D::*)() const>(&ShapeCast2D::get_margin), static_cast<void (ShapeCast2D::*)(double)>(&ShapeCast2D::set_margin)>((new std::string("margin"))->c_str())
			.property<static_cast<int32_t (ShapeCast2D::*)() const>(&ShapeCast2D::get_max_results), static_cast<void (ShapeCast2D::*)(int32_t)>(&ShapeCast2D::set_max_results)>((new std::string("max_results"))->c_str())
			.property<static_cast<uint32_t (ShapeCast2D::*)() const>(&ShapeCast2D::get_collision_mask), static_cast<void (ShapeCast2D::*)(uint32_t)>(&ShapeCast2D::set_collision_mask)>((new std::string("collision_mask"))->c_str())
			.property<static_cast<bool (ShapeCast2D::*)() const>(&ShapeCast2D::is_collide_with_areas_enabled), static_cast<void (ShapeCast2D::*)(bool)>(&ShapeCast2D::set_collide_with_areas)>((new std::string("collide_with_areas"))->c_str())
			.property<static_cast<bool (ShapeCast2D::*)() const>(&ShapeCast2D::is_collide_with_bodies_enabled), static_cast<void (ShapeCast2D::*)(bool)>(&ShapeCast2D::set_collide_with_bodies)>((new std::string("collide_with_bodies"))->c_str())
			.fun<static_cast<bool (ShapeCast2D::*)() const>(&ShapeCast2D::is_colliding)>((new std::string("is_colliding"))->c_str())
			.fun<static_cast<int32_t (ShapeCast2D::*)() const>(&ShapeCast2D::get_collision_count)>((new std::string("get_collision_count"))->c_str())
			.fun<static_cast<void (ShapeCast2D::*)()>(&ShapeCast2D::force_shapecast_update)>((new std::string("force_shapecast_update"))->c_str())
			.fun<static_cast<Object *(ShapeCast2D::*)(int32_t) const>(&ShapeCast2D::get_collider)>((new std::string("get_collider"))->c_str())
			.fun<static_cast<RID (ShapeCast2D::*)(int32_t) const>(&ShapeCast2D::get_collider_rid)>((new std::string("get_collider_rid"))->c_str())
			.fun<static_cast<int32_t (ShapeCast2D::*)(int32_t) const>(&ShapeCast2D::get_collider_shape)>((new std::string("get_collider_shape"))->c_str())
			.fun<static_cast<Vector2 (ShapeCast2D::*)(int32_t) const>(&ShapeCast2D::get_collision_point)>((new std::string("get_collision_point"))->c_str())
			.fun<static_cast<Vector2 (ShapeCast2D::*)(int32_t) const>(&ShapeCast2D::get_collision_normal)>((new std::string("get_collision_normal"))->c_str())
			.fun<static_cast<double (ShapeCast2D::*)() const>(&ShapeCast2D::get_closest_collision_safe_fraction)>((new std::string("get_closest_collision_safe_fraction"))->c_str())
			.fun<static_cast<double (ShapeCast2D::*)() const>(&ShapeCast2D::get_closest_collision_unsafe_fraction)>((new std::string("get_closest_collision_unsafe_fraction"))->c_str())
			.fun<static_cast<void (ShapeCast2D::*)(const RID &)>(&ShapeCast2D::add_exception_rid)>((new std::string("add_exception_rid"))->c_str())
			.fun<static_cast<void (ShapeCast2D::*)(CollisionObject2D *)>(&ShapeCast2D::add_exception)>((new std::string("add_exception"))->c_str())
			.fun<static_cast<void (ShapeCast2D::*)(const RID &)>(&ShapeCast2D::remove_exception_rid)>((new std::string("remove_exception_rid"))->c_str())
			.fun<static_cast<void (ShapeCast2D::*)(CollisionObject2D *)>(&ShapeCast2D::remove_exception)>((new std::string("remove_exception"))->c_str())
			.fun<static_cast<void (ShapeCast2D::*)()>(&ShapeCast2D::clear_exceptions)>((new std::string("clear_exceptions"))->c_str())
			.fun<static_cast<void (ShapeCast2D::*)(int32_t, bool)>(&ShapeCast2D::set_collision_mask_value)>((new std::string("set_collision_mask_value"))->c_str())
			.fun<static_cast<bool (ShapeCast2D::*)(int32_t) const>(&ShapeCast2D::get_collision_mask_value)>((new std::string("get_collision_mask_value"))->c_str());
}