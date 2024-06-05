#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/physics_direct_body_state2d.hpp>
#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/rigid_body2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RigidBody2D() {
	qjs::Context::Module &_module = _Node2D;
	_module.class_<RigidBody2D>("RigidBody2D")
			.constructor<>()
			.property<&RigidBody2D::get_mass, &RigidBody2D::set_mass>("mass")
			.property<&RigidBody2D::get_physics_material_override, &RigidBody2D::set_physics_material_override>("physics_material_override")
			.property<&RigidBody2D::get_gravity_scale, &RigidBody2D::set_gravity_scale>("gravity_scale")
			.property<&RigidBody2D::get_center_of_mass_mode, &RigidBody2D::set_center_of_mass_mode>("center_of_mass_mode")
			.property<&RigidBody2D::get_center_of_mass, &RigidBody2D::set_center_of_mass>("center_of_mass")
			.property<&RigidBody2D::get_inertia, &RigidBody2D::set_inertia>("inertia")
			.property<&RigidBody2D::is_sleeping, &RigidBody2D::set_sleeping>("sleeping")
			.property<&RigidBody2D::is_able_to_sleep, &RigidBody2D::set_can_sleep>("can_sleep")
			.property<&RigidBody2D::is_lock_rotation_enabled, &RigidBody2D::set_lock_rotation_enabled>("lock_rotation")
			.property<&RigidBody2D::is_freeze_enabled, &RigidBody2D::set_freeze_enabled>("freeze")
			.property<&RigidBody2D::get_freeze_mode, &RigidBody2D::set_freeze_mode>("freeze_mode")
			.property<&RigidBody2D::is_using_custom_integrator, &RigidBody2D::set_use_custom_integrator>("custom_integrator")
			.property<&RigidBody2D::get_continuous_collision_detection_mode, &RigidBody2D::set_continuous_collision_detection_mode>("continuous_cd")
			.property<&RigidBody2D::get_max_contacts_reported, &RigidBody2D::set_max_contacts_reported>("max_contacts_reported")
			.property<&RigidBody2D::is_contact_monitor_enabled, &RigidBody2D::set_contact_monitor>("contact_monitor")
			.property<&RigidBody2D::get_linear_velocity, &RigidBody2D::set_linear_velocity>("linear_velocity")
			.property<&RigidBody2D::get_linear_damp_mode, &RigidBody2D::set_linear_damp_mode>("linear_damp_mode")
			.property<&RigidBody2D::get_linear_damp, &RigidBody2D::set_linear_damp>("linear_damp")
			.property<&RigidBody2D::get_angular_velocity, &RigidBody2D::set_angular_velocity>("angular_velocity")
			.property<&RigidBody2D::get_angular_damp_mode, &RigidBody2D::set_angular_damp_mode>("angular_damp_mode")
			.property<&RigidBody2D::get_angular_damp, &RigidBody2D::set_angular_damp>("angular_damp")
			.property<&RigidBody2D::get_constant_force, &RigidBody2D::set_constant_force>("constant_force")
			.property<&RigidBody2D::get_constant_torque, &RigidBody2D::set_constant_torque>("constant_torque")
			.fun<static_cast<void (RigidBody2D::*)(PhysicsDirectBodyState2D *)>(&RigidBody2D::_integrate_forces)>("_integrate_forces")
			.fun<static_cast<int32_t (RigidBody2D::*)() const>(&RigidBody2D::get_contact_count)>("get_contact_count")
			.fun<static_cast<void (RigidBody2D::*)(const Vector2 &)>(&RigidBody2D::set_axis_velocity)>("set_axis_velocity")
			.fun<static_cast<void (RigidBody2D::*)(const Vector2 &)>(&RigidBody2D::apply_central_impulse)>("apply_central_impulse")
			.fun<static_cast<void (RigidBody2D::*)(const Vector2 &, const Vector2 &)>(&RigidBody2D::apply_impulse)>("apply_impulse")
			.fun<static_cast<void (RigidBody2D::*)(double)>(&RigidBody2D::apply_torque_impulse)>("apply_torque_impulse")
			.fun<static_cast<void (RigidBody2D::*)(const Vector2 &)>(&RigidBody2D::apply_central_force)>("apply_central_force")
			.fun<static_cast<void (RigidBody2D::*)(const Vector2 &, const Vector2 &)>(&RigidBody2D::apply_force)>("apply_force")
			.fun<static_cast<void (RigidBody2D::*)(double)>(&RigidBody2D::apply_torque)>("apply_torque")
			.fun<static_cast<void (RigidBody2D::*)(const Vector2 &)>(&RigidBody2D::add_constant_central_force)>("add_constant_central_force")
			.fun<static_cast<void (RigidBody2D::*)(const Vector2 &, const Vector2 &)>(&RigidBody2D::add_constant_force)>("add_constant_force")
			.fun<static_cast<void (RigidBody2D::*)(double)>(&RigidBody2D::add_constant_torque)>("add_constant_torque")
			.fun<static_cast<TypedArray<Node2D> (RigidBody2D::*)() const>(&RigidBody2D::get_colliding_bodies)>("get_colliding_bodies");
}