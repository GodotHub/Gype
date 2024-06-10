#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/vehicle_wheel3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_VehicleWheel3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<VehicleWheel3D>("VehicleWheel3D")
			.constructor<>()
			.property<&VehicleWheel3D::get_engine_force, &VehicleWheel3D::set_engine_force>("engine_force")
			.property<&VehicleWheel3D::get_brake, &VehicleWheel3D::set_brake>("brake")
			.property<&VehicleWheel3D::get_steering, &VehicleWheel3D::set_steering>("steering")
			.property<&VehicleWheel3D::is_used_as_traction, &VehicleWheel3D::set_use_as_traction>("use_as_traction")
			.property<&VehicleWheel3D::is_used_as_steering, &VehicleWheel3D::set_use_as_steering>("use_as_steering")
			.property<&VehicleWheel3D::get_roll_influence, &VehicleWheel3D::set_roll_influence>("wheel_roll_influence")
			.property<&VehicleWheel3D::get_radius, &VehicleWheel3D::set_radius>("wheel_radius")
			.property<&VehicleWheel3D::get_suspension_rest_length, &VehicleWheel3D::set_suspension_rest_length>("wheel_rest_length")
			.property<&VehicleWheel3D::get_friction_slip, &VehicleWheel3D::set_friction_slip>("wheel_friction_slip")
			.property<&VehicleWheel3D::get_suspension_travel, &VehicleWheel3D::set_suspension_travel>("suspension_travel")
			.property<&VehicleWheel3D::get_suspension_stiffness, &VehicleWheel3D::set_suspension_stiffness>("suspension_stiffness")
			.property<&VehicleWheel3D::get_suspension_max_force, &VehicleWheel3D::set_suspension_max_force>("suspension_max_force")
			.property<&VehicleWheel3D::get_damping_compression, &VehicleWheel3D::set_damping_compression>("damping_compression")
			.property<&VehicleWheel3D::get_damping_relaxation, &VehicleWheel3D::set_damping_relaxation>("damping_relaxation")
			.fun<static_cast<bool (VehicleWheel3D::*)() const>(&VehicleWheel3D::is_in_contact)>("is_in_contact")
			.fun<static_cast<Node3D *(VehicleWheel3D::*)() const>(&VehicleWheel3D::get_contact_body)>("get_contact_body")
			.fun<static_cast<double (VehicleWheel3D::*)() const>(&VehicleWheel3D::get_skidinfo)>("get_skidinfo")
			.fun<static_cast<double (VehicleWheel3D::*)() const>(&VehicleWheel3D::get_rpm)>("get_rpm");
}