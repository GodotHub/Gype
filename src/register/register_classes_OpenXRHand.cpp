#include <godot_cpp/classes/open_xr_hand.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_OpenXRHand() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<OpenXRHand>("OpenXRHand")
            .constructor<>()
            .base<Node3D>()
            .property<static_cast<OpenXRHand::Hands(OpenXRHand::*)()const>(&OpenXRHand::get_hand),static_cast<void(OpenXRHand::*)(OpenXRHand::Hands)>(&OpenXRHand::set_hand)>("hand")
            .property<static_cast<OpenXRHand::MotionRange(OpenXRHand::*)()const>(&OpenXRHand::get_motion_range),static_cast<void(OpenXRHand::*)(OpenXRHand::MotionRange)>(&OpenXRHand::set_motion_range)>("motion_range")
            .property<static_cast<NodePath(OpenXRHand::*)()const>(&OpenXRHand::get_hand_skeleton),static_cast<void(OpenXRHand::*)(const NodePath &)>(&OpenXRHand::set_hand_skeleton)>("hand_skeleton")
            .property<static_cast<OpenXRHand::SkeletonRig(OpenXRHand::*)()const>(&OpenXRHand::get_skeleton_rig),static_cast<void(OpenXRHand::*)(OpenXRHand::SkeletonRig)>(&OpenXRHand::set_skeleton_rig)>("skeleton_rig")
            .property<static_cast<OpenXRHand::BoneUpdate(OpenXRHand::*)()const>(&OpenXRHand::get_bone_update),static_cast<void(OpenXRHand::*)(OpenXRHand::BoneUpdate)>(&OpenXRHand::set_bone_update)>("bone_update")
;    qjs::Value _Hands = context->newObject();
    _Hands["HAND_LEFT"] = OpenXRHand::Hands::HAND_LEFT;
    _Hands["HAND_RIGHT"] = OpenXRHand::Hands::HAND_RIGHT;
    _Hands["HAND_MAX"] = OpenXRHand::Hands::HAND_MAX;
    _module.add("Hands", std::move(_Hands));
    qjs::Value _MotionRange = context->newObject();
    _MotionRange["MOTION_RANGE_UNOBSTRUCTED"] = OpenXRHand::MotionRange::MOTION_RANGE_UNOBSTRUCTED;
    _MotionRange["MOTION_RANGE_CONFORM_TO_CONTROLLER"] = OpenXRHand::MotionRange::MOTION_RANGE_CONFORM_TO_CONTROLLER;
    _MotionRange["MOTION_RANGE_MAX"] = OpenXRHand::MotionRange::MOTION_RANGE_MAX;
    _module.add("MotionRange", std::move(_MotionRange));
    qjs::Value _SkeletonRig = context->newObject();
    _SkeletonRig["SKELETON_RIG_OPENXR"] = OpenXRHand::SkeletonRig::SKELETON_RIG_OPENXR;
    _SkeletonRig["SKELETON_RIG_HUMANOID"] = OpenXRHand::SkeletonRig::SKELETON_RIG_HUMANOID;
    _SkeletonRig["SKELETON_RIG_MAX"] = OpenXRHand::SkeletonRig::SKELETON_RIG_MAX;
    _module.add("SkeletonRig", std::move(_SkeletonRig));
    qjs::Value _BoneUpdate = context->newObject();
    _BoneUpdate["BONE_UPDATE_FULL"] = OpenXRHand::BoneUpdate::BONE_UPDATE_FULL;
    _BoneUpdate["BONE_UPDATE_ROTATION_ONLY"] = OpenXRHand::BoneUpdate::BONE_UPDATE_ROTATION_ONLY;
    _BoneUpdate["BONE_UPDATE_MAX"] = OpenXRHand::BoneUpdate::BONE_UPDATE_MAX;
    _module.add("BoneUpdate", std::move(_BoneUpdate));
}