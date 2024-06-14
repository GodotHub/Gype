
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/projection.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_XRInterface() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<XRInterface>("XRInterface")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<bool (XRInterface::*)()>(&XRInterface::is_primary), static_cast<void (XRInterface::*)(bool)>(&XRInterface::set_primary)>((new std::string("interface_is_primary"))->c_str())
			.property<static_cast<XRInterface::PlayAreaMode (XRInterface::*)() const>(&XRInterface::get_play_area_mode), static_cast<bool (XRInterface::*)(XRInterface::PlayAreaMode)>(&XRInterface::set_play_area_mode)>((new std::string("xr_play_area_mode"))->c_str())
			.property<static_cast<XRInterface::EnvironmentBlendMode (XRInterface::*)() const>(&XRInterface::get_environment_blend_mode), static_cast<bool (XRInterface::*)(XRInterface::EnvironmentBlendMode)>(&XRInterface::set_environment_blend_mode)>((new std::string("environment_blend_mode"))->c_str())
			.property<static_cast<bool (XRInterface::*)() const>(&XRInterface::get_anchor_detection_is_enabled), static_cast<void (XRInterface::*)(bool)>(&XRInterface::set_anchor_detection_is_enabled)>((new std::string("ar_is_anchor_detection_enabled"))->c_str())
			.fun<static_cast<StringName (XRInterface::*)() const>(&XRInterface::get_name)>((new std::string("get_name"))->c_str())
			.fun<static_cast<uint32_t (XRInterface::*)() const>(&XRInterface::get_capabilities)>((new std::string("get_capabilities"))->c_str())
			.fun<static_cast<bool (XRInterface::*)() const>(&XRInterface::is_initialized)>((new std::string("is_initialized"))->c_str())
			.fun<static_cast<bool (XRInterface::*)()>(&XRInterface::initialize)>((new std::string("initialize"))->c_str())
			.fun<static_cast<void (XRInterface::*)()>(&XRInterface::uninitialize)>((new std::string("uninitialize"))->c_str())
			.fun<static_cast<Dictionary (XRInterface::*)()>(&XRInterface::get_system_info)>((new std::string("get_system_info"))->c_str())
			.fun<static_cast<XRInterface::TrackingStatus (XRInterface::*)() const>(&XRInterface::get_tracking_status)>((new std::string("get_tracking_status"))->c_str())
			.fun<static_cast<Vector2 (XRInterface::*)()>(&XRInterface::get_render_target_size)>((new std::string("get_render_target_size"))->c_str())
			.fun<static_cast<uint32_t (XRInterface::*)()>(&XRInterface::get_view_count)>((new std::string("get_view_count"))->c_str())
			.fun<static_cast<void (XRInterface::*)(const String &, const StringName &, double, double, double, double)>(&XRInterface::trigger_haptic_pulse)>((new std::string("trigger_haptic_pulse"))->c_str())
			.fun<static_cast<bool (XRInterface::*)(XRInterface::PlayAreaMode)>(&XRInterface::supports_play_area_mode)>((new std::string("supports_play_area_mode"))->c_str())
			.fun<static_cast<PackedVector3Array (XRInterface::*)() const>(&XRInterface::get_play_area)>((new std::string("get_play_area"))->c_str())
			.fun<static_cast<int32_t (XRInterface::*)()>(&XRInterface::get_camera_feed_id)>((new std::string("get_camera_feed_id"))->c_str())
			.fun<static_cast<bool (XRInterface::*)()>(&XRInterface::is_passthrough_supported)>((new std::string("is_passthrough_supported"))->c_str())
			.fun<static_cast<bool (XRInterface::*)()>(&XRInterface::is_passthrough_enabled)>((new std::string("is_passthrough_enabled"))->c_str())
			.fun<static_cast<bool (XRInterface::*)()>(&XRInterface::start_passthrough)>((new std::string("start_passthrough"))->c_str())
			.fun<static_cast<void (XRInterface::*)()>(&XRInterface::stop_passthrough)>((new std::string("stop_passthrough"))->c_str())
			.fun<static_cast<Transform3D (XRInterface::*)(uint32_t, const Transform3D &)>(&XRInterface::get_transform_for_view)>((new std::string("get_transform_for_view"))->c_str())
			.fun<static_cast<Projection (XRInterface::*)(uint32_t, double, double, double)>(&XRInterface::get_projection_for_view)>((new std::string("get_projection_for_view"))->c_str())
			.fun<static_cast<Array (XRInterface::*)()>(&XRInterface::get_supported_environment_blend_modes)>((new std::string("get_supported_environment_blend_modes"))->c_str());
	qjs::Value _Capabilities = context->newObject();
	_Capabilities[(new std::string("XR_NONE"))->c_str()] = XRInterface::Capabilities::XR_NONE;
	_Capabilities[(new std::string("XR_MONO"))->c_str()] = XRInterface::Capabilities::XR_MONO;
	_Capabilities[(new std::string("XR_STEREO"))->c_str()] = XRInterface::Capabilities::XR_STEREO;
	_Capabilities[(new std::string("XR_QUAD"))->c_str()] = XRInterface::Capabilities::XR_QUAD;
	_Capabilities[(new std::string("XR_VR"))->c_str()] = XRInterface::Capabilities::XR_VR;
	_Capabilities[(new std::string("XR_AR"))->c_str()] = XRInterface::Capabilities::XR_AR;
	_Capabilities[(new std::string("XR_EXTERNAL"))->c_str()] = XRInterface::Capabilities::XR_EXTERNAL;
	_module.add("Capabilities", std::move(_Capabilities));
	qjs::Value _TrackingStatus = context->newObject();
	_TrackingStatus[(new std::string("XR_NORMAL_TRACKING"))->c_str()] = XRInterface::TrackingStatus::XR_NORMAL_TRACKING;
	_TrackingStatus[(new std::string("XR_EXCESSIVE_MOTION"))->c_str()] = XRInterface::TrackingStatus::XR_EXCESSIVE_MOTION;
	_TrackingStatus[(new std::string("XR_INSUFFICIENT_FEATURES"))->c_str()] = XRInterface::TrackingStatus::XR_INSUFFICIENT_FEATURES;
	_TrackingStatus[(new std::string("XR_UNKNOWN_TRACKING"))->c_str()] = XRInterface::TrackingStatus::XR_UNKNOWN_TRACKING;
	_TrackingStatus[(new std::string("XR_NOT_TRACKING"))->c_str()] = XRInterface::TrackingStatus::XR_NOT_TRACKING;
	_module.add("TrackingStatus", std::move(_TrackingStatus));
	qjs::Value _PlayAreaMode = context->newObject();
	_PlayAreaMode[(new std::string("XR_PLAY_AREA_UNKNOWN"))->c_str()] = XRInterface::PlayAreaMode::XR_PLAY_AREA_UNKNOWN;
	_PlayAreaMode[(new std::string("XR_PLAY_AREA_3DOF"))->c_str()] = XRInterface::PlayAreaMode::XR_PLAY_AREA_3DOF;
	_PlayAreaMode[(new std::string("XR_PLAY_AREA_SITTING"))->c_str()] = XRInterface::PlayAreaMode::XR_PLAY_AREA_SITTING;
	_PlayAreaMode[(new std::string("XR_PLAY_AREA_ROOMSCALE"))->c_str()] = XRInterface::PlayAreaMode::XR_PLAY_AREA_ROOMSCALE;
	_PlayAreaMode[(new std::string("XR_PLAY_AREA_STAGE"))->c_str()] = XRInterface::PlayAreaMode::XR_PLAY_AREA_STAGE;
	_module.add("PlayAreaMode", std::move(_PlayAreaMode));
	qjs::Value _EnvironmentBlendMode = context->newObject();
	_EnvironmentBlendMode[(new std::string("XR_ENV_BLEND_MODE_OPAQUE"))->c_str()] = XRInterface::EnvironmentBlendMode::XR_ENV_BLEND_MODE_OPAQUE;
	_EnvironmentBlendMode[(new std::string("XR_ENV_BLEND_MODE_ADDITIVE"))->c_str()] = XRInterface::EnvironmentBlendMode::XR_ENV_BLEND_MODE_ADDITIVE;
	_EnvironmentBlendMode[(new std::string("XR_ENV_BLEND_MODE_ALPHA_BLEND"))->c_str()] = XRInterface::EnvironmentBlendMode::XR_ENV_BLEND_MODE_ALPHA_BLEND;
	_module.add("EnvironmentBlendMode", std::move(_EnvironmentBlendMode));
}