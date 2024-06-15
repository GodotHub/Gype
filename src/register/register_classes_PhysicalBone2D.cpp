#include <godot_cpp/classes/physical_bone2d.hpp>
#include <godot_cpp/classes/joint2d.hpp>
#include <godot_cpp/classes/rigid_body2d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PhysicalBone2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<PhysicalBone2D>("PhysicalBone2D")
            .constructor<>()
            .base<RigidBody2D>()
            .property<static_cast<NodePath(PhysicalBone2D::*)()const>(&PhysicalBone2D::get_bone2d_nodepath),static_cast<void(PhysicalBone2D::*)(const NodePath &)>(&PhysicalBone2D::set_bone2d_nodepath)>("bone2d_nodepath")
            .property<static_cast<int32_t(PhysicalBone2D::*)()const>(&PhysicalBone2D::get_bone2d_index),static_cast<void(PhysicalBone2D::*)(int32_t)>(&PhysicalBone2D::set_bone2d_index)>("bone2d_index")
            .property<static_cast<bool(PhysicalBone2D::*)()const>(&PhysicalBone2D::get_auto_configure_joint),static_cast<void(PhysicalBone2D::*)(bool)>(&PhysicalBone2D::set_auto_configure_joint)>("auto_configure_joint")
            .property<static_cast<bool(PhysicalBone2D::*)()const>(&PhysicalBone2D::get_simulate_physics),static_cast<void(PhysicalBone2D::*)(bool)>(&PhysicalBone2D::set_simulate_physics)>("simulate_physics")
            .property<static_cast<bool(PhysicalBone2D::*)()const>(&PhysicalBone2D::get_follow_bone_when_simulating),static_cast<void(PhysicalBone2D::*)(bool)>(&PhysicalBone2D::set_follow_bone_when_simulating)>("follow_bone_when_simulating")
            .fun<static_cast<Joint2D *(PhysicalBone2D::*)()const>(&PhysicalBone2D::get_joint)>("get_joint")
            .fun<static_cast<bool(PhysicalBone2D::*)()const>(&PhysicalBone2D::is_simulating_physics)>("is_simulating_physics")
;}