#include <godot_cpp/classes/physics_test_motion_parameters3d.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PhysicsTestMotionParameters3D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PhysicsTestMotionParameters3D>("PhysicsTestMotionParameters3D")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<Transform3D(PhysicsTestMotionParameters3D::*)()const>(&PhysicsTestMotionParameters3D::get_from),static_cast<void(PhysicsTestMotionParameters3D::*)(const Transform3D &)>(&PhysicsTestMotionParameters3D::set_from)>("from")
            .property<static_cast<Vector3(PhysicsTestMotionParameters3D::*)()const>(&PhysicsTestMotionParameters3D::get_motion),static_cast<void(PhysicsTestMotionParameters3D::*)(const Vector3 &)>(&PhysicsTestMotionParameters3D::set_motion)>("motion")
            .property<static_cast<double(PhysicsTestMotionParameters3D::*)()const>(&PhysicsTestMotionParameters3D::get_margin),static_cast<void(PhysicsTestMotionParameters3D::*)(double)>(&PhysicsTestMotionParameters3D::set_margin)>("margin")
            .property<static_cast<int32_t(PhysicsTestMotionParameters3D::*)()const>(&PhysicsTestMotionParameters3D::get_max_collisions),static_cast<void(PhysicsTestMotionParameters3D::*)(int32_t)>(&PhysicsTestMotionParameters3D::set_max_collisions)>("max_collisions")
            .property<static_cast<bool(PhysicsTestMotionParameters3D::*)()const>(&PhysicsTestMotionParameters3D::is_collide_separation_ray_enabled),static_cast<void(PhysicsTestMotionParameters3D::*)(bool)>(&PhysicsTestMotionParameters3D::set_collide_separation_ray_enabled)>("collide_separation_ray")
            .property<static_cast<TypedArray<RID>(PhysicsTestMotionParameters3D::*)()const>(&PhysicsTestMotionParameters3D::get_exclude_bodies),static_cast<void(PhysicsTestMotionParameters3D::*)(const TypedArray<RID> &)>(&PhysicsTestMotionParameters3D::set_exclude_bodies)>("exclude_bodies")
            .property<static_cast<TypedArray<int>(PhysicsTestMotionParameters3D::*)()const>(&PhysicsTestMotionParameters3D::get_exclude_objects),static_cast<void(PhysicsTestMotionParameters3D::*)(const TypedArray<int> &)>(&PhysicsTestMotionParameters3D::set_exclude_objects)>("exclude_objects")
            .property<static_cast<bool(PhysicsTestMotionParameters3D::*)()const>(&PhysicsTestMotionParameters3D::is_recovery_as_collision_enabled),static_cast<void(PhysicsTestMotionParameters3D::*)(bool)>(&PhysicsTestMotionParameters3D::set_recovery_as_collision_enabled)>("recovery_as_collision")
;}