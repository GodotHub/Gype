#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/physics_test_motion_result2d.hpp>

using namespace godot;

void register_classes_PhysicsTestMotionResult2D() {
    qjs::Context::Module &_module = _General;
    _module.class_<PhysicsTestMotionResult2D>("PhysicsTestMotionResult2D")
           .constructor<>()
		    .fun<static_cast<Vector2(PhysicsTestMotionResult2D::*)()const>(&PhysicsTestMotionResult2D::get_travel)>("get_travel")
		    .fun<static_cast<Vector2(PhysicsTestMotionResult2D::*)()const>(&PhysicsTestMotionResult2D::get_remainder)>("get_remainder")
		    .fun<static_cast<Vector2(PhysicsTestMotionResult2D::*)()const>(&PhysicsTestMotionResult2D::get_collision_point)>("get_collision_point")
		    .fun<static_cast<Vector2(PhysicsTestMotionResult2D::*)()const>(&PhysicsTestMotionResult2D::get_collision_normal)>("get_collision_normal")
		    .fun<static_cast<Vector2(PhysicsTestMotionResult2D::*)()const>(&PhysicsTestMotionResult2D::get_collider_velocity)>("get_collider_velocity")
		    .fun<static_cast<uint64_t(PhysicsTestMotionResult2D::*)()const>(&PhysicsTestMotionResult2D::get_collider_id)>("get_collider_id")
		    .fun<static_cast<RID(PhysicsTestMotionResult2D::*)()const>(&PhysicsTestMotionResult2D::get_collider_rid)>("get_collider_rid")
		    .fun<static_cast<Object *(PhysicsTestMotionResult2D::*)()const>(&PhysicsTestMotionResult2D::get_collider)>("get_collider")
		    .fun<static_cast<int32_t(PhysicsTestMotionResult2D::*)()const>(&PhysicsTestMotionResult2D::get_collider_shape)>("get_collider_shape")
		    .fun<static_cast<int32_t(PhysicsTestMotionResult2D::*)()const>(&PhysicsTestMotionResult2D::get_collision_local_shape)>("get_collision_local_shape")
		    .fun<static_cast<double(PhysicsTestMotionResult2D::*)()const>(&PhysicsTestMotionResult2D::get_collision_depth)>("get_collision_depth")
		    .fun<static_cast<double(PhysicsTestMotionResult2D::*)()const>(&PhysicsTestMotionResult2D::get_collision_safe_fraction)>("get_collision_safe_fraction")
		    .fun<static_cast<double(PhysicsTestMotionResult2D::*)()const>(&PhysicsTestMotionResult2D::get_collision_unsafe_fraction)>("get_collision_unsafe_fraction")
;}