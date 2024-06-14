
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/web_xr_interface.hpp>
#include <godot_cpp/classes/xr_controller_tracker.hpp>
#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_WebXRInterface() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<WebXRInterface>("WebXRInterface")
			.constructor<>()
			.base<XRInterface>()
			.property<static_cast<String (WebXRInterface::*)() const>(&WebXRInterface::get_session_mode), static_cast<void (WebXRInterface::*)(const String &)>(&WebXRInterface::set_session_mode)>((new std::string("session_mode"))->c_str())
			.property<static_cast<String (WebXRInterface::*)() const>(&WebXRInterface::get_required_features), static_cast<void (WebXRInterface::*)(const String &)>(&WebXRInterface::set_required_features)>((new std::string("required_features"))->c_str())
			.property<static_cast<String (WebXRInterface::*)() const>(&WebXRInterface::get_optional_features), static_cast<void (WebXRInterface::*)(const String &)>(&WebXRInterface::set_optional_features)>((new std::string("optional_features"))->c_str())
			.property<static_cast<String (WebXRInterface::*)() const>(&WebXRInterface::get_requested_reference_space_types), static_cast<void (WebXRInterface::*)(const String &)>(&WebXRInterface::set_requested_reference_space_types)>((new std::string("requested_reference_space_types"))->c_str())
			.property<static_cast<String (WebXRInterface::*)() const>(&WebXRInterface::get_reference_space_type)>((new std::string("reference_space_type"))->c_str())
			.property<static_cast<String (WebXRInterface::*)() const>(&WebXRInterface::get_enabled_features)>((new std::string("enabled_features"))->c_str())
			.property<static_cast<String (WebXRInterface::*)() const>(&WebXRInterface::get_visibility_state)>((new std::string("visibility_state"))->c_str())
			.fun<static_cast<void (WebXRInterface::*)(const String &)>(&WebXRInterface::is_session_supported)>((new std::string("is_session_supported"))->c_str())
			.fun<static_cast<bool (WebXRInterface::*)(int32_t) const>(&WebXRInterface::is_input_source_active)>((new std::string("is_input_source_active"))->c_str())
			.fun<static_cast<Ref<XRControllerTracker> (WebXRInterface::*)(int32_t) const>(&WebXRInterface::get_input_source_tracker)>((new std::string("get_input_source_tracker"))->c_str())
			.fun<static_cast<WebXRInterface::TargetRayMode (WebXRInterface::*)(int32_t) const>(&WebXRInterface::get_input_source_target_ray_mode)>((new std::string("get_input_source_target_ray_mode"))->c_str())
			.fun<static_cast<double (WebXRInterface::*)() const>(&WebXRInterface::get_display_refresh_rate)>((new std::string("get_display_refresh_rate"))->c_str())
			.fun<static_cast<void (WebXRInterface::*)(double)>(&WebXRInterface::set_display_refresh_rate)>((new std::string("set_display_refresh_rate"))->c_str())
			.fun<static_cast<Array (WebXRInterface::*)() const>(&WebXRInterface::get_available_display_refresh_rates)>((new std::string("get_available_display_refresh_rates"))->c_str());
	qjs::Value _TargetRayMode = context->newObject();
	_TargetRayMode[(new std::string("TARGET_RAY_MODE_UNKNOWN"))->c_str()] = WebXRInterface::TargetRayMode::TARGET_RAY_MODE_UNKNOWN;
	_TargetRayMode[(new std::string("TARGET_RAY_MODE_GAZE"))->c_str()] = WebXRInterface::TargetRayMode::TARGET_RAY_MODE_GAZE;
	_TargetRayMode[(new std::string("TARGET_RAY_MODE_TRACKED_POINTER"))->c_str()] = WebXRInterface::TargetRayMode::TARGET_RAY_MODE_TRACKED_POINTER;
	_TargetRayMode[(new std::string("TARGET_RAY_MODE_SCREEN"))->c_str()] = WebXRInterface::TargetRayMode::TARGET_RAY_MODE_SCREEN;
	_module.add("TargetRayMode", std::move(_TargetRayMode));
}