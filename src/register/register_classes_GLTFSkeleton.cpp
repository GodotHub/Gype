#include <godot_cpp/classes/gltf_skeleton.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/bone_attachment3d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/skeleton3d.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GLTFSkeleton() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<GLTFSkeleton>("GLTFSkeleton")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<PackedInt32Array(GLTFSkeleton::*)()>(&GLTFSkeleton::get_joints),static_cast<void(GLTFSkeleton::*)(const PackedInt32Array &)>(&GLTFSkeleton::set_joints)>("joints")
            .property<static_cast<PackedInt32Array(GLTFSkeleton::*)()>(&GLTFSkeleton::get_roots),static_cast<void(GLTFSkeleton::*)(const PackedInt32Array &)>(&GLTFSkeleton::set_roots)>("roots")
            .property<static_cast<TypedArray<String>(GLTFSkeleton::*)()>(&GLTFSkeleton::get_unique_names),static_cast<void(GLTFSkeleton::*)(const TypedArray<String> &)>(&GLTFSkeleton::set_unique_names)>("unique_names")
            .property<static_cast<Dictionary(GLTFSkeleton::*)()>(&GLTFSkeleton::get_godot_bone_node),static_cast<void(GLTFSkeleton::*)(const Dictionary &)>(&GLTFSkeleton::set_godot_bone_node)>("godot_bone_node")
            .fun<static_cast<Skeleton3D *(GLTFSkeleton::*)()>(&GLTFSkeleton::get_godot_skeleton)>("get_godot_skeleton")
            .fun<static_cast<int32_t(GLTFSkeleton::*)()>(&GLTFSkeleton::get_bone_attachment_count)>("get_bone_attachment_count")
            .fun<static_cast<BoneAttachment3D *(GLTFSkeleton::*)(int32_t)>(&GLTFSkeleton::get_bone_attachment)>("get_bone_attachment")
;}