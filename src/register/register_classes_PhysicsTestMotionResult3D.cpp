#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/physics_test_motion_result3d.hpp>

using namespace godot;

void register_classes_PhysicsTestMotionResult3D() {
    qjs::Context::Module &_module = _General;
    _module.class_<PhysicsTestMotionResult3D>("PhysicsTestMotionResult3D")
           .constructor<>()
		    .fun<static_cast<Vector3(PhysicsTestMotionResult3D::*)()const>(&PhysicsTestMotionResult3D::get_travel)>("get_travel")
		    .fun<static_cast<Vector3(PhysicsTestMotionResult3D::*)()const>(&PhysicsTestMotionResult3D::get_remainder)>("get_remainder")
		    .fun<static_cast<double(PhysicsTestMotionResult3D::*)()const>(&PhysicsTestMotionResult3D::get_collision_safe_fraction)>("get_collision_safe_fraction")
		    .fun<static_cast<double(PhysicsTestMotionResult3D::*)()const>(&PhysicsTestMotionResult3D::get_collision_unsafe_fraction)>("get_collision_unsafe_fraction")
		    .fun<static_cast<int32_t(PhysicsTestMotionResult3D::*)()const>(&PhysicsTestMotionResult3D::get_collision_count)>("get_collision_count")
		    .fun<static_cast<Vector3(PhysicsTestMotionResult3D::*)(int32_t)const>(&PhysicsTestMotionResult3D::get_collision_point)>("get_collision_point")
		    .fun<static_cast<Vector3(PhysicsTestMotionResult3D::*)(int32_t)const>(&PhysicsTestMotionResult3D::get_collision_normal)>("get_collision_normal")
		    .fun<static_cast<Vector3(PhysicsTestMotionResult3D::*)(int32_t)const>(&PhysicsTestMotionResult3D::get_collider_velocity)>("get_collider_velocity")
		    .fun<static_cast<uint64_t(PhysicsTestMotionResult3D::*)(int32_t)const>(&PhysicsTestMotionResult3D::get_collider_id)>("get_collider_id")
		    .fun<static_cast<RID(PhysicsTestMotionResult3D::*)(int32_t)const>(&PhysicsTestMotionResult3D::get_collider_rid)>("get_collider_rid")
		    .fun<static_cast<Object *(PhysicsTestMotionResult3D::*)(int32_t)const>(&PhysicsTestMotionResult3D::get_collider)>("get_collider")
		    .fun<static_cast<int32_t(PhysicsTestMotionResult3D::*)(int32_t)const>(&PhysicsTestMotionResult3D::get_collider_shape)>("get_collider_shape")
		    .fun<static_cast<int32_t(PhysicsTestMotionResult3D::*)(int32_t)const>(&PhysicsTestMotionResult3D::get_collision_local_shape)>("get_collision_local_shape")
		    .fun<static_cast<double(PhysicsTestMotionResult3D::*)(int32_t)const>(&PhysicsTestMotionResult3D::get_collision_depth)>("get_collision_depth")
;}