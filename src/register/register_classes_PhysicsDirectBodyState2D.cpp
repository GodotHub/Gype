#include <godot_cpp/classes/physics_direct_body_state2d.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/physics_direct_space_state2d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PhysicsDirectBodyState2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PhysicsDirectBodyState2D>("PhysicsDirectBodyState2D")
            .constructor<>()
            .base<Object>()
            .property<static_cast<double(PhysicsDirectBodyState2D::*)()const>(&PhysicsDirectBodyState2D::get_step)>("step")
            .property<static_cast<double(PhysicsDirectBodyState2D::*)()const>(&PhysicsDirectBodyState2D::get_inverse_mass)>("inverse_mass")
            .property<static_cast<double(PhysicsDirectBodyState2D::*)()const>(&PhysicsDirectBodyState2D::get_inverse_inertia)>("inverse_inertia")
            .property<static_cast<double(PhysicsDirectBodyState2D::*)()const>(&PhysicsDirectBodyState2D::get_total_angular_damp)>("total_angular_damp")
            .property<static_cast<double(PhysicsDirectBodyState2D::*)()const>(&PhysicsDirectBodyState2D::get_total_linear_damp)>("total_linear_damp")
            .property<static_cast<Vector2(PhysicsDirectBodyState2D::*)()const>(&PhysicsDirectBodyState2D::get_total_gravity)>("total_gravity")
            .property<static_cast<Vector2(PhysicsDirectBodyState2D::*)()const>(&PhysicsDirectBodyState2D::get_center_of_mass)>("center_of_mass")
            .property<static_cast<Vector2(PhysicsDirectBodyState2D::*)()const>(&PhysicsDirectBodyState2D::get_center_of_mass_local)>("center_of_mass_local")
            .property<static_cast<double(PhysicsDirectBodyState2D::*)()const>(&PhysicsDirectBodyState2D::get_angular_velocity),static_cast<void(PhysicsDirectBodyState2D::*)(double)>(&PhysicsDirectBodyState2D::set_angular_velocity)>("angular_velocity")
            .property<static_cast<Vector2(PhysicsDirectBodyState2D::*)()const>(&PhysicsDirectBodyState2D::get_linear_velocity),static_cast<void(PhysicsDirectBodyState2D::*)(const Vector2 &)>(&PhysicsDirectBodyState2D::set_linear_velocity)>("linear_velocity")
            .property<static_cast<bool(PhysicsDirectBodyState2D::*)()const>(&PhysicsDirectBodyState2D::is_sleeping),static_cast<void(PhysicsDirectBodyState2D::*)(bool)>(&PhysicsDirectBodyState2D::set_sleep_state)>("sleeping")
            .property<static_cast<Transform2D(PhysicsDirectBodyState2D::*)()const>(&PhysicsDirectBodyState2D::get_transform),static_cast<void(PhysicsDirectBodyState2D::*)(const Transform2D &)>(&PhysicsDirectBodyState2D::set_transform)>("transform")
            .fun<static_cast<Vector2(PhysicsDirectBodyState2D::*)(const Vector2 &)const>(&PhysicsDirectBodyState2D::get_velocity_at_local_position)>("get_velocity_at_local_position")
            .fun<static_cast<void(PhysicsDirectBodyState2D::*)(const Vector2 &)>(&PhysicsDirectBodyState2D::apply_central_impulse)>("apply_central_impulse")
            .fun<static_cast<void(PhysicsDirectBodyState2D::*)(double)>(&PhysicsDirectBodyState2D::apply_torque_impulse)>("apply_torque_impulse")
            .fun<static_cast<void(PhysicsDirectBodyState2D::*)(const Vector2 &,const Vector2 &)>(&PhysicsDirectBodyState2D::apply_impulse)>("apply_impulse")
            .fun<static_cast<void(PhysicsDirectBodyState2D::*)(const Vector2 &)>(&PhysicsDirectBodyState2D::apply_central_force)>("apply_central_force")
            .fun<static_cast<void(PhysicsDirectBodyState2D::*)(const Vector2 &,const Vector2 &)>(&PhysicsDirectBodyState2D::apply_force)>("apply_force")
            .fun<static_cast<void(PhysicsDirectBodyState2D::*)(double)>(&PhysicsDirectBodyState2D::apply_torque)>("apply_torque")
            .fun<static_cast<void(PhysicsDirectBodyState2D::*)(const Vector2 &)>(&PhysicsDirectBodyState2D::add_constant_central_force)>("add_constant_central_force")
            .fun<static_cast<void(PhysicsDirectBodyState2D::*)(const Vector2 &,const Vector2 &)>(&PhysicsDirectBodyState2D::add_constant_force)>("add_constant_force")
            .fun<static_cast<void(PhysicsDirectBodyState2D::*)(double)>(&PhysicsDirectBodyState2D::add_constant_torque)>("add_constant_torque")
            .fun<static_cast<void(PhysicsDirectBodyState2D::*)(const Vector2 &)>(&PhysicsDirectBodyState2D::set_constant_force)>("set_constant_force")
            .fun<static_cast<Vector2(PhysicsDirectBodyState2D::*)()const>(&PhysicsDirectBodyState2D::get_constant_force)>("get_constant_force")
            .fun<static_cast<void(PhysicsDirectBodyState2D::*)(double)>(&PhysicsDirectBodyState2D::set_constant_torque)>("set_constant_torque")
            .fun<static_cast<double(PhysicsDirectBodyState2D::*)()const>(&PhysicsDirectBodyState2D::get_constant_torque)>("get_constant_torque")
            .fun<static_cast<int32_t(PhysicsDirectBodyState2D::*)()const>(&PhysicsDirectBodyState2D::get_contact_count)>("get_contact_count")
            .fun<static_cast<Vector2(PhysicsDirectBodyState2D::*)(int32_t)const>(&PhysicsDirectBodyState2D::get_contact_local_position)>("get_contact_local_position")
            .fun<static_cast<Vector2(PhysicsDirectBodyState2D::*)(int32_t)const>(&PhysicsDirectBodyState2D::get_contact_local_normal)>("get_contact_local_normal")
            .fun<static_cast<int32_t(PhysicsDirectBodyState2D::*)(int32_t)const>(&PhysicsDirectBodyState2D::get_contact_local_shape)>("get_contact_local_shape")
            .fun<static_cast<Vector2(PhysicsDirectBodyState2D::*)(int32_t)const>(&PhysicsDirectBodyState2D::get_contact_local_velocity_at_position)>("get_contact_local_velocity_at_position")
            .fun<static_cast<RID(PhysicsDirectBodyState2D::*)(int32_t)const>(&PhysicsDirectBodyState2D::get_contact_collider)>("get_contact_collider")
            .fun<static_cast<Vector2(PhysicsDirectBodyState2D::*)(int32_t)const>(&PhysicsDirectBodyState2D::get_contact_collider_position)>("get_contact_collider_position")
            .fun<static_cast<uint64_t(PhysicsDirectBodyState2D::*)(int32_t)const>(&PhysicsDirectBodyState2D::get_contact_collider_id)>("get_contact_collider_id")
            .fun<static_cast<Object *(PhysicsDirectBodyState2D::*)(int32_t)const>(&PhysicsDirectBodyState2D::get_contact_collider_object)>("get_contact_collider_object")
            .fun<static_cast<int32_t(PhysicsDirectBodyState2D::*)(int32_t)const>(&PhysicsDirectBodyState2D::get_contact_collider_shape)>("get_contact_collider_shape")
            .fun<static_cast<Vector2(PhysicsDirectBodyState2D::*)(int32_t)const>(&PhysicsDirectBodyState2D::get_contact_collider_velocity_at_position)>("get_contact_collider_velocity_at_position")
            .fun<static_cast<Vector2(PhysicsDirectBodyState2D::*)(int32_t)const>(&PhysicsDirectBodyState2D::get_contact_impulse)>("get_contact_impulse")
            .fun<static_cast<void(PhysicsDirectBodyState2D::*)()>(&PhysicsDirectBodyState2D::integrate_forces)>("integrate_forces")
            .fun<static_cast<PhysicsDirectSpaceState2D *(PhysicsDirectBodyState2D::*)()>(&PhysicsDirectBodyState2D::get_space_state)>("get_space_state")
;}