#include <godot_cpp/classes/xr_body_tracker.hpp>
#include <godot_cpp/classes/xr_positional_tracker.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_XRBodyTracker() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<XRBodyTracker>("XRBodyTracker")
			.constructor<>()
			.base<XRPositionalTracker>()
			.property<static_cast<bool (XRBodyTracker::*)() const>(&XRBodyTracker::get_has_tracking_data), static_cast<void (XRBodyTracker::*)(bool)>(&XRBodyTracker::set_has_tracking_data)>((new std::string("has_tracking_data"))->c_str())
			.property<static_cast<BitField<XRBodyTracker::BodyFlags> (XRBodyTracker::*)() const>(&XRBodyTracker::get_body_flags), static_cast<void (XRBodyTracker::*)(BitField<XRBodyTracker::BodyFlags>)>(&XRBodyTracker::set_body_flags)>((new std::string("body_flags"))->c_str())
			.fun<static_cast<void (XRBodyTracker::*)(XRBodyTracker::Joint, BitField<XRBodyTracker::JointFlags>)>(&XRBodyTracker::set_joint_flags)>((new std::string("set_joint_flags"))->c_str())
			.fun<static_cast<BitField<XRBodyTracker::JointFlags> (XRBodyTracker::*)(XRBodyTracker::Joint) const>(&XRBodyTracker::get_joint_flags)>((new std::string("get_joint_flags"))->c_str())
			.fun<static_cast<void (XRBodyTracker::*)(XRBodyTracker::Joint, const Transform3D &)>(&XRBodyTracker::set_joint_transform)>((new std::string("set_joint_transform"))->c_str())
			.fun<static_cast<Transform3D (XRBodyTracker::*)(XRBodyTracker::Joint) const>(&XRBodyTracker::get_joint_transform)>((new std::string("get_joint_transform"))->c_str());
	qjs::Value _BodyFlags = context->newObject();
	_BodyFlags[(new std::string("BODY_FLAG_UPPER_BODY_SUPPORTED"))->c_str()] = XRBodyTracker::BodyFlags::BODY_FLAG_UPPER_BODY_SUPPORTED;
	_BodyFlags[(new std::string("BODY_FLAG_LOWER_BODY_SUPPORTED"))->c_str()] = XRBodyTracker::BodyFlags::BODY_FLAG_LOWER_BODY_SUPPORTED;
	_BodyFlags[(new std::string("BODY_FLAG_HANDS_SUPPORTED"))->c_str()] = XRBodyTracker::BodyFlags::BODY_FLAG_HANDS_SUPPORTED;
	_module.add("BodyFlags", std::move(_BodyFlags));
	qjs::Value _Joint = context->newObject();
	_Joint[(new std::string("JOINT_ROOT"))->c_str()] = XRBodyTracker::Joint::JOINT_ROOT;
	_Joint[(new std::string("JOINT_HIPS"))->c_str()] = XRBodyTracker::Joint::JOINT_HIPS;
	_Joint[(new std::string("JOINT_SPINE"))->c_str()] = XRBodyTracker::Joint::JOINT_SPINE;
	_Joint[(new std::string("JOINT_CHEST"))->c_str()] = XRBodyTracker::Joint::JOINT_CHEST;
	_Joint[(new std::string("JOINT_UPPER_CHEST"))->c_str()] = XRBodyTracker::Joint::JOINT_UPPER_CHEST;
	_Joint[(new std::string("JOINT_NECK"))->c_str()] = XRBodyTracker::Joint::JOINT_NECK;
	_Joint[(new std::string("JOINT_HEAD"))->c_str()] = XRBodyTracker::Joint::JOINT_HEAD;
	_Joint[(new std::string("JOINT_HEAD_TIP"))->c_str()] = XRBodyTracker::Joint::JOINT_HEAD_TIP;
	_Joint[(new std::string("JOINT_LEFT_SHOULDER"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_SHOULDER;
	_Joint[(new std::string("JOINT_LEFT_UPPER_ARM"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_UPPER_ARM;
	_Joint[(new std::string("JOINT_LEFT_LOWER_ARM"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_LOWER_ARM;
	_Joint[(new std::string("JOINT_RIGHT_SHOULDER"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_SHOULDER;
	_Joint[(new std::string("JOINT_RIGHT_UPPER_ARM"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_UPPER_ARM;
	_Joint[(new std::string("JOINT_RIGHT_LOWER_ARM"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_LOWER_ARM;
	_Joint[(new std::string("JOINT_LEFT_UPPER_LEG"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_UPPER_LEG;
	_Joint[(new std::string("JOINT_LEFT_LOWER_LEG"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_LOWER_LEG;
	_Joint[(new std::string("JOINT_LEFT_FOOT"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_FOOT;
	_Joint[(new std::string("JOINT_LEFT_TOES"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_TOES;
	_Joint[(new std::string("JOINT_RIGHT_UPPER_LEG"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_UPPER_LEG;
	_Joint[(new std::string("JOINT_RIGHT_LOWER_LEG"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_LOWER_LEG;
	_Joint[(new std::string("JOINT_RIGHT_FOOT"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_FOOT;
	_Joint[(new std::string("JOINT_RIGHT_TOES"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_TOES;
	_Joint[(new std::string("JOINT_LEFT_HAND"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_HAND;
	_Joint[(new std::string("JOINT_LEFT_PALM"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_PALM;
	_Joint[(new std::string("JOINT_LEFT_WRIST"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_WRIST;
	_Joint[(new std::string("JOINT_LEFT_THUMB_METACARPAL"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_THUMB_METACARPAL;
	_Joint[(new std::string("JOINT_LEFT_THUMB_PHALANX_PROXIMAL"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_THUMB_PHALANX_PROXIMAL;
	_Joint[(new std::string("JOINT_LEFT_THUMB_PHALANX_DISTAL"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_THUMB_PHALANX_DISTAL;
	_Joint[(new std::string("JOINT_LEFT_THUMB_TIP"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_THUMB_TIP;
	_Joint[(new std::string("JOINT_LEFT_INDEX_FINGER_METACARPAL"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_INDEX_FINGER_METACARPAL;
	_Joint[(new std::string("JOINT_LEFT_INDEX_FINGER_PHALANX_PROXIMAL"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_INDEX_FINGER_PHALANX_PROXIMAL;
	_Joint[(new std::string("JOINT_LEFT_INDEX_FINGER_PHALANX_INTERMEDIATE"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_INDEX_FINGER_PHALANX_INTERMEDIATE;
	_Joint[(new std::string("JOINT_LEFT_INDEX_FINGER_PHALANX_DISTAL"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_INDEX_FINGER_PHALANX_DISTAL;
	_Joint[(new std::string("JOINT_LEFT_INDEX_FINGER_TIP"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_INDEX_FINGER_TIP;
	_Joint[(new std::string("JOINT_LEFT_MIDDLE_FINGER_METACARPAL"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_MIDDLE_FINGER_METACARPAL;
	_Joint[(new std::string("JOINT_LEFT_MIDDLE_FINGER_PHALANX_PROXIMAL"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_MIDDLE_FINGER_PHALANX_PROXIMAL;
	_Joint[(new std::string("JOINT_LEFT_MIDDLE_FINGER_PHALANX_INTERMEDIATE"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_MIDDLE_FINGER_PHALANX_INTERMEDIATE;
	_Joint[(new std::string("JOINT_LEFT_MIDDLE_FINGER_PHALANX_DISTAL"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_MIDDLE_FINGER_PHALANX_DISTAL;
	_Joint[(new std::string("JOINT_LEFT_MIDDLE_FINGER_TIP"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_MIDDLE_FINGER_TIP;
	_Joint[(new std::string("JOINT_LEFT_RING_FINGER_METACARPAL"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_RING_FINGER_METACARPAL;
	_Joint[(new std::string("JOINT_LEFT_RING_FINGER_PHALANX_PROXIMAL"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_RING_FINGER_PHALANX_PROXIMAL;
	_Joint[(new std::string("JOINT_LEFT_RING_FINGER_PHALANX_INTERMEDIATE"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_RING_FINGER_PHALANX_INTERMEDIATE;
	_Joint[(new std::string("JOINT_LEFT_RING_FINGER_PHALANX_DISTAL"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_RING_FINGER_PHALANX_DISTAL;
	_Joint[(new std::string("JOINT_LEFT_RING_FINGER_TIP"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_RING_FINGER_TIP;
	_Joint[(new std::string("JOINT_LEFT_PINKY_FINGER_METACARPAL"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_PINKY_FINGER_METACARPAL;
	_Joint[(new std::string("JOINT_LEFT_PINKY_FINGER_PHALANX_PROXIMAL"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_PINKY_FINGER_PHALANX_PROXIMAL;
	_Joint[(new std::string("JOINT_LEFT_PINKY_FINGER_PHALANX_INTERMEDIATE"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_PINKY_FINGER_PHALANX_INTERMEDIATE;
	_Joint[(new std::string("JOINT_LEFT_PINKY_FINGER_PHALANX_DISTAL"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_PINKY_FINGER_PHALANX_DISTAL;
	_Joint[(new std::string("JOINT_LEFT_PINKY_FINGER_TIP"))->c_str()] = XRBodyTracker::Joint::JOINT_LEFT_PINKY_FINGER_TIP;
	_Joint[(new std::string("JOINT_RIGHT_HAND"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_HAND;
	_Joint[(new std::string("JOINT_RIGHT_PALM"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_PALM;
	_Joint[(new std::string("JOINT_RIGHT_WRIST"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_WRIST;
	_Joint[(new std::string("JOINT_RIGHT_THUMB_METACARPAL"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_THUMB_METACARPAL;
	_Joint[(new std::string("JOINT_RIGHT_THUMB_PHALANX_PROXIMAL"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_THUMB_PHALANX_PROXIMAL;
	_Joint[(new std::string("JOINT_RIGHT_THUMB_PHALANX_DISTAL"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_THUMB_PHALANX_DISTAL;
	_Joint[(new std::string("JOINT_RIGHT_THUMB_TIP"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_THUMB_TIP;
	_Joint[(new std::string("JOINT_RIGHT_INDEX_FINGER_METACARPAL"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_INDEX_FINGER_METACARPAL;
	_Joint[(new std::string("JOINT_RIGHT_INDEX_FINGER_PHALANX_PROXIMAL"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_INDEX_FINGER_PHALANX_PROXIMAL;
	_Joint[(new std::string("JOINT_RIGHT_INDEX_FINGER_PHALANX_INTERMEDIATE"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_INDEX_FINGER_PHALANX_INTERMEDIATE;
	_Joint[(new std::string("JOINT_RIGHT_INDEX_FINGER_PHALANX_DISTAL"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_INDEX_FINGER_PHALANX_DISTAL;
	_Joint[(new std::string("JOINT_RIGHT_INDEX_FINGER_TIP"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_INDEX_FINGER_TIP;
	_Joint[(new std::string("JOINT_RIGHT_MIDDLE_FINGER_METACARPAL"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_MIDDLE_FINGER_METACARPAL;
	_Joint[(new std::string("JOINT_RIGHT_MIDDLE_FINGER_PHALANX_PROXIMAL"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_MIDDLE_FINGER_PHALANX_PROXIMAL;
	_Joint[(new std::string("JOINT_RIGHT_MIDDLE_FINGER_PHALANX_INTERMEDIATE"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_MIDDLE_FINGER_PHALANX_INTERMEDIATE;
	_Joint[(new std::string("JOINT_RIGHT_MIDDLE_FINGER_PHALANX_DISTAL"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_MIDDLE_FINGER_PHALANX_DISTAL;
	_Joint[(new std::string("JOINT_RIGHT_MIDDLE_FINGER_TIP"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_MIDDLE_FINGER_TIP;
	_Joint[(new std::string("JOINT_RIGHT_RING_FINGER_METACARPAL"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_RING_FINGER_METACARPAL;
	_Joint[(new std::string("JOINT_RIGHT_RING_FINGER_PHALANX_PROXIMAL"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_RING_FINGER_PHALANX_PROXIMAL;
	_Joint[(new std::string("JOINT_RIGHT_RING_FINGER_PHALANX_INTERMEDIATE"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_RING_FINGER_PHALANX_INTERMEDIATE;
	_Joint[(new std::string("JOINT_RIGHT_RING_FINGER_PHALANX_DISTAL"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_RING_FINGER_PHALANX_DISTAL;
	_Joint[(new std::string("JOINT_RIGHT_RING_FINGER_TIP"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_RING_FINGER_TIP;
	_Joint[(new std::string("JOINT_RIGHT_PINKY_FINGER_METACARPAL"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_PINKY_FINGER_METACARPAL;
	_Joint[(new std::string("JOINT_RIGHT_PINKY_FINGER_PHALANX_PROXIMAL"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_PINKY_FINGER_PHALANX_PROXIMAL;
	_Joint[(new std::string("JOINT_RIGHT_PINKY_FINGER_PHALANX_INTERMEDIATE"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_PINKY_FINGER_PHALANX_INTERMEDIATE;
	_Joint[(new std::string("JOINT_RIGHT_PINKY_FINGER_PHALANX_DISTAL"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_PINKY_FINGER_PHALANX_DISTAL;
	_Joint[(new std::string("JOINT_RIGHT_PINKY_FINGER_TIP"))->c_str()] = XRBodyTracker::Joint::JOINT_RIGHT_PINKY_FINGER_TIP;
	_Joint[(new std::string("JOINT_MAX"))->c_str()] = XRBodyTracker::Joint::JOINT_MAX;
	_module.add("Joint", std::move(_Joint));
	qjs::Value _JointFlags = context->newObject();
	_JointFlags[(new std::string("JOINT_FLAG_ORIENTATION_VALID"))->c_str()] = XRBodyTracker::JointFlags::JOINT_FLAG_ORIENTATION_VALID;
	_JointFlags[(new std::string("JOINT_FLAG_ORIENTATION_TRACKED"))->c_str()] = XRBodyTracker::JointFlags::JOINT_FLAG_ORIENTATION_TRACKED;
	_JointFlags[(new std::string("JOINT_FLAG_POSITION_VALID"))->c_str()] = XRBodyTracker::JointFlags::JOINT_FLAG_POSITION_VALID;
	_JointFlags[(new std::string("JOINT_FLAG_POSITION_TRACKED"))->c_str()] = XRBodyTracker::JointFlags::JOINT_FLAG_POSITION_TRACKED;
	_module.add("JointFlags", std::move(_JointFlags));
}