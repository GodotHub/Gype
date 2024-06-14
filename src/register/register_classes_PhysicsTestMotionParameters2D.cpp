#include <godot_cpp/classes/physics_test_motion_parameters2d.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsTestMotionParameters2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsTestMotionParameters2D>("PhysicsTestMotionParameters2D")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<Transform2D (PhysicsTestMotionParameters2D::*)() const>(&PhysicsTestMotionParameters2D::get_from), static_cast<void (PhysicsTestMotionParameters2D::*)(const Transform2D &)>(&PhysicsTestMotionParameters2D::set_from)>((new std::string("from"))->c_str())
			.property<static_cast<Vector2 (PhysicsTestMotionParameters2D::*)() const>(&PhysicsTestMotionParameters2D::get_motion), static_cast<void (PhysicsTestMotionParameters2D::*)(const Vector2 &)>(&PhysicsTestMotionParameters2D::set_motion)>((new std::string("motion"))->c_str())
			.property<static_cast<double (PhysicsTestMotionParameters2D::*)() const>(&PhysicsTestMotionParameters2D::get_margin), static_cast<void (PhysicsTestMotionParameters2D::*)(double)>(&PhysicsTestMotionParameters2D::set_margin)>((new std::string("margin"))->c_str())
			.property<static_cast<bool (PhysicsTestMotionParameters2D::*)() const>(&PhysicsTestMotionParameters2D::is_collide_separation_ray_enabled), static_cast<void (PhysicsTestMotionParameters2D::*)(bool)>(&PhysicsTestMotionParameters2D::set_collide_separation_ray_enabled)>((new std::string("collide_separation_ray"))->c_str())
			.property<static_cast<TypedArray<RID> (PhysicsTestMotionParameters2D::*)() const>(&PhysicsTestMotionParameters2D::get_exclude_bodies), static_cast<void (PhysicsTestMotionParameters2D::*)(const TypedArray<RID> &)>(&PhysicsTestMotionParameters2D::set_exclude_bodies)>((new std::string("exclude_bodies"))->c_str())
			.property<static_cast<TypedArray<int> (PhysicsTestMotionParameters2D::*)() const>(&PhysicsTestMotionParameters2D::get_exclude_objects), static_cast<void (PhysicsTestMotionParameters2D::*)(const TypedArray<int> &)>(&PhysicsTestMotionParameters2D::set_exclude_objects)>((new std::string("exclude_objects"))->c_str())
			.property<static_cast<bool (PhysicsTestMotionParameters2D::*)() const>(&PhysicsTestMotionParameters2D::is_recovery_as_collision_enabled), static_cast<void (PhysicsTestMotionParameters2D::*)(bool)>(&PhysicsTestMotionParameters2D::set_recovery_as_collision_enabled)>((new std::string("recovery_as_collision"))->c_str());
}