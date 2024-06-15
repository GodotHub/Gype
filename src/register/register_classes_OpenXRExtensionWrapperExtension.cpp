#include <godot_cpp/classes/open_xr_extension_wrapper_extension.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/open_xrapi_extension.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_OpenXRExtensionWrapperExtension() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<OpenXRExtensionWrapperExtension>("OpenXRExtensionWrapperExtension")
            .constructor<>()
            .base<Object>()
            .fun<static_cast<Dictionary(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_get_requested_extensions)>("_get_requested_extensions")
            .fun<static_cast<uint64_t(OpenXRExtensionWrapperExtension::*)(void*)>(&OpenXRExtensionWrapperExtension::_set_system_properties_and_get_next_pointer)>("_set_system_properties_and_get_next_pointer")
            .fun<static_cast<uint64_t(OpenXRExtensionWrapperExtension::*)(void*)>(&OpenXRExtensionWrapperExtension::_set_instance_create_info_and_get_next_pointer)>("_set_instance_create_info_and_get_next_pointer")
            .fun<static_cast<uint64_t(OpenXRExtensionWrapperExtension::*)(void*)>(&OpenXRExtensionWrapperExtension::_set_session_create_and_get_next_pointer)>("_set_session_create_and_get_next_pointer")
            .fun<static_cast<uint64_t(OpenXRExtensionWrapperExtension::*)(void*)>(&OpenXRExtensionWrapperExtension::_set_swapchain_create_info_and_get_next_pointer)>("_set_swapchain_create_info_and_get_next_pointer")
            .fun<static_cast<uint64_t(OpenXRExtensionWrapperExtension::*)(int32_t,void*)>(&OpenXRExtensionWrapperExtension::_set_hand_joint_locations_and_get_next_pointer)>("_set_hand_joint_locations_and_get_next_pointer")
            .fun<static_cast<int32_t(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_get_composition_layer_count)>("_get_composition_layer_count")
            .fun<static_cast<uint64_t(OpenXRExtensionWrapperExtension::*)(int32_t)>(&OpenXRExtensionWrapperExtension::_get_composition_layer)>("_get_composition_layer")
            .fun<static_cast<int32_t(OpenXRExtensionWrapperExtension::*)(int32_t)>(&OpenXRExtensionWrapperExtension::_get_composition_layer_order)>("_get_composition_layer_order")
            .fun<static_cast<PackedStringArray(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_get_suggested_tracker_names)>("_get_suggested_tracker_names")
            .fun<static_cast<void(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_register_metadata)>("_on_register_metadata")
            .fun<static_cast<void(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_before_instance_created)>("_on_before_instance_created")
            .fun<static_cast<void(OpenXRExtensionWrapperExtension::*)(uint64_t)>(&OpenXRExtensionWrapperExtension::_on_instance_created)>("_on_instance_created")
            .fun<static_cast<void(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_instance_destroyed)>("_on_instance_destroyed")
            .fun<static_cast<void(OpenXRExtensionWrapperExtension::*)(uint64_t)>(&OpenXRExtensionWrapperExtension::_on_session_created)>("_on_session_created")
            .fun<static_cast<void(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_process)>("_on_process")
            .fun<static_cast<void(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_pre_render)>("_on_pre_render")
            .fun<static_cast<void(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_main_swapchains_created)>("_on_main_swapchains_created")
            .fun<static_cast<void(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_session_destroyed)>("_on_session_destroyed")
            .fun<static_cast<void(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_state_idle)>("_on_state_idle")
            .fun<static_cast<void(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_state_ready)>("_on_state_ready")
            .fun<static_cast<void(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_state_synchronized)>("_on_state_synchronized")
            .fun<static_cast<void(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_state_visible)>("_on_state_visible")
            .fun<static_cast<void(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_state_focused)>("_on_state_focused")
            .fun<static_cast<void(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_state_stopping)>("_on_state_stopping")
            .fun<static_cast<void(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_state_loss_pending)>("_on_state_loss_pending")
            .fun<static_cast<void(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_state_exiting)>("_on_state_exiting")
            .fun<static_cast<bool(OpenXRExtensionWrapperExtension::*)(const void*)>(&OpenXRExtensionWrapperExtension::_on_event_polled)>("_on_event_polled")
            .fun<static_cast<uint64_t(OpenXRExtensionWrapperExtension::*)(const void*,const Dictionary &,void*)>(&OpenXRExtensionWrapperExtension::_set_viewport_composition_layer_and_get_next_pointer)>("_set_viewport_composition_layer_and_get_next_pointer")
            .fun<static_cast<TypedArray<Dictionary>(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_get_viewport_composition_layer_extension_properties)>("_get_viewport_composition_layer_extension_properties")
            .fun<static_cast<Dictionary(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_get_viewport_composition_layer_extension_property_defaults)>("_get_viewport_composition_layer_extension_property_defaults")
            .fun<static_cast<void(OpenXRExtensionWrapperExtension::*)(const void*)>(&OpenXRExtensionWrapperExtension::_on_viewport_composition_layer_destroyed)>("_on_viewport_composition_layer_destroyed")
            .fun<static_cast<Ref<OpenXRAPIExtension>(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::get_openxr_api)>("get_openxr_api")
            .fun<static_cast<void(OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::register_extension_wrapper)>("register_extension_wrapper")
;}