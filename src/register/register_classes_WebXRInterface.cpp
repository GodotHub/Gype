#include <godot_cpp/classes/web_xr_interface.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/xr_controller_tracker.hpp>
#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_WebXRInterface() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<WebXRInterface>("WebXRInterface")
            .constructor<>()
            .base<XRInterface>()
            .property<static_cast<String(WebXRInterface::*)()const>(&WebXRInterface::get_session_mode),static_cast<void(WebXRInterface::*)(const String &)>(&WebXRInterface::set_session_mode)>("session_mode")
            .property<static_cast<String(WebXRInterface::*)()const>(&WebXRInterface::get_required_features),static_cast<void(WebXRInterface::*)(const String &)>(&WebXRInterface::set_required_features)>("required_features")
            .property<static_cast<String(WebXRInterface::*)()const>(&WebXRInterface::get_optional_features),static_cast<void(WebXRInterface::*)(const String &)>(&WebXRInterface::set_optional_features)>("optional_features")
            .property<static_cast<String(WebXRInterface::*)()const>(&WebXRInterface::get_requested_reference_space_types),static_cast<void(WebXRInterface::*)(const String &)>(&WebXRInterface::set_requested_reference_space_types)>("requested_reference_space_types")
            .property<static_cast<String(WebXRInterface::*)()const>(&WebXRInterface::get_reference_space_type)>("reference_space_type")
            .property<static_cast<String(WebXRInterface::*)()const>(&WebXRInterface::get_enabled_features)>("enabled_features")
            .property<static_cast<String(WebXRInterface::*)()const>(&WebXRInterface::get_visibility_state)>("visibility_state")
            .fun<static_cast<void(WebXRInterface::*)(const String &)>(&WebXRInterface::is_session_supported)>("is_session_supported")
            .fun<static_cast<bool(WebXRInterface::*)(int32_t)const>(&WebXRInterface::is_input_source_active)>("is_input_source_active")
            .fun<static_cast<Ref<XRControllerTracker>(WebXRInterface::*)(int32_t)const>(&WebXRInterface::get_input_source_tracker)>("get_input_source_tracker")
            .fun<static_cast<WebXRInterface::TargetRayMode(WebXRInterface::*)(int32_t)const>(&WebXRInterface::get_input_source_target_ray_mode)>("get_input_source_target_ray_mode")
            .fun<static_cast<double(WebXRInterface::*)()const>(&WebXRInterface::get_display_refresh_rate)>("get_display_refresh_rate")
            .fun<static_cast<void(WebXRInterface::*)(double)>(&WebXRInterface::set_display_refresh_rate)>("set_display_refresh_rate")
            .fun<static_cast<Array(WebXRInterface::*)()const>(&WebXRInterface::get_available_display_refresh_rates)>("get_available_display_refresh_rates")
;    qjs::Value _TargetRayMode = context->newObject();
    _TargetRayMode["TARGET_RAY_MODE_UNKNOWN"] = WebXRInterface::TargetRayMode::TARGET_RAY_MODE_UNKNOWN;
    _TargetRayMode["TARGET_RAY_MODE_GAZE"] = WebXRInterface::TargetRayMode::TARGET_RAY_MODE_GAZE;
    _TargetRayMode["TARGET_RAY_MODE_TRACKED_POINTER"] = WebXRInterface::TargetRayMode::TARGET_RAY_MODE_TRACKED_POINTER;
    _TargetRayMode["TARGET_RAY_MODE_SCREEN"] = WebXRInterface::TargetRayMode::TARGET_RAY_MODE_SCREEN;
    _module.add("TargetRayMode", std::move(_TargetRayMode));
}