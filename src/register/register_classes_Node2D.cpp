#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Node2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<Node2D>("Node2D")
			.constructor<>()
			.property<&Node2D::get_position, &Node2D::set_position>("position")
			.property<&Node2D::get_rotation, &Node2D::set_rotation>("rotation")
			.property<&Node2D::get_rotation_degrees, &Node2D::set_rotation_degrees>("rotation_degrees")
			.property<&Node2D::get_scale, &Node2D::set_scale>("scale")
			.property<&Node2D::get_skew, &Node2D::set_skew>("skew")
			.property<&Node2D::get_transform, &Node2D::set_transform>("transform")
			.property<&Node2D::get_global_position, &Node2D::set_global_position>("global_position")
			.property<&Node2D::get_global_rotation, &Node2D::set_global_rotation>("global_rotation")
			.property<&Node2D::get_global_rotation_degrees, &Node2D::set_global_rotation_degrees>("global_rotation_degrees")
			.property<&Node2D::get_global_scale, &Node2D::set_global_scale>("global_scale")
			.property<&Node2D::get_global_skew, &Node2D::set_global_skew>("global_skew")
			.property<&Node2D::get_global_transform, &Node2D::set_global_transform>("global_transform")
			.fun<static_cast<void (Node2D::*)(double)>(&Node2D::rotate)>("rotate")
			.fun<static_cast<void (Node2D::*)(double, bool)>(&Node2D::move_local_x)>("move_local_x")
			.fun<static_cast<void (Node2D::*)(double, bool)>(&Node2D::move_local_y)>("move_local_y")
			.fun<static_cast<void (Node2D::*)(const Vector2 &)>(&Node2D::translate)>("translate")
			.fun<static_cast<void (Node2D::*)(const Vector2 &)>(&Node2D::global_translate)>("global_translate")
			.fun<static_cast<void (Node2D::*)(const Vector2 &)>(&Node2D::apply_scale)>("apply_scale")
			.fun<static_cast<void (Node2D::*)(const Vector2 &)>(&Node2D::look_at)>("look_at")
			.fun<static_cast<double (Node2D::*)(const Vector2 &) const>(&Node2D::get_angle_to)>("get_angle_to")
			.fun<static_cast<Vector2 (Node2D::*)(const Vector2 &) const>(&Node2D::to_local)>("to_local")
			.fun<static_cast<Vector2 (Node2D::*)(const Vector2 &) const>(&Node2D::to_global)>("to_global")
			.fun<static_cast<Transform2D (Node2D::*)(Node *) const>(&Node2D::get_relative_transform_to_parent)>("get_relative_transform_to_parent");
}