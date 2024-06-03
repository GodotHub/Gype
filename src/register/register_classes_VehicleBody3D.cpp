#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_VehicleBody3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<VehicleBody3D>("VehicleBody3D")
           .constructor<>()
           .property<VehicleBody3D::get_engine_force, VehicleBody3D::set_engine_force>("engine_force")
           .property<VehicleBody3D::get_brake, VehicleBody3D::set_brake>("brake")
           .property<VehicleBody3D::get_steering, VehicleBody3D::set_steering>("steering")
;}