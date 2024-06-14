
#include <godot_cpp/classes/physical_bone3d.hpp>
#include <godot_cpp/classes/physics_body3d.hpp>
#include <godot_cpp/classes/physics_direct_body_state3d.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicalBone3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<PhysicalBone3D>("PhysicalBone3D")
			.constructor<>()
			.base<PhysicsBody3D>()
			.property<static_cast<PhysicalBone3D::JointType (PhysicalBone3D::*)() const>(&PhysicalBone3D::get_joint_type), static_cast<void (PhysicalBone3D::*)(PhysicalBone3D::JointType)>(&PhysicalBone3D::set_joint_type)>((new std::string("joint_type"))->c_str())
			.property<static_cast<Transform3D (PhysicalBone3D::*)() const>(&PhysicalBone3D::get_joint_offset), static_cast<void (PhysicalBone3D::*)(const Transform3D &)>(&PhysicalBone3D::set_joint_offset)>((new std::string("joint_offset"))->c_str())
			.property<static_cast<Vector3 (PhysicalBone3D::*)() const>(&PhysicalBone3D::get_joint_rotation), static_cast<void (PhysicalBone3D::*)(const Vector3 &)>(&PhysicalBone3D::set_joint_rotation)>((new std::string("joint_rotation"))->c_str())
			.property<static_cast<Transform3D (PhysicalBone3D::*)() const>(&PhysicalBone3D::get_body_offset), static_cast<void (PhysicalBone3D::*)(const Transform3D &)>(&PhysicalBone3D::set_body_offset)>((new std::string("body_offset"))->c_str())
			.property<static_cast<double (PhysicalBone3D::*)() const>(&PhysicalBone3D::get_mass), static_cast<void (PhysicalBone3D::*)(double)>(&PhysicalBone3D::set_mass)>((new std::string("mass"))->c_str())
			.property<static_cast<double (PhysicalBone3D::*)() const>(&PhysicalBone3D::get_friction), static_cast<void (PhysicalBone3D::*)(double)>(&PhysicalBone3D::set_friction)>((new std::string("friction"))->c_str())
			.property<static_cast<double (PhysicalBone3D::*)() const>(&PhysicalBone3D::get_bounce), static_cast<void (PhysicalBone3D::*)(double)>(&PhysicalBone3D::set_bounce)>((new std::string("bounce"))->c_str())
			.property<static_cast<double (PhysicalBone3D::*)() const>(&PhysicalBone3D::get_gravity_scale), static_cast<void (PhysicalBone3D::*)(double)>(&PhysicalBone3D::set_gravity_scale)>((new std::string("gravity_scale"))->c_str())
			.property<static_cast<bool (PhysicalBone3D::*)()>(&PhysicalBone3D::is_using_custom_integrator), static_cast<void (PhysicalBone3D::*)(bool)>(&PhysicalBone3D::set_use_custom_integrator)>((new std::string("custom_integrator"))->c_str())
			.property<static_cast<PhysicalBone3D::DampMode (PhysicalBone3D::*)() const>(&PhysicalBone3D::get_linear_damp_mode), static_cast<void (PhysicalBone3D::*)(PhysicalBone3D::DampMode)>(&PhysicalBone3D::set_linear_damp_mode)>((new std::string("linear_damp_mode"))->c_str())
			.property<static_cast<double (PhysicalBone3D::*)() const>(&PhysicalBone3D::get_linear_damp), static_cast<void (PhysicalBone3D::*)(double)>(&PhysicalBone3D::set_linear_damp)>((new std::string("linear_damp"))->c_str())
			.property<static_cast<PhysicalBone3D::DampMode (PhysicalBone3D::*)() const>(&PhysicalBone3D::get_angular_damp_mode), static_cast<void (PhysicalBone3D::*)(PhysicalBone3D::DampMode)>(&PhysicalBone3D::set_angular_damp_mode)>((new std::string("angular_damp_mode"))->c_str())
			.property<static_cast<double (PhysicalBone3D::*)() const>(&PhysicalBone3D::get_angular_damp), static_cast<void (PhysicalBone3D::*)(double)>(&PhysicalBone3D::set_angular_damp)>((new std::string("angular_damp"))->c_str())
			.property<static_cast<Vector3 (PhysicalBone3D::*)() const>(&PhysicalBone3D::get_linear_velocity), static_cast<void (PhysicalBone3D::*)(const Vector3 &)>(&PhysicalBone3D::set_linear_velocity)>((new std::string("linear_velocity"))->c_str())
			.property<static_cast<Vector3 (PhysicalBone3D::*)() const>(&PhysicalBone3D::get_angular_velocity), static_cast<void (PhysicalBone3D::*)(const Vector3 &)>(&PhysicalBone3D::set_angular_velocity)>((new std::string("angular_velocity"))->c_str())
			.property<static_cast<bool (PhysicalBone3D::*)() const>(&PhysicalBone3D::is_able_to_sleep), static_cast<void (PhysicalBone3D::*)(bool)>(&PhysicalBone3D::set_can_sleep)>((new std::string("can_sleep"))->c_str())
			.fun<static_cast<void (PhysicalBone3D::*)(PhysicsDirectBodyState3D *)>(&PhysicalBone3D::_integrate_forces)>((new std::string("_integrate_forces"))->c_str())
			.fun<static_cast<void (PhysicalBone3D::*)(const Vector3 &)>(&PhysicalBone3D::apply_central_impulse)>((new std::string("apply_central_impulse"))->c_str())
			.fun<static_cast<void (PhysicalBone3D::*)(const Vector3 &, const Vector3 &)>(&PhysicalBone3D::apply_impulse)>((new std::string("apply_impulse"))->c_str())
			.fun<static_cast<bool (PhysicalBone3D::*)()>(&PhysicalBone3D::get_simulate_physics)>((new std::string("get_simulate_physics"))->c_str())
			.fun<static_cast<bool (PhysicalBone3D::*)()>(&PhysicalBone3D::is_simulating_physics)>((new std::string("is_simulating_physics"))->c_str())
			.fun<static_cast<int32_t (PhysicalBone3D::*)() const>(&PhysicalBone3D::get_bone_id)>((new std::string("get_bone_id"))->c_str());
	qjs::Value _DampMode = context->newObject();
	_DampMode[(new std::string("DAMP_MODE_COMBINE"))->c_str()] = PhysicalBone3D::DampMode::DAMP_MODE_COMBINE;
	_DampMode[(new std::string("DAMP_MODE_REPLACE"))->c_str()] = PhysicalBone3D::DampMode::DAMP_MODE_REPLACE;
	_module.add("DampMode", std::move(_DampMode));
	qjs::Value _JointType = context->newObject();
	_JointType[(new std::string("JOINT_TYPE_NONE"))->c_str()] = PhysicalBone3D::JointType::JOINT_TYPE_NONE;
	_JointType[(new std::string("JOINT_TYPE_PIN"))->c_str()] = PhysicalBone3D::JointType::JOINT_TYPE_PIN;
	_JointType[(new std::string("JOINT_TYPE_CONE"))->c_str()] = PhysicalBone3D::JointType::JOINT_TYPE_CONE;
	_JointType[(new std::string("JOINT_TYPE_HINGE"))->c_str()] = PhysicalBone3D::JointType::JOINT_TYPE_HINGE;
	_JointType[(new std::string("JOINT_TYPE_SLIDER"))->c_str()] = PhysicalBone3D::JointType::JOINT_TYPE_SLIDER;
	_JointType[(new std::string("JOINT_TYPE_6DOF"))->c_str()] = PhysicalBone3D::JointType::JOINT_TYPE_6DOF;
	_module.add("JointType", std::move(_JointType));
}