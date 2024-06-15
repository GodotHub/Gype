#include <godot_cpp/classes/xr_pose.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_XRPose() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<XRPose>("XRPose")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<bool(XRPose::*)()const>(&XRPose::get_has_tracking_data),static_cast<void(XRPose::*)(bool)>(&XRPose::set_has_tracking_data)>("has_tracking_data")
            .property<static_cast<StringName(XRPose::*)()const>(&XRPose::get_name),static_cast<void(XRPose::*)(const StringName &)>(&XRPose::set_name)>("name")
            .property<static_cast<Transform3D(XRPose::*)()const>(&XRPose::get_transform),static_cast<void(XRPose::*)(const Transform3D &)>(&XRPose::set_transform)>("transform")
            .property<static_cast<Vector3(XRPose::*)()const>(&XRPose::get_linear_velocity),static_cast<void(XRPose::*)(const Vector3 &)>(&XRPose::set_linear_velocity)>("linear_velocity")
            .property<static_cast<Vector3(XRPose::*)()const>(&XRPose::get_angular_velocity),static_cast<void(XRPose::*)(const Vector3 &)>(&XRPose::set_angular_velocity)>("angular_velocity")
            .property<static_cast<XRPose::TrackingConfidence(XRPose::*)()const>(&XRPose::get_tracking_confidence),static_cast<void(XRPose::*)(XRPose::TrackingConfidence)>(&XRPose::set_tracking_confidence)>("tracking_confidence")
            .fun<static_cast<Transform3D(XRPose::*)()const>(&XRPose::get_adjusted_transform)>("get_adjusted_transform")
;    qjs::Value _TrackingConfidence = context->newObject();
    _TrackingConfidence["XR_TRACKING_CONFIDENCE_NONE"] = XRPose::TrackingConfidence::XR_TRACKING_CONFIDENCE_NONE;
    _TrackingConfidence["XR_TRACKING_CONFIDENCE_LOW"] = XRPose::TrackingConfidence::XR_TRACKING_CONFIDENCE_LOW;
    _TrackingConfidence["XR_TRACKING_CONFIDENCE_HIGH"] = XRPose::TrackingConfidence::XR_TRACKING_CONFIDENCE_HIGH;
    _module.add("TrackingConfidence", std::move(_TrackingConfidence));
}