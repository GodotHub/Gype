
#include <godot_cpp/classes/open_xr_interface.hpp>
#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/quaternion.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OpenXRInterface() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<OpenXRInterface>("OpenXRInterface")
			.constructor<>()
			.base<XRInterface>()
			.property<static_cast<double (OpenXRInterface::*)() const>(&OpenXRInterface::get_display_refresh_rate), static_cast<void (OpenXRInterface::*)(double)>(&OpenXRInterface::set_display_refresh_rate)>((new std::string("display_refresh_rate"))->c_str())
			.property<static_cast<double (OpenXRInterface::*)() const>(&OpenXRInterface::get_render_target_size_multiplier), static_cast<void (OpenXRInterface::*)(double)>(&OpenXRInterface::set_render_target_size_multiplier)>((new std::string("render_target_size_multiplier"))->c_str())
			.property<static_cast<int32_t (OpenXRInterface::*)() const>(&OpenXRInterface::get_foveation_level), static_cast<void (OpenXRInterface::*)(int32_t)>(&OpenXRInterface::set_foveation_level)>((new std::string("foveation_level"))->c_str())
			.property<static_cast<bool (OpenXRInterface::*)() const>(&OpenXRInterface::get_foveation_dynamic), static_cast<void (OpenXRInterface::*)(bool)>(&OpenXRInterface::set_foveation_dynamic)>((new std::string("foveation_dynamic"))->c_str())
			.property<static_cast<double (OpenXRInterface::*)() const>(&OpenXRInterface::get_vrs_min_radius), static_cast<void (OpenXRInterface::*)(double)>(&OpenXRInterface::set_vrs_min_radius)>((new std::string("vrs_min_radius"))->c_str())
			.property<static_cast<double (OpenXRInterface::*)() const>(&OpenXRInterface::get_vrs_strength), static_cast<void (OpenXRInterface::*)(double)>(&OpenXRInterface::set_vrs_strength)>((new std::string("vrs_strength"))->c_str())
			.fun<static_cast<bool (OpenXRInterface::*)() const>(&OpenXRInterface::is_foveation_supported)>((new std::string("is_foveation_supported"))->c_str())
			.fun<static_cast<bool (OpenXRInterface::*)(const String &) const>(&OpenXRInterface::is_action_set_active)>((new std::string("is_action_set_active"))->c_str())
			.fun<static_cast<void (OpenXRInterface::*)(const String &, bool)>(&OpenXRInterface::set_action_set_active)>((new std::string("set_action_set_active"))->c_str())
			.fun<static_cast<Array (OpenXRInterface::*)() const>(&OpenXRInterface::get_action_sets)>((new std::string("get_action_sets"))->c_str())
			.fun<static_cast<Array (OpenXRInterface::*)() const>(&OpenXRInterface::get_available_display_refresh_rates)>((new std::string("get_available_display_refresh_rates"))->c_str())
			.fun<static_cast<void (OpenXRInterface::*)(OpenXRInterface::Hand, OpenXRInterface::HandMotionRange)>(&OpenXRInterface::set_motion_range)>((new std::string("set_motion_range"))->c_str())
			.fun<static_cast<OpenXRInterface::HandMotionRange (OpenXRInterface::*)(OpenXRInterface::Hand) const>(&OpenXRInterface::get_motion_range)>((new std::string("get_motion_range"))->c_str())
			.fun<static_cast<OpenXRInterface::HandTrackedSource (OpenXRInterface::*)(OpenXRInterface::Hand) const>(&OpenXRInterface::get_hand_tracking_source)>((new std::string("get_hand_tracking_source"))->c_str())
			.fun<static_cast<BitField<OpenXRInterface::HandJointFlags> (OpenXRInterface::*)(OpenXRInterface::Hand, OpenXRInterface::HandJoints) const>(&OpenXRInterface::get_hand_joint_flags)>((new std::string("get_hand_joint_flags"))->c_str())
			.fun<static_cast<Quaternion (OpenXRInterface::*)(OpenXRInterface::Hand, OpenXRInterface::HandJoints) const>(&OpenXRInterface::get_hand_joint_rotation)>((new std::string("get_hand_joint_rotation"))->c_str())
			.fun<static_cast<Vector3 (OpenXRInterface::*)(OpenXRInterface::Hand, OpenXRInterface::HandJoints) const>(&OpenXRInterface::get_hand_joint_position)>((new std::string("get_hand_joint_position"))->c_str())
			.fun<static_cast<double (OpenXRInterface::*)(OpenXRInterface::Hand, OpenXRInterface::HandJoints) const>(&OpenXRInterface::get_hand_joint_radius)>((new std::string("get_hand_joint_radius"))->c_str())
			.fun<static_cast<Vector3 (OpenXRInterface::*)(OpenXRInterface::Hand, OpenXRInterface::HandJoints) const>(&OpenXRInterface::get_hand_joint_linear_velocity)>((new std::string("get_hand_joint_linear_velocity"))->c_str())
			.fun<static_cast<Vector3 (OpenXRInterface::*)(OpenXRInterface::Hand, OpenXRInterface::HandJoints) const>(&OpenXRInterface::get_hand_joint_angular_velocity)>((new std::string("get_hand_joint_angular_velocity"))->c_str())
			.fun<static_cast<bool (OpenXRInterface::*)()>(&OpenXRInterface::is_hand_tracking_supported)>((new std::string("is_hand_tracking_supported"))->c_str())
			.fun<static_cast<bool (OpenXRInterface::*)() const>(&OpenXRInterface::is_hand_interaction_supported)>((new std::string("is_hand_interaction_supported"))->c_str())
			.fun<static_cast<bool (OpenXRInterface::*)()>(&OpenXRInterface::is_eye_gaze_interaction_supported)>((new std::string("is_eye_gaze_interaction_supported"))->c_str());
	qjs::Value _Hand = context->newObject();
	_Hand[(new std::string("HAND_LEFT"))->c_str()] = OpenXRInterface::Hand::HAND_LEFT;
	_Hand[(new std::string("HAND_RIGHT"))->c_str()] = OpenXRInterface::Hand::HAND_RIGHT;
	_Hand[(new std::string("HAND_MAX"))->c_str()] = OpenXRInterface::Hand::HAND_MAX;
	_module.add("Hand", std::move(_Hand));
	qjs::Value _HandMotionRange = context->newObject();
	_HandMotionRange[(new std::string("HAND_MOTION_RANGE_UNOBSTRUCTED"))->c_str()] = OpenXRInterface::HandMotionRange::HAND_MOTION_RANGE_UNOBSTRUCTED;
	_HandMotionRange[(new std::string("HAND_MOTION_RANGE_CONFORM_TO_CONTROLLER"))->c_str()] = OpenXRInterface::HandMotionRange::HAND_MOTION_RANGE_CONFORM_TO_CONTROLLER;
	_HandMotionRange[(new std::string("HAND_MOTION_RANGE_MAX"))->c_str()] = OpenXRInterface::HandMotionRange::HAND_MOTION_RANGE_MAX;
	_module.add("HandMotionRange", std::move(_HandMotionRange));
	qjs::Value _HandTrackedSource = context->newObject();
	_HandTrackedSource[(new std::string("HAND_TRACKED_SOURCE_UNKNOWN"))->c_str()] = OpenXRInterface::HandTrackedSource::HAND_TRACKED_SOURCE_UNKNOWN;
	_HandTrackedSource[(new std::string("HAND_TRACKED_SOURCE_UNOBSTRUCTED"))->c_str()] = OpenXRInterface::HandTrackedSource::HAND_TRACKED_SOURCE_UNOBSTRUCTED;
	_HandTrackedSource[(new std::string("HAND_TRACKED_SOURCE_CONTROLLER"))->c_str()] = OpenXRInterface::HandTrackedSource::HAND_TRACKED_SOURCE_CONTROLLER;
	_HandTrackedSource[(new std::string("HAND_TRACKED_SOURCE_MAX"))->c_str()] = OpenXRInterface::HandTrackedSource::HAND_TRACKED_SOURCE_MAX;
	_module.add("HandTrackedSource", std::move(_HandTrackedSource));
	qjs::Value _HandJoints = context->newObject();
	_HandJoints[(new std::string("HAND_JOINT_PALM"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_PALM;
	_HandJoints[(new std::string("HAND_JOINT_WRIST"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_WRIST;
	_HandJoints[(new std::string("HAND_JOINT_THUMB_METACARPAL"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_THUMB_METACARPAL;
	_HandJoints[(new std::string("HAND_JOINT_THUMB_PROXIMAL"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_THUMB_PROXIMAL;
	_HandJoints[(new std::string("HAND_JOINT_THUMB_DISTAL"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_THUMB_DISTAL;
	_HandJoints[(new std::string("HAND_JOINT_THUMB_TIP"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_THUMB_TIP;
	_HandJoints[(new std::string("HAND_JOINT_INDEX_METACARPAL"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_INDEX_METACARPAL;
	_HandJoints[(new std::string("HAND_JOINT_INDEX_PROXIMAL"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_INDEX_PROXIMAL;
	_HandJoints[(new std::string("HAND_JOINT_INDEX_INTERMEDIATE"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_INDEX_INTERMEDIATE;
	_HandJoints[(new std::string("HAND_JOINT_INDEX_DISTAL"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_INDEX_DISTAL;
	_HandJoints[(new std::string("HAND_JOINT_INDEX_TIP"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_INDEX_TIP;
	_HandJoints[(new std::string("HAND_JOINT_MIDDLE_METACARPAL"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_MIDDLE_METACARPAL;
	_HandJoints[(new std::string("HAND_JOINT_MIDDLE_PROXIMAL"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_MIDDLE_PROXIMAL;
	_HandJoints[(new std::string("HAND_JOINT_MIDDLE_INTERMEDIATE"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_MIDDLE_INTERMEDIATE;
	_HandJoints[(new std::string("HAND_JOINT_MIDDLE_DISTAL"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_MIDDLE_DISTAL;
	_HandJoints[(new std::string("HAND_JOINT_MIDDLE_TIP"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_MIDDLE_TIP;
	_HandJoints[(new std::string("HAND_JOINT_RING_METACARPAL"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_RING_METACARPAL;
	_HandJoints[(new std::string("HAND_JOINT_RING_PROXIMAL"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_RING_PROXIMAL;
	_HandJoints[(new std::string("HAND_JOINT_RING_INTERMEDIATE"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_RING_INTERMEDIATE;
	_HandJoints[(new std::string("HAND_JOINT_RING_DISTAL"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_RING_DISTAL;
	_HandJoints[(new std::string("HAND_JOINT_RING_TIP"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_RING_TIP;
	_HandJoints[(new std::string("HAND_JOINT_LITTLE_METACARPAL"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_LITTLE_METACARPAL;
	_HandJoints[(new std::string("HAND_JOINT_LITTLE_PROXIMAL"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_LITTLE_PROXIMAL;
	_HandJoints[(new std::string("HAND_JOINT_LITTLE_INTERMEDIATE"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_LITTLE_INTERMEDIATE;
	_HandJoints[(new std::string("HAND_JOINT_LITTLE_DISTAL"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_LITTLE_DISTAL;
	_HandJoints[(new std::string("HAND_JOINT_LITTLE_TIP"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_LITTLE_TIP;
	_HandJoints[(new std::string("HAND_JOINT_MAX"))->c_str()] = OpenXRInterface::HandJoints::HAND_JOINT_MAX;
	_module.add("HandJoints", std::move(_HandJoints));
	qjs::Value _HandJointFlags = context->newObject();
	_HandJointFlags[(new std::string("HAND_JOINT_NONE"))->c_str()] = OpenXRInterface::HandJointFlags::HAND_JOINT_NONE;
	_HandJointFlags[(new std::string("HAND_JOINT_ORIENTATION_VALID"))->c_str()] = OpenXRInterface::HandJointFlags::HAND_JOINT_ORIENTATION_VALID;
	_HandJointFlags[(new std::string("HAND_JOINT_ORIENTATION_TRACKED"))->c_str()] = OpenXRInterface::HandJointFlags::HAND_JOINT_ORIENTATION_TRACKED;
	_HandJointFlags[(new std::string("HAND_JOINT_POSITION_VALID"))->c_str()] = OpenXRInterface::HandJointFlags::HAND_JOINT_POSITION_VALID;
	_HandJointFlags[(new std::string("HAND_JOINT_POSITION_TRACKED"))->c_str()] = OpenXRInterface::HandJointFlags::HAND_JOINT_POSITION_TRACKED;
	_HandJointFlags[(new std::string("HAND_JOINT_LINEAR_VELOCITY_VALID"))->c_str()] = OpenXRInterface::HandJointFlags::HAND_JOINT_LINEAR_VELOCITY_VALID;
	_HandJointFlags[(new std::string("HAND_JOINT_ANGULAR_VELOCITY_VALID"))->c_str()] = OpenXRInterface::HandJointFlags::HAND_JOINT_ANGULAR_VELOCITY_VALID;
	_module.add("HandJointFlags", std::move(_HandJointFlags));
}