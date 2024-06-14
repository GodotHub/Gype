
#include <godot_cpp/classes/joint2d.hpp>
#include <godot_cpp/classes/physical_bone2d.hpp>
#include <godot_cpp/classes/rigid_body2d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicalBone2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<PhysicalBone2D>("PhysicalBone2D")
			.constructor<>()
			.base<RigidBody2D>()
			.property<static_cast<NodePath (PhysicalBone2D::*)() const>(&PhysicalBone2D::get_bone2d_nodepath), static_cast<void (PhysicalBone2D::*)(const NodePath &)>(&PhysicalBone2D::set_bone2d_nodepath)>((new std::string("bone2d_nodepath"))->c_str())
			.property<static_cast<int32_t (PhysicalBone2D::*)() const>(&PhysicalBone2D::get_bone2d_index), static_cast<void (PhysicalBone2D::*)(int32_t)>(&PhysicalBone2D::set_bone2d_index)>((new std::string("bone2d_index"))->c_str())
			.property<static_cast<bool (PhysicalBone2D::*)() const>(&PhysicalBone2D::get_auto_configure_joint), static_cast<void (PhysicalBone2D::*)(bool)>(&PhysicalBone2D::set_auto_configure_joint)>((new std::string("auto_configure_joint"))->c_str())
			.property<static_cast<bool (PhysicalBone2D::*)() const>(&PhysicalBone2D::get_simulate_physics), static_cast<void (PhysicalBone2D::*)(bool)>(&PhysicalBone2D::set_simulate_physics)>((new std::string("simulate_physics"))->c_str())
			.property<static_cast<bool (PhysicalBone2D::*)() const>(&PhysicalBone2D::get_follow_bone_when_simulating), static_cast<void (PhysicalBone2D::*)(bool)>(&PhysicalBone2D::set_follow_bone_when_simulating)>((new std::string("follow_bone_when_simulating"))->c_str())
			.fun<static_cast<Joint2D *(PhysicalBone2D::*)() const>(&PhysicalBone2D::get_joint)>((new std::string("get_joint"))->c_str())
			.fun<static_cast<bool (PhysicalBone2D::*)() const>(&PhysicalBone2D::is_simulating_physics)>((new std::string("is_simulating_physics"))->c_str());
}