#include <godot_cpp/classes/xr_hand_tracker.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/xr_positional_tracker.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_XRHandTracker() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<XRHandTracker>("XRHandTracker")
            .constructor<>()
            .base<XRPositionalTracker>()
            .property<static_cast<bool(XRHandTracker::*)()const>(&XRHandTracker::get_has_tracking_data),static_cast<void(XRHandTracker::*)(bool)>(&XRHandTracker::set_has_tracking_data)>("has_tracking_data")
            .property<static_cast<XRHandTracker::HandTrackingSource(XRHandTracker::*)()const>(&XRHandTracker::get_hand_tracking_source),static_cast<void(XRHandTracker::*)(XRHandTracker::HandTrackingSource)>(&XRHandTracker::set_hand_tracking_source)>("hand_tracking_source")
            .fun<static_cast<void(XRHandTracker::*)(XRHandTracker::HandJoint,BitField<XRHandTracker::HandJointFlags>)>(&XRHandTracker::set_hand_joint_flags)>("set_hand_joint_flags")
            .fun<static_cast<BitField<XRHandTracker::HandJointFlags>(XRHandTracker::*)(XRHandTracker::HandJoint)const>(&XRHandTracker::get_hand_joint_flags)>("get_hand_joint_flags")
            .fun<static_cast<void(XRHandTracker::*)(XRHandTracker::HandJoint,const Transform3D &)>(&XRHandTracker::set_hand_joint_transform)>("set_hand_joint_transform")
            .fun<static_cast<Transform3D(XRHandTracker::*)(XRHandTracker::HandJoint)const>(&XRHandTracker::get_hand_joint_transform)>("get_hand_joint_transform")
            .fun<static_cast<void(XRHandTracker::*)(XRHandTracker::HandJoint,double)>(&XRHandTracker::set_hand_joint_radius)>("set_hand_joint_radius")
            .fun<static_cast<double(XRHandTracker::*)(XRHandTracker::HandJoint)const>(&XRHandTracker::get_hand_joint_radius)>("get_hand_joint_radius")
            .fun<static_cast<void(XRHandTracker::*)(XRHandTracker::HandJoint,const Vector3 &)>(&XRHandTracker::set_hand_joint_linear_velocity)>("set_hand_joint_linear_velocity")
            .fun<static_cast<Vector3(XRHandTracker::*)(XRHandTracker::HandJoint)const>(&XRHandTracker::get_hand_joint_linear_velocity)>("get_hand_joint_linear_velocity")
            .fun<static_cast<void(XRHandTracker::*)(XRHandTracker::HandJoint,const Vector3 &)>(&XRHandTracker::set_hand_joint_angular_velocity)>("set_hand_joint_angular_velocity")
            .fun<static_cast<Vector3(XRHandTracker::*)(XRHandTracker::HandJoint)const>(&XRHandTracker::get_hand_joint_angular_velocity)>("get_hand_joint_angular_velocity")
;    qjs::Value _HandTrackingSource = context->newObject();
    _HandTrackingSource["HAND_TRACKING_SOURCE_UNKNOWN"] = XRHandTracker::HandTrackingSource::HAND_TRACKING_SOURCE_UNKNOWN;
    _HandTrackingSource["HAND_TRACKING_SOURCE_UNOBSTRUCTED"] = XRHandTracker::HandTrackingSource::HAND_TRACKING_SOURCE_UNOBSTRUCTED;
    _HandTrackingSource["HAND_TRACKING_SOURCE_CONTROLLER"] = XRHandTracker::HandTrackingSource::HAND_TRACKING_SOURCE_CONTROLLER;
    _HandTrackingSource["HAND_TRACKING_SOURCE_MAX"] = XRHandTracker::HandTrackingSource::HAND_TRACKING_SOURCE_MAX;
    _module.add("HandTrackingSource", std::move(_HandTrackingSource));
    qjs::Value _HandJoint = context->newObject();
    _HandJoint["HAND_JOINT_PALM"] = XRHandTracker::HandJoint::HAND_JOINT_PALM;
    _HandJoint["HAND_JOINT_WRIST"] = XRHandTracker::HandJoint::HAND_JOINT_WRIST;
    _HandJoint["HAND_JOINT_THUMB_METACARPAL"] = XRHandTracker::HandJoint::HAND_JOINT_THUMB_METACARPAL;
    _HandJoint["HAND_JOINT_THUMB_PHALANX_PROXIMAL"] = XRHandTracker::HandJoint::HAND_JOINT_THUMB_PHALANX_PROXIMAL;
    _HandJoint["HAND_JOINT_THUMB_PHALANX_DISTAL"] = XRHandTracker::HandJoint::HAND_JOINT_THUMB_PHALANX_DISTAL;
    _HandJoint["HAND_JOINT_THUMB_TIP"] = XRHandTracker::HandJoint::HAND_JOINT_THUMB_TIP;
    _HandJoint["HAND_JOINT_INDEX_FINGER_METACARPAL"] = XRHandTracker::HandJoint::HAND_JOINT_INDEX_FINGER_METACARPAL;
    _HandJoint["HAND_JOINT_INDEX_FINGER_PHALANX_PROXIMAL"] = XRHandTracker::HandJoint::HAND_JOINT_INDEX_FINGER_PHALANX_PROXIMAL;
    _HandJoint["HAND_JOINT_INDEX_FINGER_PHALANX_INTERMEDIATE"] = XRHandTracker::HandJoint::HAND_JOINT_INDEX_FINGER_PHALANX_INTERMEDIATE;
    _HandJoint["HAND_JOINT_INDEX_FINGER_PHALANX_DISTAL"] = XRHandTracker::HandJoint::HAND_JOINT_INDEX_FINGER_PHALANX_DISTAL;
    _HandJoint["HAND_JOINT_INDEX_FINGER_TIP"] = XRHandTracker::HandJoint::HAND_JOINT_INDEX_FINGER_TIP;
    _HandJoint["HAND_JOINT_MIDDLE_FINGER_METACARPAL"] = XRHandTracker::HandJoint::HAND_JOINT_MIDDLE_FINGER_METACARPAL;
    _HandJoint["HAND_JOINT_MIDDLE_FINGER_PHALANX_PROXIMAL"] = XRHandTracker::HandJoint::HAND_JOINT_MIDDLE_FINGER_PHALANX_PROXIMAL;
    _HandJoint["HAND_JOINT_MIDDLE_FINGER_PHALANX_INTERMEDIATE"] = XRHandTracker::HandJoint::HAND_JOINT_MIDDLE_FINGER_PHALANX_INTERMEDIATE;
    _HandJoint["HAND_JOINT_MIDDLE_FINGER_PHALANX_DISTAL"] = XRHandTracker::HandJoint::HAND_JOINT_MIDDLE_FINGER_PHALANX_DISTAL;
    _HandJoint["HAND_JOINT_MIDDLE_FINGER_TIP"] = XRHandTracker::HandJoint::HAND_JOINT_MIDDLE_FINGER_TIP;
    _HandJoint["HAND_JOINT_RING_FINGER_METACARPAL"] = XRHandTracker::HandJoint::HAND_JOINT_RING_FINGER_METACARPAL;
    _HandJoint["HAND_JOINT_RING_FINGER_PHALANX_PROXIMAL"] = XRHandTracker::HandJoint::HAND_JOINT_RING_FINGER_PHALANX_PROXIMAL;
    _HandJoint["HAND_JOINT_RING_FINGER_PHALANX_INTERMEDIATE"] = XRHandTracker::HandJoint::HAND_JOINT_RING_FINGER_PHALANX_INTERMEDIATE;
    _HandJoint["HAND_JOINT_RING_FINGER_PHALANX_DISTAL"] = XRHandTracker::HandJoint::HAND_JOINT_RING_FINGER_PHALANX_DISTAL;
    _HandJoint["HAND_JOINT_RING_FINGER_TIP"] = XRHandTracker::HandJoint::HAND_JOINT_RING_FINGER_TIP;
    _HandJoint["HAND_JOINT_PINKY_FINGER_METACARPAL"] = XRHandTracker::HandJoint::HAND_JOINT_PINKY_FINGER_METACARPAL;
    _HandJoint["HAND_JOINT_PINKY_FINGER_PHALANX_PROXIMAL"] = XRHandTracker::HandJoint::HAND_JOINT_PINKY_FINGER_PHALANX_PROXIMAL;
    _HandJoint["HAND_JOINT_PINKY_FINGER_PHALANX_INTERMEDIATE"] = XRHandTracker::HandJoint::HAND_JOINT_PINKY_FINGER_PHALANX_INTERMEDIATE;
    _HandJoint["HAND_JOINT_PINKY_FINGER_PHALANX_DISTAL"] = XRHandTracker::HandJoint::HAND_JOINT_PINKY_FINGER_PHALANX_DISTAL;
    _HandJoint["HAND_JOINT_PINKY_FINGER_TIP"] = XRHandTracker::HandJoint::HAND_JOINT_PINKY_FINGER_TIP;
    _HandJoint["HAND_JOINT_MAX"] = XRHandTracker::HandJoint::HAND_JOINT_MAX;
    _module.add("HandJoint", std::move(_HandJoint));
    qjs::Value _HandJointFlags = context->newObject();
    _HandJointFlags["HAND_JOINT_FLAG_ORIENTATION_VALID"] = XRHandTracker::HandJointFlags::HAND_JOINT_FLAG_ORIENTATION_VALID;
    _HandJointFlags["HAND_JOINT_FLAG_ORIENTATION_TRACKED"] = XRHandTracker::HandJointFlags::HAND_JOINT_FLAG_ORIENTATION_TRACKED;
    _HandJointFlags["HAND_JOINT_FLAG_POSITION_VALID"] = XRHandTracker::HandJointFlags::HAND_JOINT_FLAG_POSITION_VALID;
    _HandJointFlags["HAND_JOINT_FLAG_POSITION_TRACKED"] = XRHandTracker::HandJointFlags::HAND_JOINT_FLAG_POSITION_TRACKED;
    _HandJointFlags["HAND_JOINT_FLAG_LINEAR_VELOCITY_VALID"] = XRHandTracker::HandJointFlags::HAND_JOINT_FLAG_LINEAR_VELOCITY_VALID;
    _HandJointFlags["HAND_JOINT_FLAG_ANGULAR_VELOCITY_VALID"] = XRHandTracker::HandJointFlags::HAND_JOINT_FLAG_ANGULAR_VELOCITY_VALID;
    _module.add("HandJointFlags", std::move(_HandJointFlags));
}