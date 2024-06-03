#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_StaticBody3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<StaticBody3D>("StaticBody3D")
           .constructor<>()
           .property<StaticBody3D::get_physics_material_override, StaticBody3D::set_physics_material_override>("physics_material_override")
           .property<StaticBody3D::get_constant_linear_velocity, StaticBody3D::set_constant_linear_velocity>("constant_linear_velocity")
           .property<StaticBody3D::get_constant_angular_velocity, StaticBody3D::set_constant_angular_velocity>("constant_angular_velocity")
;}