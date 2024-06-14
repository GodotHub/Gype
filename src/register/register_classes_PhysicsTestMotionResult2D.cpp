
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/physics_test_motion_result2d.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsTestMotionResult2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsTestMotionResult2D>("PhysicsTestMotionResult2D")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<Vector2 (PhysicsTestMotionResult2D::*)() const>(&PhysicsTestMotionResult2D::get_travel)>((new std::string("get_travel"))->c_str())
			.fun<static_cast<Vector2 (PhysicsTestMotionResult2D::*)() const>(&PhysicsTestMotionResult2D::get_remainder)>((new std::string("get_remainder"))->c_str())
			.fun<static_cast<Vector2 (PhysicsTestMotionResult2D::*)() const>(&PhysicsTestMotionResult2D::get_collision_point)>((new std::string("get_collision_point"))->c_str())
			.fun<static_cast<Vector2 (PhysicsTestMotionResult2D::*)() const>(&PhysicsTestMotionResult2D::get_collision_normal)>((new std::string("get_collision_normal"))->c_str())
			.fun<static_cast<Vector2 (PhysicsTestMotionResult2D::*)() const>(&PhysicsTestMotionResult2D::get_collider_velocity)>((new std::string("get_collider_velocity"))->c_str())
			.fun<static_cast<uint64_t (PhysicsTestMotionResult2D::*)() const>(&PhysicsTestMotionResult2D::get_collider_id)>((new std::string("get_collider_id"))->c_str())
			.fun<static_cast<RID (PhysicsTestMotionResult2D::*)() const>(&PhysicsTestMotionResult2D::get_collider_rid)>((new std::string("get_collider_rid"))->c_str())
			.fun<static_cast<Object *(PhysicsTestMotionResult2D::*)() const>(&PhysicsTestMotionResult2D::get_collider)>((new std::string("get_collider"))->c_str())
			.fun<static_cast<int32_t (PhysicsTestMotionResult2D::*)() const>(&PhysicsTestMotionResult2D::get_collider_shape)>((new std::string("get_collider_shape"))->c_str())
			.fun<static_cast<int32_t (PhysicsTestMotionResult2D::*)() const>(&PhysicsTestMotionResult2D::get_collision_local_shape)>((new std::string("get_collision_local_shape"))->c_str())
			.fun<static_cast<double (PhysicsTestMotionResult2D::*)() const>(&PhysicsTestMotionResult2D::get_collision_depth)>((new std::string("get_collision_depth"))->c_str())
			.fun<static_cast<double (PhysicsTestMotionResult2D::*)() const>(&PhysicsTestMotionResult2D::get_collision_safe_fraction)>((new std::string("get_collision_safe_fraction"))->c_str())
			.fun<static_cast<double (PhysicsTestMotionResult2D::*)() const>(&PhysicsTestMotionResult2D::get_collision_unsafe_fraction)>((new std::string("get_collision_unsafe_fraction"))->c_str());
}