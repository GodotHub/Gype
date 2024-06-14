
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/open_xr_extension_wrapper_extension.hpp>
#include <godot_cpp/classes/open_xrapi_extension.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OpenXRExtensionWrapperExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<OpenXRExtensionWrapperExtension>("OpenXRExtensionWrapperExtension")
			.constructor<>()
			.base<Object>()
			.fun<static_cast<Dictionary (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_get_requested_extensions)>((new std::string("_get_requested_extensions"))->c_str())
			.fun<static_cast<uint64_t (OpenXRExtensionWrapperExtension::*)(void *)>(&OpenXRExtensionWrapperExtension::_set_system_properties_and_get_next_pointer)>((new std::string("_set_system_properties_and_get_next_pointer"))->c_str())
			.fun<static_cast<uint64_t (OpenXRExtensionWrapperExtension::*)(void *)>(&OpenXRExtensionWrapperExtension::_set_instance_create_info_and_get_next_pointer)>((new std::string("_set_instance_create_info_and_get_next_pointer"))->c_str())
			.fun<static_cast<uint64_t (OpenXRExtensionWrapperExtension::*)(void *)>(&OpenXRExtensionWrapperExtension::_set_session_create_and_get_next_pointer)>((new std::string("_set_session_create_and_get_next_pointer"))->c_str())
			.fun<static_cast<uint64_t (OpenXRExtensionWrapperExtension::*)(void *)>(&OpenXRExtensionWrapperExtension::_set_swapchain_create_info_and_get_next_pointer)>((new std::string("_set_swapchain_create_info_and_get_next_pointer"))->c_str())
			.fun<static_cast<uint64_t (OpenXRExtensionWrapperExtension::*)(int32_t, void *)>(&OpenXRExtensionWrapperExtension::_set_hand_joint_locations_and_get_next_pointer)>((new std::string("_set_hand_joint_locations_and_get_next_pointer"))->c_str())
			.fun<static_cast<int32_t (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_get_composition_layer_count)>((new std::string("_get_composition_layer_count"))->c_str())
			.fun<static_cast<uint64_t (OpenXRExtensionWrapperExtension::*)(int32_t)>(&OpenXRExtensionWrapperExtension::_get_composition_layer)>((new std::string("_get_composition_layer"))->c_str())
			.fun<static_cast<int32_t (OpenXRExtensionWrapperExtension::*)(int32_t)>(&OpenXRExtensionWrapperExtension::_get_composition_layer_order)>((new std::string("_get_composition_layer_order"))->c_str())
			.fun<static_cast<PackedStringArray (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_get_suggested_tracker_names)>((new std::string("_get_suggested_tracker_names"))->c_str())
			.fun<static_cast<void (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_register_metadata)>((new std::string("_on_register_metadata"))->c_str())
			.fun<static_cast<void (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_before_instance_created)>((new std::string("_on_before_instance_created"))->c_str())
			.fun<static_cast<void (OpenXRExtensionWrapperExtension::*)(uint64_t)>(&OpenXRExtensionWrapperExtension::_on_instance_created)>((new std::string("_on_instance_created"))->c_str())
			.fun<static_cast<void (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_instance_destroyed)>((new std::string("_on_instance_destroyed"))->c_str())
			.fun<static_cast<void (OpenXRExtensionWrapperExtension::*)(uint64_t)>(&OpenXRExtensionWrapperExtension::_on_session_created)>((new std::string("_on_session_created"))->c_str())
			.fun<static_cast<void (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_process)>((new std::string("_on_process"))->c_str())
			.fun<static_cast<void (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_pre_render)>((new std::string("_on_pre_render"))->c_str())
			.fun<static_cast<void (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_main_swapchains_created)>((new std::string("_on_main_swapchains_created"))->c_str())
			.fun<static_cast<void (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_session_destroyed)>((new std::string("_on_session_destroyed"))->c_str())
			.fun<static_cast<void (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_state_idle)>((new std::string("_on_state_idle"))->c_str())
			.fun<static_cast<void (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_state_ready)>((new std::string("_on_state_ready"))->c_str())
			.fun<static_cast<void (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_state_synchronized)>((new std::string("_on_state_synchronized"))->c_str())
			.fun<static_cast<void (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_state_visible)>((new std::string("_on_state_visible"))->c_str())
			.fun<static_cast<void (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_state_focused)>((new std::string("_on_state_focused"))->c_str())
			.fun<static_cast<void (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_state_stopping)>((new std::string("_on_state_stopping"))->c_str())
			.fun<static_cast<void (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_state_loss_pending)>((new std::string("_on_state_loss_pending"))->c_str())
			.fun<static_cast<void (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_on_state_exiting)>((new std::string("_on_state_exiting"))->c_str())
			.fun<static_cast<bool (OpenXRExtensionWrapperExtension::*)(const void *)>(&OpenXRExtensionWrapperExtension::_on_event_polled)>((new std::string("_on_event_polled"))->c_str())
			.fun<static_cast<uint64_t (OpenXRExtensionWrapperExtension::*)(const void *, const Dictionary &, void *)>(&OpenXRExtensionWrapperExtension::_set_viewport_composition_layer_and_get_next_pointer)>((new std::string("_set_viewport_composition_layer_and_get_next_pointer"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_get_viewport_composition_layer_extension_properties)>((new std::string("_get_viewport_composition_layer_extension_properties"))->c_str())
			.fun<static_cast<Dictionary (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::_get_viewport_composition_layer_extension_property_defaults)>((new std::string("_get_viewport_composition_layer_extension_property_defaults"))->c_str())
			.fun<static_cast<void (OpenXRExtensionWrapperExtension::*)(const void *)>(&OpenXRExtensionWrapperExtension::_on_viewport_composition_layer_destroyed)>((new std::string("_on_viewport_composition_layer_destroyed"))->c_str())
			.fun<static_cast<Ref<OpenXRAPIExtension> (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::get_openxr_api)>((new std::string("get_openxr_api"))->c_str())
			.fun<static_cast<void (OpenXRExtensionWrapperExtension::*)()>(&OpenXRExtensionWrapperExtension::register_extension_wrapper)>((new std::string("register_extension_wrapper"))->c_str());
}