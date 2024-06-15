#include <godot_cpp/classes/open_xrapi_extension.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/classes/open_xr_extension_wrapper_extension.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_OpenXRAPIExtension() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<OpenXRAPIExtension>("OpenXRAPIExtension")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<uint64_t(OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::get_instance)>("get_instance")
            .fun<static_cast<uint64_t(OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::get_system_id)>("get_system_id")
            .fun<static_cast<uint64_t(OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::get_session)>("get_session")
            .fun<static_cast<Transform3D(OpenXRAPIExtension::*)(const void*)>(&OpenXRAPIExtension::transform_from_pose)>("transform_from_pose")
            .fun<static_cast<bool(OpenXRAPIExtension::*)(uint64_t,const String &,const Array &)>(&OpenXRAPIExtension::xr_result)>("xr_result")
            .static_fun<static_cast<bool(*)(bool)>(&OpenXRAPIExtension::openxr_is_enabled)>("openxr_is_enabled")
            .fun<static_cast<uint64_t(OpenXRAPIExtension::*)(const String &)>(&OpenXRAPIExtension::get_instance_proc_addr)>("get_instance_proc_addr")
            .fun<static_cast<String(OpenXRAPIExtension::*)(uint64_t)>(&OpenXRAPIExtension::get_error_string)>("get_error_string")
            .fun<static_cast<String(OpenXRAPIExtension::*)(int64_t)>(&OpenXRAPIExtension::get_swapchain_format_name)>("get_swapchain_format_name")
            .fun<static_cast<bool(OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::is_initialized)>("is_initialized")
            .fun<static_cast<bool(OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::is_running)>("is_running")
            .fun<static_cast<uint64_t(OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::get_play_space)>("get_play_space")
            .fun<static_cast<int64_t(OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::get_predicted_display_time)>("get_predicted_display_time")
            .fun<static_cast<int64_t(OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::get_next_frame_time)>("get_next_frame_time")
            .fun<static_cast<bool(OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::can_render)>("can_render")
            .fun<static_cast<uint64_t(OpenXRAPIExtension::*)(int32_t)>(&OpenXRAPIExtension::get_hand_tracker)>("get_hand_tracker")
            .fun<static_cast<void(OpenXRAPIExtension::*)(OpenXRExtensionWrapperExtension *)>(&OpenXRAPIExtension::register_composition_layer_provider)>("register_composition_layer_provider")
            .fun<static_cast<void(OpenXRAPIExtension::*)(OpenXRExtensionWrapperExtension *)>(&OpenXRAPIExtension::unregister_composition_layer_provider)>("unregister_composition_layer_provider")
            .fun<static_cast<void(OpenXRAPIExtension::*)(bool)>(&OpenXRAPIExtension::set_emulate_environment_blend_mode_alpha_blend)>("set_emulate_environment_blend_mode_alpha_blend")
            .fun<static_cast<OpenXRAPIExtension::OpenXRAlphaBlendModeSupport(OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::is_environment_blend_mode_alpha_supported)>("is_environment_blend_mode_alpha_supported")
;    qjs::Value _OpenXRAlphaBlendModeSupport = context->newObject();
    _OpenXRAlphaBlendModeSupport["OPENXR_ALPHA_BLEND_MODE_SUPPORT_NONE"] = OpenXRAPIExtension::OpenXRAlphaBlendModeSupport::OPENXR_ALPHA_BLEND_MODE_SUPPORT_NONE;
    _OpenXRAlphaBlendModeSupport["OPENXR_ALPHA_BLEND_MODE_SUPPORT_REAL"] = OpenXRAPIExtension::OpenXRAlphaBlendModeSupport::OPENXR_ALPHA_BLEND_MODE_SUPPORT_REAL;
    _OpenXRAlphaBlendModeSupport["OPENXR_ALPHA_BLEND_MODE_SUPPORT_EMULATING"] = OpenXRAPIExtension::OpenXRAlphaBlendModeSupport::OPENXR_ALPHA_BLEND_MODE_SUPPORT_EMULATING;
    _module.add("OpenXRAlphaBlendModeSupport", std::move(_OpenXRAlphaBlendModeSupport));
}