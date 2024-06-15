#include <godot_cpp/classes/physical_bone3d.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/physics_body3d.hpp>
#include <godot_cpp/classes/physics_direct_body_state3d.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PhysicalBone3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<PhysicalBone3D>("PhysicalBone3D")
            .constructor<>()
            .base<PhysicsBody3D>()
            .property<static_cast<PhysicalBone3D::JointType(PhysicalBone3D::*)()const>(&PhysicalBone3D::get_joint_type),static_cast<void(PhysicalBone3D::*)(PhysicalBone3D::JointType)>(&PhysicalBone3D::set_joint_type)>("joint_type")
            .property<static_cast<Transform3D(PhysicalBone3D::*)()const>(&PhysicalBone3D::get_joint_offset),static_cast<void(PhysicalBone3D::*)(const Transform3D &)>(&PhysicalBone3D::set_joint_offset)>("joint_offset")
            .property<static_cast<Vector3(PhysicalBone3D::*)()const>(&PhysicalBone3D::get_joint_rotation),static_cast<void(PhysicalBone3D::*)(const Vector3 &)>(&PhysicalBone3D::set_joint_rotation)>("joint_rotation")
            .property<static_cast<Transform3D(PhysicalBone3D::*)()const>(&PhysicalBone3D::get_body_offset),static_cast<void(PhysicalBone3D::*)(const Transform3D &)>(&PhysicalBone3D::set_body_offset)>("body_offset")
            .property<static_cast<double(PhysicalBone3D::*)()const>(&PhysicalBone3D::get_mass),static_cast<void(PhysicalBone3D::*)(double)>(&PhysicalBone3D::set_mass)>("mass")
            .property<static_cast<double(PhysicalBone3D::*)()const>(&PhysicalBone3D::get_friction),static_cast<void(PhysicalBone3D::*)(double)>(&PhysicalBone3D::set_friction)>("friction")
            .property<static_cast<double(PhysicalBone3D::*)()const>(&PhysicalBone3D::get_bounce),static_cast<void(PhysicalBone3D::*)(double)>(&PhysicalBone3D::set_bounce)>("bounce")
            .property<static_cast<double(PhysicalBone3D::*)()const>(&PhysicalBone3D::get_gravity_scale),static_cast<void(PhysicalBone3D::*)(double)>(&PhysicalBone3D::set_gravity_scale)>("gravity_scale")
            .property<static_cast<bool(PhysicalBone3D::*)()>(&PhysicalBone3D::is_using_custom_integrator),static_cast<void(PhysicalBone3D::*)(bool)>(&PhysicalBone3D::set_use_custom_integrator)>("custom_integrator")
            .property<static_cast<PhysicalBone3D::DampMode(PhysicalBone3D::*)()const>(&PhysicalBone3D::get_linear_damp_mode),static_cast<void(PhysicalBone3D::*)(PhysicalBone3D::DampMode)>(&PhysicalBone3D::set_linear_damp_mode)>("linear_damp_mode")
            .property<static_cast<double(PhysicalBone3D::*)()const>(&PhysicalBone3D::get_linear_damp),static_cast<void(PhysicalBone3D::*)(double)>(&PhysicalBone3D::set_linear_damp)>("linear_damp")
            .property<static_cast<PhysicalBone3D::DampMode(PhysicalBone3D::*)()const>(&PhysicalBone3D::get_angular_damp_mode),static_cast<void(PhysicalBone3D::*)(PhysicalBone3D::DampMode)>(&PhysicalBone3D::set_angular_damp_mode)>("angular_damp_mode")
            .property<static_cast<double(PhysicalBone3D::*)()const>(&PhysicalBone3D::get_angular_damp),static_cast<void(PhysicalBone3D::*)(double)>(&PhysicalBone3D::set_angular_damp)>("angular_damp")
            .property<static_cast<Vector3(PhysicalBone3D::*)()const>(&PhysicalBone3D::get_linear_velocity),static_cast<void(PhysicalBone3D::*)(const Vector3 &)>(&PhysicalBone3D::set_linear_velocity)>("linear_velocity")
            .property<static_cast<Vector3(PhysicalBone3D::*)()const>(&PhysicalBone3D::get_angular_velocity),static_cast<void(PhysicalBone3D::*)(const Vector3 &)>(&PhysicalBone3D::set_angular_velocity)>("angular_velocity")
            .property<static_cast<bool(PhysicalBone3D::*)()const>(&PhysicalBone3D::is_able_to_sleep),static_cast<void(PhysicalBone3D::*)(bool)>(&PhysicalBone3D::set_can_sleep)>("can_sleep")
            .fun<static_cast<void(PhysicalBone3D::*)(PhysicsDirectBodyState3D *)>(&PhysicalBone3D::_integrate_forces)>("_integrate_forces")
            .fun<static_cast<void(PhysicalBone3D::*)(const Vector3 &)>(&PhysicalBone3D::apply_central_impulse)>("apply_central_impulse")
            .fun<static_cast<void(PhysicalBone3D::*)(const Vector3 &,const Vector3 &)>(&PhysicalBone3D::apply_impulse)>("apply_impulse")
            .fun<static_cast<bool(PhysicalBone3D::*)()>(&PhysicalBone3D::get_simulate_physics)>("get_simulate_physics")
            .fun<static_cast<bool(PhysicalBone3D::*)()>(&PhysicalBone3D::is_simulating_physics)>("is_simulating_physics")
            .fun<static_cast<int32_t(PhysicalBone3D::*)()const>(&PhysicalBone3D::get_bone_id)>("get_bone_id")
;    qjs::Value _DampMode = context->newObject();
    _DampMode["DAMP_MODE_COMBINE"] = PhysicalBone3D::DampMode::DAMP_MODE_COMBINE;
    _DampMode["DAMP_MODE_REPLACE"] = PhysicalBone3D::DampMode::DAMP_MODE_REPLACE;
    _module.add("DampMode", std::move(_DampMode));
    qjs::Value _JointType = context->newObject();
    _JointType["JOINT_TYPE_NONE"] = PhysicalBone3D::JointType::JOINT_TYPE_NONE;
    _JointType["JOINT_TYPE_PIN"] = PhysicalBone3D::JointType::JOINT_TYPE_PIN;
    _JointType["JOINT_TYPE_CONE"] = PhysicalBone3D::JointType::JOINT_TYPE_CONE;
    _JointType["JOINT_TYPE_HINGE"] = PhysicalBone3D::JointType::JOINT_TYPE_HINGE;
    _JointType["JOINT_TYPE_SLIDER"] = PhysicalBone3D::JointType::JOINT_TYPE_SLIDER;
    _JointType["JOINT_TYPE_6DOF"] = PhysicalBone3D::JointType::JOINT_TYPE_6DOF;
    _module.add("JointType", std::move(_JointType));
}