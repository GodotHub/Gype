#include <godot_cpp/classes/gltf_skin.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GLTFSkin() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<GLTFSkin>("GLTFSkin")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<int32_t(GLTFSkin::*)()>(&GLTFSkin::get_skin_root),static_cast<void(GLTFSkin::*)(int32_t)>(&GLTFSkin::set_skin_root)>("skin_root")
            .property<static_cast<PackedInt32Array(GLTFSkin::*)()>(&GLTFSkin::get_joints_original),static_cast<void(GLTFSkin::*)(const PackedInt32Array &)>(&GLTFSkin::set_joints_original)>("joints_original")
            .property<static_cast<TypedArray<Transform3D>(GLTFSkin::*)()>(&GLTFSkin::get_inverse_binds),static_cast<void(GLTFSkin::*)(const TypedArray<Transform3D> &)>(&GLTFSkin::set_inverse_binds)>("inverse_binds")
            .property<static_cast<PackedInt32Array(GLTFSkin::*)()>(&GLTFSkin::get_joints),static_cast<void(GLTFSkin::*)(const PackedInt32Array &)>(&GLTFSkin::set_joints)>("joints")
            .property<static_cast<PackedInt32Array(GLTFSkin::*)()>(&GLTFSkin::get_non_joints),static_cast<void(GLTFSkin::*)(const PackedInt32Array &)>(&GLTFSkin::set_non_joints)>("non_joints")
            .property<static_cast<PackedInt32Array(GLTFSkin::*)()>(&GLTFSkin::get_roots),static_cast<void(GLTFSkin::*)(const PackedInt32Array &)>(&GLTFSkin::set_roots)>("roots")
            .property<static_cast<int32_t(GLTFSkin::*)()>(&GLTFSkin::get_skeleton),static_cast<void(GLTFSkin::*)(int32_t)>(&GLTFSkin::set_skeleton)>("skeleton")
            .property<static_cast<Dictionary(GLTFSkin::*)()>(&GLTFSkin::get_joint_i_to_bone_i),static_cast<void(GLTFSkin::*)(const Dictionary &)>(&GLTFSkin::set_joint_i_to_bone_i)>("joint_i_to_bone_i")
            .property<static_cast<Dictionary(GLTFSkin::*)()>(&GLTFSkin::get_joint_i_to_name),static_cast<void(GLTFSkin::*)(const Dictionary &)>(&GLTFSkin::set_joint_i_to_name)>("joint_i_to_name")
            .property<static_cast<Ref<Skin>(GLTFSkin::*)()>(&GLTFSkin::get_godot_skin),static_cast<void(GLTFSkin::*)(const Ref<Skin> &)>(&GLTFSkin::set_godot_skin)>("godot_skin")
;}