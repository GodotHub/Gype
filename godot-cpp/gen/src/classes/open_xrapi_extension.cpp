/**************************************************************************/
/*  open_xrapi_extension.cpp                                              */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#include <godot_cpp/classes/open_xrapi_extension.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/classes/open_xr_extension_wrapper_extension.hpp>

namespace godot {

uint64_t OpenXRAPIExtension::get_instance() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("get_instance")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner);
}

uint64_t OpenXRAPIExtension::get_system_id() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("get_system_id")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner);
}

uint64_t OpenXRAPIExtension::get_session() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("get_session")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner);
}

Transform3D OpenXRAPIExtension::transform_from_pose(const void *pose) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("transform_from_pose")._native_ptr(), 3255299855);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform3D());
	return internal::_call_native_mb_ret<Transform3D>(_gde_method_bind, _owner, &pose);
}

bool OpenXRAPIExtension::xr_result(uint64_t result, const String &format, const Array &args) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("xr_result")._native_ptr(), 3886436197);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t result_encoded;
	PtrToArg<int64_t>::encode(result, &result_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &result_encoded, &format, &args);
}

bool OpenXRAPIExtension::openxr_is_enabled(bool check_run_in_editor) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("openxr_is_enabled")._native_ptr(), 2703660260);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int8_t check_run_in_editor_encoded;
	PtrToArg<bool>::encode(check_run_in_editor, &check_run_in_editor_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, nullptr, &check_run_in_editor_encoded);
}

uint64_t OpenXRAPIExtension::get_instance_proc_addr(const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("get_instance_proc_addr")._native_ptr(), 1597066294);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &name);
}

String OpenXRAPIExtension::get_error_string(uint64_t result) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("get_error_string")._native_ptr(), 990163283);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t result_encoded;
	PtrToArg<int64_t>::encode(result, &result_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &result_encoded);
}

String OpenXRAPIExtension::get_swapchain_format_name(int64_t swapchain_format) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("get_swapchain_format_name")._native_ptr(), 990163283);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t swapchain_format_encoded;
	PtrToArg<int64_t>::encode(swapchain_format, &swapchain_format_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &swapchain_format_encoded);
}

bool OpenXRAPIExtension::is_initialized() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("is_initialized")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool OpenXRAPIExtension::is_running() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("is_running")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

uint64_t OpenXRAPIExtension::get_play_space() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("get_play_space")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner);
}

int64_t OpenXRAPIExtension::get_predicted_display_time() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("get_predicted_display_time")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int64_t OpenXRAPIExtension::get_next_frame_time() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("get_next_frame_time")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool OpenXRAPIExtension::can_render() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("can_render")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

uint64_t OpenXRAPIExtension::get_hand_tracker(int32_t hand_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("get_hand_tracker")._native_ptr(), 3744713108);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t hand_index_encoded;
	PtrToArg<int64_t>::encode(hand_index, &hand_index_encoded);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &hand_index_encoded);
}

void OpenXRAPIExtension::register_composition_layer_provider(OpenXRExtensionWrapperExtension *extension) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("register_composition_layer_provider")._native_ptr(), 1997997368);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (extension != nullptr ? &extension->_owner : nullptr));
}

void OpenXRAPIExtension::unregister_composition_layer_provider(OpenXRExtensionWrapperExtension *extension) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("unregister_composition_layer_provider")._native_ptr(), 1997997368);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (extension != nullptr ? &extension->_owner : nullptr));
}

void OpenXRAPIExtension::set_emulate_environment_blend_mode_alpha_blend(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("set_emulate_environment_blend_mode_alpha_blend")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

OpenXRAPIExtension::OpenXRAlphaBlendModeSupport OpenXRAPIExtension::is_environment_blend_mode_alpha_supported() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRAPIExtension::get_class_static()._native_ptr(), StringName("is_environment_blend_mode_alpha_supported")._native_ptr(), 1579290861);
	CHECK_METHOD_BIND_RET(_gde_method_bind, OpenXRAPIExtension::OpenXRAlphaBlendModeSupport(0));
	return (OpenXRAPIExtension::OpenXRAlphaBlendModeSupport)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}


} // namespace godot 