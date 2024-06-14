
#include <godot_cpp/classes/joint3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Joint3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<Joint3D>("Joint3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<NodePath (Joint3D::*)() const>(&Joint3D::get_node_a), static_cast<void (Joint3D::*)(const NodePath &)>(&Joint3D::set_node_a)>((new std::string("node_a"))->c_str())
			.property<static_cast<NodePath (Joint3D::*)() const>(&Joint3D::get_node_b), static_cast<void (Joint3D::*)(const NodePath &)>(&Joint3D::set_node_b)>((new std::string("node_b"))->c_str())
			.property<static_cast<int32_t (Joint3D::*)() const>(&Joint3D::get_solver_priority), static_cast<void (Joint3D::*)(int32_t)>(&Joint3D::set_solver_priority)>((new std::string("solver_priority"))->c_str())
			.property<static_cast<bool (Joint3D::*)() const>(&Joint3D::get_exclude_nodes_from_collision), static_cast<void (Joint3D::*)(bool)>(&Joint3D::set_exclude_nodes_from_collision)>((new std::string("exclude_nodes_from_collision"))->c_str())
			.fun<static_cast<RID (Joint3D::*)() const>(&Joint3D::get_rid)>((new std::string("get_rid"))->c_str());
}