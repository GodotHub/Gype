#include <godot_cpp/classes/joint3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Joint3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<Joint3D>("Joint3D")
            .constructor<>()
            .base<Node3D>()
            .property<static_cast<NodePath(Joint3D::*)()const>(&Joint3D::get_node_a),static_cast<void(Joint3D::*)(const NodePath &)>(&Joint3D::set_node_a)>("node_a")
            .property<static_cast<NodePath(Joint3D::*)()const>(&Joint3D::get_node_b),static_cast<void(Joint3D::*)(const NodePath &)>(&Joint3D::set_node_b)>("node_b")
            .property<static_cast<int32_t(Joint3D::*)()const>(&Joint3D::get_solver_priority),static_cast<void(Joint3D::*)(int32_t)>(&Joint3D::set_solver_priority)>("solver_priority")
            .property<static_cast<bool(Joint3D::*)()const>(&Joint3D::get_exclude_nodes_from_collision),static_cast<void(Joint3D::*)(bool)>(&Joint3D::set_exclude_nodes_from_collision)>("exclude_nodes_from_collision")
            .fun<static_cast<RID(Joint3D::*)()const>(&Joint3D::get_rid)>("get_rid")
;}