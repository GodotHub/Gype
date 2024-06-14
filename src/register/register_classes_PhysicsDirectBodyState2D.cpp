
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/physics_direct_body_state2d.hpp>
#include <godot_cpp/classes/physics_direct_space_state2d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsDirectBodyState2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsDirectBodyState2D>("PhysicsDirectBodyState2D")
			.constructor<>()
			.base<Object>()
			.property<static_cast<double (PhysicsDirectBodyState2D::*)() const>(&PhysicsDirectBodyState2D::get_step)>((new std::string("step"))->c_str())
			.property<static_cast<double (PhysicsDirectBodyState2D::*)() const>(&PhysicsDirectBodyState2D::get_inverse_mass)>((new std::string("inverse_mass"))->c_str())
			.property<static_cast<double (PhysicsDirectBodyState2D::*)() const>(&PhysicsDirectBodyState2D::get_inverse_inertia)>((new std::string("inverse_inertia"))->c_str())
			.property<static_cast<double (PhysicsDirectBodyState2D::*)() const>(&PhysicsDirectBodyState2D::get_total_angular_damp)>((new std::string("total_angular_damp"))->c_str())
			.property<static_cast<double (PhysicsDirectBodyState2D::*)() const>(&PhysicsDirectBodyState2D::get_total_linear_damp)>((new std::string("total_linear_damp"))->c_str())
			.property<static_cast<Vector2 (PhysicsDirectBodyState2D::*)() const>(&PhysicsDirectBodyState2D::get_total_gravity)>((new std::string("total_gravity"))->c_str())
			.property<static_cast<Vector2 (PhysicsDirectBodyState2D::*)() const>(&PhysicsDirectBodyState2D::get_center_of_mass)>((new std::string("center_of_mass"))->c_str())
			.property<static_cast<Vector2 (PhysicsDirectBodyState2D::*)() const>(&PhysicsDirectBodyState2D::get_center_of_mass_local)>((new std::string("center_of_mass_local"))->c_str())
			.property<static_cast<double (PhysicsDirectBodyState2D::*)() const>(&PhysicsDirectBodyState2D::get_angular_velocity), static_cast<void (PhysicsDirectBodyState2D::*)(double)>(&PhysicsDirectBodyState2D::set_angular_velocity)>((new std::string("angular_velocity"))->c_str())
			.property<static_cast<Vector2 (PhysicsDirectBodyState2D::*)() const>(&PhysicsDirectBodyState2D::get_linear_velocity), static_cast<void (PhysicsDirectBodyState2D::*)(const Vector2 &)>(&PhysicsDirectBodyState2D::set_linear_velocity)>((new std::string("linear_velocity"))->c_str())
			.property<static_cast<bool (PhysicsDirectBodyState2D::*)() const>(&PhysicsDirectBodyState2D::is_sleeping), static_cast<void (PhysicsDirectBodyState2D::*)(bool)>(&PhysicsDirectBodyState2D::set_sleep_state)>((new std::string("sleeping"))->c_str())
			.property<static_cast<Transform2D (PhysicsDirectBodyState2D::*)() const>(&PhysicsDirectBodyState2D::get_transform), static_cast<void (PhysicsDirectBodyState2D::*)(const Transform2D &)>(&PhysicsDirectBodyState2D::set_transform)>((new std::string("transform"))->c_str())
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2D::*)(const Vector2 &) const>(&PhysicsDirectBodyState2D::get_velocity_at_local_position)>((new std::string("get_velocity_at_local_position"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2D::*)(const Vector2 &)>(&PhysicsDirectBodyState2D::apply_central_impulse)>((new std::string("apply_central_impulse"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2D::*)(double)>(&PhysicsDirectBodyState2D::apply_torque_impulse)>((new std::string("apply_torque_impulse"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2D::*)(const Vector2 &, const Vector2 &)>(&PhysicsDirectBodyState2D::apply_impulse)>((new std::string("apply_impulse"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2D::*)(const Vector2 &)>(&PhysicsDirectBodyState2D::apply_central_force)>((new std::string("apply_central_force"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2D::*)(const Vector2 &, const Vector2 &)>(&PhysicsDirectBodyState2D::apply_force)>((new std::string("apply_force"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2D::*)(double)>(&PhysicsDirectBodyState2D::apply_torque)>((new std::string("apply_torque"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2D::*)(const Vector2 &)>(&PhysicsDirectBodyState2D::add_constant_central_force)>((new std::string("add_constant_central_force"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2D::*)(const Vector2 &, const Vector2 &)>(&PhysicsDirectBodyState2D::add_constant_force)>((new std::string("add_constant_force"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2D::*)(double)>(&PhysicsDirectBodyState2D::add_constant_torque)>((new std::string("add_constant_torque"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2D::*)(const Vector2 &)>(&PhysicsDirectBodyState2D::set_constant_force)>((new std::string("set_constant_force"))->c_str())
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2D::*)() const>(&PhysicsDirectBodyState2D::get_constant_force)>((new std::string("get_constant_force"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2D::*)(double)>(&PhysicsDirectBodyState2D::set_constant_torque)>((new std::string("set_constant_torque"))->c_str())
			.fun<static_cast<double (PhysicsDirectBodyState2D::*)() const>(&PhysicsDirectBodyState2D::get_constant_torque)>((new std::string("get_constant_torque"))->c_str())
			.fun<static_cast<int32_t (PhysicsDirectBodyState2D::*)() const>(&PhysicsDirectBodyState2D::get_contact_count)>((new std::string("get_contact_count"))->c_str())
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2D::*)(int32_t) const>(&PhysicsDirectBodyState2D::get_contact_local_position)>((new std::string("get_contact_local_position"))->c_str())
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2D::*)(int32_t) const>(&PhysicsDirectBodyState2D::get_contact_local_normal)>((new std::string("get_contact_local_normal"))->c_str())
			.fun<static_cast<int32_t (PhysicsDirectBodyState2D::*)(int32_t) const>(&PhysicsDirectBodyState2D::get_contact_local_shape)>((new std::string("get_contact_local_shape"))->c_str())
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2D::*)(int32_t) const>(&PhysicsDirectBodyState2D::get_contact_local_velocity_at_position)>((new std::string("get_contact_local_velocity_at_position"))->c_str())
			.fun<static_cast<RID (PhysicsDirectBodyState2D::*)(int32_t) const>(&PhysicsDirectBodyState2D::get_contact_collider)>((new std::string("get_contact_collider"))->c_str())
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2D::*)(int32_t) const>(&PhysicsDirectBodyState2D::get_contact_collider_position)>((new std::string("get_contact_collider_position"))->c_str())
			.fun<static_cast<uint64_t (PhysicsDirectBodyState2D::*)(int32_t) const>(&PhysicsDirectBodyState2D::get_contact_collider_id)>((new std::string("get_contact_collider_id"))->c_str())
			.fun<static_cast<Object *(PhysicsDirectBodyState2D::*)(int32_t) const>(&PhysicsDirectBodyState2D::get_contact_collider_object)>((new std::string("get_contact_collider_object"))->c_str())
			.fun<static_cast<int32_t (PhysicsDirectBodyState2D::*)(int32_t) const>(&PhysicsDirectBodyState2D::get_contact_collider_shape)>((new std::string("get_contact_collider_shape"))->c_str())
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2D::*)(int32_t) const>(&PhysicsDirectBodyState2D::get_contact_collider_velocity_at_position)>((new std::string("get_contact_collider_velocity_at_position"))->c_str())
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2D::*)(int32_t) const>(&PhysicsDirectBodyState2D::get_contact_impulse)>((new std::string("get_contact_impulse"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2D::*)()>(&PhysicsDirectBodyState2D::integrate_forces)>((new std::string("integrate_forces"))->c_str())
			.fun<static_cast<PhysicsDirectSpaceState2D *(PhysicsDirectBodyState2D::*)()>(&PhysicsDirectBodyState2D::get_space_state)>((new std::string("get_space_state"))->c_str());
}