#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/xr_pose.hpp>
#include <godot_cpp/classes/xr_positional_tracker.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_XRPositionalTracker() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<XRPositionalTracker>("XRPositionalTracker")
			.constructor<>()
			.property<&XRPositionalTracker::get_tracker_type, &XRPositionalTracker::set_tracker_type>("type")
			.property<&XRPositionalTracker::get_tracker_name, &XRPositionalTracker::set_tracker_name>("name")
			.property<&XRPositionalTracker::get_tracker_desc, &XRPositionalTracker::set_tracker_desc>("description")
			.property<&XRPositionalTracker::get_tracker_profile, &XRPositionalTracker::set_tracker_profile>("profile")
			.property<&XRPositionalTracker::get_tracker_hand, &XRPositionalTracker::set_tracker_hand>("hand")
			.fun<static_cast<bool (XRPositionalTracker::*)(const StringName &) const>(&XRPositionalTracker::has_pose)>("has_pose")
			.fun<static_cast<Ref<XRPose> (XRPositionalTracker::*)(const StringName &) const>(&XRPositionalTracker::get_pose)>("get_pose")
			.fun<static_cast<void (XRPositionalTracker::*)(const StringName &)>(&XRPositionalTracker::invalidate_pose)>("invalidate_pose")
			.fun<static_cast<void (XRPositionalTracker::*)(const StringName &, const Transform3D &, const Vector3 &, const Vector3 &, XRPose::TrackingConfidence)>(&XRPositionalTracker::set_pose)>("set_pose")
			.fun<static_cast<Variant (XRPositionalTracker::*)(const StringName &) const>(&XRPositionalTracker::get_input)>("get_input")
			.fun<static_cast<void (XRPositionalTracker::*)(const StringName &, const Variant &)>(&XRPositionalTracker::set_input)>("set_input");
}