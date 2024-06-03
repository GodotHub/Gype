#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_StaticBody2D() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<StaticBody2D>("StaticBody2D")
           .constructor<>()
           .property<StaticBody2D::get_physics_material_override, StaticBody2D::set_physics_material_override>("physics_material_override")
           .property<StaticBody2D::get_constant_linear_velocity, StaticBody2D::set_constant_linear_velocity>("constant_linear_velocity")
           .property<StaticBody2D::get_constant_angular_velocity, StaticBody2D::set_constant_angular_velocity>("constant_angular_velocity")
;}