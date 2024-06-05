#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/static_body2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_StaticBody2D() {
	qjs::Context::Module &_module = _Node2D;
	_module.class_<StaticBody2D>("StaticBody2D")
			.constructor<>()
			.property<&StaticBody2D::get_physics_material_override, &StaticBody2D::set_physics_material_override>("physics_material_override")
			.property<&StaticBody2D::get_constant_linear_velocity, &StaticBody2D::set_constant_linear_velocity>("constant_linear_velocity")
			.property<&StaticBody2D::get_constant_angular_velocity, &StaticBody2D::set_constant_angular_velocity>("constant_angular_velocity");
}