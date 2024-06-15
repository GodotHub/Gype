#include <godot_cpp/classes/open_xr_interface.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/quaternion.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_OpenXRInterface() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<OpenXRInterface>("OpenXRInterface")
            .constructor<>()
            .base<XRInterface>()
            .property<static_cast<double(OpenXRInterface::*)()const>(&OpenXRInterface::get_display_refresh_rate),static_cast<void(OpenXRInterface::*)(double)>(&OpenXRInterface::set_display_refresh_rate)>("display_refresh_rate")
            .property<static_cast<double(OpenXRInterface::*)()const>(&OpenXRInterface::get_render_target_size_multiplier),static_cast<void(OpenXRInterface::*)(double)>(&OpenXRInterface::set_render_target_size_multiplier)>("render_target_size_multiplier")
            .property<static_cast<int32_t(OpenXRInterface::*)()const>(&OpenXRInterface::get_foveation_level),static_cast<void(OpenXRInterface::*)(int32_t)>(&OpenXRInterface::set_foveation_level)>("foveation_level")
            .property<static_cast<bool(OpenXRInterface::*)()const>(&OpenXRInterface::get_foveation_dynamic),static_cast<void(OpenXRInterface::*)(bool)>(&OpenXRInterface::set_foveation_dynamic)>("foveation_dynamic")
            .property<static_cast<double(OpenXRInterface::*)()const>(&OpenXRInterface::get_vrs_min_radius),static_cast<void(OpenXRInterface::*)(double)>(&OpenXRInterface::set_vrs_min_radius)>("vrs_min_radius")
            .property<static_cast<double(OpenXRInterface::*)()const>(&OpenXRInterface::get_vrs_strength),static_cast<void(OpenXRInterface::*)(double)>(&OpenXRInterface::set_vrs_strength)>("vrs_strength")
            .fun<static_cast<bool(OpenXRInterface::*)()const>(&OpenXRInterface::is_foveation_supported)>("is_foveation_supported")
            .fun<static_cast<bool(OpenXRInterface::*)(const String &)const>(&OpenXRInterface::is_action_set_active)>("is_action_set_active")
            .fun<static_cast<void(OpenXRInterface::*)(const String &,bool)>(&OpenXRInterface::set_action_set_active)>("set_action_set_active")
            .fun<static_cast<Array(OpenXRInterface::*)()const>(&OpenXRInterface::get_action_sets)>("get_action_sets")
            .fun<static_cast<Array(OpenXRInterface::*)()const>(&OpenXRInterface::get_available_display_refresh_rates)>("get_available_display_refresh_rates")
            .fun<static_cast<void(OpenXRInterface::*)(OpenXRInterface::Hand,OpenXRInterface::HandMotionRange)>(&OpenXRInterface::set_motion_range)>("set_motion_range")
            .fun<static_cast<OpenXRInterface::HandMotionRange(OpenXRInterface::*)(OpenXRInterface::Hand)const>(&OpenXRInterface::get_motion_range)>("get_motion_range")
            .fun<static_cast<OpenXRInterface::HandTrackedSource(OpenXRInterface::*)(OpenXRInterface::Hand)const>(&OpenXRInterface::get_hand_tracking_source)>("get_hand_tracking_source")
            .fun<static_cast<BitField<OpenXRInterface::HandJointFlags>(OpenXRInterface::*)(OpenXRInterface::Hand,OpenXRInterface::HandJoints)const>(&OpenXRInterface::get_hand_joint_flags)>("get_hand_joint_flags")
            .fun<static_cast<Quaternion(OpenXRInterface::*)(OpenXRInterface::Hand,OpenXRInterface::HandJoints)const>(&OpenXRInterface::get_hand_joint_rotation)>("get_hand_joint_rotation")
            .fun<static_cast<Vector3(OpenXRInterface::*)(OpenXRInterface::Hand,OpenXRInterface::HandJoints)const>(&OpenXRInterface::get_hand_joint_position)>("get_hand_joint_position")
            .fun<static_cast<double(OpenXRInterface::*)(OpenXRInterface::Hand,OpenXRInterface::HandJoints)const>(&OpenXRInterface::get_hand_joint_radius)>("get_hand_joint_radius")
            .fun<static_cast<Vector3(OpenXRInterface::*)(OpenXRInterface::Hand,OpenXRInterface::HandJoints)const>(&OpenXRInterface::get_hand_joint_linear_velocity)>("get_hand_joint_linear_velocity")
            .fun<static_cast<Vector3(OpenXRInterface::*)(OpenXRInterface::Hand,OpenXRInterface::HandJoints)const>(&OpenXRInterface::get_hand_joint_angular_velocity)>("get_hand_joint_angular_velocity")
            .fun<static_cast<bool(OpenXRInterface::*)()>(&OpenXRInterface::is_hand_tracking_supported)>("is_hand_tracking_supported")
            .fun<static_cast<bool(OpenXRInterface::*)()const>(&OpenXRInterface::is_hand_interaction_supported)>("is_hand_interaction_supported")
            .fun<static_cast<bool(OpenXRInterface::*)()>(&OpenXRInterface::is_eye_gaze_interaction_supported)>("is_eye_gaze_interaction_supported")
;    qjs::Value _Hand = context->newObject();
    _Hand["HAND_LEFT"] = OpenXRInterface::Hand::HAND_LEFT;
    _Hand["HAND_RIGHT"] = OpenXRInterface::Hand::HAND_RIGHT;
    _Hand["HAND_MAX"] = OpenXRInterface::Hand::HAND_MAX;
    _module.add("Hand", std::move(_Hand));
    qjs::Value _HandMotionRange = context->newObject();
    _HandMotionRange["HAND_MOTION_RANGE_UNOBSTRUCTED"] = OpenXRInterface::HandMotionRange::HAND_MOTION_RANGE_UNOBSTRUCTED;
    _HandMotionRange["HAND_MOTION_RANGE_CONFORM_TO_CONTROLLER"] = OpenXRInterface::HandMotionRange::HAND_MOTION_RANGE_CONFORM_TO_CONTROLLER;
    _HandMotionRange["HAND_MOTION_RANGE_MAX"] = OpenXRInterface::HandMotionRange::HAND_MOTION_RANGE_MAX;
    _module.add("HandMotionRange", std::move(_HandMotionRange));
    qjs::Value _HandTrackedSource = context->newObject();
    _HandTrackedSource["HAND_TRACKED_SOURCE_UNKNOWN"] = OpenXRInterface::HandTrackedSource::HAND_TRACKED_SOURCE_UNKNOWN;
    _HandTrackedSource["HAND_TRACKED_SOURCE_UNOBSTRUCTED"] = OpenXRInterface::HandTrackedSource::HAND_TRACKED_SOURCE_UNOBSTRUCTED;
    _HandTrackedSource["HAND_TRACKED_SOURCE_CONTROLLER"] = OpenXRInterface::HandTrackedSource::HAND_TRACKED_SOURCE_CONTROLLER;
    _HandTrackedSource["HAND_TRACKED_SOURCE_MAX"] = OpenXRInterface::HandTrackedSource::HAND_TRACKED_SOURCE_MAX;
    _module.add("HandTrackedSource", std::move(_HandTrackedSource));
    qjs::Value _HandJoints = context->newObject();
    _HandJoints["HAND_JOINT_PALM"] = OpenXRInterface::HandJoints::HAND_JOINT_PALM;
    _HandJoints["HAND_JOINT_WRIST"] = OpenXRInterface::HandJoints::HAND_JOINT_WRIST;
    _HandJoints["HAND_JOINT_THUMB_METACARPAL"] = OpenXRInterface::HandJoints::HAND_JOINT_THUMB_METACARPAL;
    _HandJoints["HAND_JOINT_THUMB_PROXIMAL"] = OpenXRInterface::HandJoints::HAND_JOINT_THUMB_PROXIMAL;
    _HandJoints["HAND_JOINT_THUMB_DISTAL"] = OpenXRInterface::HandJoints::HAND_JOINT_THUMB_DISTAL;
    _HandJoints["HAND_JOINT_THUMB_TIP"] = OpenXRInterface::HandJoints::HAND_JOINT_THUMB_TIP;
    _HandJoints["HAND_JOINT_INDEX_METACARPAL"] = OpenXRInterface::HandJoints::HAND_JOINT_INDEX_METACARPAL;
    _HandJoints["HAND_JOINT_INDEX_PROXIMAL"] = OpenXRInterface::HandJoints::HAND_JOINT_INDEX_PROXIMAL;
    _HandJoints["HAND_JOINT_INDEX_INTERMEDIATE"] = OpenXRInterface::HandJoints::HAND_JOINT_INDEX_INTERMEDIATE;
    _HandJoints["HAND_JOINT_INDEX_DISTAL"] = OpenXRInterface::HandJoints::HAND_JOINT_INDEX_DISTAL;
    _HandJoints["HAND_JOINT_INDEX_TIP"] = OpenXRInterface::HandJoints::HAND_JOINT_INDEX_TIP;
    _HandJoints["HAND_JOINT_MIDDLE_METACARPAL"] = OpenXRInterface::HandJoints::HAND_JOINT_MIDDLE_METACARPAL;
    _HandJoints["HAND_JOINT_MIDDLE_PROXIMAL"] = OpenXRInterface::HandJoints::HAND_JOINT_MIDDLE_PROXIMAL;
    _HandJoints["HAND_JOINT_MIDDLE_INTERMEDIATE"] = OpenXRInterface::HandJoints::HAND_JOINT_MIDDLE_INTERMEDIATE;
    _HandJoints["HAND_JOINT_MIDDLE_DISTAL"] = OpenXRInterface::HandJoints::HAND_JOINT_MIDDLE_DISTAL;
    _HandJoints["HAND_JOINT_MIDDLE_TIP"] = OpenXRInterface::HandJoints::HAND_JOINT_MIDDLE_TIP;
    _HandJoints["HAND_JOINT_RING_METACARPAL"] = OpenXRInterface::HandJoints::HAND_JOINT_RING_METACARPAL;
    _HandJoints["HAND_JOINT_RING_PROXIMAL"] = OpenXRInterface::HandJoints::HAND_JOINT_RING_PROXIMAL;
    _HandJoints["HAND_JOINT_RING_INTERMEDIATE"] = OpenXRInterface::HandJoints::HAND_JOINT_RING_INTERMEDIATE;
    _HandJoints["HAND_JOINT_RING_DISTAL"] = OpenXRInterface::HandJoints::HAND_JOINT_RING_DISTAL;
    _HandJoints["HAND_JOINT_RING_TIP"] = OpenXRInterface::HandJoints::HAND_JOINT_RING_TIP;
    _HandJoints["HAND_JOINT_LITTLE_METACARPAL"] = OpenXRInterface::HandJoints::HAND_JOINT_LITTLE_METACARPAL;
    _HandJoints["HAND_JOINT_LITTLE_PROXIMAL"] = OpenXRInterface::HandJoints::HAND_JOINT_LITTLE_PROXIMAL;
    _HandJoints["HAND_JOINT_LITTLE_INTERMEDIATE"] = OpenXRInterface::HandJoints::HAND_JOINT_LITTLE_INTERMEDIATE;
    _HandJoints["HAND_JOINT_LITTLE_DISTAL"] = OpenXRInterface::HandJoints::HAND_JOINT_LITTLE_DISTAL;
    _HandJoints["HAND_JOINT_LITTLE_TIP"] = OpenXRInterface::HandJoints::HAND_JOINT_LITTLE_TIP;
    _HandJoints["HAND_JOINT_MAX"] = OpenXRInterface::HandJoints::HAND_JOINT_MAX;
    _module.add("HandJoints", std::move(_HandJoints));
    qjs::Value _HandJointFlags = context->newObject();
    _HandJointFlags["HAND_JOINT_NONE"] = OpenXRInterface::HandJointFlags::HAND_JOINT_NONE;
    _HandJointFlags["HAND_JOINT_ORIENTATION_VALID"] = OpenXRInterface::HandJointFlags::HAND_JOINT_ORIENTATION_VALID;
    _HandJointFlags["HAND_JOINT_ORIENTATION_TRACKED"] = OpenXRInterface::HandJointFlags::HAND_JOINT_ORIENTATION_TRACKED;
    _HandJointFlags["HAND_JOINT_POSITION_VALID"] = OpenXRInterface::HandJointFlags::HAND_JOINT_POSITION_VALID;
    _HandJointFlags["HAND_JOINT_POSITION_TRACKED"] = OpenXRInterface::HandJointFlags::HAND_JOINT_POSITION_TRACKED;
    _HandJointFlags["HAND_JOINT_LINEAR_VELOCITY_VALID"] = OpenXRInterface::HandJointFlags::HAND_JOINT_LINEAR_VELOCITY_VALID;
    _HandJointFlags["HAND_JOINT_ANGULAR_VELOCITY_VALID"] = OpenXRInterface::HandJointFlags::HAND_JOINT_ANGULAR_VELOCITY_VALID;
    _module.add("HandJointFlags", std::move(_HandJointFlags));
}