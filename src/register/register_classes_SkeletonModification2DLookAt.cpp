
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification2d_look_at.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SkeletonModification2DLookAt() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SkeletonModification2DLookAt>("SkeletonModification2DLookAt")
			.constructor<>()
			.base<SkeletonModification2D>()
			.property<static_cast<int32_t (SkeletonModification2DLookAt::*)() const>(&SkeletonModification2DLookAt::get_bone_index), static_cast<void (SkeletonModification2DLookAt::*)(int32_t)>(&SkeletonModification2DLookAt::set_bone_index)>((new std::string("bone_index"))->c_str())
			.property<static_cast<NodePath (SkeletonModification2DLookAt::*)() const>(&SkeletonModification2DLookAt::get_bone2d_node), static_cast<void (SkeletonModification2DLookAt::*)(const NodePath &)>(&SkeletonModification2DLookAt::set_bone2d_node)>((new std::string("bone2d_node"))->c_str())
			.property<static_cast<NodePath (SkeletonModification2DLookAt::*)() const>(&SkeletonModification2DLookAt::get_target_node), static_cast<void (SkeletonModification2DLookAt::*)(const NodePath &)>(&SkeletonModification2DLookAt::set_target_node)>((new std::string("target_nodepath"))->c_str())
			.fun<static_cast<void (SkeletonModification2DLookAt::*)(double)>(&SkeletonModification2DLookAt::set_additional_rotation)>((new std::string("set_additional_rotation"))->c_str())
			.fun<static_cast<double (SkeletonModification2DLookAt::*)() const>(&SkeletonModification2DLookAt::get_additional_rotation)>((new std::string("get_additional_rotation"))->c_str())
			.fun<static_cast<void (SkeletonModification2DLookAt::*)(bool)>(&SkeletonModification2DLookAt::set_enable_constraint)>((new std::string("set_enable_constraint"))->c_str())
			.fun<static_cast<bool (SkeletonModification2DLookAt::*)() const>(&SkeletonModification2DLookAt::get_enable_constraint)>((new std::string("get_enable_constraint"))->c_str())
			.fun<static_cast<void (SkeletonModification2DLookAt::*)(double)>(&SkeletonModification2DLookAt::set_constraint_angle_min)>((new std::string("set_constraint_angle_min"))->c_str())
			.fun<static_cast<double (SkeletonModification2DLookAt::*)() const>(&SkeletonModification2DLookAt::get_constraint_angle_min)>((new std::string("get_constraint_angle_min"))->c_str())
			.fun<static_cast<void (SkeletonModification2DLookAt::*)(double)>(&SkeletonModification2DLookAt::set_constraint_angle_max)>((new std::string("set_constraint_angle_max"))->c_str())
			.fun<static_cast<double (SkeletonModification2DLookAt::*)() const>(&SkeletonModification2DLookAt::get_constraint_angle_max)>((new std::string("get_constraint_angle_max"))->c_str())
			.fun<static_cast<void (SkeletonModification2DLookAt::*)(bool)>(&SkeletonModification2DLookAt::set_constraint_angle_invert)>((new std::string("set_constraint_angle_invert"))->c_str())
			.fun<static_cast<bool (SkeletonModification2DLookAt::*)() const>(&SkeletonModification2DLookAt::get_constraint_angle_invert)>((new std::string("get_constraint_angle_invert"))->c_str());
}