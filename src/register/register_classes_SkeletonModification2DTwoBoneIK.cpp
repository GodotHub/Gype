
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification2d_two_bone_ik.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SkeletonModification2DTwoBoneIK() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SkeletonModification2DTwoBoneIK>("SkeletonModification2DTwoBoneIK")
			.constructor<>()
			.base<SkeletonModification2D>()
			.property<static_cast<NodePath (SkeletonModification2DTwoBoneIK::*)() const>(&SkeletonModification2DTwoBoneIK::get_target_node), static_cast<void (SkeletonModification2DTwoBoneIK::*)(const NodePath &)>(&SkeletonModification2DTwoBoneIK::set_target_node)>((new std::string("target_nodepath"))->c_str())
			.property<static_cast<double (SkeletonModification2DTwoBoneIK::*)() const>(&SkeletonModification2DTwoBoneIK::get_target_minimum_distance), static_cast<void (SkeletonModification2DTwoBoneIK::*)(double)>(&SkeletonModification2DTwoBoneIK::set_target_minimum_distance)>((new std::string("target_minimum_distance"))->c_str())
			.property<static_cast<double (SkeletonModification2DTwoBoneIK::*)() const>(&SkeletonModification2DTwoBoneIK::get_target_maximum_distance), static_cast<void (SkeletonModification2DTwoBoneIK::*)(double)>(&SkeletonModification2DTwoBoneIK::set_target_maximum_distance)>((new std::string("target_maximum_distance"))->c_str())
			.property<static_cast<bool (SkeletonModification2DTwoBoneIK::*)() const>(&SkeletonModification2DTwoBoneIK::get_flip_bend_direction), static_cast<void (SkeletonModification2DTwoBoneIK::*)(bool)>(&SkeletonModification2DTwoBoneIK::set_flip_bend_direction)>((new std::string("flip_bend_direction"))->c_str())
			.fun<static_cast<void (SkeletonModification2DTwoBoneIK::*)(const NodePath &)>(&SkeletonModification2DTwoBoneIK::set_joint_one_bone2d_node)>((new std::string("set_joint_one_bone2d_node"))->c_str())
			.fun<static_cast<NodePath (SkeletonModification2DTwoBoneIK::*)() const>(&SkeletonModification2DTwoBoneIK::get_joint_one_bone2d_node)>((new std::string("get_joint_one_bone2d_node"))->c_str())
			.fun<static_cast<void (SkeletonModification2DTwoBoneIK::*)(int32_t)>(&SkeletonModification2DTwoBoneIK::set_joint_one_bone_idx)>((new std::string("set_joint_one_bone_idx"))->c_str())
			.fun<static_cast<int32_t (SkeletonModification2DTwoBoneIK::*)() const>(&SkeletonModification2DTwoBoneIK::get_joint_one_bone_idx)>((new std::string("get_joint_one_bone_idx"))->c_str())
			.fun<static_cast<void (SkeletonModification2DTwoBoneIK::*)(const NodePath &)>(&SkeletonModification2DTwoBoneIK::set_joint_two_bone2d_node)>((new std::string("set_joint_two_bone2d_node"))->c_str())
			.fun<static_cast<NodePath (SkeletonModification2DTwoBoneIK::*)() const>(&SkeletonModification2DTwoBoneIK::get_joint_two_bone2d_node)>((new std::string("get_joint_two_bone2d_node"))->c_str())
			.fun<static_cast<void (SkeletonModification2DTwoBoneIK::*)(int32_t)>(&SkeletonModification2DTwoBoneIK::set_joint_two_bone_idx)>((new std::string("set_joint_two_bone_idx"))->c_str())
			.fun<static_cast<int32_t (SkeletonModification2DTwoBoneIK::*)() const>(&SkeletonModification2DTwoBoneIK::get_joint_two_bone_idx)>((new std::string("get_joint_two_bone_idx"))->c_str());
}