
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/physics_body2d.hpp>
#include <godot_cpp/classes/physics_direct_body_state2d.hpp>
#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/rigid_body2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RigidBody2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<RigidBody2D>("RigidBody2D")
			.constructor<>()
			.base<PhysicsBody2D>()
			.property<static_cast<double (RigidBody2D::*)() const>(&RigidBody2D::get_mass), static_cast<void (RigidBody2D::*)(double)>(&RigidBody2D::set_mass)>((new std::string("mass"))->c_str())
			.property<static_cast<Ref<PhysicsMaterial> (RigidBody2D::*)() const>(&RigidBody2D::get_physics_material_override), static_cast<void (RigidBody2D::*)(const Ref<PhysicsMaterial> &)>(&RigidBody2D::set_physics_material_override)>((new std::string("physics_material_override"))->c_str())
			.property<static_cast<double (RigidBody2D::*)() const>(&RigidBody2D::get_gravity_scale), static_cast<void (RigidBody2D::*)(double)>(&RigidBody2D::set_gravity_scale)>((new std::string("gravity_scale"))->c_str())
			.property<static_cast<RigidBody2D::CenterOfMassMode (RigidBody2D::*)() const>(&RigidBody2D::get_center_of_mass_mode), static_cast<void (RigidBody2D::*)(RigidBody2D::CenterOfMassMode)>(&RigidBody2D::set_center_of_mass_mode)>((new std::string("center_of_mass_mode"))->c_str())
			.property<static_cast<Vector2 (RigidBody2D::*)() const>(&RigidBody2D::get_center_of_mass), static_cast<void (RigidBody2D::*)(const Vector2 &)>(&RigidBody2D::set_center_of_mass)>((new std::string("center_of_mass"))->c_str())
			.property<static_cast<double (RigidBody2D::*)() const>(&RigidBody2D::get_inertia), static_cast<void (RigidBody2D::*)(double)>(&RigidBody2D::set_inertia)>((new std::string("inertia"))->c_str())
			.property<static_cast<bool (RigidBody2D::*)() const>(&RigidBody2D::is_sleeping), static_cast<void (RigidBody2D::*)(bool)>(&RigidBody2D::set_sleeping)>((new std::string("sleeping"))->c_str())
			.property<static_cast<bool (RigidBody2D::*)() const>(&RigidBody2D::is_able_to_sleep), static_cast<void (RigidBody2D::*)(bool)>(&RigidBody2D::set_can_sleep)>((new std::string("can_sleep"))->c_str())
			.property<static_cast<bool (RigidBody2D::*)() const>(&RigidBody2D::is_lock_rotation_enabled), static_cast<void (RigidBody2D::*)(bool)>(&RigidBody2D::set_lock_rotation_enabled)>((new std::string("lock_rotation"))->c_str())
			.property<static_cast<bool (RigidBody2D::*)() const>(&RigidBody2D::is_freeze_enabled), static_cast<void (RigidBody2D::*)(bool)>(&RigidBody2D::set_freeze_enabled)>((new std::string("freeze"))->c_str())
			.property<static_cast<RigidBody2D::FreezeMode (RigidBody2D::*)() const>(&RigidBody2D::get_freeze_mode), static_cast<void (RigidBody2D::*)(RigidBody2D::FreezeMode)>(&RigidBody2D::set_freeze_mode)>((new std::string("freeze_mode"))->c_str())
			.property<static_cast<bool (RigidBody2D::*)()>(&RigidBody2D::is_using_custom_integrator), static_cast<void (RigidBody2D::*)(bool)>(&RigidBody2D::set_use_custom_integrator)>((new std::string("custom_integrator"))->c_str())
			.property<static_cast<RigidBody2D::CCDMode (RigidBody2D::*)() const>(&RigidBody2D::get_continuous_collision_detection_mode), static_cast<void (RigidBody2D::*)(RigidBody2D::CCDMode)>(&RigidBody2D::set_continuous_collision_detection_mode)>((new std::string("continuous_cd"))->c_str())
			.property<static_cast<bool (RigidBody2D::*)() const>(&RigidBody2D::is_contact_monitor_enabled), static_cast<void (RigidBody2D::*)(bool)>(&RigidBody2D::set_contact_monitor)>((new std::string("contact_monitor"))->c_str())
			.property<static_cast<int32_t (RigidBody2D::*)() const>(&RigidBody2D::get_max_contacts_reported), static_cast<void (RigidBody2D::*)(int32_t)>(&RigidBody2D::set_max_contacts_reported)>((new std::string("max_contacts_reported"))->c_str())
			.property<static_cast<Vector2 (RigidBody2D::*)() const>(&RigidBody2D::get_linear_velocity), static_cast<void (RigidBody2D::*)(const Vector2 &)>(&RigidBody2D::set_linear_velocity)>((new std::string("linear_velocity"))->c_str())
			.property<static_cast<RigidBody2D::DampMode (RigidBody2D::*)() const>(&RigidBody2D::get_linear_damp_mode), static_cast<void (RigidBody2D::*)(RigidBody2D::DampMode)>(&RigidBody2D::set_linear_damp_mode)>((new std::string("linear_damp_mode"))->c_str())
			.property<static_cast<double (RigidBody2D::*)() const>(&RigidBody2D::get_linear_damp), static_cast<void (RigidBody2D::*)(double)>(&RigidBody2D::set_linear_damp)>((new std::string("linear_damp"))->c_str())
			.property<static_cast<double (RigidBody2D::*)() const>(&RigidBody2D::get_angular_velocity), static_cast<void (RigidBody2D::*)(double)>(&RigidBody2D::set_angular_velocity)>((new std::string("angular_velocity"))->c_str())
			.property<static_cast<RigidBody2D::DampMode (RigidBody2D::*)() const>(&RigidBody2D::get_angular_damp_mode), static_cast<void (RigidBody2D::*)(RigidBody2D::DampMode)>(&RigidBody2D::set_angular_damp_mode)>((new std::string("angular_damp_mode"))->c_str())
			.property<static_cast<double (RigidBody2D::*)() const>(&RigidBody2D::get_angular_damp), static_cast<void (RigidBody2D::*)(double)>(&RigidBody2D::set_angular_damp)>((new std::string("angular_damp"))->c_str())
			.property<static_cast<Vector2 (RigidBody2D::*)() const>(&RigidBody2D::get_constant_force), static_cast<void (RigidBody2D::*)(const Vector2 &)>(&RigidBody2D::set_constant_force)>((new std::string("constant_force"))->c_str())
			.property<static_cast<double (RigidBody2D::*)() const>(&RigidBody2D::get_constant_torque), static_cast<void (RigidBody2D::*)(double)>(&RigidBody2D::set_constant_torque)>((new std::string("constant_torque"))->c_str())
			.fun<static_cast<void (RigidBody2D::*)(PhysicsDirectBodyState2D *)>(&RigidBody2D::_integrate_forces)>((new std::string("_integrate_forces"))->c_str())
			.fun<static_cast<int32_t (RigidBody2D::*)() const>(&RigidBody2D::get_contact_count)>((new std::string("get_contact_count"))->c_str())
			.fun<static_cast<void (RigidBody2D::*)(const Vector2 &)>(&RigidBody2D::set_axis_velocity)>((new std::string("set_axis_velocity"))->c_str())
			.fun<static_cast<void (RigidBody2D::*)(const Vector2 &)>(&RigidBody2D::apply_central_impulse)>((new std::string("apply_central_impulse"))->c_str())
			.fun<static_cast<void (RigidBody2D::*)(const Vector2 &, const Vector2 &)>(&RigidBody2D::apply_impulse)>((new std::string("apply_impulse"))->c_str())
			.fun<static_cast<void (RigidBody2D::*)(double)>(&RigidBody2D::apply_torque_impulse)>((new std::string("apply_torque_impulse"))->c_str())
			.fun<static_cast<void (RigidBody2D::*)(const Vector2 &)>(&RigidBody2D::apply_central_force)>((new std::string("apply_central_force"))->c_str())
			.fun<static_cast<void (RigidBody2D::*)(const Vector2 &, const Vector2 &)>(&RigidBody2D::apply_force)>((new std::string("apply_force"))->c_str())
			.fun<static_cast<void (RigidBody2D::*)(double)>(&RigidBody2D::apply_torque)>((new std::string("apply_torque"))->c_str())
			.fun<static_cast<void (RigidBody2D::*)(const Vector2 &)>(&RigidBody2D::add_constant_central_force)>((new std::string("add_constant_central_force"))->c_str())
			.fun<static_cast<void (RigidBody2D::*)(const Vector2 &, const Vector2 &)>(&RigidBody2D::add_constant_force)>((new std::string("add_constant_force"))->c_str())
			.fun<static_cast<void (RigidBody2D::*)(double)>(&RigidBody2D::add_constant_torque)>((new std::string("add_constant_torque"))->c_str())
			.fun<static_cast<TypedArray<Node2D> (RigidBody2D::*)() const>(&RigidBody2D::get_colliding_bodies)>((new std::string("get_colliding_bodies"))->c_str());
	qjs::Value _FreezeMode = context->newObject();
	_FreezeMode[(new std::string("FREEZE_MODE_STATIC"))->c_str()] = RigidBody2D::FreezeMode::FREEZE_MODE_STATIC;
	_FreezeMode[(new std::string("FREEZE_MODE_KINEMATIC"))->c_str()] = RigidBody2D::FreezeMode::FREEZE_MODE_KINEMATIC;
	_module.add("FreezeMode", std::move(_FreezeMode));
	qjs::Value _CenterOfMassMode = context->newObject();
	_CenterOfMassMode[(new std::string("CENTER_OF_MASS_MODE_AUTO"))->c_str()] = RigidBody2D::CenterOfMassMode::CENTER_OF_MASS_MODE_AUTO;
	_CenterOfMassMode[(new std::string("CENTER_OF_MASS_MODE_CUSTOM"))->c_str()] = RigidBody2D::CenterOfMassMode::CENTER_OF_MASS_MODE_CUSTOM;
	_module.add("CenterOfMassMode", std::move(_CenterOfMassMode));
	qjs::Value _DampMode = context->newObject();
	_DampMode[(new std::string("DAMP_MODE_COMBINE"))->c_str()] = RigidBody2D::DampMode::DAMP_MODE_COMBINE;
	_DampMode[(new std::string("DAMP_MODE_REPLACE"))->c_str()] = RigidBody2D::DampMode::DAMP_MODE_REPLACE;
	_module.add("DampMode", std::move(_DampMode));
	qjs::Value _CCDMode = context->newObject();
	_CCDMode[(new std::string("CCD_MODE_DISABLED"))->c_str()] = RigidBody2D::CCDMode::CCD_MODE_DISABLED;
	_CCDMode[(new std::string("CCD_MODE_CAST_RAY"))->c_str()] = RigidBody2D::CCDMode::CCD_MODE_CAST_RAY;
	_CCDMode[(new std::string("CCD_MODE_CAST_SHAPE"))->c_str()] = RigidBody2D::CCDMode::CCD_MODE_CAST_SHAPE;
	_module.add("CCDMode", std::move(_CCDMode));
}