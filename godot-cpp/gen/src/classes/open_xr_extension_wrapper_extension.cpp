/**************************************************************************/
/*  open_xr_extension_wrapper_extension.cpp                               */
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

#include <godot_cpp/classes/open_xr_extension_wrapper_extension.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/open_xrapi_extension.hpp>

namespace godot {

Ref<OpenXRAPIExtension> OpenXRExtensionWrapperExtension::get_openxr_api() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRExtensionWrapperExtension::get_class_static()._native_ptr(), StringName("get_openxr_api")._native_ptr(), 1637791613);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<OpenXRAPIExtension>());
	return Ref<OpenXRAPIExtension>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<OpenXRAPIExtension>(_gde_method_bind, _owner));
}

void OpenXRExtensionWrapperExtension::register_extension_wrapper() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRExtensionWrapperExtension::get_class_static()._native_ptr(), StringName("register_extension_wrapper")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Dictionary OpenXRExtensionWrapperExtension::_get_requested_extensions() {
	return Dictionary();
}

uint64_t OpenXRExtensionWrapperExtension::_set_system_properties_and_get_next_pointer(void *next_pointer) {
	return 0;
}

uint64_t OpenXRExtensionWrapperExtension::_set_instance_create_info_and_get_next_pointer(void *next_pointer) {
	return 0;
}

uint64_t OpenXRExtensionWrapperExtension::_set_session_create_and_get_next_pointer(void *next_pointer) {
	return 0;
}

uint64_t OpenXRExtensionWrapperExtension::_set_swapchain_create_info_and_get_next_pointer(void *next_pointer) {
	return 0;
}

void OpenXRExtensionWrapperExtension::_on_register_metadata() {}

void OpenXRExtensionWrapperExtension::_on_before_instance_created() {}

void OpenXRExtensionWrapperExtension::_on_instance_created(uint64_t instance) {}

void OpenXRExtensionWrapperExtension::_on_instance_destroyed() {}

void OpenXRExtensionWrapperExtension::_on_session_created(uint64_t session) {}

void OpenXRExtensionWrapperExtension::_on_process() {}

void OpenXRExtensionWrapperExtension::_on_pre_render() {}

void OpenXRExtensionWrapperExtension::_on_session_destroyed() {}

void OpenXRExtensionWrapperExtension::_on_state_idle() {}

void OpenXRExtensionWrapperExtension::_on_state_ready() {}

void OpenXRExtensionWrapperExtension::_on_state_synchronized() {}

void OpenXRExtensionWrapperExtension::_on_state_visible() {}

void OpenXRExtensionWrapperExtension::_on_state_focused() {}

void OpenXRExtensionWrapperExtension::_on_state_stopping() {}

void OpenXRExtensionWrapperExtension::_on_state_loss_pending() {}

void OpenXRExtensionWrapperExtension::_on_state_exiting() {}

bool OpenXRExtensionWrapperExtension::_on_event_polled(const void *event) {
	return false;
}


} // namespace godot 