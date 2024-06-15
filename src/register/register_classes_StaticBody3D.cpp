#include <godot_cpp/classes/static_body3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/physics_body3d.hpp>
#include <godot_cpp/classes/physics_material.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_StaticBody3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<StaticBody3D>("StaticBody3D")
            .constructor<>()
            .base<PhysicsBody3D>()
            .property<static_cast<Ref<PhysicsMaterial>(StaticBody3D::*)()const>(&StaticBody3D::get_physics_material_override),static_cast<void(StaticBody3D::*)(const Ref<PhysicsMaterial> &)>(&StaticBody3D::set_physics_material_override)>("physics_material_override")
            .property<static_cast<Vector3(StaticBody3D::*)()const>(&StaticBody3D::get_constant_linear_velocity),static_cast<void(StaticBody3D::*)(const Vector3 &)>(&StaticBody3D::set_constant_linear_velocity)>("constant_linear_velocity")
            .property<static_cast<Vector3(StaticBody3D::*)()const>(&StaticBody3D::get_constant_angular_velocity),static_cast<void(StaticBody3D::*)(const Vector3 &)>(&StaticBody3D::set_constant_angular_velocity)>("constant_angular_velocity")
;}