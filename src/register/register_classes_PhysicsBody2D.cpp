#include <godot_cpp/classes/physics_body2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/collision_object2d.hpp>
#include <godot_cpp/classes/kinematic_collision2d.hpp>
#include <godot_cpp/classes/node.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PhysicsBody2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<PhysicsBody2D>("PhysicsBody2D")
            .constructor<>()
            .base<CollisionObject2D>()
            .fun<static_cast<Ref<KinematicCollision2D>(PhysicsBody2D::*)(const Vector2 &,bool,double,bool)>(&PhysicsBody2D::move_and_collide)>("move_and_collide")
            .fun<static_cast<bool(PhysicsBody2D::*)(const Transform2D &,const Vector2 &,const Ref<KinematicCollision2D> &,double,bool)>(&PhysicsBody2D::test_move)>("test_move")
            .fun<static_cast<Vector2(PhysicsBody2D::*)()const>(&PhysicsBody2D::get_gravity)>("get_gravity")
            .fun<static_cast<TypedArray<PhysicsBody2D>(PhysicsBody2D::*)()>(&PhysicsBody2D::get_collision_exceptions)>("get_collision_exceptions")
            .fun<static_cast<void(PhysicsBody2D::*)(Node *)>(&PhysicsBody2D::add_collision_exception_with)>("add_collision_exception_with")
            .fun<static_cast<void(PhysicsBody2D::*)(Node *)>(&PhysicsBody2D::remove_collision_exception_with)>("remove_collision_exception_with")
;}