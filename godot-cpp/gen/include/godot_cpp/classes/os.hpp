/**************************************************************************/
/*  os.hpp                                                                */
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

#ifndef GODOT_CPP_OS_HPP
#define GODOT_CPP_OS_HPP

#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.h>
namespace godot {

class OS : public Object {
	GDEXTENSION_CLASS(OS, Object)

public:

	enum RenderingDriver {
		RENDERING_DRIVER_VULKAN = 0,
		RENDERING_DRIVER_OPENGL3 = 1,
	};

	enum SystemDir {
		SYSTEM_DIR_DESKTOP = 0,
		SYSTEM_DIR_DCIM = 1,
		SYSTEM_DIR_DOCUMENTS = 2,
		SYSTEM_DIR_DOWNLOADS = 3,
		SYSTEM_DIR_MOVIES = 4,
		SYSTEM_DIR_MUSIC = 5,
		SYSTEM_DIR_PICTURES = 6,
		SYSTEM_DIR_RINGTONES = 7,
	};

	static OS *get_singleton();

	PackedStringArray get_connected_midi_inputs();
	void open_midi_inputs();
	void close_midi_inputs();
	void alert(const String &text, const String &title = "Alert!");
	void crash(const String &message);
	void set_low_processor_usage_mode(bool enable);
	bool is_in_low_processor_usage_mode() const;
	void set_low_processor_usage_mode_sleep_usec(int32_t usec);
	int32_t get_low_processor_usage_mode_sleep_usec() const;
	void set_delta_smoothing(bool delta_smoothing_enabled);
	bool is_delta_smoothing_enabled() const;
	int32_t get_processor_count() const;
	String get_processor_name() const;
	PackedStringArray get_system_fonts() const;
	String get_system_font_path(const String &font_name, int32_t weight = 400, int32_t stretch = 100, bool italic = false) const;
	PackedStringArray get_system_font_path_for_text(const String &font_name, const String &text, const String &locale = String(), const String &script = String(), int32_t weight = 400, int32_t stretch = 100, bool italic = false) const;
	String get_executable_path() const;
	String read_string_from_stdin();
	int32_t execute(const String &path, const PackedStringArray &arguments, const Array &output = Array(), bool read_stderr = false, bool open_console = false);
	int32_t create_process(const String &path, const PackedStringArray &arguments, bool open_console = false);
	int32_t create_instance(const PackedStringArray &arguments);
	Error kill(int32_t pid);
	Error shell_open(const String &uri);
	Error shell_show_in_file_manager(const String &file_or_dir_path, bool open_folder = true);
	bool is_process_running(int32_t pid) const;
	int32_t get_process_id() const;
	bool has_environment(const String &variable) const;
	String get_environment(const String &variable) const;
	void set_environment(const String &variable, const String &value) const;
	void unset_environment(const String &variable) const;
	String get_name() const;
	String get_distribution_name() const;
	String get_version() const;
	PackedStringArray get_cmdline_args();
	PackedStringArray get_cmdline_user_args();
	PackedStringArray get_video_adapter_driver_info() const;
	void set_restart_on_exit(bool restart, const PackedStringArray &arguments = PackedStringArray());
	bool is_restart_on_exit_set() const;
	PackedStringArray get_restart_on_exit_arguments() const;
	void delay_usec(int32_t usec) const;
	void delay_msec(int32_t msec) const;
	String get_locale() const;
	String get_locale_language() const;
	String get_model_name() const;
	bool is_userfs_persistent() const;
	bool is_stdout_verbose() const;
	bool is_debug_build() const;
	uint64_t get_static_memory_usage() const;
	uint64_t get_static_memory_peak_usage() const;
	Dictionary get_memory_info() const;
	Error move_to_trash(const String &path) const;
	String get_user_data_dir() const;
	String get_system_dir(OS::SystemDir dir, bool shared_storage = true) const;
	String get_config_dir() const;
	String get_data_dir() const;
	String get_cache_dir() const;
	String get_unique_id() const;
	String get_keycode_string(Key code) const;
	bool is_keycode_unicode(int64_t code) const;
	Key find_keycode_from_string(const String &string) const;
	void set_use_file_access_save_and_swap(bool enabled);
	Error set_thread_name(const String &name);
	uint64_t get_thread_caller_id() const;
	uint64_t get_main_thread_id() const;
	bool has_feature(const String &tag_name) const;
	bool is_sandboxed() const;
	bool request_permission(const String &name);
	bool request_permissions();
	PackedStringArray get_granted_permissions() const;
	void revoke_granted_permissions();
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Object::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(OS::RenderingDriver);
VARIANT_ENUM_CAST(OS::SystemDir);

#endif // ! GODOT_CPP_OS_HPP