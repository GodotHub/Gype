#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/physics_direct_body_state3d.hpp>
#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/rigid_body3d.hpp>
#include <godot_cpp/variant/basis.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RigidBody3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<RigidBody3D>("RigidBody3D")
			.constructor<>()
			.property<&RigidBody3D::get_mass, &RigidBody3D::set_mass>("mass")
			.property<&RigidBody3D::get_physics_material_override, &RigidBody3D::set_physics_material_override>("physics_material_override")
			.property<&RigidBody3D::get_gravity_scale, &RigidBody3D::set_gravity_scale>("gravity_scale")
			.property<&RigidBody3D::get_center_of_mass_mode, &RigidBody3D::set_center_of_mass_mode>("center_of_mass_mode")
			.property<&RigidBody3D::get_center_of_mass, &RigidBody3D::set_center_of_mass>("center_of_mass")
			.property<&RigidBody3D::get_inertia, &RigidBody3D::set_inertia>("inertia")
			.property<&RigidBody3D::is_sleeping, &RigidBody3D::set_sleeping>("sleeping")
			.property<&RigidBody3D::is_able_to_sleep, &RigidBody3D::set_can_sleep>("can_sleep")
			.property<&RigidBody3D::is_lock_rotation_enabled, &RigidBody3D::set_lock_rotation_enabled>("lock_rotation")
			.property<&RigidBody3D::is_freeze_enabled, &RigidBody3D::set_freeze_enabled>("freeze")
			.property<&RigidBody3D::get_freeze_mode, &RigidBody3D::set_freeze_mode>("freeze_mode")
			.property<&RigidBody3D::is_using_custom_integrator, &RigidBody3D::set_use_custom_integrator>("custom_integrator")
			.property<&RigidBody3D::is_using_continuous_collision_detection, &RigidBody3D::set_use_continuous_collision_detection>("continuous_cd")
			.property<&RigidBody3D::get_max_contacts_reported, &RigidBody3D::set_max_contacts_reported>("max_contacts_reported")
			.property<&RigidBody3D::is_contact_monitor_enabled, &RigidBody3D::set_contact_monitor>("contact_monitor")
			.property<&RigidBody3D::get_linear_velocity, &RigidBody3D::set_linear_velocity>("linear_velocity")
			.property<&RigidBody3D::get_linear_damp_mode, &RigidBody3D::set_linear_damp_mode>("linear_damp_mode")
			.property<&RigidBody3D::get_linear_damp, &RigidBody3D::set_linear_damp>("linear_damp")
			.property<&RigidBody3D::get_angular_velocity, &RigidBody3D::set_angular_velocity>("angular_velocity")
			.property<&RigidBody3D::get_angular_damp_mode, &RigidBody3D::set_angular_damp_mode>("angular_damp_mode")
			.property<&RigidBody3D::get_angular_damp, &RigidBody3D::set_angular_damp>("angular_damp")
			.property<&RigidBody3D::get_constant_force, &RigidBody3D::set_constant_force>("constant_force")
			.property<&RigidBody3D::get_constant_torque, &RigidBody3D::set_constant_torque>("constant_torque")
			.fun<static_cast<void (RigidBody3D::*)(PhysicsDirectBodyState3D *)>(&RigidBody3D::_integrate_forces)>("_integrate_forces")
			.fun<static_cast<Basis (RigidBody3D::*)() const>(&RigidBody3D::get_inverse_inertia_tensor)>("get_inverse_inertia_tensor")
			.fun<static_cast<int32_t (RigidBody3D::*)() const>(&RigidBody3D::get_contact_count)>("get_contact_count")
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::set_axis_velocity)>("set_axis_velocity")
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::apply_central_impulse)>("apply_central_impulse")
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &, const Vector3 &)>(&RigidBody3D::apply_impulse)>("apply_impulse")
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::apply_torque_impulse)>("apply_torque_impulse")
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::apply_central_force)>("apply_central_force")
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &, const Vector3 &)>(&RigidBody3D::apply_force)>("apply_force")
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::apply_torque)>("apply_torque")
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::add_constant_central_force)>("add_constant_central_force")
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &, const Vector3 &)>(&RigidBody3D::add_constant_force)>("add_constant_force")
			.fun<static_cast<void (RigidBody3D::*)(const Vector3 &)>(&RigidBody3D::add_constant_torque)>("add_constant_torque")
			.fun<static_cast<TypedArray<Node3D> (RigidBody3D::*)() const>(&RigidBody3D::get_colliding_bodies)>("get_colliding_bodies");
}