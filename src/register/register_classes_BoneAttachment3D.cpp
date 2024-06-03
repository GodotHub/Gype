#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_BoneAttachment3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<BoneAttachment3D>("BoneAttachment3D")
           .constructor<>()
           .property<BoneAttachment3D::get_bone_name, BoneAttachment3D::set_bone_name>("bone_name")
           .property<BoneAttachment3D::get_bone_idx, BoneAttachment3D::set_bone_idx>("bone_idx")
           .property<BoneAttachment3D::get_override_pose, BoneAttachment3D::set_override_pose>("override_pose")
		   .fun<static_cast<void(BoneAttachment3D::*)(int32_t)>(&BoneAttachment3D::on_bone_pose_update)>("on_bone_pose_update")
		   .fun<static_cast<void(BoneAttachment3D::*)(bool)>(&BoneAttachment3D::set_use_external_skeleton)>("set_use_external_skeleton")
		   .fun<static_cast<bool(BoneAttachment3D::*)()const>(&BoneAttachment3D::get_use_external_skeleton)>("get_use_external_skeleton")
		   .fun<static_cast<void(BoneAttachment3D::*)(const NodePath &)>(&BoneAttachment3D::set_external_skeleton)>("set_external_skeleton")
		   .fun<static_cast<NodePath(BoneAttachment3D::*)()const>(&BoneAttachment3D::get_external_skeleton)>("get_external_skeleton")
;}