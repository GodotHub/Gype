#include <godot_cpp/classes/xr_positional_tracker.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/xr_pose.hpp>
#include <godot_cpp/classes/xr_tracker.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_XRPositionalTracker() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<XRPositionalTracker>("XRPositionalTracker")
            .constructor<>()
            .base<XRTracker>()
            .property<static_cast<String(XRPositionalTracker::*)()const>(&XRPositionalTracker::get_tracker_profile),static_cast<void(XRPositionalTracker::*)(const String &)>(&XRPositionalTracker::set_tracker_profile)>("profile")
            .property<static_cast<XRPositionalTracker::TrackerHand(XRPositionalTracker::*)()const>(&XRPositionalTracker::get_tracker_hand),static_cast<void(XRPositionalTracker::*)(XRPositionalTracker::TrackerHand)>(&XRPositionalTracker::set_tracker_hand)>("hand")
            .fun<static_cast<bool(XRPositionalTracker::*)(const StringName &)const>(&XRPositionalTracker::has_pose)>("has_pose")
            .fun<static_cast<Ref<XRPose>(XRPositionalTracker::*)(const StringName &)const>(&XRPositionalTracker::get_pose)>("get_pose")
            .fun<static_cast<void(XRPositionalTracker::*)(const StringName &)>(&XRPositionalTracker::invalidate_pose)>("invalidate_pose")
            .fun<static_cast<void(XRPositionalTracker::*)(const StringName &,const Transform3D &,const Vector3 &,const Vector3 &,XRPose::TrackingConfidence)>(&XRPositionalTracker::set_pose)>("set_pose")
            .fun<static_cast<Variant(XRPositionalTracker::*)(const StringName &)const>(&XRPositionalTracker::get_input)>("get_input")
            .fun<static_cast<void(XRPositionalTracker::*)(const StringName &,const Variant &)>(&XRPositionalTracker::set_input)>("set_input")
;    qjs::Value _TrackerHand = context->newObject();
    _TrackerHand["TRACKER_HAND_UNKNOWN"] = XRPositionalTracker::TrackerHand::TRACKER_HAND_UNKNOWN;
    _TrackerHand["TRACKER_HAND_LEFT"] = XRPositionalTracker::TrackerHand::TRACKER_HAND_LEFT;
    _TrackerHand["TRACKER_HAND_RIGHT"] = XRPositionalTracker::TrackerHand::TRACKER_HAND_RIGHT;
    _TrackerHand["TRACKER_HAND_MAX"] = XRPositionalTracker::TrackerHand::TRACKER_HAND_MAX;
    _module.add("TrackerHand", std::move(_TrackerHand));
}