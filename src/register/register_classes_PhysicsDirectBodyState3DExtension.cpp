#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/physics_direct_body_state3d_extension.hpp>

using namespace godot;

void register_classes_PhysicsDirectBodyState3DExtension() {
    qjs::Context::Module &_module = _General;
    _module.class_<PhysicsDirectBodyState3DExtension>("PhysicsDirectBodyState3DExtension")
           .constructor<>()
		    .fun<static_cast<Vector3(PhysicsDirectBodyState3DExtension::*)()const>(&PhysicsDirectBodyState3DExtension::_get_total_gravity)>("_get_total_gravity")
		    .fun<static_cast<double(PhysicsDirectBodyState3DExtension::*)()const>(&PhysicsDirectBodyState3DExtension::_get_total_linear_damp)>("_get_total_linear_damp")
		    .fun<static_cast<double(PhysicsDirectBodyState3DExtension::*)()const>(&PhysicsDirectBodyState3DExtension::_get_total_angular_damp)>("_get_total_angular_damp")
		    .fun<static_cast<Vector3(PhysicsDirectBodyState3DExtension::*)()const>(&PhysicsDirectBodyState3DExtension::_get_center_of_mass)>("_get_center_of_mass")
		    .fun<static_cast<Vector3(PhysicsDirectBodyState3DExtension::*)()const>(&PhysicsDirectBodyState3DExtension::_get_center_of_mass_local)>("_get_center_of_mass_local")
		    .fun<static_cast<Basis(PhysicsDirectBodyState3DExtension::*)()const>(&PhysicsDirectBodyState3DExtension::_get_principal_inertia_axes)>("_get_principal_inertia_axes")
		    .fun<static_cast<double(PhysicsDirectBodyState3DExtension::*)()const>(&PhysicsDirectBodyState3DExtension::_get_inverse_mass)>("_get_inverse_mass")
		    .fun<static_cast<Vector3(PhysicsDirectBodyState3DExtension::*)()const>(&PhysicsDirectBodyState3DExtension::_get_inverse_inertia)>("_get_inverse_inertia")
		    .fun<static_cast<Basis(PhysicsDirectBodyState3DExtension::*)()const>(&PhysicsDirectBodyState3DExtension::_get_inverse_inertia_tensor)>("_get_inverse_inertia_tensor")
		    .fun<static_cast<void(PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_set_linear_velocity)>("_set_linear_velocity")
		    .fun<static_cast<Vector3(PhysicsDirectBodyState3DExtension::*)()const>(&PhysicsDirectBodyState3DExtension::_get_linear_velocity)>("_get_linear_velocity")
		    .fun<static_cast<void(PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_set_angular_velocity)>("_set_angular_velocity")
		    .fun<static_cast<Vector3(PhysicsDirectBodyState3DExtension::*)()const>(&PhysicsDirectBodyState3DExtension::_get_angular_velocity)>("_get_angular_velocity")
		    .fun<static_cast<void(PhysicsDirectBodyState3DExtension::*)(const Transform3D &)>(&PhysicsDirectBodyState3DExtension::_set_transform)>("_set_transform")
		    .fun<static_cast<Transform3D(PhysicsDirectBodyState3DExtension::*)()const>(&PhysicsDirectBodyState3DExtension::_get_transform)>("_get_transform")
		    .fun<static_cast<Vector3(PhysicsDirectBodyState3DExtension::*)(const Vector3 &)const>(&PhysicsDirectBodyState3DExtension::_get_velocity_at_local_position)>("_get_velocity_at_local_position")
		    .fun<static_cast<void(PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_apply_central_impulse)>("_apply_central_impulse")
		    .fun<static_cast<void(PhysicsDirectBodyState3DExtension::*)(const Vector3 &,const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_apply_impulse)>("_apply_impulse")
		    .fun<static_cast<void(PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_apply_torque_impulse)>("_apply_torque_impulse")
		    .fun<static_cast<void(PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_apply_central_force)>("_apply_central_force")
		    .fun<static_cast<void(PhysicsDirectBodyState3DExtension::*)(const Vector3 &,const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_apply_force)>("_apply_force")
		    .fun<static_cast<void(PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_apply_torque)>("_apply_torque")
		    .fun<static_cast<void(PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_add_constant_central_force)>("_add_constant_central_force")
		    .fun<static_cast<void(PhysicsDirectBodyState3DExtension::*)(const Vector3 &,const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_add_constant_force)>("_add_constant_force")
		    .fun<static_cast<void(PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_add_constant_torque)>("_add_constant_torque")
		    .fun<static_cast<void(PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_set_constant_force)>("_set_constant_force")
		    .fun<static_cast<Vector3(PhysicsDirectBodyState3DExtension::*)()const>(&PhysicsDirectBodyState3DExtension::_get_constant_force)>("_get_constant_force")
		    .fun<static_cast<void(PhysicsDirectBodyState3DExtension::*)(const Vector3 &)>(&PhysicsDirectBodyState3DExtension::_set_constant_torque)>("_set_constant_torque")
		    .fun<static_cast<Vector3(PhysicsDirectBodyState3DExtension::*)()const>(&PhysicsDirectBodyState3DExtension::_get_constant_torque)>("_get_constant_torque")
		    .fun<static_cast<void(PhysicsDirectBodyState3DExtension::*)(bool)>(&PhysicsDirectBodyState3DExtension::_set_sleep_state)>("_set_sleep_state")
		    .fun<static_cast<bool(PhysicsDirectBodyState3DExtension::*)()const>(&PhysicsDirectBodyState3DExtension::_is_sleeping)>("_is_sleeping")
		    .fun<static_cast<int32_t(PhysicsDirectBodyState3DExtension::*)()const>(&PhysicsDirectBodyState3DExtension::_get_contact_count)>("_get_contact_count")
		    .fun<static_cast<Vector3(PhysicsDirectBodyState3DExtension::*)(int32_t)const>(&PhysicsDirectBodyState3DExtension::_get_contact_local_position)>("_get_contact_local_position")
		    .fun<static_cast<Vector3(PhysicsDirectBodyState3DExtension::*)(int32_t)const>(&PhysicsDirectBodyState3DExtension::_get_contact_local_normal)>("_get_contact_local_normal")
		    .fun<static_cast<Vector3(PhysicsDirectBodyState3DExtension::*)(int32_t)const>(&PhysicsDirectBodyState3DExtension::_get_contact_impulse)>("_get_contact_impulse")
		    .fun<static_cast<int32_t(PhysicsDirectBodyState3DExtension::*)(int32_t)const>(&PhysicsDirectBodyState3DExtension::_get_contact_local_shape)>("_get_contact_local_shape")
		    .fun<static_cast<Vector3(PhysicsDirectBodyState3DExtension::*)(int32_t)const>(&PhysicsDirectBodyState3DExtension::_get_contact_local_velocity_at_position)>("_get_contact_local_velocity_at_position")
		    .fun<static_cast<RID(PhysicsDirectBodyState3DExtension::*)(int32_t)const>(&PhysicsDirectBodyState3DExtension::_get_contact_collider)>("_get_contact_collider")
		    .fun<static_cast<Vector3(PhysicsDirectBodyState3DExtension::*)(int32_t)const>(&PhysicsDirectBodyState3DExtension::_get_contact_collider_position)>("_get_contact_collider_position")
		    .fun<static_cast<uint64_t(PhysicsDirectBodyState3DExtension::*)(int32_t)const>(&PhysicsDirectBodyState3DExtension::_get_contact_collider_id)>("_get_contact_collider_id")
		    .fun<static_cast<Object *(PhysicsDirectBodyState3DExtension::*)(int32_t)const>(&PhysicsDirectBodyState3DExtension::_get_contact_collider_object)>("_get_contact_collider_object")
		    .fun<static_cast<int32_t(PhysicsDirectBodyState3DExtension::*)(int32_t)const>(&PhysicsDirectBodyState3DExtension::_get_contact_collider_shape)>("_get_contact_collider_shape")
		    .fun<static_cast<Vector3(PhysicsDirectBodyState3DExtension::*)(int32_t)const>(&PhysicsDirectBodyState3DExtension::_get_contact_collider_velocity_at_position)>("_get_contact_collider_velocity_at_position")
		    .fun<static_cast<double(PhysicsDirectBodyState3DExtension::*)()const>(&PhysicsDirectBodyState3DExtension::_get_step)>("_get_step")
		    .fun<static_cast<void(PhysicsDirectBodyState3DExtension::*)()>(&PhysicsDirectBodyState3DExtension::_integrate_forces)>("_integrate_forces")
		    .fun<static_cast<PhysicsDirectSpaceState3D *(PhysicsDirectBodyState3DExtension::*)()>(&PhysicsDirectBodyState3DExtension::_get_space_state)>("_get_space_state")
;}