
#include <godot_cpp/classes/physics_test_motion_parameters3d.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsTestMotionParameters3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsTestMotionParameters3D>("PhysicsTestMotionParameters3D")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<Transform3D (PhysicsTestMotionParameters3D::*)() const>(&PhysicsTestMotionParameters3D::get_from), static_cast<void (PhysicsTestMotionParameters3D::*)(const Transform3D &)>(&PhysicsTestMotionParameters3D::set_from)>((new std::string("from"))->c_str())
			.property<static_cast<Vector3 (PhysicsTestMotionParameters3D::*)() const>(&PhysicsTestMotionParameters3D::get_motion), static_cast<void (PhysicsTestMotionParameters3D::*)(const Vector3 &)>(&PhysicsTestMotionParameters3D::set_motion)>((new std::string("motion"))->c_str())
			.property<static_cast<double (PhysicsTestMotionParameters3D::*)() const>(&PhysicsTestMotionParameters3D::get_margin), static_cast<void (PhysicsTestMotionParameters3D::*)(double)>(&PhysicsTestMotionParameters3D::set_margin)>((new std::string("margin"))->c_str())
			.property<static_cast<int32_t (PhysicsTestMotionParameters3D::*)() const>(&PhysicsTestMotionParameters3D::get_max_collisions), static_cast<void (PhysicsTestMotionParameters3D::*)(int32_t)>(&PhysicsTestMotionParameters3D::set_max_collisions)>((new std::string("max_collisions"))->c_str())
			.property<static_cast<bool (PhysicsTestMotionParameters3D::*)() const>(&PhysicsTestMotionParameters3D::is_collide_separation_ray_enabled), static_cast<void (PhysicsTestMotionParameters3D::*)(bool)>(&PhysicsTestMotionParameters3D::set_collide_separation_ray_enabled)>((new std::string("collide_separation_ray"))->c_str())
			.property<static_cast<TypedArray<RID> (PhysicsTestMotionParameters3D::*)() const>(&PhysicsTestMotionParameters3D::get_exclude_bodies), static_cast<void (PhysicsTestMotionParameters3D::*)(const TypedArray<RID> &)>(&PhysicsTestMotionParameters3D::set_exclude_bodies)>((new std::string("exclude_bodies"))->c_str())
			.property<static_cast<TypedArray<int> (PhysicsTestMotionParameters3D::*)() const>(&PhysicsTestMotionParameters3D::get_exclude_objects), static_cast<void (PhysicsTestMotionParameters3D::*)(const TypedArray<int> &)>(&PhysicsTestMotionParameters3D::set_exclude_objects)>((new std::string("exclude_objects"))->c_str())
			.property<static_cast<bool (PhysicsTestMotionParameters3D::*)() const>(&PhysicsTestMotionParameters3D::is_recovery_as_collision_enabled), static_cast<void (PhysicsTestMotionParameters3D::*)(bool)>(&PhysicsTestMotionParameters3D::set_recovery_as_collision_enabled)>((new std::string("recovery_as_collision"))->c_str());
}