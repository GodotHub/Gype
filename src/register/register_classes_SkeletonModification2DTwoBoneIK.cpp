#include <godot_cpp/classes/skeleton_modification2d_two_bone_ik.hpp>
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SkeletonModification2DTwoBoneIK() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<SkeletonModification2DTwoBoneIK>("SkeletonModification2DTwoBoneIK")
            .constructor<>()
            .base<SkeletonModification2D>()
            .property<static_cast<NodePath(SkeletonModification2DTwoBoneIK::*)()const>(&SkeletonModification2DTwoBoneIK::get_target_node),static_cast<void(SkeletonModification2DTwoBoneIK::*)(const NodePath &)>(&SkeletonModification2DTwoBoneIK::set_target_node)>("target_nodepath")
            .property<static_cast<double(SkeletonModification2DTwoBoneIK::*)()const>(&SkeletonModification2DTwoBoneIK::get_target_minimum_distance),static_cast<void(SkeletonModification2DTwoBoneIK::*)(double)>(&SkeletonModification2DTwoBoneIK::set_target_minimum_distance)>("target_minimum_distance")
            .property<static_cast<double(SkeletonModification2DTwoBoneIK::*)()const>(&SkeletonModification2DTwoBoneIK::get_target_maximum_distance),static_cast<void(SkeletonModification2DTwoBoneIK::*)(double)>(&SkeletonModification2DTwoBoneIK::set_target_maximum_distance)>("target_maximum_distance")
            .property<static_cast<bool(SkeletonModification2DTwoBoneIK::*)()const>(&SkeletonModification2DTwoBoneIK::get_flip_bend_direction),static_cast<void(SkeletonModification2DTwoBoneIK::*)(bool)>(&SkeletonModification2DTwoBoneIK::set_flip_bend_direction)>("flip_bend_direction")
            .fun<static_cast<void(SkeletonModification2DTwoBoneIK::*)(const NodePath &)>(&SkeletonModification2DTwoBoneIK::set_joint_one_bone2d_node)>("set_joint_one_bone2d_node")
            .fun<static_cast<NodePath(SkeletonModification2DTwoBoneIK::*)()const>(&SkeletonModification2DTwoBoneIK::get_joint_one_bone2d_node)>("get_joint_one_bone2d_node")
            .fun<static_cast<void(SkeletonModification2DTwoBoneIK::*)(int32_t)>(&SkeletonModification2DTwoBoneIK::set_joint_one_bone_idx)>("set_joint_one_bone_idx")
            .fun<static_cast<int32_t(SkeletonModification2DTwoBoneIK::*)()const>(&SkeletonModification2DTwoBoneIK::get_joint_one_bone_idx)>("get_joint_one_bone_idx")
            .fun<static_cast<void(SkeletonModification2DTwoBoneIK::*)(const NodePath &)>(&SkeletonModification2DTwoBoneIK::set_joint_two_bone2d_node)>("set_joint_two_bone2d_node")
            .fun<static_cast<NodePath(SkeletonModification2DTwoBoneIK::*)()const>(&SkeletonModification2DTwoBoneIK::get_joint_two_bone2d_node)>("get_joint_two_bone2d_node")
            .fun<static_cast<void(SkeletonModification2DTwoBoneIK::*)(int32_t)>(&SkeletonModification2DTwoBoneIK::set_joint_two_bone_idx)>("set_joint_two_bone_idx")
            .fun<static_cast<int32_t(SkeletonModification2DTwoBoneIK::*)()const>(&SkeletonModification2DTwoBoneIK::get_joint_two_bone_idx)>("get_joint_two_bone_idx")
;}