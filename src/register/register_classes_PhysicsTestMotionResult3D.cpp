
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/physics_test_motion_result3d.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsTestMotionResult3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsTestMotionResult3D>("PhysicsTestMotionResult3D")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<Vector3 (PhysicsTestMotionResult3D::*)() const>(&PhysicsTestMotionResult3D::get_travel)>((new std::string("get_travel"))->c_str())
			.fun<static_cast<Vector3 (PhysicsTestMotionResult3D::*)() const>(&PhysicsTestMotionResult3D::get_remainder)>((new std::string("get_remainder"))->c_str())
			.fun<static_cast<double (PhysicsTestMotionResult3D::*)() const>(&PhysicsTestMotionResult3D::get_collision_safe_fraction)>((new std::string("get_collision_safe_fraction"))->c_str())
			.fun<static_cast<double (PhysicsTestMotionResult3D::*)() const>(&PhysicsTestMotionResult3D::get_collision_unsafe_fraction)>((new std::string("get_collision_unsafe_fraction"))->c_str())
			.fun<static_cast<int32_t (PhysicsTestMotionResult3D::*)() const>(&PhysicsTestMotionResult3D::get_collision_count)>((new std::string("get_collision_count"))->c_str())
			.fun<static_cast<Vector3 (PhysicsTestMotionResult3D::*)(int32_t) const>(&PhysicsTestMotionResult3D::get_collision_point)>((new std::string("get_collision_point"))->c_str())
			.fun<static_cast<Vector3 (PhysicsTestMotionResult3D::*)(int32_t) const>(&PhysicsTestMotionResult3D::get_collision_normal)>((new std::string("get_collision_normal"))->c_str())
			.fun<static_cast<Vector3 (PhysicsTestMotionResult3D::*)(int32_t) const>(&PhysicsTestMotionResult3D::get_collider_velocity)>((new std::string("get_collider_velocity"))->c_str())
			.fun<static_cast<uint64_t (PhysicsTestMotionResult3D::*)(int32_t) const>(&PhysicsTestMotionResult3D::get_collider_id)>((new std::string("get_collider_id"))->c_str())
			.fun<static_cast<RID (PhysicsTestMotionResult3D::*)(int32_t) const>(&PhysicsTestMotionResult3D::get_collider_rid)>((new std::string("get_collider_rid"))->c_str())
			.fun<static_cast<Object *(PhysicsTestMotionResult3D::*)(int32_t) const>(&PhysicsTestMotionResult3D::get_collider)>((new std::string("get_collider"))->c_str())
			.fun<static_cast<int32_t (PhysicsTestMotionResult3D::*)(int32_t) const>(&PhysicsTestMotionResult3D::get_collider_shape)>((new std::string("get_collider_shape"))->c_str())
			.fun<static_cast<int32_t (PhysicsTestMotionResult3D::*)(int32_t) const>(&PhysicsTestMotionResult3D::get_collision_local_shape)>((new std::string("get_collision_local_shape"))->c_str())
			.fun<static_cast<double (PhysicsTestMotionResult3D::*)(int32_t) const>(&PhysicsTestMotionResult3D::get_collision_depth)>((new std::string("get_collision_depth"))->c_str());
}