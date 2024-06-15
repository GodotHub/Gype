#include <godot_cpp/classes/static_body2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/physics_body2d.hpp>
#include <godot_cpp/classes/physics_material.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_StaticBody2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<StaticBody2D>("StaticBody2D")
            .constructor<>()
            .base<PhysicsBody2D>()
            .property<static_cast<Ref<PhysicsMaterial>(StaticBody2D::*)()const>(&StaticBody2D::get_physics_material_override),static_cast<void(StaticBody2D::*)(const Ref<PhysicsMaterial> &)>(&StaticBody2D::set_physics_material_override)>("physics_material_override")
            .property<static_cast<Vector2(StaticBody2D::*)()const>(&StaticBody2D::get_constant_linear_velocity),static_cast<void(StaticBody2D::*)(const Vector2 &)>(&StaticBody2D::set_constant_linear_velocity)>("constant_linear_velocity")
            .property<static_cast<double(StaticBody2D::*)()const>(&StaticBody2D::get_constant_angular_velocity),static_cast<void(StaticBody2D::*)(double)>(&StaticBody2D::set_constant_angular_velocity)>("constant_angular_velocity")
;}