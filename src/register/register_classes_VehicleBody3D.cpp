#include <godot_cpp/classes/vehicle_body3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_VehicleBody3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<VehicleBody3D>("VehicleBody3D")
			.constructor<>()
			.property<&VehicleBody3D::get_engine_force, &VehicleBody3D::set_engine_force>("engine_force")
			.property<&VehicleBody3D::get_brake, &VehicleBody3D::set_brake>("brake")
			.property<&VehicleBody3D::get_steering, &VehicleBody3D::set_steering>("steering");
}