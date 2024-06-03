#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/physical_bone3d.hpp>

using namespace godot;

void register_classes_PhysicalBone3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<PhysicalBone3D>("PhysicalBone3D")
           .constructor<>()
           .property<PhysicalBone3D::get_joint_type, PhysicalBone3D::set_joint_type>("joint_type")
           .property<PhysicalBone3D::get_joint_offset, PhysicalBone3D::set_joint_offset>("joint_offset")
           .property<PhysicalBone3D::get_joint_rotation, PhysicalBone3D::set_joint_rotation>("joint_rotation")
           .property<PhysicalBone3D::get_body_offset, PhysicalBone3D::set_body_offset>("body_offset")
           .property<PhysicalBone3D::get_mass, PhysicalBone3D::set_mass>("mass")
           .property<PhysicalBone3D::get_friction, PhysicalBone3D::set_friction>("friction")
           .property<PhysicalBone3D::get_bounce, PhysicalBone3D::set_bounce>("bounce")
           .property<PhysicalBone3D::get_gravity_scale, PhysicalBone3D::set_gravity_scale>("gravity_scale")
           .property<PhysicalBone3D::is_using_custom_integrator, PhysicalBone3D::set_use_custom_integrator>("custom_integrator")
           .property<PhysicalBone3D::get_linear_damp_mode, PhysicalBone3D::set_linear_damp_mode>("linear_damp_mode")
           .property<PhysicalBone3D::get_linear_damp, PhysicalBone3D::set_linear_damp>("linear_damp")
           .property<PhysicalBone3D::get_angular_damp_mode, PhysicalBone3D::set_angular_damp_mode>("angular_damp_mode")
           .property<PhysicalBone3D::get_angular_damp, PhysicalBone3D::set_angular_damp>("angular_damp")
           .property<PhysicalBone3D::get_linear_velocity, PhysicalBone3D::set_linear_velocity>("linear_velocity")
           .property<PhysicalBone3D::get_angular_velocity, PhysicalBone3D::set_angular_velocity>("angular_velocity")
           .property<PhysicalBone3D::is_able_to_sleep, PhysicalBone3D::set_can_sleep>("can_sleep")
		    .fun<static_cast<void(PhysicalBone3D::*)(PhysicsDirectBodyState3D *)>(&PhysicalBone3D::_integrate_forces)>("_integrate_forces")
		    .fun<static_cast<void(PhysicalBone3D::*)(const Vector3 &)>(&PhysicalBone3D::apply_central_impulse)>("apply_central_impulse")
		    .fun<static_cast<void(PhysicalBone3D::*)(const Vector3 &,const Vector3 &)>(&PhysicalBone3D::apply_impulse)>("apply_impulse")
		    .fun<static_cast<bool(PhysicalBone3D::*)()>(&PhysicalBone3D::get_simulate_physics)>("get_simulate_physics")
		    .fun<static_cast<bool(PhysicalBone3D::*)()>(&PhysicalBone3D::is_simulating_physics)>("is_simulating_physics")
		    .fun<static_cast<int32_t(PhysicalBone3D::*)()const>(&PhysicalBone3D::get_bone_id)>("get_bone_id")
;}