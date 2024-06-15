#include <godot_cpp/classes/physics_body3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/collision_object3d.hpp>
#include <godot_cpp/classes/kinematic_collision3d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/physics_server3d.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PhysicsBody3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<PhysicsBody3D>("PhysicsBody3D")
            .constructor<>()
            .base<CollisionObject3D>()
            .property<static_cast<bool(PhysicsBody3D::*)(PhysicsServer3D::BodyAxis)const>(&PhysicsBody3D::get_axis_lock),static_cast<void(PhysicsBody3D::*)(PhysicsServer3D::BodyAxis,bool)>(&PhysicsBody3D::set_axis_lock)>("axis_lock_linear_x")
            .property<static_cast<bool(PhysicsBody3D::*)(PhysicsServer3D::BodyAxis)const>(&PhysicsBody3D::get_axis_lock),static_cast<void(PhysicsBody3D::*)(PhysicsServer3D::BodyAxis,bool)>(&PhysicsBody3D::set_axis_lock)>("axis_lock_linear_y")
            .property<static_cast<bool(PhysicsBody3D::*)(PhysicsServer3D::BodyAxis)const>(&PhysicsBody3D::get_axis_lock),static_cast<void(PhysicsBody3D::*)(PhysicsServer3D::BodyAxis,bool)>(&PhysicsBody3D::set_axis_lock)>("axis_lock_linear_z")
            .property<static_cast<bool(PhysicsBody3D::*)(PhysicsServer3D::BodyAxis)const>(&PhysicsBody3D::get_axis_lock),static_cast<void(PhysicsBody3D::*)(PhysicsServer3D::BodyAxis,bool)>(&PhysicsBody3D::set_axis_lock)>("axis_lock_angular_x")
            .property<static_cast<bool(PhysicsBody3D::*)(PhysicsServer3D::BodyAxis)const>(&PhysicsBody3D::get_axis_lock),static_cast<void(PhysicsBody3D::*)(PhysicsServer3D::BodyAxis,bool)>(&PhysicsBody3D::set_axis_lock)>("axis_lock_angular_y")
            .property<static_cast<bool(PhysicsBody3D::*)(PhysicsServer3D::BodyAxis)const>(&PhysicsBody3D::get_axis_lock),static_cast<void(PhysicsBody3D::*)(PhysicsServer3D::BodyAxis,bool)>(&PhysicsBody3D::set_axis_lock)>("axis_lock_angular_z")
            .fun<static_cast<Ref<KinematicCollision3D>(PhysicsBody3D::*)(const Vector3 &,bool,double,bool,int32_t)>(&PhysicsBody3D::move_and_collide)>("move_and_collide")
            .fun<static_cast<bool(PhysicsBody3D::*)(const Transform3D &,const Vector3 &,const Ref<KinematicCollision3D> &,double,bool,int32_t)>(&PhysicsBody3D::test_move)>("test_move")
            .fun<static_cast<Vector3(PhysicsBody3D::*)()const>(&PhysicsBody3D::get_gravity)>("get_gravity")
            .fun<static_cast<TypedArray<PhysicsBody3D>(PhysicsBody3D::*)()>(&PhysicsBody3D::get_collision_exceptions)>("get_collision_exceptions")
            .fun<static_cast<void(PhysicsBody3D::*)(Node *)>(&PhysicsBody3D::add_collision_exception_with)>("add_collision_exception_with")
            .fun<static_cast<void(PhysicsBody3D::*)(Node *)>(&PhysicsBody3D::remove_collision_exception_with)>("remove_collision_exception_with")
;}