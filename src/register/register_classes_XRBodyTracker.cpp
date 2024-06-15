#include <godot_cpp/classes/xr_body_tracker.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/classes/xr_positional_tracker.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_XRBodyTracker() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<XRBodyTracker>("XRBodyTracker")
            .constructor<>()
            .base<XRPositionalTracker>()
            .property<static_cast<bool(XRBodyTracker::*)()const>(&XRBodyTracker::get_has_tracking_data),static_cast<void(XRBodyTracker::*)(bool)>(&XRBodyTracker::set_has_tracking_data)>("has_tracking_data")
            .property<static_cast<BitField<XRBodyTracker::BodyFlags>(XRBodyTracker::*)()const>(&XRBodyTracker::get_body_flags),static_cast<void(XRBodyTracker::*)(BitField<XRBodyTracker::BodyFlags>)>(&XRBodyTracker::set_body_flags)>("body_flags")
            .fun<static_cast<void(XRBodyTracker::*)(XRBodyTracker::Joint,BitField<XRBodyTracker::JointFlags>)>(&XRBodyTracker::set_joint_flags)>("set_joint_flags")
            .fun<static_cast<BitField<XRBodyTracker::JointFlags>(XRBodyTracker::*)(XRBodyTracker::Joint)const>(&XRBodyTracker::get_joint_flags)>("get_joint_flags")
            .fun<static_cast<void(XRBodyTracker::*)(XRBodyTracker::Joint,const Transform3D &)>(&XRBodyTracker::set_joint_transform)>("set_joint_transform")
            .fun<static_cast<Transform3D(XRBodyTracker::*)(XRBodyTracker::Joint)const>(&XRBodyTracker::get_joint_transform)>("get_joint_transform")
;    qjs::Value _BodyFlags = context->newObject();
    _BodyFlags["BODY_FLAG_UPPER_BODY_SUPPORTED"] = XRBodyTracker::BodyFlags::BODY_FLAG_UPPER_BODY_SUPPORTED;
    _BodyFlags["BODY_FLAG_LOWER_BODY_SUPPORTED"] = XRBodyTracker::BodyFlags::BODY_FLAG_LOWER_BODY_SUPPORTED;
    _BodyFlags["BODY_FLAG_HANDS_SUPPORTED"] = XRBodyTracker::BodyFlags::BODY_FLAG_HANDS_SUPPORTED;
    _module.add("BodyFlags", std::move(_BodyFlags));
    qjs::Value _Joint = context->newObject();
    _Joint["JOINT_ROOT"] = XRBodyTracker::Joint::JOINT_ROOT;
    _Joint["JOINT_HIPS"] = XRBodyTracker::Joint::JOINT_HIPS;
    _Joint["JOINT_SPINE"] = XRBodyTracker::Joint::JOINT_SPINE;
    _Joint["JOINT_CHEST"] = XRBodyTracker::Joint::JOINT_CHEST;
    _Joint["JOINT_UPPER_CHEST"] = XRBodyTracker::Joint::JOINT_UPPER_CHEST;
    _Joint["JOINT_NECK"] = XRBodyTracker::Joint::JOINT_NECK;
    _Joint["JOINT_HEAD"] = XRBodyTracker::Joint::JOINT_HEAD;
    _Joint["JOINT_HEAD_TIP"] = XRBodyTracker::Joint::JOINT_HEAD_TIP;
    _Joint["JOINT_LEFT_SHOULDER"] = XRBodyTracker::Joint::JOINT_LEFT_SHOULDER;
    _Joint["JOINT_LEFT_UPPER_ARM"] = XRBodyTracker::Joint::JOINT_LEFT_UPPER_ARM;
    _Joint["JOINT_LEFT_LOWER_ARM"] = XRBodyTracker::Joint::JOINT_LEFT_LOWER_ARM;
    _Joint["JOINT_RIGHT_SHOULDER"] = XRBodyTracker::Joint::JOINT_RIGHT_SHOULDER;
    _Joint["JOINT_RIGHT_UPPER_ARM"] = XRBodyTracker::Joint::JOINT_RIGHT_UPPER_ARM;
    _Joint["JOINT_RIGHT_LOWER_ARM"] = XRBodyTracker::Joint::JOINT_RIGHT_LOWER_ARM;
    _Joint["JOINT_LEFT_UPPER_LEG"] = XRBodyTracker::Joint::JOINT_LEFT_UPPER_LEG;
    _Joint["JOINT_LEFT_LOWER_LEG"] = XRBodyTracker::Joint::JOINT_LEFT_LOWER_LEG;
    _Joint["JOINT_LEFT_FOOT"] = XRBodyTracker::Joint::JOINT_LEFT_FOOT;
    _Joint["JOINT_LEFT_TOES"] = XRBodyTracker::Joint::JOINT_LEFT_TOES;
    _Joint["JOINT_RIGHT_UPPER_LEG"] = XRBodyTracker::Joint::JOINT_RIGHT_UPPER_LEG;
    _Joint["JOINT_RIGHT_LOWER_LEG"] = XRBodyTracker::Joint::JOINT_RIGHT_LOWER_LEG;
    _Joint["JOINT_RIGHT_FOOT"] = XRBodyTracker::Joint::JOINT_RIGHT_FOOT;
    _Joint["JOINT_RIGHT_TOES"] = XRBodyTracker::Joint::JOINT_RIGHT_TOES;
    _Joint["JOINT_LEFT_HAND"] = XRBodyTracker::Joint::JOINT_LEFT_HAND;
    _Joint["JOINT_LEFT_PALM"] = XRBodyTracker::Joint::JOINT_LEFT_PALM;
    _Joint["JOINT_LEFT_WRIST"] = XRBodyTracker::Joint::JOINT_LEFT_WRIST;
    _Joint["JOINT_LEFT_THUMB_METACARPAL"] = XRBodyTracker::Joint::JOINT_LEFT_THUMB_METACARPAL;
    _Joint["JOINT_LEFT_THUMB_PHALANX_PROXIMAL"] = XRBodyTracker::Joint::JOINT_LEFT_THUMB_PHALANX_PROXIMAL;
    _Joint["JOINT_LEFT_THUMB_PHALANX_DISTAL"] = XRBodyTracker::Joint::JOINT_LEFT_THUMB_PHALANX_DISTAL;
    _Joint["JOINT_LEFT_THUMB_TIP"] = XRBodyTracker::Joint::JOINT_LEFT_THUMB_TIP;
    _Joint["JOINT_LEFT_INDEX_FINGER_METACARPAL"] = XRBodyTracker::Joint::JOINT_LEFT_INDEX_FINGER_METACARPAL;
    _Joint["JOINT_LEFT_INDEX_FINGER_PHALANX_PROXIMAL"] = XRBodyTracker::Joint::JOINT_LEFT_INDEX_FINGER_PHALANX_PROXIMAL;
    _Joint["JOINT_LEFT_INDEX_FINGER_PHALANX_INTERMEDIATE"] = XRBodyTracker::Joint::JOINT_LEFT_INDEX_FINGER_PHALANX_INTERMEDIATE;
    _Joint["JOINT_LEFT_INDEX_FINGER_PHALANX_DISTAL"] = XRBodyTracker::Joint::JOINT_LEFT_INDEX_FINGER_PHALANX_DISTAL;
    _Joint["JOINT_LEFT_INDEX_FINGER_TIP"] = XRBodyTracker::Joint::JOINT_LEFT_INDEX_FINGER_TIP;
    _Joint["JOINT_LEFT_MIDDLE_FINGER_METACARPAL"] = XRBodyTracker::Joint::JOINT_LEFT_MIDDLE_FINGER_METACARPAL;
    _Joint["JOINT_LEFT_MIDDLE_FINGER_PHALANX_PROXIMAL"] = XRBodyTracker::Joint::JOINT_LEFT_MIDDLE_FINGER_PHALANX_PROXIMAL;
    _Joint["JOINT_LEFT_MIDDLE_FINGER_PHALANX_INTERMEDIATE"] = XRBodyTracker::Joint::JOINT_LEFT_MIDDLE_FINGER_PHALANX_INTERMEDIATE;
    _Joint["JOINT_LEFT_MIDDLE_FINGER_PHALANX_DISTAL"] = XRBodyTracker::Joint::JOINT_LEFT_MIDDLE_FINGER_PHALANX_DISTAL;
    _Joint["JOINT_LEFT_MIDDLE_FINGER_TIP"] = XRBodyTracker::Joint::JOINT_LEFT_MIDDLE_FINGER_TIP;
    _Joint["JOINT_LEFT_RING_FINGER_METACARPAL"] = XRBodyTracker::Joint::JOINT_LEFT_RING_FINGER_METACARPAL;
    _Joint["JOINT_LEFT_RING_FINGER_PHALANX_PROXIMAL"] = XRBodyTracker::Joint::JOINT_LEFT_RING_FINGER_PHALANX_PROXIMAL;
    _Joint["JOINT_LEFT_RING_FINGER_PHALANX_INTERMEDIATE"] = XRBodyTracker::Joint::JOINT_LEFT_RING_FINGER_PHALANX_INTERMEDIATE;
    _Joint["JOINT_LEFT_RING_FINGER_PHALANX_DISTAL"] = XRBodyTracker::Joint::JOINT_LEFT_RING_FINGER_PHALANX_DISTAL;
    _Joint["JOINT_LEFT_RING_FINGER_TIP"] = XRBodyTracker::Joint::JOINT_LEFT_RING_FINGER_TIP;
    _Joint["JOINT_LEFT_PINKY_FINGER_METACARPAL"] = XRBodyTracker::Joint::JOINT_LEFT_PINKY_FINGER_METACARPAL;
    _Joint["JOINT_LEFT_PINKY_FINGER_PHALANX_PROXIMAL"] = XRBodyTracker::Joint::JOINT_LEFT_PINKY_FINGER_PHALANX_PROXIMAL;
    _Joint["JOINT_LEFT_PINKY_FINGER_PHALANX_INTERMEDIATE"] = XRBodyTracker::Joint::JOINT_LEFT_PINKY_FINGER_PHALANX_INTERMEDIATE;
    _Joint["JOINT_LEFT_PINKY_FINGER_PHALANX_DISTAL"] = XRBodyTracker::Joint::JOINT_LEFT_PINKY_FINGER_PHALANX_DISTAL;
    _Joint["JOINT_LEFT_PINKY_FINGER_TIP"] = XRBodyTracker::Joint::JOINT_LEFT_PINKY_FINGER_TIP;
    _Joint["JOINT_RIGHT_HAND"] = XRBodyTracker::Joint::JOINT_RIGHT_HAND;
    _Joint["JOINT_RIGHT_PALM"] = XRBodyTracker::Joint::JOINT_RIGHT_PALM;
    _Joint["JOINT_RIGHT_WRIST"] = XRBodyTracker::Joint::JOINT_RIGHT_WRIST;
    _Joint["JOINT_RIGHT_THUMB_METACARPAL"] = XRBodyTracker::Joint::JOINT_RIGHT_THUMB_METACARPAL;
    _Joint["JOINT_RIGHT_THUMB_PHALANX_PROXIMAL"] = XRBodyTracker::Joint::JOINT_RIGHT_THUMB_PHALANX_PROXIMAL;
    _Joint["JOINT_RIGHT_THUMB_PHALANX_DISTAL"] = XRBodyTracker::Joint::JOINT_RIGHT_THUMB_PHALANX_DISTAL;
    _Joint["JOINT_RIGHT_THUMB_TIP"] = XRBodyTracker::Joint::JOINT_RIGHT_THUMB_TIP;
    _Joint["JOINT_RIGHT_INDEX_FINGER_METACARPAL"] = XRBodyTracker::Joint::JOINT_RIGHT_INDEX_FINGER_METACARPAL;
    _Joint["JOINT_RIGHT_INDEX_FINGER_PHALANX_PROXIMAL"] = XRBodyTracker::Joint::JOINT_RIGHT_INDEX_FINGER_PHALANX_PROXIMAL;
    _Joint["JOINT_RIGHT_INDEX_FINGER_PHALANX_INTERMEDIATE"] = XRBodyTracker::Joint::JOINT_RIGHT_INDEX_FINGER_PHALANX_INTERMEDIATE;
    _Joint["JOINT_RIGHT_INDEX_FINGER_PHALANX_DISTAL"] = XRBodyTracker::Joint::JOINT_RIGHT_INDEX_FINGER_PHALANX_DISTAL;
    _Joint["JOINT_RIGHT_INDEX_FINGER_TIP"] = XRBodyTracker::Joint::JOINT_RIGHT_INDEX_FINGER_TIP;
    _Joint["JOINT_RIGHT_MIDDLE_FINGER_METACARPAL"] = XRBodyTracker::Joint::JOINT_RIGHT_MIDDLE_FINGER_METACARPAL;
    _Joint["JOINT_RIGHT_MIDDLE_FINGER_PHALANX_PROXIMAL"] = XRBodyTracker::Joint::JOINT_RIGHT_MIDDLE_FINGER_PHALANX_PROXIMAL;
    _Joint["JOINT_RIGHT_MIDDLE_FINGER_PHALANX_INTERMEDIATE"] = XRBodyTracker::Joint::JOINT_RIGHT_MIDDLE_FINGER_PHALANX_INTERMEDIATE;
    _Joint["JOINT_RIGHT_MIDDLE_FINGER_PHALANX_DISTAL"] = XRBodyTracker::Joint::JOINT_RIGHT_MIDDLE_FINGER_PHALANX_DISTAL;
    _Joint["JOINT_RIGHT_MIDDLE_FINGER_TIP"] = XRBodyTracker::Joint::JOINT_RIGHT_MIDDLE_FINGER_TIP;
    _Joint["JOINT_RIGHT_RING_FINGER_METACARPAL"] = XRBodyTracker::Joint::JOINT_RIGHT_RING_FINGER_METACARPAL;
    _Joint["JOINT_RIGHT_RING_FINGER_PHALANX_PROXIMAL"] = XRBodyTracker::Joint::JOINT_RIGHT_RING_FINGER_PHALANX_PROXIMAL;
    _Joint["JOINT_RIGHT_RING_FINGER_PHALANX_INTERMEDIATE"] = XRBodyTracker::Joint::JOINT_RIGHT_RING_FINGER_PHALANX_INTERMEDIATE;
    _Joint["JOINT_RIGHT_RING_FINGER_PHALANX_DISTAL"] = XRBodyTracker::Joint::JOINT_RIGHT_RING_FINGER_PHALANX_DISTAL;
    _Joint["JOINT_RIGHT_RING_FINGER_TIP"] = XRBodyTracker::Joint::JOINT_RIGHT_RING_FINGER_TIP;
    _Joint["JOINT_RIGHT_PINKY_FINGER_METACARPAL"] = XRBodyTracker::Joint::JOINT_RIGHT_PINKY_FINGER_METACARPAL;
    _Joint["JOINT_RIGHT_PINKY_FINGER_PHALANX_PROXIMAL"] = XRBodyTracker::Joint::JOINT_RIGHT_PINKY_FINGER_PHALANX_PROXIMAL;
    _Joint["JOINT_RIGHT_PINKY_FINGER_PHALANX_INTERMEDIATE"] = XRBodyTracker::Joint::JOINT_RIGHT_PINKY_FINGER_PHALANX_INTERMEDIATE;
    _Joint["JOINT_RIGHT_PINKY_FINGER_PHALANX_DISTAL"] = XRBodyTracker::Joint::JOINT_RIGHT_PINKY_FINGER_PHALANX_DISTAL;
    _Joint["JOINT_RIGHT_PINKY_FINGER_TIP"] = XRBodyTracker::Joint::JOINT_RIGHT_PINKY_FINGER_TIP;
    _Joint["JOINT_MAX"] = XRBodyTracker::Joint::JOINT_MAX;
    _module.add("Joint", std::move(_Joint));
    qjs::Value _JointFlags = context->newObject();
    _JointFlags["JOINT_FLAG_ORIENTATION_VALID"] = XRBodyTracker::JointFlags::JOINT_FLAG_ORIENTATION_VALID;
    _JointFlags["JOINT_FLAG_ORIENTATION_TRACKED"] = XRBodyTracker::JointFlags::JOINT_FLAG_ORIENTATION_TRACKED;
    _JointFlags["JOINT_FLAG_POSITION_VALID"] = XRBodyTracker::JointFlags::JOINT_FLAG_POSITION_VALID;
    _JointFlags["JOINT_FLAG_POSITION_TRACKED"] = XRBodyTracker::JointFlags::JOINT_FLAG_POSITION_TRACKED;
    _module.add("JointFlags", std::move(_JointFlags));
}