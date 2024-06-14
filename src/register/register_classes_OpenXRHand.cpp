#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/open_xr_hand.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OpenXRHand() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<OpenXRHand>("OpenXRHand")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<OpenXRHand::Hands (OpenXRHand::*)() const>(&OpenXRHand::get_hand), static_cast<void (OpenXRHand::*)(OpenXRHand::Hands)>(&OpenXRHand::set_hand)>((new std::string("hand"))->c_str())
			.property<static_cast<OpenXRHand::MotionRange (OpenXRHand::*)() const>(&OpenXRHand::get_motion_range), static_cast<void (OpenXRHand::*)(OpenXRHand::MotionRange)>(&OpenXRHand::set_motion_range)>((new std::string("motion_range"))->c_str())
			.property<static_cast<NodePath (OpenXRHand::*)() const>(&OpenXRHand::get_hand_skeleton), static_cast<void (OpenXRHand::*)(const NodePath &)>(&OpenXRHand::set_hand_skeleton)>((new std::string("hand_skeleton"))->c_str())
			.property<static_cast<OpenXRHand::SkeletonRig (OpenXRHand::*)() const>(&OpenXRHand::get_skeleton_rig), static_cast<void (OpenXRHand::*)(OpenXRHand::SkeletonRig)>(&OpenXRHand::set_skeleton_rig)>((new std::string("skeleton_rig"))->c_str())
			.property<static_cast<OpenXRHand::BoneUpdate (OpenXRHand::*)() const>(&OpenXRHand::get_bone_update), static_cast<void (OpenXRHand::*)(OpenXRHand::BoneUpdate)>(&OpenXRHand::set_bone_update)>((new std::string("bone_update"))->c_str());
	qjs::Value _Hands = context->newObject();
	_Hands[(new std::string("HAND_LEFT"))->c_str()] = OpenXRHand::Hands::HAND_LEFT;
	_Hands[(new std::string("HAND_RIGHT"))->c_str()] = OpenXRHand::Hands::HAND_RIGHT;
	_Hands[(new std::string("HAND_MAX"))->c_str()] = OpenXRHand::Hands::HAND_MAX;
	_module.add("Hands", std::move(_Hands));
	qjs::Value _MotionRange = context->newObject();
	_MotionRange[(new std::string("MOTION_RANGE_UNOBSTRUCTED"))->c_str()] = OpenXRHand::MotionRange::MOTION_RANGE_UNOBSTRUCTED;
	_MotionRange[(new std::string("MOTION_RANGE_CONFORM_TO_CONTROLLER"))->c_str()] = OpenXRHand::MotionRange::MOTION_RANGE_CONFORM_TO_CONTROLLER;
	_MotionRange[(new std::string("MOTION_RANGE_MAX"))->c_str()] = OpenXRHand::MotionRange::MOTION_RANGE_MAX;
	_module.add("MotionRange", std::move(_MotionRange));
	qjs::Value _SkeletonRig = context->newObject();
	_SkeletonRig[(new std::string("SKELETON_RIG_OPENXR"))->c_str()] = OpenXRHand::SkeletonRig::SKELETON_RIG_OPENXR;
	_SkeletonRig[(new std::string("SKELETON_RIG_HUMANOID"))->c_str()] = OpenXRHand::SkeletonRig::SKELETON_RIG_HUMANOID;
	_SkeletonRig[(new std::string("SKELETON_RIG_MAX"))->c_str()] = OpenXRHand::SkeletonRig::SKELETON_RIG_MAX;
	_module.add("SkeletonRig", std::move(_SkeletonRig));
	qjs::Value _BoneUpdate = context->newObject();
	_BoneUpdate[(new std::string("BONE_UPDATE_FULL"))->c_str()] = OpenXRHand::BoneUpdate::BONE_UPDATE_FULL;
	_BoneUpdate[(new std::string("BONE_UPDATE_ROTATION_ONLY"))->c_str()] = OpenXRHand::BoneUpdate::BONE_UPDATE_ROTATION_ONLY;
	_BoneUpdate[(new std::string("BONE_UPDATE_MAX"))->c_str()] = OpenXRHand::BoneUpdate::BONE_UPDATE_MAX;
	_module.add("BoneUpdate", std::move(_BoneUpdate));
}