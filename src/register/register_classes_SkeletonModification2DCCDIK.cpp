
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification2dccdik.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SkeletonModification2DCCDIK() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SkeletonModification2DCCDIK>("SkeletonModification2DCCDIK")
			.constructor<>()
			.base<SkeletonModification2D>()
			.property<static_cast<NodePath (SkeletonModification2DCCDIK::*)() const>(&SkeletonModification2DCCDIK::get_target_node), static_cast<void (SkeletonModification2DCCDIK::*)(const NodePath &)>(&SkeletonModification2DCCDIK::set_target_node)>((new std::string("target_nodepath"))->c_str())
			.property<static_cast<NodePath (SkeletonModification2DCCDIK::*)() const>(&SkeletonModification2DCCDIK::get_tip_node), static_cast<void (SkeletonModification2DCCDIK::*)(const NodePath &)>(&SkeletonModification2DCCDIK::set_tip_node)>((new std::string("tip_nodepath"))->c_str())
			.property<static_cast<int32_t (SkeletonModification2DCCDIK::*)()>(&SkeletonModification2DCCDIK::get_ccdik_data_chain_length), static_cast<void (SkeletonModification2DCCDIK::*)(int32_t)>(&SkeletonModification2DCCDIK::set_ccdik_data_chain_length)>((new std::string("ccdik_data_chain_length"))->c_str())
			.fun<static_cast<void (SkeletonModification2DCCDIK::*)(int32_t, const NodePath &)>(&SkeletonModification2DCCDIK::set_ccdik_joint_bone2d_node)>((new std::string("set_ccdik_joint_bone2d_node"))->c_str())
			.fun<static_cast<NodePath (SkeletonModification2DCCDIK::*)(int32_t) const>(&SkeletonModification2DCCDIK::get_ccdik_joint_bone2d_node)>((new std::string("get_ccdik_joint_bone2d_node"))->c_str())
			.fun<static_cast<void (SkeletonModification2DCCDIK::*)(int32_t, int32_t)>(&SkeletonModification2DCCDIK::set_ccdik_joint_bone_index)>((new std::string("set_ccdik_joint_bone_index"))->c_str())
			.fun<static_cast<int32_t (SkeletonModification2DCCDIK::*)(int32_t) const>(&SkeletonModification2DCCDIK::get_ccdik_joint_bone_index)>((new std::string("get_ccdik_joint_bone_index"))->c_str())
			.fun<static_cast<void (SkeletonModification2DCCDIK::*)(int32_t, bool)>(&SkeletonModification2DCCDIK::set_ccdik_joint_rotate_from_joint)>((new std::string("set_ccdik_joint_rotate_from_joint"))->c_str())
			.fun<static_cast<bool (SkeletonModification2DCCDIK::*)(int32_t) const>(&SkeletonModification2DCCDIK::get_ccdik_joint_rotate_from_joint)>((new std::string("get_ccdik_joint_rotate_from_joint"))->c_str())
			.fun<static_cast<void (SkeletonModification2DCCDIK::*)(int32_t, bool)>(&SkeletonModification2DCCDIK::set_ccdik_joint_enable_constraint)>((new std::string("set_ccdik_joint_enable_constraint"))->c_str())
			.fun<static_cast<bool (SkeletonModification2DCCDIK::*)(int32_t) const>(&SkeletonModification2DCCDIK::get_ccdik_joint_enable_constraint)>((new std::string("get_ccdik_joint_enable_constraint"))->c_str())
			.fun<static_cast<void (SkeletonModification2DCCDIK::*)(int32_t, double)>(&SkeletonModification2DCCDIK::set_ccdik_joint_constraint_angle_min)>((new std::string("set_ccdik_joint_constraint_angle_min"))->c_str())
			.fun<static_cast<double (SkeletonModification2DCCDIK::*)(int32_t) const>(&SkeletonModification2DCCDIK::get_ccdik_joint_constraint_angle_min)>((new std::string("get_ccdik_joint_constraint_angle_min"))->c_str())
			.fun<static_cast<void (SkeletonModification2DCCDIK::*)(int32_t, double)>(&SkeletonModification2DCCDIK::set_ccdik_joint_constraint_angle_max)>((new std::string("set_ccdik_joint_constraint_angle_max"))->c_str())
			.fun<static_cast<double (SkeletonModification2DCCDIK::*)(int32_t) const>(&SkeletonModification2DCCDIK::get_ccdik_joint_constraint_angle_max)>((new std::string("get_ccdik_joint_constraint_angle_max"))->c_str())
			.fun<static_cast<void (SkeletonModification2DCCDIK::*)(int32_t, bool)>(&SkeletonModification2DCCDIK::set_ccdik_joint_constraint_angle_invert)>((new std::string("set_ccdik_joint_constraint_angle_invert"))->c_str())
			.fun<static_cast<bool (SkeletonModification2DCCDIK::*)(int32_t) const>(&SkeletonModification2DCCDIK::get_ccdik_joint_constraint_angle_invert)>((new std::string("get_ccdik_joint_constraint_angle_invert"))->c_str());
}