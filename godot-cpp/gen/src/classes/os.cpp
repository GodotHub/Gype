/**************************************************************************/
/*  os.cpp                                                                */
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

#include <godot_cpp/classes/os.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {


OS *OS::singleton = nullptr;

OS *OS::get_singleton() {
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(OS::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<OS *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &OS::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
		if (likely(singleton)) {
			ClassDB::_register_engine_singleton(OS::get_class_static(), singleton);
		}
	}
	return singleton;
}

OS::~OS() {
	if (singleton == this) {
		ClassDB::_unregister_engine_singleton(OS::get_class_static());
		singleton = nullptr;
	}
}

PackedStringArray OS::get_connected_midi_inputs() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_connected_midi_inputs")._native_ptr(), 2981934095);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void OS::open_midi_inputs() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("open_midi_inputs")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void OS::close_midi_inputs() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("close_midi_inputs")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void OS::alert(const String &text, const String &title) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("alert")._native_ptr(), 1783970740);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text, &title);
}

void OS::crash(const String &message) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("crash")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &message);
}

void OS::set_low_processor_usage_mode(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("set_low_processor_usage_mode")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool OS::is_in_low_processor_usage_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("is_in_low_processor_usage_mode")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void OS::set_low_processor_usage_mode_sleep_usec(int32_t usec) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("set_low_processor_usage_mode_sleep_usec")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t usec_encoded;
	PtrToArg<int64_t>::encode(usec, &usec_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &usec_encoded);
}

int32_t OS::get_low_processor_usage_mode_sleep_usec() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_low_processor_usage_mode_sleep_usec")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void OS::set_delta_smoothing(bool delta_smoothing_enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("set_delta_smoothing")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t delta_smoothing_enabled_encoded;
	PtrToArg<bool>::encode(delta_smoothing_enabled, &delta_smoothing_enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &delta_smoothing_enabled_encoded);
}

bool OS::is_delta_smoothing_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("is_delta_smoothing_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t OS::get_processor_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_processor_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

String OS::get_processor_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_processor_name")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

PackedStringArray OS::get_system_fonts() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_system_fonts")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

String OS::get_system_font_path(const String &font_name, int32_t weight, int32_t stretch, bool italic) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_system_font_path")._native_ptr(), 626580860);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t weight_encoded;
	PtrToArg<int64_t>::encode(weight, &weight_encoded);
	int64_t stretch_encoded;
	PtrToArg<int64_t>::encode(stretch, &stretch_encoded);
	int8_t italic_encoded;
	PtrToArg<bool>::encode(italic, &italic_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &font_name, &weight_encoded, &stretch_encoded, &italic_encoded);
}

PackedStringArray OS::get_system_font_path_for_text(const String &font_name, const String &text, const String &locale, const String &script, int32_t weight, int32_t stretch, bool italic) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_system_font_path_for_text")._native_ptr(), 197317981);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	int64_t weight_encoded;
	PtrToArg<int64_t>::encode(weight, &weight_encoded);
	int64_t stretch_encoded;
	PtrToArg<int64_t>::encode(stretch, &stretch_encoded);
	int8_t italic_encoded;
	PtrToArg<bool>::encode(italic, &italic_encoded);
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &font_name, &text, &locale, &script, &weight_encoded, &stretch_encoded, &italic_encoded);
}

String OS::get_executable_path() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_executable_path")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String OS::read_string_from_stdin() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("read_string_from_stdin")._native_ptr(), 2841200299);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

int32_t OS::execute(const String &path, const PackedStringArray &arguments, const Array &output, bool read_stderr, bool open_console) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("execute")._native_ptr(), 1488299882);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int8_t read_stderr_encoded;
	PtrToArg<bool>::encode(read_stderr, &read_stderr_encoded);
	int8_t open_console_encoded;
	PtrToArg<bool>::encode(open_console, &open_console_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &path, &arguments, &output, &read_stderr_encoded, &open_console_encoded);
}

Dictionary OS::execute_with_pipe(const String &path, const PackedStringArray &arguments) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("execute_with_pipe")._native_ptr(), 3845631403);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &path, &arguments);
}

int32_t OS::create_process(const String &path, const PackedStringArray &arguments, bool open_console) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("create_process")._native_ptr(), 2903767230);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int8_t open_console_encoded;
	PtrToArg<bool>::encode(open_console, &open_console_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &path, &arguments, &open_console_encoded);
}

int32_t OS::create_instance(const PackedStringArray &arguments) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("create_instance")._native_ptr(), 1080601263);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &arguments);
}

Error OS::kill(int32_t pid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("kill")._native_ptr(), 844576869);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t pid_encoded;
	PtrToArg<int64_t>::encode(pid, &pid_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &pid_encoded);
}

Error OS::shell_open(const String &uri) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("shell_open")._native_ptr(), 166001499);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &uri);
}

Error OS::shell_show_in_file_manager(const String &file_or_dir_path, bool open_folder) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("shell_show_in_file_manager")._native_ptr(), 3565188097);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int8_t open_folder_encoded;
	PtrToArg<bool>::encode(open_folder, &open_folder_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &file_or_dir_path, &open_folder_encoded);
}

bool OS::is_process_running(int32_t pid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("is_process_running")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t pid_encoded;
	PtrToArg<int64_t>::encode(pid, &pid_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &pid_encoded);
}

int32_t OS::get_process_exit_code(int32_t pid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_process_exit_code")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t pid_encoded;
	PtrToArg<int64_t>::encode(pid, &pid_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &pid_encoded);
}

int32_t OS::get_process_id() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_process_id")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool OS::has_environment(const String &variable) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("has_environment")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &variable);
}

String OS::get_environment(const String &variable) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_environment")._native_ptr(), 3135753539);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &variable);
}

void OS::set_environment(const String &variable, const String &value) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("set_environment")._native_ptr(), 3605043004);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &variable, &value);
}

void OS::unset_environment(const String &variable) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("unset_environment")._native_ptr(), 3089850668);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &variable);
}

String OS::get_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_name")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String OS::get_distribution_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_distribution_name")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String OS::get_version() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_version")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

PackedStringArray OS::get_cmdline_args() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_cmdline_args")._native_ptr(), 2981934095);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

PackedStringArray OS::get_cmdline_user_args() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_cmdline_user_args")._native_ptr(), 2981934095);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

PackedStringArray OS::get_video_adapter_driver_info() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_video_adapter_driver_info")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void OS::set_restart_on_exit(bool restart, const PackedStringArray &arguments) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("set_restart_on_exit")._native_ptr(), 3331453935);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t restart_encoded;
	PtrToArg<bool>::encode(restart, &restart_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &restart_encoded, &arguments);
}

bool OS::is_restart_on_exit_set() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("is_restart_on_exit_set")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

PackedStringArray OS::get_restart_on_exit_arguments() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_restart_on_exit_arguments")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void OS::delay_usec(int32_t usec) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("delay_usec")._native_ptr(), 998575451);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t usec_encoded;
	PtrToArg<int64_t>::encode(usec, &usec_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &usec_encoded);
}

void OS::delay_msec(int32_t msec) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("delay_msec")._native_ptr(), 998575451);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t msec_encoded;
	PtrToArg<int64_t>::encode(msec, &msec_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &msec_encoded);
}

String OS::get_locale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_locale")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String OS::get_locale_language() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_locale_language")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String OS::get_model_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_model_name")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

bool OS::is_userfs_persistent() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("is_userfs_persistent")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool OS::is_stdout_verbose() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("is_stdout_verbose")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool OS::is_debug_build() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("is_debug_build")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

uint64_t OS::get_static_memory_usage() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_static_memory_usage")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner);
}

uint64_t OS::get_static_memory_peak_usage() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_static_memory_peak_usage")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner);
}

Dictionary OS::get_memory_info() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_memory_info")._native_ptr(), 3102165223);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner);
}

Error OS::move_to_trash(const String &path) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("move_to_trash")._native_ptr(), 2113323047);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &path);
}

String OS::get_user_data_dir() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_user_data_dir")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String OS::get_system_dir(OS::SystemDir dir, bool shared_storage) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_system_dir")._native_ptr(), 3073895123);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int8_t shared_storage_encoded;
	PtrToArg<bool>::encode(shared_storage, &shared_storage_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &dir, &shared_storage_encoded);
}

String OS::get_config_dir() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_config_dir")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String OS::get_data_dir() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_data_dir")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String OS::get_cache_dir() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_cache_dir")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String OS::get_unique_id() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_unique_id")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String OS::get_keycode_string(Key code) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_keycode_string")._native_ptr(), 2261993717);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &code);
}

bool OS::is_keycode_unicode(int64_t code) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("is_keycode_unicode")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t code_encoded;
	PtrToArg<int64_t>::encode(code, &code_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &code_encoded);
}

Key OS::find_keycode_from_string(const String &string) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("find_keycode_from_string")._native_ptr(), 1084858572);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Key(0));
	return (Key)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &string);
}

void OS::set_use_file_access_save_and_swap(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("set_use_file_access_save_and_swap")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

Error OS::set_thread_name(const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("set_thread_name")._native_ptr(), 166001499);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &name);
}

uint64_t OS::get_thread_caller_id() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_thread_caller_id")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner);
}

uint64_t OS::get_main_thread_id() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_main_thread_id")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner);
}

bool OS::has_feature(const String &tag_name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("has_feature")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &tag_name);
}

bool OS::is_sandboxed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("is_sandboxed")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool OS::request_permission(const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("request_permission")._native_ptr(), 2323990056);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}

bool OS::request_permissions() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("request_permissions")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

PackedStringArray OS::get_granted_permissions() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("get_granted_permissions")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void OS::revoke_granted_permissions() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OS::get_class_static()._native_ptr(), StringName("revoke_granted_permissions")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}


} // namespace godot 