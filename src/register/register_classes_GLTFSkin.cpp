#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/gltf_skin.hpp>

using namespace godot;

void register_classes_GLTFSkin() {
    qjs::Context::Module &_module = _General;
    _module.class_<GLTFSkin>("GLTFSkin")
           .constructor<>()
           .property<GLTFSkin::get_skin_root, GLTFSkin::set_skin_root>("skin_root")
           .property<GLTFSkin::get_joints_original, GLTFSkin::set_joints_original>("joints_original")
           .property<GLTFSkin::get_inverse_binds, GLTFSkin::set_inverse_binds>("inverse_binds")
           .property<GLTFSkin::get_joints, GLTFSkin::set_joints>("joints")
           .property<GLTFSkin::get_non_joints, GLTFSkin::set_non_joints>("non_joints")
           .property<GLTFSkin::get_roots, GLTFSkin::set_roots>("roots")
           .property<GLTFSkin::get_skeleton, GLTFSkin::set_skeleton>("skeleton")
           .property<GLTFSkin::get_joint_i_to_bone_i, GLTFSkin::set_joint_i_to_bone_i>("joint_i_to_bone_i")
           .property<GLTFSkin::get_joint_i_to_name, GLTFSkin::set_joint_i_to_name>("joint_i_to_name")
           .property<GLTFSkin::get_godot_skin, GLTFSkin::set_godot_skin>("godot_skin")
;}