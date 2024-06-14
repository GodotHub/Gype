
#include <godot_cpp/classes/collision_object3d.hpp>
#include <godot_cpp/classes/kinematic_collision3d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/physics_body3d.hpp>
#include <godot_cpp/classes/physics_server3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsBody3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<PhysicsBody3D>("PhysicsBody3D")
			.constructor<>()
			.base<CollisionObject3D>()
			.property<static_cast<bool (PhysicsBody3D::*)(PhysicsServer3D::BodyAxis) const>(&PhysicsBody3D::get_axis_lock), static_cast<void (PhysicsBody3D::*)(PhysicsServer3D::BodyAxis, bool)>(&PhysicsBody3D::set_axis_lock)>((new std::string("axis_lock_linear_x"))->c_str())
			.property<static_cast<bool (PhysicsBody3D::*)(PhysicsServer3D::BodyAxis) const>(&PhysicsBody3D::get_axis_lock), static_cast<void (PhysicsBody3D::*)(PhysicsServer3D::BodyAxis, bool)>(&PhysicsBody3D::set_axis_lock)>((new std::string("axis_lock_linear_y"))->c_str())
			.property<static_cast<bool (PhysicsBody3D::*)(PhysicsServer3D::BodyAxis) const>(&PhysicsBody3D::get_axis_lock), static_cast<void (PhysicsBody3D::*)(PhysicsServer3D::BodyAxis, bool)>(&PhysicsBody3D::set_axis_lock)>((new std::string("axis_lock_linear_z"))->c_str())
			.property<static_cast<bool (PhysicsBody3D::*)(PhysicsServer3D::BodyAxis) const>(&PhysicsBody3D::get_axis_lock), static_cast<void (PhysicsBody3D::*)(PhysicsServer3D::BodyAxis, bool)>(&PhysicsBody3D::set_axis_lock)>((new std::string("axis_lock_angular_x"))->c_str())
			.property<static_cast<bool (PhysicsBody3D::*)(PhysicsServer3D::BodyAxis) const>(&PhysicsBody3D::get_axis_lock), static_cast<void (PhysicsBody3D::*)(PhysicsServer3D::BodyAxis, bool)>(&PhysicsBody3D::set_axis_lock)>((new std::string("axis_lock_angular_y"))->c_str())
			.property<static_cast<bool (PhysicsBody3D::*)(PhysicsServer3D::BodyAxis) const>(&PhysicsBody3D::get_axis_lock), static_cast<void (PhysicsBody3D::*)(PhysicsServer3D::BodyAxis, bool)>(&PhysicsBody3D::set_axis_lock)>((new std::string("axis_lock_angular_z"))->c_str())
			.fun<static_cast<Ref<KinematicCollision3D> (PhysicsBody3D::*)(const Vector3 &, bool, double, bool, int32_t)>(&PhysicsBody3D::move_and_collide)>((new std::string("move_and_collide"))->c_str())
			.fun<static_cast<bool (PhysicsBody3D::*)(const Transform3D &, const Vector3 &, const Ref<KinematicCollision3D> &, double, bool, int32_t)>(&PhysicsBody3D::test_move)>((new std::string("test_move"))->c_str())
			.fun<static_cast<Vector3 (PhysicsBody3D::*)() const>(&PhysicsBody3D::get_gravity)>((new std::string("get_gravity"))->c_str())
			.fun<static_cast<TypedArray<PhysicsBody3D> (PhysicsBody3D::*)()>(&PhysicsBody3D::get_collision_exceptions)>((new std::string("get_collision_exceptions"))->c_str())
			.fun<static_cast<void (PhysicsBody3D::*)(Node *)>(&PhysicsBody3D::add_collision_exception_with)>((new std::string("add_collision_exception_with"))->c_str())
			.fun<static_cast<void (PhysicsBody3D::*)(Node *)>(&PhysicsBody3D::remove_collision_exception_with)>((new std::string("remove_collision_exception_with"))->c_str());
}