
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification2d_jiggle.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SkeletonModification2DJiggle() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SkeletonModification2DJiggle>("SkeletonModification2DJiggle")
			.constructor<>()
			.base<SkeletonModification2D>()
			.property<static_cast<NodePath (SkeletonModification2DJiggle::*)() const>(&SkeletonModification2DJiggle::get_target_node), static_cast<void (SkeletonModification2DJiggle::*)(const NodePath &)>(&SkeletonModification2DJiggle::set_target_node)>((new std::string("target_nodepath"))->c_str())
			.property<static_cast<int32_t (SkeletonModification2DJiggle::*)()>(&SkeletonModification2DJiggle::get_jiggle_data_chain_length), static_cast<void (SkeletonModification2DJiggle::*)(int32_t)>(&SkeletonModification2DJiggle::set_jiggle_data_chain_length)>((new std::string("jiggle_data_chain_length"))->c_str())
			.property<static_cast<double (SkeletonModification2DJiggle::*)() const>(&SkeletonModification2DJiggle::get_stiffness), static_cast<void (SkeletonModification2DJiggle::*)(double)>(&SkeletonModification2DJiggle::set_stiffness)>((new std::string("stiffness"))->c_str())
			.property<static_cast<double (SkeletonModification2DJiggle::*)() const>(&SkeletonModification2DJiggle::get_mass), static_cast<void (SkeletonModification2DJiggle::*)(double)>(&SkeletonModification2DJiggle::set_mass)>((new std::string("mass"))->c_str())
			.property<static_cast<double (SkeletonModification2DJiggle::*)() const>(&SkeletonModification2DJiggle::get_damping), static_cast<void (SkeletonModification2DJiggle::*)(double)>(&SkeletonModification2DJiggle::set_damping)>((new std::string("damping"))->c_str())
			.property<static_cast<bool (SkeletonModification2DJiggle::*)() const>(&SkeletonModification2DJiggle::get_use_gravity), static_cast<void (SkeletonModification2DJiggle::*)(bool)>(&SkeletonModification2DJiggle::set_use_gravity)>((new std::string("use_gravity"))->c_str())
			.property<static_cast<Vector2 (SkeletonModification2DJiggle::*)() const>(&SkeletonModification2DJiggle::get_gravity), static_cast<void (SkeletonModification2DJiggle::*)(const Vector2 &)>(&SkeletonModification2DJiggle::set_gravity)>((new std::string("gravity"))->c_str())
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(bool)>(&SkeletonModification2DJiggle::set_use_colliders)>((new std::string("set_use_colliders"))->c_str())
			.fun<static_cast<bool (SkeletonModification2DJiggle::*)() const>(&SkeletonModification2DJiggle::get_use_colliders)>((new std::string("get_use_colliders"))->c_str())
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(int32_t)>(&SkeletonModification2DJiggle::set_collision_mask)>((new std::string("set_collision_mask"))->c_str())
			.fun<static_cast<int32_t (SkeletonModification2DJiggle::*)() const>(&SkeletonModification2DJiggle::get_collision_mask)>((new std::string("get_collision_mask"))->c_str())
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(int32_t, const NodePath &)>(&SkeletonModification2DJiggle::set_jiggle_joint_bone2d_node)>((new std::string("set_jiggle_joint_bone2d_node"))->c_str())
			.fun<static_cast<NodePath (SkeletonModification2DJiggle::*)(int32_t) const>(&SkeletonModification2DJiggle::get_jiggle_joint_bone2d_node)>((new std::string("get_jiggle_joint_bone2d_node"))->c_str())
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(int32_t, int32_t)>(&SkeletonModification2DJiggle::set_jiggle_joint_bone_index)>((new std::string("set_jiggle_joint_bone_index"))->c_str())
			.fun<static_cast<int32_t (SkeletonModification2DJiggle::*)(int32_t) const>(&SkeletonModification2DJiggle::get_jiggle_joint_bone_index)>((new std::string("get_jiggle_joint_bone_index"))->c_str())
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(int32_t, bool)>(&SkeletonModification2DJiggle::set_jiggle_joint_override)>((new std::string("set_jiggle_joint_override"))->c_str())
			.fun<static_cast<bool (SkeletonModification2DJiggle::*)(int32_t) const>(&SkeletonModification2DJiggle::get_jiggle_joint_override)>((new std::string("get_jiggle_joint_override"))->c_str())
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(int32_t, double)>(&SkeletonModification2DJiggle::set_jiggle_joint_stiffness)>((new std::string("set_jiggle_joint_stiffness"))->c_str())
			.fun<static_cast<double (SkeletonModification2DJiggle::*)(int32_t) const>(&SkeletonModification2DJiggle::get_jiggle_joint_stiffness)>((new std::string("get_jiggle_joint_stiffness"))->c_str())
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(int32_t, double)>(&SkeletonModification2DJiggle::set_jiggle_joint_mass)>((new std::string("set_jiggle_joint_mass"))->c_str())
			.fun<static_cast<double (SkeletonModification2DJiggle::*)(int32_t) const>(&SkeletonModification2DJiggle::get_jiggle_joint_mass)>((new std::string("get_jiggle_joint_mass"))->c_str())
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(int32_t, double)>(&SkeletonModification2DJiggle::set_jiggle_joint_damping)>((new std::string("set_jiggle_joint_damping"))->c_str())
			.fun<static_cast<double (SkeletonModification2DJiggle::*)(int32_t) const>(&SkeletonModification2DJiggle::get_jiggle_joint_damping)>((new std::string("get_jiggle_joint_damping"))->c_str())
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(int32_t, bool)>(&SkeletonModification2DJiggle::set_jiggle_joint_use_gravity)>((new std::string("set_jiggle_joint_use_gravity"))->c_str())
			.fun<static_cast<bool (SkeletonModification2DJiggle::*)(int32_t) const>(&SkeletonModification2DJiggle::get_jiggle_joint_use_gravity)>((new std::string("get_jiggle_joint_use_gravity"))->c_str())
			.fun<static_cast<void (SkeletonModification2DJiggle::*)(int32_t, const Vector2 &)>(&SkeletonModification2DJiggle::set_jiggle_joint_gravity)>((new std::string("set_jiggle_joint_gravity"))->c_str())
			.fun<static_cast<Vector2 (SkeletonModification2DJiggle::*)(int32_t) const>(&SkeletonModification2DJiggle::get_jiggle_joint_gravity)>((new std::string("get_jiggle_joint_gravity"))->c_str());
}