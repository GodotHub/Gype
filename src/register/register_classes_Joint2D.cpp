#include <godot_cpp/classes/joint2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Joint2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<Joint2D>("Joint2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<NodePath (Joint2D::*)() const>(&Joint2D::get_node_a), static_cast<void (Joint2D::*)(const NodePath &)>(&Joint2D::set_node_a)>((new std::string("node_a"))->c_str())
			.property<static_cast<NodePath (Joint2D::*)() const>(&Joint2D::get_node_b), static_cast<void (Joint2D::*)(const NodePath &)>(&Joint2D::set_node_b)>((new std::string("node_b"))->c_str())
			.property<static_cast<double (Joint2D::*)() const>(&Joint2D::get_bias), static_cast<void (Joint2D::*)(double)>(&Joint2D::set_bias)>((new std::string("bias"))->c_str())
			.property<static_cast<bool (Joint2D::*)() const>(&Joint2D::get_exclude_nodes_from_collision), static_cast<void (Joint2D::*)(bool)>(&Joint2D::set_exclude_nodes_from_collision)>((new std::string("disable_collision"))->c_str())
			.fun<static_cast<RID (Joint2D::*)() const>(&Joint2D::get_rid)>((new std::string("get_rid"))->c_str());
}