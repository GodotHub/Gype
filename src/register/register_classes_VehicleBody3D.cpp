#include <godot_cpp/classes/vehicle_body3d.hpp>
#include <godot_cpp/classes/rigid_body3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_VehicleBody3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<VehicleBody3D>("VehicleBody3D")
            .constructor<>()
            .base<RigidBody3D>()
            .property<static_cast<double(VehicleBody3D::*)()const>(&VehicleBody3D::get_engine_force),static_cast<void(VehicleBody3D::*)(double)>(&VehicleBody3D::set_engine_force)>("engine_force")
            .property<static_cast<double(VehicleBody3D::*)()const>(&VehicleBody3D::get_brake),static_cast<void(VehicleBody3D::*)(double)>(&VehicleBody3D::set_brake)>("brake")
            .property<static_cast<double(VehicleBody3D::*)()const>(&VehicleBody3D::get_steering),static_cast<void(VehicleBody3D::*)(double)>(&VehicleBody3D::set_steering)>("steering")
;}