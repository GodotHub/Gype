#include <godot_cpp/classes/joint2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/rid.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Joint2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<Joint2D>("Joint2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<NodePath(Joint2D::*)()const>(&Joint2D::get_node_a),static_cast<void(Joint2D::*)(const NodePath &)>(&Joint2D::set_node_a)>("node_a")
            .property<static_cast<NodePath(Joint2D::*)()const>(&Joint2D::get_node_b),static_cast<void(Joint2D::*)(const NodePath &)>(&Joint2D::set_node_b)>("node_b")
            .property<static_cast<double(Joint2D::*)()const>(&Joint2D::get_bias),static_cast<void(Joint2D::*)(double)>(&Joint2D::set_bias)>("bias")
            .property<static_cast<bool(Joint2D::*)()const>(&Joint2D::get_exclude_nodes_from_collision),static_cast<void(Joint2D::*)(bool)>(&Joint2D::set_exclude_nodes_from_collision)>("disable_collision")
            .fun<static_cast<RID(Joint2D::*)()const>(&Joint2D::get_rid)>("get_rid")
;}