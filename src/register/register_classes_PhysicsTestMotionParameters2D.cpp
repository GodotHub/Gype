#include <godot_cpp/classes/physics_test_motion_parameters2d.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/rid.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PhysicsTestMotionParameters2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PhysicsTestMotionParameters2D>("PhysicsTestMotionParameters2D")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<Transform2D(PhysicsTestMotionParameters2D::*)()const>(&PhysicsTestMotionParameters2D::get_from),static_cast<void(PhysicsTestMotionParameters2D::*)(const Transform2D &)>(&PhysicsTestMotionParameters2D::set_from)>("from")
            .property<static_cast<Vector2(PhysicsTestMotionParameters2D::*)()const>(&PhysicsTestMotionParameters2D::get_motion),static_cast<void(PhysicsTestMotionParameters2D::*)(const Vector2 &)>(&PhysicsTestMotionParameters2D::set_motion)>("motion")
            .property<static_cast<double(PhysicsTestMotionParameters2D::*)()const>(&PhysicsTestMotionParameters2D::get_margin),static_cast<void(PhysicsTestMotionParameters2D::*)(double)>(&PhysicsTestMotionParameters2D::set_margin)>("margin")
            .property<static_cast<bool(PhysicsTestMotionParameters2D::*)()const>(&PhysicsTestMotionParameters2D::is_collide_separation_ray_enabled),static_cast<void(PhysicsTestMotionParameters2D::*)(bool)>(&PhysicsTestMotionParameters2D::set_collide_separation_ray_enabled)>("collide_separation_ray")
            .property<static_cast<TypedArray<RID>(PhysicsTestMotionParameters2D::*)()const>(&PhysicsTestMotionParameters2D::get_exclude_bodies),static_cast<void(PhysicsTestMotionParameters2D::*)(const TypedArray<RID> &)>(&PhysicsTestMotionParameters2D::set_exclude_bodies)>("exclude_bodies")
            .property<static_cast<TypedArray<int>(PhysicsTestMotionParameters2D::*)()const>(&PhysicsTestMotionParameters2D::get_exclude_objects),static_cast<void(PhysicsTestMotionParameters2D::*)(const TypedArray<int> &)>(&PhysicsTestMotionParameters2D::set_exclude_objects)>("exclude_objects")
            .property<static_cast<bool(PhysicsTestMotionParameters2D::*)()const>(&PhysicsTestMotionParameters2D::is_recovery_as_collision_enabled),static_cast<void(PhysicsTestMotionParameters2D::*)(bool)>(&PhysicsTestMotionParameters2D::set_recovery_as_collision_enabled)>("recovery_as_collision")
;}