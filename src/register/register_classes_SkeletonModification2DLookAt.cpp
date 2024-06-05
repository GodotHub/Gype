#include <godot_cpp/classes/skeleton_modification2d_look_at.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_SkeletonModification2DLookAt() {
	qjs::Context::Module &_module = _General;
	_module.class_<SkeletonModification2DLookAt>("SkeletonModification2DLookAt")
			.constructor<>()
			.property<&SkeletonModification2DLookAt::get_bone_index, &SkeletonModification2DLookAt::set_bone_index>("bone_index")
			.property<&SkeletonModification2DLookAt::get_bone2d_node, &SkeletonModification2DLookAt::set_bone2d_node>("bone2d_node")
			.property<&SkeletonModification2DLookAt::get_target_node, &SkeletonModification2DLookAt::set_target_node>("target_nodepath")
			.fun<static_cast<void (SkeletonModification2DLookAt::*)(double)>(&SkeletonModification2DLookAt::set_additional_rotation)>("set_additional_rotation")
			.fun<static_cast<double (SkeletonModification2DLookAt::*)() const>(&SkeletonModification2DLookAt::get_additional_rotation)>("get_additional_rotation")
			.fun<static_cast<void (SkeletonModification2DLookAt::*)(bool)>(&SkeletonModification2DLookAt::set_enable_constraint)>("set_enable_constraint")
			.fun<static_cast<bool (SkeletonModification2DLookAt::*)() const>(&SkeletonModification2DLookAt::get_enable_constraint)>("get_enable_constraint")
			.fun<static_cast<void (SkeletonModification2DLookAt::*)(double)>(&SkeletonModification2DLookAt::set_constraint_angle_min)>("set_constraint_angle_min")
			.fun<static_cast<double (SkeletonModification2DLookAt::*)() const>(&SkeletonModification2DLookAt::get_constraint_angle_min)>("get_constraint_angle_min")
			.fun<static_cast<void (SkeletonModification2DLookAt::*)(double)>(&SkeletonModification2DLookAt::set_constraint_angle_max)>("set_constraint_angle_max")
			.fun<static_cast<double (SkeletonModification2DLookAt::*)() const>(&SkeletonModification2DLookAt::get_constraint_angle_max)>("get_constraint_angle_max")
			.fun<static_cast<void (SkeletonModification2DLookAt::*)(bool)>(&SkeletonModification2DLookAt::set_constraint_angle_invert)>("set_constraint_angle_invert")
			.fun<static_cast<bool (SkeletonModification2DLookAt::*)() const>(&SkeletonModification2DLookAt::get_constraint_angle_invert)>("get_constraint_angle_invert");
}