#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/open_xrapi_extension.hpp>

using namespace godot;

void register_classes_OpenXRAPIExtension() {
    qjs::Context::Module &_module = _General;
    _module.class_<OpenXRAPIExtension>("OpenXRAPIExtension")
           .constructor<>()
		    .fun<static_cast<uint64_t(OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::get_instance)>("get_instance")
		    .fun<static_cast<uint64_t(OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::get_system_id)>("get_system_id")
		    .fun<static_cast<uint64_t(OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::get_session)>("get_session")
		    .fun<static_cast<Transform3D(OpenXRAPIExtension::*)(const void*)>(&OpenXRAPIExtension::transform_from_pose)>("transform_from_pose")
		    .fun<static_cast<bool(OpenXRAPIExtension::*)(uint64_t,const String &,const Array &)>(&OpenXRAPIExtension::xr_result)>("xr_result")
            .static_fun<OpenXRAPIExtension::openxr_is_enabled>("openxr_is_enabled")
		    .fun<static_cast<uint64_t(OpenXRAPIExtension::*)(const String &)>(&OpenXRAPIExtension::get_instance_proc_addr)>("get_instance_proc_addr")
		    .fun<static_cast<String(OpenXRAPIExtension::*)(uint64_t)>(&OpenXRAPIExtension::get_error_string)>("get_error_string")
		    .fun<static_cast<String(OpenXRAPIExtension::*)(int64_t)>(&OpenXRAPIExtension::get_swapchain_format_name)>("get_swapchain_format_name")
		    .fun<static_cast<bool(OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::is_initialized)>("is_initialized")
		    .fun<static_cast<bool(OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::is_running)>("is_running")
		    .fun<static_cast<uint64_t(OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::get_play_space)>("get_play_space")
		    .fun<static_cast<int64_t(OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::get_next_frame_time)>("get_next_frame_time")
		    .fun<static_cast<bool(OpenXRAPIExtension::*)()>(&OpenXRAPIExtension::can_render)>("can_render")
;}