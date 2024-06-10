#include <godot_cpp/classes/skeleton_modification2d_jiggle.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SkeletonModification2DJiggle() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SkeletonModification2DJiggle>("SkeletonModification2DJiggle")
			.constructor<>()
			.property<&SkeletonModification2DJiggle::get_target_node, &SkeletonModification2DJiggle::set_target_node>("target_nodepath")
			.property<&SkeletonModification2DJiggle::get_jiggle_data_chain_length, &SkeletonModification2DJiggle::set_jiggle_data_chain_length>("jiggle_data_chain_length")
			.property<&SkeletonModification2DJiggle::get_stiffness, &SkeletonModification2DJiggle::set_stiffness>("stiffness")
			.property<&SkeletonModification2DJiggle::get_mass, &SkeletonModification2DJiggle::set_mass>("mass")
			.property<&SkeletonModification2DJiggle::get_damping, &SkeletonModification2DJiggle::set_damping>("damping")
			.property<&SkeletonModification2DJiggle::get_use_gravity, &SkeletonModification2DJiggle::set_use_gravity>("use_gravity")
			.property<&SkeletonModification2DJiggle::get_gravity, &SkeletonModification2DJiggle::set_gravity>("gravity")
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(bool)>(&SkeletonModification2DJiggle::set_use_colliders)>("set_use_colliders")
			.fun<static_cast<bool (SkeletonModification2DJiggle::*)() const>(&SkeletonModification2DJiggle::get_use_colliders)>("get_use_colliders")
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(int32_t)>(&SkeletonModification2DJiggle::set_collision_mask)>("set_collision_mask")
			.fun<static_cast<int32_t (SkeletonModification2DJiggle::*)() const>(&SkeletonModification2DJiggle::get_collision_mask)>("get_collision_mask")
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(int32_t, const NodePath &)>(&SkeletonModification2DJiggle::set_jiggle_joint_bone2d_node)>("set_jiggle_joint_bone2d_node")
			.fun<static_cast<NodePath (SkeletonModification2DJiggle::*)(int32_t) const>(&SkeletonModification2DJiggle::get_jiggle_joint_bone2d_node)>("get_jiggle_joint_bone2d_node")
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(int32_t, int32_t)>(&SkeletonModification2DJiggle::set_jiggle_joint_bone_index)>("set_jiggle_joint_bone_index")
			.fun<static_cast<int32_t (SkeletonModification2DJiggle::*)(int32_t) const>(&SkeletonModification2DJiggle::get_jiggle_joint_bone_index)>("get_jiggle_joint_bone_index")
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(int32_t, bool)>(&SkeletonModification2DJiggle::set_jiggle_joint_override)>("set_jiggle_joint_override")
			.fun<static_cast<bool (SkeletonModification2DJiggle::*)(int32_t) const>(&SkeletonModification2DJiggle::get_jiggle_joint_override)>("get_jiggle_joint_override")
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(int32_t, double)>(&SkeletonModification2DJiggle::set_jiggle_joint_stiffness)>("set_jiggle_joint_stiffness")
			.fun<static_cast<double (SkeletonModification2DJiggle::*)(int32_t) const>(&SkeletonModification2DJiggle::get_jiggle_joint_stiffness)>("get_jiggle_joint_stiffness")
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(int32_t, double)>(&SkeletonModification2DJiggle::set_jiggle_joint_mass)>("set_jiggle_joint_mass")
			.fun<static_cast<double (SkeletonModification2DJiggle::*)(int32_t) const>(&SkeletonModification2DJiggle::get_jiggle_joint_mass)>("get_jiggle_joint_mass")
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(int32_t, double)>(&SkeletonModification2DJiggle::set_jiggle_joint_damping)>("set_jiggle_joint_damping")
			.fun<static_cast<double (SkeletonModification2DJiggle::*)(int32_t) const>(&SkeletonModification2DJiggle::get_jiggle_joint_damping)>("get_jiggle_joint_damping")
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(int32_t, bool)>(&SkeletonModification2DJiggle::set_jiggle_joint_use_gravity)>("set_jiggle_joint_use_gravity")
			.fun<static_cast<bool (SkeletonModification2DJiggle::*)(int32_t) const>(&SkeletonModification2DJiggle::get_jiggle_joint_use_gravity)>("get_jiggle_joint_use_gravity")
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(int32_t, const Vector2 &)>(&SkeletonModification2DJiggle::set_jiggle_joint_gravity)>("set_jiggle_joint_gravity")
			.fun<static_cast<Vector2 (SkeletonModification2DJiggle::*)(int32_t) const>(&SkeletonModification2DJiggle::get_jiggle_joint_gravity)>("get_jiggle_joint_gravity");
}