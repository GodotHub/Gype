#include <godot_cpp/classes/xr_hand_tracker.hpp>
#include <godot_cpp/classes/xr_positional_tracker.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_XRHandTracker() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<XRHandTracker>("XRHandTracker")
			.constructor<>()
			.base<XRPositionalTracker>()
			.property<static_cast<bool (XRHandTracker::*)() const>(&XRHandTracker::get_has_tracking_data), static_cast<void (XRHandTracker::*)(bool)>(&XRHandTracker::set_has_tracking_data)>((new std::string("has_tracking_data"))->c_str())
			.property<static_cast<XRHandTracker::HandTrackingSource (XRHandTracker::*)() const>(&XRHandTracker::get_hand_tracking_source), static_cast<void (XRHandTracker::*)(XRHandTracker::HandTrackingSource)>(&XRHandTracker::set_hand_tracking_source)>((new std::string("hand_tracking_source"))->c_str())
			.fun<static_cast<void (XRHandTracker::*)(XRHandTracker::HandJoint, BitField<XRHandTracker::HandJointFlags>)>(&XRHandTracker::set_hand_joint_flags)>((new std::string("set_hand_joint_flags"))->c_str())
			.fun<static_cast<BitField<XRHandTracker::HandJointFlags> (XRHandTracker::*)(XRHandTracker::HandJoint) const>(&XRHandTracker::get_hand_joint_flags)>((new std::string("get_hand_joint_flags"))->c_str())
			.fun<static_cast<void (XRHandTracker::*)(XRHandTracker::HandJoint, const Transform3D &)>(&XRHandTracker::set_hand_joint_transform)>((new std::string("set_hand_joint_transform"))->c_str())
			.fun<static_cast<Transform3D (XRHandTracker::*)(XRHandTracker::HandJoint) const>(&XRHandTracker::get_hand_joint_transform)>((new std::string("get_hand_joint_transform"))->c_str())
			.fun<static_cast<void (XRHandTracker::*)(XRHandTracker::HandJoint, double)>(&XRHandTracker::set_hand_joint_radius)>((new std::string("set_hand_joint_radius"))->c_str())
			.fun<static_cast<double (XRHandTracker::*)(XRHandTracker::HandJoint) const>(&XRHandTracker::get_hand_joint_radius)>((new std::string("get_hand_joint_radius"))->c_str())
			.fun<static_cast<void (XRHandTracker::*)(XRHandTracker::HandJoint, const Vector3 &)>(&XRHandTracker::set_hand_joint_linear_velocity)>((new std::string("set_hand_joint_linear_velocity"))->c_str())
			.fun<static_cast<Vector3 (XRHandTracker::*)(XRHandTracker::HandJoint) const>(&XRHandTracker::get_hand_joint_linear_velocity)>((new std::string("get_hand_joint_linear_velocity"))->c_str())
			.fun<static_cast<void (XRHandTracker::*)(XRHandTracker::HandJoint, const Vector3 &)>(&XRHandTracker::set_hand_joint_angular_velocity)>((new std::string("set_hand_joint_angular_velocity"))->c_str())
			.fun<static_cast<Vector3 (XRHandTracker::*)(XRHandTracker::HandJoint) const>(&XRHandTracker::get_hand_joint_angular_velocity)>((new std::string("get_hand_joint_angular_velocity"))->c_str());
	qjs::Value _HandTrackingSource = context->newObject();
	_HandTrackingSource[(new std::string("HAND_TRACKING_SOURCE_UNKNOWN"))->c_str()] = XRHandTracker::HandTrackingSource::HAND_TRACKING_SOURCE_UNKNOWN;
	_HandTrackingSource[(new std::string("HAND_TRACKING_SOURCE_UNOBSTRUCTED"))->c_str()] = XRHandTracker::HandTrackingSource::HAND_TRACKING_SOURCE_UNOBSTRUCTED;
	_HandTrackingSource[(new std::string("HAND_TRACKING_SOURCE_CONTROLLER"))->c_str()] = XRHandTracker::HandTrackingSource::HAND_TRACKING_SOURCE_CONTROLLER;
	_HandTrackingSource[(new std::string("HAND_TRACKING_SOURCE_MAX"))->c_str()] = XRHandTracker::HandTrackingSource::HAND_TRACKING_SOURCE_MAX;
	_module.add("HandTrackingSource", std::move(_HandTrackingSource));
	qjs::Value _HandJoint = context->newObject();
	_HandJoint[(new std::string("HAND_JOINT_PALM"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_PALM;
	_HandJoint[(new std::string("HAND_JOINT_WRIST"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_WRIST;
	_HandJoint[(new std::string("HAND_JOINT_THUMB_METACARPAL"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_THUMB_METACARPAL;
	_HandJoint[(new std::string("HAND_JOINT_THUMB_PHALANX_PROXIMAL"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_THUMB_PHALANX_PROXIMAL;
	_HandJoint[(new std::string("HAND_JOINT_THUMB_PHALANX_DISTAL"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_THUMB_PHALANX_DISTAL;
	_HandJoint[(new std::string("HAND_JOINT_THUMB_TIP"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_THUMB_TIP;
	_HandJoint[(new std::string("HAND_JOINT_INDEX_FINGER_METACARPAL"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_INDEX_FINGER_METACARPAL;
	_HandJoint[(new std::string("HAND_JOINT_INDEX_FINGER_PHALANX_PROXIMAL"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_INDEX_FINGER_PHALANX_PROXIMAL;
	_HandJoint[(new std::string("HAND_JOINT_INDEX_FINGER_PHALANX_INTERMEDIATE"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_INDEX_FINGER_PHALANX_INTERMEDIATE;
	_HandJoint[(new std::string("HAND_JOINT_INDEX_FINGER_PHALANX_DISTAL"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_INDEX_FINGER_PHALANX_DISTAL;
	_HandJoint[(new std::string("HAND_JOINT_INDEX_FINGER_TIP"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_INDEX_FINGER_TIP;
	_HandJoint[(new std::string("HAND_JOINT_MIDDLE_FINGER_METACARPAL"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_MIDDLE_FINGER_METACARPAL;
	_HandJoint[(new std::string("HAND_JOINT_MIDDLE_FINGER_PHALANX_PROXIMAL"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_MIDDLE_FINGER_PHALANX_PROXIMAL;
	_HandJoint[(new std::string("HAND_JOINT_MIDDLE_FINGER_PHALANX_INTERMEDIATE"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_MIDDLE_FINGER_PHALANX_INTERMEDIATE;
	_HandJoint[(new std::string("HAND_JOINT_MIDDLE_FINGER_PHALANX_DISTAL"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_MIDDLE_FINGER_PHALANX_DISTAL;
	_HandJoint[(new std::string("HAND_JOINT_MIDDLE_FINGER_TIP"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_MIDDLE_FINGER_TIP;
	_HandJoint[(new std::string("HAND_JOINT_RING_FINGER_METACARPAL"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_RING_FINGER_METACARPAL;
	_HandJoint[(new std::string("HAND_JOINT_RING_FINGER_PHALANX_PROXIMAL"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_RING_FINGER_PHALANX_PROXIMAL;
	_HandJoint[(new std::string("HAND_JOINT_RING_FINGER_PHALANX_INTERMEDIATE"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_RING_FINGER_PHALANX_INTERMEDIATE;
	_HandJoint[(new std::string("HAND_JOINT_RING_FINGER_PHALANX_DISTAL"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_RING_FINGER_PHALANX_DISTAL;
	_HandJoint[(new std::string("HAND_JOINT_RING_FINGER_TIP"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_RING_FINGER_TIP;
	_HandJoint[(new std::string("HAND_JOINT_PINKY_FINGER_METACARPAL"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_PINKY_FINGER_METACARPAL;
	_HandJoint[(new std::string("HAND_JOINT_PINKY_FINGER_PHALANX_PROXIMAL"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_PINKY_FINGER_PHALANX_PROXIMAL;
	_HandJoint[(new std::string("HAND_JOINT_PINKY_FINGER_PHALANX_INTERMEDIATE"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_PINKY_FINGER_PHALANX_INTERMEDIATE;
	_HandJoint[(new std::string("HAND_JOINT_PINKY_FINGER_PHALANX_DISTAL"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_PINKY_FINGER_PHALANX_DISTAL;
	_HandJoint[(new std::string("HAND_JOINT_PINKY_FINGER_TIP"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_PINKY_FINGER_TIP;
	_HandJoint[(new std::string("HAND_JOINT_MAX"))->c_str()] = XRHandTracker::HandJoint::HAND_JOINT_MAX;
	_module.add("HandJoint", std::move(_HandJoint));
	qjs::Value _HandJointFlags = context->newObject();
	_HandJointFlags[(new std::string("HAND_JOINT_FLAG_ORIENTATION_VALID"))->c_str()] = XRHandTracker::HandJointFlags::HAND_JOINT_FLAG_ORIENTATION_VALID;
	_HandJointFlags[(new std::string("HAND_JOINT_FLAG_ORIENTATION_TRACKED"))->c_str()] = XRHandTracker::HandJointFlags::HAND_JOINT_FLAG_ORIENTATION_TRACKED;
	_HandJointFlags[(new std::string("HAND_JOINT_FLAG_POSITION_VALID"))->c_str()] = XRHandTracker::HandJointFlags::HAND_JOINT_FLAG_POSITION_VALID;
	_HandJointFlags[(new std::string("HAND_JOINT_FLAG_POSITION_TRACKED"))->c_str()] = XRHandTracker::HandJointFlags::HAND_JOINT_FLAG_POSITION_TRACKED;
	_HandJointFlags[(new std::string("HAND_JOINT_FLAG_LINEAR_VELOCITY_VALID"))->c_str()] = XRHandTracker::HandJointFlags::HAND_JOINT_FLAG_LINEAR_VELOCITY_VALID;
	_HandJointFlags[(new std::string("HAND_JOINT_FLAG_ANGULAR_VELOCITY_VALID"))->c_str()] = XRHandTracker::HandJointFlags::HAND_JOINT_FLAG_ANGULAR_VELOCITY_VALID;
	_module.add("HandJointFlags", std::move(_HandJointFlags));
}