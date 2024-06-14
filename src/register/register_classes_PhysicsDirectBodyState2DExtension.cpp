
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/physics_direct_body_state2d.hpp>
#include <godot_cpp/classes/physics_direct_body_state2d_extension.hpp>
#include <godot_cpp/classes/physics_direct_space_state2d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsDirectBodyState2DExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsDirectBodyState2DExtension>("PhysicsDirectBodyState2DExtension")
			.constructor<>()
			.base<PhysicsDirectBodyState2D>()
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2DExtension::*)() const>(&PhysicsDirectBodyState2DExtension::_get_total_gravity)>((new std::string("_get_total_gravity"))->c_str())
			.fun<static_cast<double (PhysicsDirectBodyState2DExtension::*)() const>(&PhysicsDirectBodyState2DExtension::_get_total_linear_damp)>((new std::string("_get_total_linear_damp"))->c_str())
			.fun<static_cast<double (PhysicsDirectBodyState2DExtension::*)() const>(&PhysicsDirectBodyState2DExtension::_get_total_angular_damp)>((new std::string("_get_total_angular_damp"))->c_str())
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2DExtension::*)() const>(&PhysicsDirectBodyState2DExtension::_get_center_of_mass)>((new std::string("_get_center_of_mass"))->c_str())
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2DExtension::*)() const>(&PhysicsDirectBodyState2DExtension::_get_center_of_mass_local)>((new std::string("_get_center_of_mass_local"))->c_str())
			.fun<static_cast<double (PhysicsDirectBodyState2DExtension::*)() const>(&PhysicsDirectBodyState2DExtension::_get_inverse_mass)>((new std::string("_get_inverse_mass"))->c_str())
			.fun<static_cast<double (PhysicsDirectBodyState2DExtension::*)() const>(&PhysicsDirectBodyState2DExtension::_get_inverse_inertia)>((new std::string("_get_inverse_inertia"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2DExtension::*)(const Vector2 &)>(&PhysicsDirectBodyState2DExtension::_set_linear_velocity)>((new std::string("_set_linear_velocity"))->c_str())
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2DExtension::*)() const>(&PhysicsDirectBodyState2DExtension::_get_linear_velocity)>((new std::string("_get_linear_velocity"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2DExtension::*)(double)>(&PhysicsDirectBodyState2DExtension::_set_angular_velocity)>((new std::string("_set_angular_velocity"))->c_str())
			.fun<static_cast<double (PhysicsDirectBodyState2DExtension::*)() const>(&PhysicsDirectBodyState2DExtension::_get_angular_velocity)>((new std::string("_get_angular_velocity"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2DExtension::*)(const Transform2D &)>(&PhysicsDirectBodyState2DExtension::_set_transform)>((new std::string("_set_transform"))->c_str())
			.fun<static_cast<Transform2D (PhysicsDirectBodyState2DExtension::*)() const>(&PhysicsDirectBodyState2DExtension::_get_transform)>((new std::string("_get_transform"))->c_str())
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2DExtension::*)(const Vector2 &) const>(&PhysicsDirectBodyState2DExtension::_get_velocity_at_local_position)>((new std::string("_get_velocity_at_local_position"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2DExtension::*)(const Vector2 &)>(&PhysicsDirectBodyState2DExtension::_apply_central_impulse)>((new std::string("_apply_central_impulse"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2DExtension::*)(const Vector2 &, const Vector2 &)>(&PhysicsDirectBodyState2DExtension::_apply_impulse)>((new std::string("_apply_impulse"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2DExtension::*)(double)>(&PhysicsDirectBodyState2DExtension::_apply_torque_impulse)>((new std::string("_apply_torque_impulse"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2DExtension::*)(const Vector2 &)>(&PhysicsDirectBodyState2DExtension::_apply_central_force)>((new std::string("_apply_central_force"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2DExtension::*)(const Vector2 &, const Vector2 &)>(&PhysicsDirectBodyState2DExtension::_apply_force)>((new std::string("_apply_force"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2DExtension::*)(double)>(&PhysicsDirectBodyState2DExtension::_apply_torque)>((new std::string("_apply_torque"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2DExtension::*)(const Vector2 &)>(&PhysicsDirectBodyState2DExtension::_add_constant_central_force)>((new std::string("_add_constant_central_force"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2DExtension::*)(const Vector2 &, const Vector2 &)>(&PhysicsDirectBodyState2DExtension::_add_constant_force)>((new std::string("_add_constant_force"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2DExtension::*)(double)>(&PhysicsDirectBodyState2DExtension::_add_constant_torque)>((new std::string("_add_constant_torque"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2DExtension::*)(const Vector2 &)>(&PhysicsDirectBodyState2DExtension::_set_constant_force)>((new std::string("_set_constant_force"))->c_str())
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2DExtension::*)() const>(&PhysicsDirectBodyState2DExtension::_get_constant_force)>((new std::string("_get_constant_force"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2DExtension::*)(double)>(&PhysicsDirectBodyState2DExtension::_set_constant_torque)>((new std::string("_set_constant_torque"))->c_str())
			.fun<static_cast<double (PhysicsDirectBodyState2DExtension::*)() const>(&PhysicsDirectBodyState2DExtension::_get_constant_torque)>((new std::string("_get_constant_torque"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2DExtension::*)(bool)>(&PhysicsDirectBodyState2DExtension::_set_sleep_state)>((new std::string("_set_sleep_state"))->c_str())
			.fun<static_cast<bool (PhysicsDirectBodyState2DExtension::*)() const>(&PhysicsDirectBodyState2DExtension::_is_sleeping)>((new std::string("_is_sleeping"))->c_str())
			.fun<static_cast<int32_t (PhysicsDirectBodyState2DExtension::*)() const>(&PhysicsDirectBodyState2DExtension::_get_contact_count)>((new std::string("_get_contact_count"))->c_str())
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2DExtension::*)(int32_t) const>(&PhysicsDirectBodyState2DExtension::_get_contact_local_position)>((new std::string("_get_contact_local_position"))->c_str())
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2DExtension::*)(int32_t) const>(&PhysicsDirectBodyState2DExtension::_get_contact_local_normal)>((new std::string("_get_contact_local_normal"))->c_str())
			.fun<static_cast<int32_t (PhysicsDirectBodyState2DExtension::*)(int32_t) const>(&PhysicsDirectBodyState2DExtension::_get_contact_local_shape)>((new std::string("_get_contact_local_shape"))->c_str())
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2DExtension::*)(int32_t) const>(&PhysicsDirectBodyState2DExtension::_get_contact_local_velocity_at_position)>((new std::string("_get_contact_local_velocity_at_position"))->c_str())
			.fun<static_cast<RID (PhysicsDirectBodyState2DExtension::*)(int32_t) const>(&PhysicsDirectBodyState2DExtension::_get_contact_collider)>((new std::string("_get_contact_collider"))->c_str())
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2DExtension::*)(int32_t) const>(&PhysicsDirectBodyState2DExtension::_get_contact_collider_position)>((new std::string("_get_contact_collider_position"))->c_str())
			.fun<static_cast<uint64_t (PhysicsDirectBodyState2DExtension::*)(int32_t) const>(&PhysicsDirectBodyState2DExtension::_get_contact_collider_id)>((new std::string("_get_contact_collider_id"))->c_str())
			.fun<static_cast<Object *(PhysicsDirectBodyState2DExtension::*)(int32_t) const>(&PhysicsDirectBodyState2DExtension::_get_contact_collider_object)>((new std::string("_get_contact_collider_object"))->c_str())
			.fun<static_cast<int32_t (PhysicsDirectBodyState2DExtension::*)(int32_t) const>(&PhysicsDirectBodyState2DExtension::_get_contact_collider_shape)>((new std::string("_get_contact_collider_shape"))->c_str())
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2DExtension::*)(int32_t) const>(&PhysicsDirectBodyState2DExtension::_get_contact_collider_velocity_at_position)>((new std::string("_get_contact_collider_velocity_at_position"))->c_str())
			.fun<static_cast<Vector2 (PhysicsDirectBodyState2DExtension::*)(int32_t) const>(&PhysicsDirectBodyState2DExtension::_get_contact_impulse)>((new std::string("_get_contact_impulse"))->c_str())
			.fun<static_cast<double (PhysicsDirectBodyState2DExtension::*)() const>(&PhysicsDirectBodyState2DExtension::_get_step)>((new std::string("_get_step"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState2DExtension::*)()>(&PhysicsDirectBodyState2DExtension::_integrate_forces)>((new std::string("_integrate_forces"))->c_str())
			.fun<static_cast<PhysicsDirectSpaceState2D *(PhysicsDirectBodyState2DExtension::*)()>(&PhysicsDirectBodyState2DExtension::_get_space_state)>((new std::string("_get_space_state"))->c_str());
}