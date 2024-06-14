
#include <godot_cpp/classes/open_xr_extension_wrapper_extension.hpp>
#include <godot_cpp/classes/open_xrapi_extension.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OpenXRAPIExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<OpenXRAPIExtension>("OpenXRAPIExtension")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<uint64_t (OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::get_instance)>((new std::string("get_instance"))->c_str())
			.fun<static_cast<uint64_t (OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::get_system_id)>((new std::string("get_system_id"))->c_str())
			.fun<static_cast<uint64_t (OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::get_session)>((new std::string("get_session"))->c_str())
			.fun<static_cast<Transform3D (OpenXRAPIExtension::*)(const void *)>(&OpenXRAPIExtension::transform_from_pose)>((new std::string("transform_from_pose"))->c_str())
			.fun<static_cast<bool (OpenXRAPIExtension::*)(uint64_t, const String &, const Array &)>(&OpenXRAPIExtension::xr_result)>((new std::string("xr_result"))->c_str())
			.static_fun<static_cast<bool (*)(bool)>(&OpenXRAPIExtension::openxr_is_enabled)>((new std::string("openxr_is_enabled"))->c_str())
			.fun<static_cast<uint64_t (OpenXRAPIExtension::*)(const String &)>(&OpenXRAPIExtension::get_instance_proc_addr)>((new std::string("get_instance_proc_addr"))->c_str())
			.fun<static_cast<String (OpenXRAPIExtension::*)(uint64_t)>(&OpenXRAPIExtension::get_error_string)>((new std::string("get_error_string"))->c_str())
			.fun<static_cast<String (OpenXRAPIExtension::*)(int64_t)>(&OpenXRAPIExtension::get_swapchain_format_name)>((new std::string("get_swapchain_format_name"))->c_str())
			.fun<static_cast<bool (OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::is_initialized)>((new std::string("is_initialized"))->c_str())
			.fun<static_cast<bool (OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::is_running)>((new std::string("is_running"))->c_str())
			.fun<static_cast<uint64_t (OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::get_play_space)>((new std::string("get_play_space"))->c_str())
			.fun<static_cast<int64_t (OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::get_predicted_display_time)>((new std::string("get_predicted_display_time"))->c_str())
			.fun<static_cast<int64_t (OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::get_next_frame_time)>((new std::string("get_next_frame_time"))->c_str())
			.fun<static_cast<bool (OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::can_render)>((new std::string("can_render"))->c_str())
			.fun<static_cast<uint64_t (OpenXRAPIExtension::*)(int32_t)>(&OpenXRAPIExtension::get_hand_tracker)>((new std::string("get_hand_tracker"))->c_str())
			.fun<static_cast<void (OpenXRAPIExtension::*)(OpenXRExtensionWrapperExtension *)>(&OpenXRAPIExtension::register_composition_layer_provider)>((new std::string("register_composition_layer_provider"))->c_str())
			.fun<static_cast<void (OpenXRAPIExtension::*)(OpenXRExtensionWrapperExtension *)>(&OpenXRAPIExtension::unregister_composition_layer_provider)>((new std::string("unregister_composition_layer_provider"))->c_str())
			.fun<static_cast<void (OpenXRAPIExtension::*)(bool)>(&OpenXRAPIExtension::set_emulate_environment_blend_mode_alpha_blend)>((new std::string("set_emulate_environment_blend_mode_alpha_blend"))->c_str())
			.fun<static_cast<OpenXRAPIExtension::OpenXRAlphaBlendModeSupport (OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::is_environment_blend_mode_alpha_supported)>((new std::string("is_environment_blend_mode_alpha_supported"))->c_str());
	qjs::Value _OpenXRAlphaBlendModeSupport = context->newObject();
	_OpenXRAlphaBlendModeSupport[(new std::string("OPENXR_ALPHA_BLEND_MODE_SUPPORT_NONE"))->c_str()] = OpenXRAPIExtension::OpenXRAlphaBlendModeSupport::OPENXR_ALPHA_BLEND_MODE_SUPPORT_NONE;
	_OpenXRAlphaBlendModeSupport[(new std::string("OPENXR_ALPHA_BLEND_MODE_SUPPORT_REAL"))->c_str()] = OpenXRAPIExtension::OpenXRAlphaBlendModeSupport::OPENXR_ALPHA_BLEND_MODE_SUPPORT_REAL;
	_OpenXRAlphaBlendModeSupport[(new std::string("OPENXR_ALPHA_BLEND_MODE_SUPPORT_EMULATING"))->c_str()] = OpenXRAPIExtension::OpenXRAlphaBlendModeSupport::OPENXR_ALPHA_BLEND_MODE_SUPPORT_EMULATING;
	_module.add("OpenXRAlphaBlendModeSupport", std::move(_OpenXRAlphaBlendModeSupport));
}