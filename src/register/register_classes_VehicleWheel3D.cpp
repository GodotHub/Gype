#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/vehicle_wheel3d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_VehicleWheel3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<VehicleWheel3D>("VehicleWheel3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<double (VehicleWheel3D::*)() const>(&VehicleWheel3D::get_engine_force), static_cast<void (VehicleWheel3D::*)(double)>(&VehicleWheel3D::set_engine_force)>((new std::string("engine_force"))->c_str())
			.property<static_cast<double (VehicleWheel3D::*)() const>(&VehicleWheel3D::get_brake), static_cast<void (VehicleWheel3D::*)(double)>(&VehicleWheel3D::set_brake)>((new std::string("brake"))->c_str())
			.property<static_cast<double (VehicleWheel3D::*)() const>(&VehicleWheel3D::get_steering), static_cast<void (VehicleWheel3D::*)(double)>(&VehicleWheel3D::set_steering)>((new std::string("steering"))->c_str())
			.property<static_cast<bool (VehicleWheel3D::*)() const>(&VehicleWheel3D::is_used_as_traction), static_cast<void (VehicleWheel3D::*)(bool)>(&VehicleWheel3D::set_use_as_traction)>((new std::string("use_as_traction"))->c_str())
			.property<static_cast<bool (VehicleWheel3D::*)() const>(&VehicleWheel3D::is_used_as_steering), static_cast<void (VehicleWheel3D::*)(bool)>(&VehicleWheel3D::set_use_as_steering)>((new std::string("use_as_steering"))->c_str())
			.property<static_cast<double (VehicleWheel3D::*)() const>(&VehicleWheel3D::get_roll_influence), static_cast<void (VehicleWheel3D::*)(double)>(&VehicleWheel3D::set_roll_influence)>((new std::string("wheel_roll_influence"))->c_str())
			.property<static_cast<double (VehicleWheel3D::*)() const>(&VehicleWheel3D::get_radius), static_cast<void (VehicleWheel3D::*)(double)>(&VehicleWheel3D::set_radius)>((new std::string("wheel_radius"))->c_str())
			.property<static_cast<double (VehicleWheel3D::*)() const>(&VehicleWheel3D::get_suspension_rest_length), static_cast<void (VehicleWheel3D::*)(double)>(&VehicleWheel3D::set_suspension_rest_length)>((new std::string("wheel_rest_length"))->c_str())
			.property<static_cast<double (VehicleWheel3D::*)() const>(&VehicleWheel3D::get_friction_slip), static_cast<void (VehicleWheel3D::*)(double)>(&VehicleWheel3D::set_friction_slip)>((new std::string("wheel_friction_slip"))->c_str())
			.property<static_cast<double (VehicleWheel3D::*)() const>(&VehicleWheel3D::get_suspension_travel), static_cast<void (VehicleWheel3D::*)(double)>(&VehicleWheel3D::set_suspension_travel)>((new std::string("suspension_travel"))->c_str())
			.property<static_cast<double (VehicleWheel3D::*)() const>(&VehicleWheel3D::get_suspension_stiffness), static_cast<void (VehicleWheel3D::*)(double)>(&VehicleWheel3D::set_suspension_stiffness)>((new std::string("suspension_stiffness"))->c_str())
			.property<static_cast<double (VehicleWheel3D::*)() const>(&VehicleWheel3D::get_suspension_max_force), static_cast<void (VehicleWheel3D::*)(double)>(&VehicleWheel3D::set_suspension_max_force)>((new std::string("suspension_max_force"))->c_str())
			.property<static_cast<double (VehicleWheel3D::*)() const>(&VehicleWheel3D::get_damping_compression), static_cast<void (VehicleWheel3D::*)(double)>(&VehicleWheel3D::set_damping_compression)>((new std::string("damping_compression"))->c_str())
			.property<static_cast<double (VehicleWheel3D::*)() const>(&VehicleWheel3D::get_damping_relaxation), static_cast<void (VehicleWheel3D::*)(double)>(&VehicleWheel3D::set_damping_relaxation)>((new std::string("damping_relaxation"))->c_str())
			.fun<static_cast<bool (VehicleWheel3D::*)() const>(&VehicleWheel3D::is_in_contact)>((new std::string("is_in_contact"))->c_str())
			.fun<static_cast<Node3D *(VehicleWheel3D::*)() const>(&VehicleWheel3D::get_contact_body)>((new std::string("get_contact_body"))->c_str())
			.fun<static_cast<double (VehicleWheel3D::*)() const>(&VehicleWheel3D::get_skidinfo)>((new std::string("get_skidinfo"))->c_str())
			.fun<static_cast<double (VehicleWheel3D::*)() const>(&VehicleWheel3D::get_rpm)>((new std::string("get_rpm"))->c_str());
}