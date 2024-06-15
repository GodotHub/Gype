#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/variant/projection.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_XRInterface() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<XRInterface>("XRInterface")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<bool(XRInterface::*)()>(&XRInterface::is_primary),static_cast<void(XRInterface::*)(bool)>(&XRInterface::set_primary)>("interface_is_primary")
            .property<static_cast<XRInterface::PlayAreaMode(XRInterface::*)()const>(&XRInterface::get_play_area_mode),static_cast<bool(XRInterface::*)(XRInterface::PlayAreaMode)>(&XRInterface::set_play_area_mode)>("xr_play_area_mode")
            .property<static_cast<XRInterface::EnvironmentBlendMode(XRInterface::*)()const>(&XRInterface::get_environment_blend_mode),static_cast<bool(XRInterface::*)(XRInterface::EnvironmentBlendMode)>(&XRInterface::set_environment_blend_mode)>("environment_blend_mode")
            .property<static_cast<bool(XRInterface::*)()const>(&XRInterface::get_anchor_detection_is_enabled),static_cast<void(XRInterface::*)(bool)>(&XRInterface::set_anchor_detection_is_enabled)>("ar_is_anchor_detection_enabled")
            .fun<static_cast<StringName(XRInterface::*)()const>(&XRInterface::get_name)>("get_name")
            .fun<static_cast<uint32_t(XRInterface::*)()const>(&XRInterface::get_capabilities)>("get_capabilities")
            .fun<static_cast<bool(XRInterface::*)()const>(&XRInterface::is_initialized)>("is_initialized")
            .fun<static_cast<bool(XRInterface::*)()>(&XRInterface::initialize)>("initialize")
            .fun<static_cast<void(XRInterface::*)()>(&XRInterface::uninitialize)>("uninitialize")
            .fun<static_cast<Dictionary(XRInterface::*)()>(&XRInterface::get_system_info)>("get_system_info")
            .fun<static_cast<XRInterface::TrackingStatus(XRInterface::*)()const>(&XRInterface::get_tracking_status)>("get_tracking_status")
            .fun<static_cast<Vector2(XRInterface::*)()>(&XRInterface::get_render_target_size)>("get_render_target_size")
            .fun<static_cast<uint32_t(XRInterface::*)()>(&XRInterface::get_view_count)>("get_view_count")
            .fun<static_cast<void(XRInterface::*)(const String &,const StringName &,double,double,double,double)>(&XRInterface::trigger_haptic_pulse)>("trigger_haptic_pulse")
            .fun<static_cast<bool(XRInterface::*)(XRInterface::PlayAreaMode)>(&XRInterface::supports_play_area_mode)>("supports_play_area_mode")
            .fun<static_cast<PackedVector3Array(XRInterface::*)()const>(&XRInterface::get_play_area)>("get_play_area")
            .fun<static_cast<int32_t(XRInterface::*)()>(&XRInterface::get_camera_feed_id)>("get_camera_feed_id")
            .fun<static_cast<bool(XRInterface::*)()>(&XRInterface::is_passthrough_supported)>("is_passthrough_supported")
            .fun<static_cast<bool(XRInterface::*)()>(&XRInterface::is_passthrough_enabled)>("is_passthrough_enabled")
            .fun<static_cast<bool(XRInterface::*)()>(&XRInterface::start_passthrough)>("start_passthrough")
            .fun<static_cast<void(XRInterface::*)()>(&XRInterface::stop_passthrough)>("stop_passthrough")
            .fun<static_cast<Transform3D(XRInterface::*)(uint32_t,const Transform3D &)>(&XRInterface::get_transform_for_view)>("get_transform_for_view")
            .fun<static_cast<Projection(XRInterface::*)(uint32_t,double,double,double)>(&XRInterface::get_projection_for_view)>("get_projection_for_view")
            .fun<static_cast<Array(XRInterface::*)()>(&XRInterface::get_supported_environment_blend_modes)>("get_supported_environment_blend_modes")
;    qjs::Value _Capabilities = context->newObject();
    _Capabilities["XR_NONE"] = XRInterface::Capabilities::XR_NONE;
    _Capabilities["XR_MONO"] = XRInterface::Capabilities::XR_MONO;
    _Capabilities["XR_STEREO"] = XRInterface::Capabilities::XR_STEREO;
    _Capabilities["XR_QUAD"] = XRInterface::Capabilities::XR_QUAD;
    _Capabilities["XR_VR"] = XRInterface::Capabilities::XR_VR;
    _Capabilities["XR_AR"] = XRInterface::Capabilities::XR_AR;
    _Capabilities["XR_EXTERNAL"] = XRInterface::Capabilities::XR_EXTERNAL;
    _module.add("Capabilities", std::move(_Capabilities));
    qjs::Value _TrackingStatus = context->newObject();
    _TrackingStatus["XR_NORMAL_TRACKING"] = XRInterface::TrackingStatus::XR_NORMAL_TRACKING;
    _TrackingStatus["XR_EXCESSIVE_MOTION"] = XRInterface::TrackingStatus::XR_EXCESSIVE_MOTION;
    _TrackingStatus["XR_INSUFFICIENT_FEATURES"] = XRInterface::TrackingStatus::XR_INSUFFICIENT_FEATURES;
    _TrackingStatus["XR_UNKNOWN_TRACKING"] = XRInterface::TrackingStatus::XR_UNKNOWN_TRACKING;
    _TrackingStatus["XR_NOT_TRACKING"] = XRInterface::TrackingStatus::XR_NOT_TRACKING;
    _module.add("TrackingStatus", std::move(_TrackingStatus));
    qjs::Value _PlayAreaMode = context->newObject();
    _PlayAreaMode["XR_PLAY_AREA_UNKNOWN"] = XRInterface::PlayAreaMode::XR_PLAY_AREA_UNKNOWN;
    _PlayAreaMode["XR_PLAY_AREA_3DOF"] = XRInterface::PlayAreaMode::XR_PLAY_AREA_3DOF;
    _PlayAreaMode["XR_PLAY_AREA_SITTING"] = XRInterface::PlayAreaMode::XR_PLAY_AREA_SITTING;
    _PlayAreaMode["XR_PLAY_AREA_ROOMSCALE"] = XRInterface::PlayAreaMode::XR_PLAY_AREA_ROOMSCALE;
    _PlayAreaMode["XR_PLAY_AREA_STAGE"] = XRInterface::PlayAreaMode::XR_PLAY_AREA_STAGE;
    _module.add("PlayAreaMode", std::move(_PlayAreaMode));
    qjs::Value _EnvironmentBlendMode = context->newObject();
    _EnvironmentBlendMode["XR_ENV_BLEND_MODE_OPAQUE"] = XRInterface::EnvironmentBlendMode::XR_ENV_BLEND_MODE_OPAQUE;
    _EnvironmentBlendMode["XR_ENV_BLEND_MODE_ADDITIVE"] = XRInterface::EnvironmentBlendMode::XR_ENV_BLEND_MODE_ADDITIVE;
    _EnvironmentBlendMode["XR_ENV_BLEND_MODE_ALPHA_BLEND"] = XRInterface::EnvironmentBlendMode::XR_ENV_BLEND_MODE_ALPHA_BLEND;
    _module.add("EnvironmentBlendMode", std::move(_EnvironmentBlendMode));
}