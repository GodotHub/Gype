#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/xr_pose.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_XRPose() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<XRPose>("XRPose")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<bool (XRPose::*)() const>(&XRPose::get_has_tracking_data), static_cast<void (XRPose::*)(bool)>(&XRPose::set_has_tracking_data)>((new std::string("has_tracking_data"))->c_str())
			.property<static_cast<StringName (XRPose::*)() const>(&XRPose::get_name), static_cast<void (XRPose::*)(const StringName &)>(&XRPose::set_name)>((new std::string("name"))->c_str())
			.property<static_cast<Transform3D (XRPose::*)() const>(&XRPose::get_transform), static_cast<void (XRPose::*)(const Transform3D &)>(&XRPose::set_transform)>((new std::string("transform"))->c_str())
			.property<static_cast<Vector3 (XRPose::*)() const>(&XRPose::get_linear_velocity), static_cast<void (XRPose::*)(const Vector3 &)>(&XRPose::set_linear_velocity)>((new std::string("linear_velocity"))->c_str())
			.property<static_cast<Vector3 (XRPose::*)() const>(&XRPose::get_angular_velocity), static_cast<void (XRPose::*)(const Vector3 &)>(&XRPose::set_angular_velocity)>((new std::string("angular_velocity"))->c_str())
			.property<static_cast<XRPose::TrackingConfidence (XRPose::*)() const>(&XRPose::get_tracking_confidence), static_cast<void (XRPose::*)(XRPose::TrackingConfidence)>(&XRPose::set_tracking_confidence)>((new std::string("tracking_confidence"))->c_str())
			.fun<static_cast<Transform3D (XRPose::*)() const>(&XRPose::get_adjusted_transform)>((new std::string("get_adjusted_transform"))->c_str());
	qjs::Value _TrackingConfidence = context->newObject();
	_TrackingConfidence[(new std::string("XR_TRACKING_CONFIDENCE_NONE"))->c_str()] = XRPose::TrackingConfidence::XR_TRACKING_CONFIDENCE_NONE;
	_TrackingConfidence[(new std::string("XR_TRACKING_CONFIDENCE_LOW"))->c_str()] = XRPose::TrackingConfidence::XR_TRACKING_CONFIDENCE_LOW;
	_TrackingConfidence[(new std::string("XR_TRACKING_CONFIDENCE_HIGH"))->c_str()] = XRPose::TrackingConfidence::XR_TRACKING_CONFIDENCE_HIGH;
	_module.add("TrackingConfidence", std::move(_TrackingConfidence));
}