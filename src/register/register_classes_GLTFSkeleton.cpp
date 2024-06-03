#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/gltf_skeleton.hpp>

using namespace godot;

void register_classes_GLTFSkeleton() {
    qjs::Context::Module &_module = _General;
    _module.class_<GLTFSkeleton>("GLTFSkeleton")
           .constructor<>()
           .property<GLTFSkeleton::get_joints, GLTFSkeleton::set_joints>("joints")
           .property<GLTFSkeleton::get_roots, GLTFSkeleton::set_roots>("roots")
           .property<GLTFSkeleton::get_unique_names, GLTFSkeleton::set_unique_names>("unique_names")
           .property<GLTFSkeleton::get_godot_bone_node, GLTFSkeleton::set_godot_bone_node>("godot_bone_node")
		    .fun<static_cast<Skeleton3D *(GLTFSkeleton::*)()>(&GLTFSkeleton::get_godot_skeleton)>("get_godot_skeleton")
		    .fun<static_cast<int32_t(GLTFSkeleton::*)()>(&GLTFSkeleton::get_bone_attachment_count)>("get_bone_attachment_count")
		    .fun<static_cast<BoneAttachment3D *(GLTFSkeleton::*)(int32_t)>(&GLTFSkeleton::get_bone_attachment)>("get_bone_attachment")
;}