
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/physics_body3d.hpp>
#include <godot_cpp/classes/physics_direct_body_state3d.hpp>
#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/rigid_body3d.hpp>
#include <godot_cpp/variant/basis.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RigidBody3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<RigidBody3D>("RigidBody3D")
			.constructor<>()
			.base<PhysicsBody3D>()
			.property<static_cast<double (RigidBody3D::*)() const>(&RigidBody3D::get_mass), static_cast<void (RigidBody3D::*)(double)>(&RigidBody3D::set_mass)>((new std::string("mass"))->c_str())
			.property<static_cast<Ref<PhysicsMaterial> (RigidBody3D::*)() const>(&RigidBody3D::get_physics_material_override), static_cast<void (RigidBody3D::*)(const Ref<PhysicsMaterial> &)>(&RigidBody3D::set_physics_material_override)>((new std::string("physics_material_override"))->c_str())
			.property<static_cast<double (RigidBody3D::*)() const>(&RigidBody3D::get_gravity_scale), static_cast<void (RigidBody3D::*)(double)>(&RigidBody3D::set_gravity_scale)>((new std::string("gravity_scale"))->c_str())
			.property<static_cast<RigidBody3D::CenterOfMassMode (RigidBody3D::*)() const>(&RigidBody3D::get_center_of_mass_mode), static_cast<void (RigidBody3D::*)(RigidBody3D::CenterOfMassMode)>(&RigidBody3D::set_center_of_mass_mode)>((new std::string("center_of_mass_mode"))->c_str())
			.property<static_cast<Vector3 (RigidBody3D::*)() const>(&RigidBody3D::get_center_of_mass), static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::set_center_of_mass)>((new std::string("center_of_mass"))->c_str())
			.property<static_cast<Vector3 (RigidBody3D::*)() const>(&RigidBody3D::get_inertia), static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::set_inertia)>((new std::string("inertia"))->c_str())
			.property<static_cast<bool (RigidBody3D::*)() const>(&RigidBody3D::is_sleeping), static_cast<void (RigidBody3D::*)(bool)>(&RigidBody3D::set_sleeping)>((new std::string("sleeping"))->c_str())
			.property<static_cast<bool (RigidBody3D::*)() const>(&RigidBody3D::is_able_to_sleep), static_cast<void (RigidBody3D::*)(bool)>(&RigidBody3D::set_can_sleep)>((new std::string("can_sleep"))->c_str())
			.property<static_cast<bool (RigidBody3D::*)() const>(&RigidBody3D::is_lock_rotation_enabled), static_cast<void (RigidBody3D::*)(bool)>(&RigidBody3D::set_lock_rotation_enabled)>((new std::string("lock_rotation"))->c_str())
			.property<static_cast<bool (RigidBody3D::*)() const>(&RigidBody3D::is_freeze_enabled), static_cast<void (RigidBody3D::*)(bool)>(&RigidBody3D::set_freeze_enabled)>((new std::string("freeze"))->c_str())
			.property<static_cast<RigidBody3D::FreezeMode (RigidBody3D::*)() const>(&RigidBody3D::get_freeze_mode), static_cast<void (RigidBody3D::*)(RigidBody3D::FreezeMode)>(&RigidBody3D::set_freeze_mode)>((new std::string("freeze_mode"))->c_str())
			.property<static_cast<bool (RigidBody3D::*)()>(&RigidBody3D::is_using_custom_integrator), static_cast<void (RigidBody3D::*)(bool)>(&RigidBody3D::set_use_custom_integrator)>((new std::string("custom_integrator"))->c_str())
			.property<static_cast<bool (RigidBody3D::*)() const>(&RigidBody3D::is_using_continuous_collision_detection), static_cast<void (RigidBody3D::*)(bool)>(&RigidBody3D::set_use_continuous_collision_detection)>((new std::string("continuous_cd"))->c_str())
			.property<static_cast<bool (RigidBody3D::*)() const>(&RigidBody3D::is_contact_monitor_enabled), static_cast<void (RigidBody3D::*)(bool)>(&RigidBody3D::set_contact_monitor)>((new std::string("contact_monitor"))->c_str())
			.property<static_cast<int32_t (RigidBody3D::*)() const>(&RigidBody3D::get_max_contacts_reported), static_cast<void (RigidBody3D::*)(int32_t)>(&RigidBody3D::set_max_contacts_reported)>((new std::string("max_contacts_reported"))->c_str())
			.property<static_cast<Vector3 (RigidBody3D::*)() const>(&RigidBody3D::get_linear_velocity), static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::set_linear_velocity)>((new std::string("linear_velocity"))->c_str())
			.property<static_cast<RigidBody3D::DampMode (RigidBody3D::*)() const>(&RigidBody3D::get_linear_damp_mode), static_cast<void (RigidBody3D::*)(RigidBody3D::DampMode)>(&RigidBody3D::set_linear_damp_mode)>((new std::string("linear_damp_mode"))->c_str())
			.property<static_cast<double (RigidBody3D::*)() const>(&RigidBody3D::get_linear_damp), static_cast<void (RigidBody3D::*)(double)>(&RigidBody3D::set_linear_damp)>((new std::string("linear_damp"))->c_str())
			.property<static_cast<Vector3 (RigidBody3D::*)() const>(&RigidBody3D::get_angular_velocity), static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::set_angular_velocity)>((new std::string("angular_velocity"))->c_str())
			.property<static_cast<RigidBody3D::DampMode (RigidBody3D::*)() const>(&RigidBody3D::get_angular_damp_mode), static_cast<void (RigidBody3D::*)(RigidBody3D::DampMode)>(&RigidBody3D::set_angular_damp_mode)>((new std::string("angular_damp_mode"))->c_str())
			.property<static_cast<double (RigidBody3D::*)() const>(&RigidBody3D::get_angular_damp), static_cast<void (RigidBody3D::*)(double)>(&RigidBody3D::set_angular_damp)>((new std::string("angular_damp"))->c_str())
			.property<static_cast<Vector3 (RigidBody3D::*)() const>(&RigidBody3D::get_constant_force), static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::set_constant_force)>((new std::string("constant_force"))->c_str())
			.property<static_cast<Vector3 (RigidBody3D::*)() const>(&RigidBody3D::get_constant_torque), static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::set_constant_torque)>((new std::string("constant_torque"))->c_str())
			.fun<static_cast<void (RigidBody3D::*)(PhysicsDirectBodyState3D *)>(&RigidBody3D::_integrate_forces)>((new std::string("_integrate_forces"))->c_str())
			.fun<static_cast<Basis (RigidBody3D::*)() const>(&RigidBody3D::get_inverse_inertia_tensor)>((new std::string("get_inverse_inertia_tensor"))->c_str())
			.fun<static_cast<int32_t (RigidBody3D::*)() const>(&RigidBody3D::get_contact_count)>((new std::string("get_contact_count"))->c_str())
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::set_axis_velocity)>((new std::string("set_axis_velocity"))->c_str())
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::apply_central_impulse)>((new std::string("apply_central_impulse"))->c_str())
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &, const Vector3 &)>(&RigidBody3D::apply_impulse)>((new std::string("apply_impulse"))->c_str())
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::apply_torque_impulse)>((new std::string("apply_torque_impulse"))->c_str())
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::apply_central_force)>((new std::string("apply_central_force"))->c_str())
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &, const Vector3 &)>(&RigidBody3D::apply_force)>((new std::string("apply_force"))->c_str())
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::apply_torque)>((new std::string("apply_torque"))->c_str())
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::add_constant_central_force)>((new std::string("add_constant_central_force"))->c_str())
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &, const Vector3 &)>(&RigidBody3D::add_constant_force)>((new std::string("add_constant_force"))->c_str())
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::add_constant_torque)>((new std::string("add_constant_torque"))->c_str())
			.fun<static_cast<TypedArray<Node3D> (RigidBody3D::*)() const>(&RigidBody3D::get_colliding_bodies)>((new std::string("get_colliding_bodies"))->c_str());
	qjs::Value _FreezeMode = context->newObject();
	_FreezeMode[(new std::string("FREEZE_MODE_STATIC"))->c_str()] = RigidBody3D::FreezeMode::FREEZE_MODE_STATIC;
	_FreezeMode[(new std::string("FREEZE_MODE_KINEMATIC"))->c_str()] = RigidBody3D::FreezeMode::FREEZE_MODE_KINEMATIC;
	_module.add("FreezeMode", std::move(_FreezeMode));
	qjs::Value _CenterOfMassMode = context->newObject();
	_CenterOfMassMode[(new std::string("CENTER_OF_MASS_MODE_AUTO"))->c_str()] = RigidBody3D::CenterOfMassMode::CENTER_OF_MASS_MODE_AUTO;
	_CenterOfMassMode[(new std::string("CENTER_OF_MASS_MODE_CUSTOM"))->c_str()] = RigidBody3D::CenterOfMassMode::CENTER_OF_MASS_MODE_CUSTOM;
	_module.add("CenterOfMassMode", std::move(_CenterOfMassMode));
	qjs::Value _DampMode = context->newObject();
	_DampMode[(new std::string("DAMP_MODE_COMBINE"))->c_str()] = RigidBody3D::DampMode::DAMP_MODE_COMBINE;
	_DampMode[(new std::string("DAMP_MODE_REPLACE"))->c_str()] = RigidBody3D::DampMode::DAMP_MODE_REPLACE;
	_module.add("DampMode", std::move(_DampMode));
}