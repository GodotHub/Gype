#include <godot_cpp/classes/collision_object2d.hpp>
#include <godot_cpp/classes/kinematic_collision2d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/physics_body2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsBody2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<PhysicsBody2D>("PhysicsBody2D")
			.constructor<>()
			.base<CollisionObject2D>()
			.fun<static_cast<Ref<KinematicCollision2D> (PhysicsBody2D::*)(const Vector2 &, bool, double, bool)>(&PhysicsBody2D::move_and_collide)>((new std::string("move_and_collide"))->c_str())
			.fun<static_cast<bool (PhysicsBody2D::*)(const Transform2D &, const Vector2 &, const Ref<KinematicCollision2D> &, double, bool)>(&PhysicsBody2D::test_move)>((new std::string("test_move"))->c_str())
			.fun<static_cast<Vector2 (PhysicsBody2D::*)() const>(&PhysicsBody2D::get_gravity)>((new std::string("get_gravity"))->c_str())
			.fun<static_cast<TypedArray<PhysicsBody2D> (PhysicsBody2D::*)()>(&PhysicsBody2D::get_collision_exceptions)>((new std::string("get_collision_exceptions"))->c_str())
			.fun<static_cast<void (PhysicsBody2D::*)(Node *)>(&PhysicsBody2D::add_collision_exception_with)>((new std::string("add_collision_exception_with"))->c_str())
			.fun<static_cast<void (PhysicsBody2D::*)(Node *)>(&PhysicsBody2D::remove_collision_exception_with)>((new std::string("remove_collision_exception_with"))->c_str());
}