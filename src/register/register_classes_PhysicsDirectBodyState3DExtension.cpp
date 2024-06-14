
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/physics_direct_body_state3d.hpp>
#include <godot_cpp/classes/physics_direct_body_state3d_extension.hpp>
#include <godot_cpp/classes/physics_direct_space_state3d.hpp>
#include <godot_cpp/variant/basis.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsDirectBodyState3DExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsDirectBodyState3DExtension>("PhysicsDirectBodyState3DExtension")
			.constructor<>()
			.base<PhysicsDirectBodyState3D>()
			.fun<static_cast<Vector3 (PhysicsDirectBodyState3DExtension::*)() const>(&PhysicsDirectBodyState3DExtension::_get_total_gravity)>((new std::string("_get_total_gravity"))->c_str())
			.fun<static_cast<double (PhysicsDirectBodyState3DExtension::*)() const>(&PhysicsDirectBodyState3DExtension::_get_total_linear_damp)>((new std::string("_get_total_linear_damp"))->c_str())
			.fun<static_cast<double (PhysicsDirectBodyState3DExtension::*)() const>(&PhysicsDirectBodyState3DExtension::_get_total_angular_damp)>((new std::string("_get_total_angular_damp"))->c_str())
			.fun<static_cast<Vector3 (PhysicsDirectBodyState3DExtension::*)() const>(&PhysicsDirectBodyState3DExtension::_get_center_of_mass)>((new std::string("_get_center_of_mass"))->c_str())
			.fun<static_cast<Vector3 (PhysicsDirectBodyState3DExtension::*)() const>(&PhysicsDirectBodyState3DExtension::_get_center_of_mass_local)>((new std::string("_get_center_of_mass_local"))->c_str())
			.fun<static_cast<Basis (PhysicsDirectBodyState3DExtension::*)() const>(&PhysicsDirectBodyState3DExtension::_get_principal_inertia_axes)>((new std::string("_get_principal_inertia_axes"))->c_str())
			.fun<static_cast<double (PhysicsDirectBodyState3DExtension::*)() const>(&PhysicsDirectBodyState3DExtension::_get_inverse_mass)>((new std::string("_get_inverse_mass"))->c_str())
			.fun<static_cast<Vector3 (PhysicsDirectBodyState3DExtension::*)() const>(&PhysicsDirectBodyState3DExtension::_get_inverse_inertia)>((new std::string("_get_inverse_inertia"))->c_str())
			.fun<static_cast<Basis (PhysicsDirectBodyState3DExtension::*)() const>(&PhysicsDirectBodyState3DExtension::_get_inverse_inertia_tensor)>((new std::string("_get_inverse_inertia_tensor"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_set_linear_velocity)>((new std::string("_set_linear_velocity"))->c_str())
			.fun<static_cast<Vector3 (PhysicsDirectBodyState3DExtension::*)() const>(&PhysicsDirectBodyState3DExtension::_get_linear_velocity)>((new std::string("_get_linear_velocity"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_set_angular_velocity)>((new std::string("_set_angular_velocity"))->c_str())
			.fun<static_cast<Vector3 (PhysicsDirectBodyState3DExtension::*)() const>(&PhysicsDirectBodyState3DExtension::_get_angular_velocity)>((new std::string("_get_angular_velocity"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState3DExtension::*)(const Transform3D &)>(&PhysicsDirectBodyState3DExtension::_set_transform)>((new std::string("_set_transform"))->c_str())
			.fun<static_cast<Transform3D (PhysicsDirectBodyState3DExtension::*)() const>(&PhysicsDirectBodyState3DExtension::_get_transform)>((new std::string("_get_transform"))->c_str())
			.fun<static_cast<Vector3 (PhysicsDirectBodyState3DExtension::*)(const Vector3 &) const>(&PhysicsDirectBodyState3DExtension::_get_velocity_at_local_position)>((new std::string("_get_velocity_at_local_position"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_apply_central_impulse)>((new std::string("_apply_central_impulse"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState3DExtension::*)(const Vector3 &, const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_apply_impulse)>((new std::string("_apply_impulse"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_apply_torque_impulse)>((new std::string("_apply_torque_impulse"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_apply_central_force)>((new std::string("_apply_central_force"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState3DExtension::*)(const Vector3 &, const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_apply_force)>((new std::string("_apply_force"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_apply_torque)>((new std::string("_apply_torque"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_add_constant_central_force)>((new std::string("_add_constant_central_force"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState3DExtension::*)(const Vector3 &, const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_add_constant_force)>((new std::string("_add_constant_force"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_add_constant_torque)>((new std::string("_add_constant_torque"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_set_constant_force)>((new std::string("_set_constant_force"))->c_str())
			.fun<static_cast<Vector3 (PhysicsDirectBodyState3DExtension::*)() const>(&PhysicsDirectBodyState3DExtension::_get_constant_force)>((new std::string("_get_constant_force"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_set_constant_torque)>((new std::string("_set_constant_torque"))->c_str())
			.fun<static_cast<Vector3 (PhysicsDirectBodyState3DExtension::*)() const>(&PhysicsDirectBodyState3DExtension::_get_constant_torque)>((new std::string("_get_constant_torque"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState3DExtension::*)(bool)>(&PhysicsDirectBodyState3DExtension::_set_sleep_state)>((new std::string("_set_sleep_state"))->c_str())
			.fun<static_cast<bool (PhysicsDirectBodyState3DExtension::*)() const>(&PhysicsDirectBodyState3DExtension::_is_sleeping)>((new std::string("_is_sleeping"))->c_str())
			.fun<static_cast<int32_t (PhysicsDirectBodyState3DExtension::*)() const>(&PhysicsDirectBodyState3DExtension::_get_contact_count)>((new std::string("_get_contact_count"))->c_str())
			.fun<static_cast<Vector3 (PhysicsDirectBodyState3DExtension::*)(int32_t) const>(&PhysicsDirectBodyState3DExtension::_get_contact_local_position)>((new std::string("_get_contact_local_position"))->c_str())
			.fun<static_cast<Vector3 (PhysicsDirectBodyState3DExtension::*)(int32_t) const>(&PhysicsDirectBodyState3DExtension::_get_contact_local_normal)>((new std::string("_get_contact_local_normal"))->c_str())
			.fun<static_cast<Vector3 (PhysicsDirectBodyState3DExtension::*)(int32_t) const>(&PhysicsDirectBodyState3DExtension::_get_contact_impulse)>((new std::string("_get_contact_impulse"))->c_str())
			.fun<static_cast<int32_t (PhysicsDirectBodyState3DExtension::*)(int32_t) const>(&PhysicsDirectBodyState3DExtension::_get_contact_local_shape)>((new std::string("_get_contact_local_shape"))->c_str())
			.fun<static_cast<Vector3 (PhysicsDirectBodyState3DExtension::*)(int32_t) const>(&PhysicsDirectBodyState3DExtension::_get_contact_local_velocity_at_position)>((new std::string("_get_contact_local_velocity_at_position"))->c_str())
			.fun<static_cast<RID (PhysicsDirectBodyState3DExtension::*)(int32_t) const>(&PhysicsDirectBodyState3DExtension::_get_contact_collider)>((new std::string("_get_contact_collider"))->c_str())
			.fun<static_cast<Vector3 (PhysicsDirectBodyState3DExtension::*)(int32_t) const>(&PhysicsDirectBodyState3DExtension::_get_contact_collider_position)>((new std::string("_get_contact_collider_position"))->c_str())
			.fun<static_cast<uint64_t (PhysicsDirectBodyState3DExtension::*)(int32_t) const>(&PhysicsDirectBodyState3DExtension::_get_contact_collider_id)>((new std::string("_get_contact_collider_id"))->c_str())
			.fun<static_cast<Object *(PhysicsDirectBodyState3DExtension::*)(int32_t) const>(&PhysicsDirectBodyState3DExtension::_get_contact_collider_object)>((new std::string("_get_contact_collider_object"))->c_str())
			.fun<static_cast<int32_t (PhysicsDirectBodyState3DExtension::*)(int32_t) const>(&PhysicsDirectBodyState3DExtension::_get_contact_collider_shape)>((new std::string("_get_contact_collider_shape"))->c_str())
			.fun<static_cast<Vector3 (PhysicsDirectBodyState3DExtension::*)(int32_t) const>(&PhysicsDirectBodyState3DExtension::_get_contact_collider_velocity_at_position)>((new std::string("_get_contact_collider_velocity_at_position"))->c_str())
			.fun<static_cast<double (PhysicsDirectBodyState3DExtension::*)() const>(&PhysicsDirectBodyState3DExtension::_get_step)>((new std::string("_get_step"))->c_str())
			.fun<static_cast<void (PhysicsDirectBodyState3DExtension::*)()>(&PhysicsDirectBodyState3DExtension::_integrate_forces)>((new std::string("_integrate_forces"))->c_str())
			.fun<static_cast<PhysicsDirectSpaceState3D *(PhysicsDirectBodyState3DExtension::*)()>(&PhysicsDirectBodyState3DExtension::_get_space_state)>((new std::string("_get_space_state"))->c_str());
}