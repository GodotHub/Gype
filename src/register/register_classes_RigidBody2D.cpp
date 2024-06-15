#include <godot_cpp/classes/rigid_body2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/physics_body2d.hpp>
#include <godot_cpp/classes/physics_direct_body_state2d.hpp>
#include <godot_cpp/classes/physics_material.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RigidBody2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<RigidBody2D>("RigidBody2D")
            .constructor<>()
            .base<PhysicsBody2D>()
            .property<static_cast<double(RigidBody2D::*)()const>(&RigidBody2D::get_mass),static_cast<void(RigidBody2D::*)(double)>(&RigidBody2D::set_mass)>("mass")
            .property<static_cast<Ref<PhysicsMaterial>(RigidBody2D::*)()const>(&RigidBody2D::get_physics_material_override),static_cast<void(RigidBody2D::*)(const Ref<PhysicsMaterial> &)>(&RigidBody2D::set_physics_material_override)>("physics_material_override")
            .property<static_cast<double(RigidBody2D::*)()const>(&RigidBody2D::get_gravity_scale),static_cast<void(RigidBody2D::*)(double)>(&RigidBody2D::set_gravity_scale)>("gravity_scale")
            .property<static_cast<RigidBody2D::CenterOfMassMode(RigidBody2D::*)()const>(&RigidBody2D::get_center_of_mass_mode),static_cast<void(RigidBody2D::*)(RigidBody2D::CenterOfMassMode)>(&RigidBody2D::set_center_of_mass_mode)>("center_of_mass_mode")
            .property<static_cast<Vector2(RigidBody2D::*)()const>(&RigidBody2D::get_center_of_mass),static_cast<void(RigidBody2D::*)(const Vector2 &)>(&RigidBody2D::set_center_of_mass)>("center_of_mass")
            .property<static_cast<double(RigidBody2D::*)()const>(&RigidBody2D::get_inertia),static_cast<void(RigidBody2D::*)(double)>(&RigidBody2D::set_inertia)>("inertia")
            .property<static_cast<bool(RigidBody2D::*)()const>(&RigidBody2D::is_sleeping),static_cast<void(RigidBody2D::*)(bool)>(&RigidBody2D::set_sleeping)>("sleeping")
            .property<static_cast<bool(RigidBody2D::*)()const>(&RigidBody2D::is_able_to_sleep),static_cast<void(RigidBody2D::*)(bool)>(&RigidBody2D::set_can_sleep)>("can_sleep")
            .property<static_cast<bool(RigidBody2D::*)()const>(&RigidBody2D::is_lock_rotation_enabled),static_cast<void(RigidBody2D::*)(bool)>(&RigidBody2D::set_lock_rotation_enabled)>("lock_rotation")
            .property<static_cast<bool(RigidBody2D::*)()const>(&RigidBody2D::is_freeze_enabled),static_cast<void(RigidBody2D::*)(bool)>(&RigidBody2D::set_freeze_enabled)>("freeze")
            .property<static_cast<RigidBody2D::FreezeMode(RigidBody2D::*)()const>(&RigidBody2D::get_freeze_mode),static_cast<void(RigidBody2D::*)(RigidBody2D::FreezeMode)>(&RigidBody2D::set_freeze_mode)>("freeze_mode")
            .property<static_cast<bool(RigidBody2D::*)()>(&RigidBody2D::is_using_custom_integrator),static_cast<void(RigidBody2D::*)(bool)>(&RigidBody2D::set_use_custom_integrator)>("custom_integrator")
            .property<static_cast<RigidBody2D::CCDMode(RigidBody2D::*)()const>(&RigidBody2D::get_continuous_collision_detection_mode),static_cast<void(RigidBody2D::*)(RigidBody2D::CCDMode)>(&RigidBody2D::set_continuous_collision_detection_mode)>("continuous_cd")
            .property<static_cast<bool(RigidBody2D::*)()const>(&RigidBody2D::is_contact_monitor_enabled),static_cast<void(RigidBody2D::*)(bool)>(&RigidBody2D::set_contact_monitor)>("contact_monitor")
            .property<static_cast<int32_t(RigidBody2D::*)()const>(&RigidBody2D::get_max_contacts_reported),static_cast<void(RigidBody2D::*)(int32_t)>(&RigidBody2D::set_max_contacts_reported)>("max_contacts_reported")
            .property<static_cast<Vector2(RigidBody2D::*)()const>(&RigidBody2D::get_linear_velocity),static_cast<void(RigidBody2D::*)(const Vector2 &)>(&RigidBody2D::set_linear_velocity)>("linear_velocity")
            .property<static_cast<RigidBody2D::DampMode(RigidBody2D::*)()const>(&RigidBody2D::get_linear_damp_mode),static_cast<void(RigidBody2D::*)(RigidBody2D::DampMode)>(&RigidBody2D::set_linear_damp_mode)>("linear_damp_mode")
            .property<static_cast<double(RigidBody2D::*)()const>(&RigidBody2D::get_linear_damp),static_cast<void(RigidBody2D::*)(double)>(&RigidBody2D::set_linear_damp)>("linear_damp")
            .property<static_cast<double(RigidBody2D::*)()const>(&RigidBody2D::get_angular_velocity),static_cast<void(RigidBody2D::*)(double)>(&RigidBody2D::set_angular_velocity)>("angular_velocity")
            .property<static_cast<RigidBody2D::DampMode(RigidBody2D::*)()const>(&RigidBody2D::get_angular_damp_mode),static_cast<void(RigidBody2D::*)(RigidBody2D::DampMode)>(&RigidBody2D::set_angular_damp_mode)>("angular_damp_mode")
            .property<static_cast<double(RigidBody2D::*)()const>(&RigidBody2D::get_angular_damp),static_cast<void(RigidBody2D::*)(double)>(&RigidBody2D::set_angular_damp)>("angular_damp")
            .property<static_cast<Vector2(RigidBody2D::*)()const>(&RigidBody2D::get_constant_force),static_cast<void(RigidBody2D::*)(const Vector2 &)>(&RigidBody2D::set_constant_force)>("constant_force")
            .property<static_cast<double(RigidBody2D::*)()const>(&RigidBody2D::get_constant_torque),static_cast<void(RigidBody2D::*)(double)>(&RigidBody2D::set_constant_torque)>("constant_torque")
            .fun<static_cast<void(RigidBody2D::*)(PhysicsDirectBodyState2D *)>(&RigidBody2D::_integrate_forces)>("_integrate_forces")
            .fun<static_cast<int32_t(RigidBody2D::*)()const>(&RigidBody2D::get_contact_count)>("get_contact_count")
            .fun<static_cast<void(RigidBody2D::*)(const Vector2 &)>(&RigidBody2D::set_axis_velocity)>("set_axis_velocity")
            .fun<static_cast<void(RigidBody2D::*)(const Vector2 &)>(&RigidBody2D::apply_central_impulse)>("apply_central_impulse")
            .fun<static_cast<void(RigidBody2D::*)(const Vector2 &,const Vector2 &)>(&RigidBody2D::apply_impulse)>("apply_impulse")
            .fun<static_cast<void(RigidBody2D::*)(double)>(&RigidBody2D::apply_torque_impulse)>("apply_torque_impulse")
            .fun<static_cast<void(RigidBody2D::*)(const Vector2 &)>(&RigidBody2D::apply_central_force)>("apply_central_force")
            .fun<static_cast<void(RigidBody2D::*)(const Vector2 &,const Vector2 &)>(&RigidBody2D::apply_force)>("apply_force")
            .fun<static_cast<void(RigidBody2D::*)(double)>(&RigidBody2D::apply_torque)>("apply_torque")
            .fun<static_cast<void(RigidBody2D::*)(const Vector2 &)>(&RigidBody2D::add_constant_central_force)>("add_constant_central_force")
            .fun<static_cast<void(RigidBody2D::*)(const Vector2 &,const Vector2 &)>(&RigidBody2D::add_constant_force)>("add_constant_force")
            .fun<static_cast<void(RigidBody2D::*)(double)>(&RigidBody2D::add_constant_torque)>("add_constant_torque")
            .fun<static_cast<TypedArray<Node2D>(RigidBody2D::*)()const>(&RigidBody2D::get_colliding_bodies)>("get_colliding_bodies")
;    qjs::Value _FreezeMode = context->newObject();
    _FreezeMode["FREEZE_MODE_STATIC"] = RigidBody2D::FreezeMode::FREEZE_MODE_STATIC;
    _FreezeMode["FREEZE_MODE_KINEMATIC"] = RigidBody2D::FreezeMode::FREEZE_MODE_KINEMATIC;
    _module.add("FreezeMode", std::move(_FreezeMode));
    qjs::Value _CenterOfMassMode = context->newObject();
    _CenterOfMassMode["CENTER_OF_MASS_MODE_AUTO"] = RigidBody2D::CenterOfMassMode::CENTER_OF_MASS_MODE_AUTO;
    _CenterOfMassMode["CENTER_OF_MASS_MODE_CUSTOM"] = RigidBody2D::CenterOfMassMode::CENTER_OF_MASS_MODE_CUSTOM;
    _module.add("CenterOfMassMode", std::move(_CenterOfMassMode));
    qjs::Value _DampMode = context->newObject();
    _DampMode["DAMP_MODE_COMBINE"] = RigidBody2D::DampMode::DAMP_MODE_COMBINE;
    _DampMode["DAMP_MODE_REPLACE"] = RigidBody2D::DampMode::DAMP_MODE_REPLACE;
    _module.add("DampMode", std::move(_DampMode));
    qjs::Value _CCDMode = context->newObject();
    _CCDMode["CCD_MODE_DISABLED"] = RigidBody2D::CCDMode::CCD_MODE_DISABLED;
    _CCDMode["CCD_MODE_CAST_RAY"] = RigidBody2D::CCDMode::CCD_MODE_CAST_RAY;
    _CCDMode["CCD_MODE_CAST_SHAPE"] = RigidBody2D::CCDMode::CCD_MODE_CAST_SHAPE;
    _module.add("CCDMode", std::move(_CCDMode));
}