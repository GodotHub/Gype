#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/xr_pose.hpp>
#include <godot_cpp/classes/xr_positional_tracker.hpp>
#include <godot_cpp/classes/xr_tracker.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_XRPositionalTracker() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<XRPositionalTracker>("XRPositionalTracker")
			.constructor<>()
			.base<XRTracker>()
			.property<static_cast<String (XRPositionalTracker::*)() const>(&XRPositionalTracker::get_tracker_profile), static_cast<void (XRPositionalTracker::*)(const String &)>(&XRPositionalTracker::set_tracker_profile)>((new std::string("profile"))->c_str())
			.property<static_cast<XRPositionalTracker::TrackerHand (XRPositionalTracker::*)() const>(&XRPositionalTracker::get_tracker_hand), static_cast<void (XRPositionalTracker::*)(XRPositionalTracker::TrackerHand)>(&XRPositionalTracker::set_tracker_hand)>((new std::string("hand"))->c_str())
			.fun<static_cast<bool (XRPositionalTracker::*)(const StringName &) const>(&XRPositionalTracker::has_pose)>((new std::string("has_pose"))->c_str())
			.fun<static_cast<Ref<XRPose> (XRPositionalTracker::*)(const StringName &) const>(&XRPositionalTracker::get_pose)>((new std::string("get_pose"))->c_str())
			.fun<static_cast<void (XRPositionalTracker::*)(const StringName &)>(&XRPositionalTracker::invalidate_pose)>((new std::string("invalidate_pose"))->c_str())
			.fun<static_cast<void (XRPositionalTracker::*)(const StringName &, const Transform3D &, const Vector3 &, const Vector3 &, XRPose::TrackingConfidence)>(&XRPositionalTracker::set_pose)>((new std::string("set_pose"))->c_str())
			.fun<static_cast<Variant (XRPositionalTracker::*)(const StringName &) const>(&XRPositionalTracker::get_input)>((new std::string("get_input"))->c_str())
			.fun<static_cast<void (XRPositionalTracker::*)(const StringName &, const Variant &)>(&XRPositionalTracker::set_input)>((new std::string("set_input"))->c_str());
	qjs::Value _TrackerHand = context->newObject();
	_TrackerHand[(new std::string("TRACKER_HAND_UNKNOWN"))->c_str()] = XRPositionalTracker::TrackerHand::TRACKER_HAND_UNKNOWN;
	_TrackerHand[(new std::string("TRACKER_HAND_LEFT"))->c_str()] = XRPositionalTracker::TrackerHand::TRACKER_HAND_LEFT;
	_TrackerHand[(new std::string("TRACKER_HAND_RIGHT"))->c_str()] = XRPositionalTracker::TrackerHand::TRACKER_HAND_RIGHT;
	_TrackerHand[(new std::string("TRACKER_HAND_MAX"))->c_str()] = XRPositionalTracker::TrackerHand::TRACKER_HAND_MAX;
	_module.add("TrackerHand", std::move(_TrackerHand));
}