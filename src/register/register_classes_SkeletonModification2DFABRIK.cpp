#include <godot_cpp/classes/skeleton_modification2dfabrik.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SkeletonModification2DFABRIK() {
	qjs::Context::Module &_module = _General;
	_module.class_<SkeletonModification2DFABRIK>("SkeletonModification2DFABRIK")
			.constructor<>()
			.property<&SkeletonModification2DFABRIK::get_target_node, &SkeletonModification2DFABRIK::set_target_node>("target_nodepath")
			.property<&SkeletonModification2DFABRIK::get_fabrik_data_chain_length, &SkeletonModification2DFABRIK::set_fabrik_data_chain_length>("fabrik_data_chain_length")
			.fun<static_cast<void (SkeletonModification2DFABRIK::*)(int32_t, const NodePath &)>(&SkeletonModification2DFABRIK::set_fabrik_joint_bone2d_node)>("set_fabrik_joint_bone2d_node")
			.fun<static_cast<NodePath (SkeletonModification2DFABRIK::*)(int32_t) const>(&SkeletonModification2DFABRIK::get_fabrik_joint_bone2d_node)>("get_fabrik_joint_bone2d_node")
			.fun<static_cast<void (SkeletonModification2DFABRIK::*)(int32_t, int32_t)>(&SkeletonModification2DFABRIK::set_fabrik_joint_bone_index)>("set_fabrik_joint_bone_index")
			.fun<static_cast<int32_t (SkeletonModification2DFABRIK::*)(int32_t) const>(&SkeletonModification2DFABRIK::get_fabrik_joint_bone_index)>("get_fabrik_joint_bone_index")
			.fun<static_cast<void (SkeletonModification2DFABRIK::*)(int32_t, const Vector2 &)>(&SkeletonModification2DFABRIK::set_fabrik_joint_magnet_position)>("set_fabrik_joint_magnet_position")
			.fun<static_cast<Vector2 (SkeletonModification2DFABRIK::*)(int32_t) const>(&SkeletonModification2DFABRIK::get_fabrik_joint_magnet_position)>("get_fabrik_joint_magnet_position")
			.fun<static_cast<void (SkeletonModification2DFABRIK::*)(int32_t, bool)>(&SkeletonModification2DFABRIK::set_fabrik_joint_use_target_rotation)>("set_fabrik_joint_use_target_rotation")
			.fun<static_cast<bool (SkeletonModification2DFABRIK::*)(int32_t) const>(&SkeletonModification2DFABRIK::get_fabrik_joint_use_target_rotation)>("get_fabrik_joint_use_target_rotation");
}