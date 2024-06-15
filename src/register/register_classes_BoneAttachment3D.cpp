#include <godot_cpp/classes/bone_attachment3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_BoneAttachment3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<BoneAttachment3D>("BoneAttachment3D")
            .constructor<>()
            .base<Node3D>()
            .property<static_cast<String(BoneAttachment3D::*)()const>(&BoneAttachment3D::get_bone_name),static_cast<void(BoneAttachment3D::*)(const String &)>(&BoneAttachment3D::set_bone_name)>("bone_name")
            .property<static_cast<int32_t(BoneAttachment3D::*)()const>(&BoneAttachment3D::get_bone_idx),static_cast<void(BoneAttachment3D::*)(int32_t)>(&BoneAttachment3D::set_bone_idx)>("bone_idx")
            .property<static_cast<bool(BoneAttachment3D::*)()const>(&BoneAttachment3D::get_override_pose),static_cast<void(BoneAttachment3D::*)(bool)>(&BoneAttachment3D::set_override_pose)>("override_pose")
            .fun<static_cast<void(BoneAttachment3D::*)()>(&BoneAttachment3D::on_skeleton_update)>("on_skeleton_update")
            .fun<static_cast<void(BoneAttachment3D::*)(bool)>(&BoneAttachment3D::set_use_external_skeleton)>("set_use_external_skeleton")
            .fun<static_cast<bool(BoneAttachment3D::*)()const>(&BoneAttachment3D::get_use_external_skeleton)>("get_use_external_skeleton")
            .fun<static_cast<void(BoneAttachment3D::*)(const NodePath &)>(&BoneAttachment3D::set_external_skeleton)>("set_external_skeleton")
            .fun<static_cast<NodePath(BoneAttachment3D::*)()const>(&BoneAttachment3D::get_external_skeleton)>("get_external_skeleton")
;}