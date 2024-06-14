#include <godot_cpp/classes/canvas_item.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Node2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<Node2D>("Node2D")
			.constructor<>()
			.base<CanvasItem>()
			.property<static_cast<Vector2 (Node2D::*)() const>(&Node2D::get_position), static_cast<void (Node2D::*)(const Vector2 &)>(&Node2D::set_position)>((new std::string("position"))->c_str())
			.property<static_cast<double (Node2D::*)() const>(&Node2D::get_rotation), static_cast<void (Node2D::*)(double)>(&Node2D::set_rotation)>((new std::string("rotation"))->c_str())
			.property<static_cast<double (Node2D::*)() const>(&Node2D::get_rotation_degrees), static_cast<void (Node2D::*)(double)>(&Node2D::set_rotation_degrees)>((new std::string("rotation_degrees"))->c_str())
			.property<static_cast<Vector2 (Node2D::*)() const>(&Node2D::get_scale), static_cast<void (Node2D::*)(const Vector2 &)>(&Node2D::set_scale)>((new std::string("scale"))->c_str())
			.property<static_cast<double (Node2D::*)() const>(&Node2D::get_skew), static_cast<void (Node2D::*)(double)>(&Node2D::set_skew)>((new std::string("skew"))->c_str())
			.property<static_cast<void (Node2D::*)(const Transform2D &)>(&Node2D::set_transform)>((new std::string("{'name': 'set_transform', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 2761652528, 'arguments': [{'name': 'xform', 'type': 'Transform2D'}]}"))->c_str())
			.property<static_cast<Vector2 (Node2D::*)() const>(&Node2D::get_global_position), static_cast<void (Node2D::*)(const Vector2 &)>(&Node2D::set_global_position)>((new std::string("global_position"))->c_str())
			.property<static_cast<double (Node2D::*)() const>(&Node2D::get_global_rotation), static_cast<void (Node2D::*)(double)>(&Node2D::set_global_rotation)>((new std::string("global_rotation"))->c_str())
			.property<static_cast<double (Node2D::*)() const>(&Node2D::get_global_rotation_degrees), static_cast<void (Node2D::*)(double)>(&Node2D::set_global_rotation_degrees)>((new std::string("global_rotation_degrees"))->c_str())
			.property<static_cast<Vector2 (Node2D::*)() const>(&Node2D::get_global_scale), static_cast<void (Node2D::*)(const Vector2 &)>(&Node2D::set_global_scale)>((new std::string("global_scale"))->c_str())
			.property<static_cast<double (Node2D::*)() const>(&Node2D::get_global_skew), static_cast<void (Node2D::*)(double)>(&Node2D::set_global_skew)>((new std::string("global_skew"))->c_str())
			.property<static_cast<void (Node2D::*)(const Transform2D &)>(&Node2D::set_global_transform)>((new std::string("{'name': 'set_global_transform', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 2761652528, 'arguments': [{'name': 'xform', 'type': 'Transform2D'}]}"))->c_str())
			.fun<static_cast<void (Node2D::*)(double)>(&Node2D::rotate)>((new std::string("rotate"))->c_str())
			.fun<static_cast<void (Node2D::*)(double, bool)>(&Node2D::move_local_x)>((new std::string("move_local_x"))->c_str())
			.fun<static_cast<void (Node2D::*)(double, bool)>(&Node2D::move_local_y)>((new std::string("move_local_y"))->c_str())
			.fun<static_cast<void (Node2D::*)(const Vector2 &)>(&Node2D::translate)>((new std::string("translate"))->c_str())
			.fun<static_cast<void (Node2D::*)(const Vector2 &)>(&Node2D::global_translate)>((new std::string("global_translate"))->c_str())
			.fun<static_cast<void (Node2D::*)(const Vector2 &)>(&Node2D::apply_scale)>((new std::string("apply_scale"))->c_str())
			.fun<static_cast<void (Node2D::*)(const Vector2 &)>(&Node2D::look_at)>((new std::string("look_at"))->c_str())
			.fun<static_cast<double (Node2D::*)(const Vector2 &) const>(&Node2D::get_angle_to)>((new std::string("get_angle_to"))->c_str())
			.fun<static_cast<Vector2 (Node2D::*)(const Vector2 &) const>(&Node2D::to_local)>((new std::string("to_local"))->c_str())
			.fun<static_cast<Vector2 (Node2D::*)(const Vector2 &) const>(&Node2D::to_global)>((new std::string("to_global"))->c_str())
			.fun<static_cast<Transform2D (Node2D::*)(Node *) const>(&Node2D::get_relative_transform_to_parent)>((new std::string("get_relative_transform_to_parent"))->c_str());
}