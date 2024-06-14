
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/os.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_OS() {
	qjs::Value js_singleton = context->newObject();
	OS *singleton = OS::get_singleton();
	js_singleton.add((new std::string("get_connected_midi_inputs"))->c_str(), [singleton]() -> PackedStringArray { return singleton->get_connected_midi_inputs(); });
	js_singleton.add((new std::string("open_midi_inputs"))->c_str(), [singleton]() -> void { singleton->open_midi_inputs(); });
	js_singleton.add((new std::string("close_midi_inputs"))->c_str(), [singleton]() -> void { singleton->close_midi_inputs(); });
	js_singleton.add((new std::string("alert"))->c_str(), [singleton](const String &text, const String &title) -> void { singleton->alert(text, title); });
	js_singleton.add((new std::string("crash"))->c_str(), [singleton](const String &message) -> void { singleton->crash(message); });
	js_singleton.add((new std::string("set_low_processor_usage_mode"))->c_str(), [singleton](bool enable) -> void { singleton->set_low_processor_usage_mode(enable); });
	js_singleton.add((new std::string("is_in_low_processor_usage_mode"))->c_str(), [singleton]() -> bool { return singleton->is_in_low_processor_usage_mode(); });
	js_singleton.add((new std::string("set_low_processor_usage_mode_sleep_usec"))->c_str(), [singleton](int32_t usec) -> void { singleton->set_low_processor_usage_mode_sleep_usec(usec); });
	js_singleton.add((new std::string("get_low_processor_usage_mode_sleep_usec"))->c_str(), [singleton]() -> int64_t { return singleton->get_low_processor_usage_mode_sleep_usec(); });
	js_singleton.add((new std::string("set_delta_smoothing"))->c_str(), [singleton](bool delta_smoothing_enabled) -> void { singleton->set_delta_smoothing(delta_smoothing_enabled); });
	js_singleton.add((new std::string("is_delta_smoothing_enabled"))->c_str(), [singleton]() -> bool { return singleton->is_delta_smoothing_enabled(); });
	js_singleton.add((new std::string("get_processor_count"))->c_str(), [singleton]() -> int64_t { return singleton->get_processor_count(); });
	js_singleton.add((new std::string("get_processor_name"))->c_str(), [singleton]() -> String { return singleton->get_processor_name(); });
	js_singleton.add((new std::string("get_system_fonts"))->c_str(), [singleton]() -> PackedStringArray { return singleton->get_system_fonts(); });
	js_singleton.add((new std::string("get_system_font_path"))->c_str(), [singleton](const String &font_name, int32_t weight, int32_t stretch, bool italic) -> String { return singleton->get_system_font_path(font_name, weight, stretch, italic); });
	js_singleton.add((new std::string("get_system_font_path_for_text"))->c_str(), [singleton](const String &font_name, const String &text, const String &locale, const String &script, int32_t weight, int32_t stretch, bool italic) -> PackedStringArray { return singleton->get_system_font_path_for_text(font_name, text, locale, script, weight, stretch, italic); });
	js_singleton.add((new std::string("get_executable_path"))->c_str(), [singleton]() -> String { return singleton->get_executable_path(); });
	js_singleton.add((new std::string("read_string_from_stdin"))->c_str(), [singleton]() -> String { return singleton->read_string_from_stdin(); });
	js_singleton.add((new std::string("execute"))->c_str(), [singleton](const String &path, const PackedStringArray &arguments, const Array &output, bool read_stderr, bool open_console) -> int64_t { return singleton->execute(path, arguments, output, read_stderr, open_console); });
	js_singleton.add((new std::string("execute_with_pipe"))->c_str(), [singleton](const String &path, const PackedStringArray &arguments) -> Dictionary { return singleton->execute_with_pipe(path, arguments); });
	js_singleton.add((new std::string("create_process"))->c_str(), [singleton](const String &path, const PackedStringArray &arguments, bool open_console) -> int64_t { return singleton->create_process(path, arguments, open_console); });
	js_singleton.add((new std::string("create_instance"))->c_str(), [singleton](const PackedStringArray &arguments) -> int64_t { return singleton->create_instance(arguments); });
	js_singleton.add((new std::string("kill"))->c_str(), [singleton](int32_t pid) -> Error { return singleton->kill(pid); });
	js_singleton.add((new std::string("shell_open"))->c_str(), [singleton](const String &uri) -> Error { return singleton->shell_open(uri); });
	js_singleton.add((new std::string("shell_show_in_file_manager"))->c_str(), [singleton](const String &file_or_dir_path, bool open_folder) -> Error { return singleton->shell_show_in_file_manager(file_or_dir_path, open_folder); });
	js_singleton.add((new std::string("is_process_running"))->c_str(), [singleton](int32_t pid) -> bool { return singleton->is_process_running(pid); });
	js_singleton.add((new std::string("get_process_exit_code"))->c_str(), [singleton](int32_t pid) -> int64_t { return singleton->get_process_exit_code(pid); });
	js_singleton.add((new std::string("get_process_id"))->c_str(), [singleton]() -> int64_t { return singleton->get_process_id(); });
	js_singleton.add((new std::string("has_environment"))->c_str(), [singleton](const String &variable) -> bool { return singleton->has_environment(variable); });
	js_singleton.add((new std::string("get_environment"))->c_str(), [singleton](const String &variable) -> String { return singleton->get_environment(variable); });
	js_singleton.add((new std::string("set_environment"))->c_str(), [singleton](const String &variable, const String &value) -> void { singleton->set_environment(variable, value); });
	js_singleton.add((new std::string("unset_environment"))->c_str(), [singleton](const String &variable) -> void { singleton->unset_environment(variable); });
	js_singleton.add((new std::string("get_name"))->c_str(), [singleton]() -> String { return singleton->get_name(); });
	js_singleton.add((new std::string("get_distribution_name"))->c_str(), [singleton]() -> String { return singleton->get_distribution_name(); });
	js_singleton.add((new std::string("get_version"))->c_str(), [singleton]() -> String { return singleton->get_version(); });
	js_singleton.add((new std::string("get_cmdline_args"))->c_str(), [singleton]() -> PackedStringArray { return singleton->get_cmdline_args(); });
	js_singleton.add((new std::string("get_cmdline_user_args"))->c_str(), [singleton]() -> PackedStringArray { return singleton->get_cmdline_user_args(); });
	js_singleton.add((new std::string("get_video_adapter_driver_info"))->c_str(), [singleton]() -> PackedStringArray { return singleton->get_video_adapter_driver_info(); });
	js_singleton.add((new std::string("set_restart_on_exit"))->c_str(), [singleton](bool restart, const PackedStringArray &arguments) -> void { singleton->set_restart_on_exit(restart, arguments); });
	js_singleton.add((new std::string("is_restart_on_exit_set"))->c_str(), [singleton]() -> bool { return singleton->is_restart_on_exit_set(); });
	js_singleton.add((new std::string("get_restart_on_exit_arguments"))->c_str(), [singleton]() -> PackedStringArray { return singleton->get_restart_on_exit_arguments(); });
	js_singleton.add((new std::string("delay_usec"))->c_str(), [singleton](int32_t usec) -> void { singleton->delay_usec(usec); });
	js_singleton.add((new std::string("delay_msec"))->c_str(), [singleton](int32_t msec) -> void { singleton->delay_msec(msec); });
	js_singleton.add((new std::string("get_locale"))->c_str(), [singleton]() -> String { return singleton->get_locale(); });
	js_singleton.add((new std::string("get_locale_language"))->c_str(), [singleton]() -> String { return singleton->get_locale_language(); });
	js_singleton.add((new std::string("get_model_name"))->c_str(), [singleton]() -> String { return singleton->get_model_name(); });
	js_singleton.add((new std::string("is_userfs_persistent"))->c_str(), [singleton]() -> bool { return singleton->is_userfs_persistent(); });
	js_singleton.add((new std::string("is_stdout_verbose"))->c_str(), [singleton]() -> bool { return singleton->is_stdout_verbose(); });
	js_singleton.add((new std::string("is_debug_build"))->c_str(), [singleton]() -> bool { return singleton->is_debug_build(); });
	js_singleton.add((new std::string("get_static_memory_usage"))->c_str(), [singleton]() -> int64_t { return singleton->get_static_memory_usage(); });
	js_singleton.add((new std::string("get_static_memory_peak_usage"))->c_str(), [singleton]() -> int64_t { return singleton->get_static_memory_peak_usage(); });
	js_singleton.add((new std::string("get_memory_info"))->c_str(), [singleton]() -> Dictionary { return singleton->get_memory_info(); });
	js_singleton.add((new std::string("move_to_trash"))->c_str(), [singleton](const String &path) -> Error { return singleton->move_to_trash(path); });
	js_singleton.add((new std::string("get_user_data_dir"))->c_str(), [singleton]() -> String { return singleton->get_user_data_dir(); });
	js_singleton.add((new std::string("get_system_dir"))->c_str(), [singleton](OS::SystemDir dir, bool shared_storage) -> String { return singleton->get_system_dir(dir, shared_storage); });
	js_singleton.add((new std::string("get_config_dir"))->c_str(), [singleton]() -> String { return singleton->get_config_dir(); });
	js_singleton.add((new std::string("get_data_dir"))->c_str(), [singleton]() -> String { return singleton->get_data_dir(); });
	js_singleton.add((new std::string("get_cache_dir"))->c_str(), [singleton]() -> String { return singleton->get_cache_dir(); });
	js_singleton.add((new std::string("get_unique_id"))->c_str(), [singleton]() -> String { return singleton->get_unique_id(); });
	js_singleton.add((new std::string("get_keycode_string"))->c_str(), [singleton](Key code) -> String { return singleton->get_keycode_string(code); });
	js_singleton.add((new std::string("is_keycode_unicode"))->c_str(), [singleton](int64_t code) -> bool { return singleton->is_keycode_unicode(code); });
	js_singleton.add((new std::string("find_keycode_from_string"))->c_str(), [singleton](const String &string) -> Key { return singleton->find_keycode_from_string(string); });
	js_singleton.add((new std::string("set_use_file_access_save_and_swap"))->c_str(), [singleton](bool enabled) -> void { singleton->set_use_file_access_save_and_swap(enabled); });
	js_singleton.add((new std::string("set_thread_name"))->c_str(), [singleton](const String &name) -> Error { return singleton->set_thread_name(name); });
	js_singleton.add((new std::string("get_thread_caller_id"))->c_str(), [singleton]() -> int64_t { return singleton->get_thread_caller_id(); });
	js_singleton.add((new std::string("get_main_thread_id"))->c_str(), [singleton]() -> int64_t { return singleton->get_main_thread_id(); });
	js_singleton.add((new std::string("has_feature"))->c_str(), [singleton](const String &tag_name) -> bool { return singleton->has_feature(tag_name); });
	js_singleton.add((new std::string("is_sandboxed"))->c_str(), [singleton]() -> bool { return singleton->is_sandboxed(); });
	js_singleton.add((new std::string("request_permission"))->c_str(), [singleton](const String &name) -> bool { return singleton->request_permission(name); });
	js_singleton.add((new std::string("request_permissions"))->c_str(), [singleton]() -> bool { return singleton->request_permissions(); });
	js_singleton.add((new std::string("get_granted_permissions"))->c_str(), [singleton]() -> PackedStringArray { return singleton->get_granted_permissions(); });
	js_singleton.add((new std::string("revoke_granted_permissions"))->c_str(), [singleton]() -> void { singleton->revoke_granted_permissions(); });
	context->global()[(new std::string("OS"))->c_str()] = js_singleton;

	qjs::Value _RenderingDriver = context->newObject();
	_RenderingDriver[(new std::string("RENDERING_DRIVER_VULKAN"))->c_str()] = OS::RenderingDriver::RENDERING_DRIVER_VULKAN;
	_RenderingDriver[(new std::string("RENDERING_DRIVER_OPENGL3"))->c_str()] = OS::RenderingDriver::RENDERING_DRIVER_OPENGL3;
	_RenderingDriver[(new std::string("RENDERING_DRIVER_D3D12"))->c_str()] = OS::RenderingDriver::RENDERING_DRIVER_D3D12;
	js_singleton[(new std::string("RenderingDriver"))->c_str()] = _RenderingDriver;
	qjs::Value _SystemDir = context->newObject();
	_SystemDir[(new std::string("SYSTEM_DIR_DESKTOP"))->c_str()] = OS::SystemDir::SYSTEM_DIR_DESKTOP;
	_SystemDir[(new std::string("SYSTEM_DIR_DCIM"))->c_str()] = OS::SystemDir::SYSTEM_DIR_DCIM;
	_SystemDir[(new std::string("SYSTEM_DIR_DOCUMENTS"))->c_str()] = OS::SystemDir::SYSTEM_DIR_DOCUMENTS;
	_SystemDir[(new std::string("SYSTEM_DIR_DOWNLOADS"))->c_str()] = OS::SystemDir::SYSTEM_DIR_DOWNLOADS;
	_SystemDir[(new std::string("SYSTEM_DIR_MOVIES"))->c_str()] = OS::SystemDir::SYSTEM_DIR_MOVIES;
	_SystemDir[(new std::string("SYSTEM_DIR_MUSIC"))->c_str()] = OS::SystemDir::SYSTEM_DIR_MUSIC;
	_SystemDir[(new std::string("SYSTEM_DIR_PICTURES"))->c_str()] = OS::SystemDir::SYSTEM_DIR_PICTURES;
	_SystemDir[(new std::string("SYSTEM_DIR_RINGTONES"))->c_str()] = OS::SystemDir::SYSTEM_DIR_RINGTONES;
	js_singleton[(new std::string("SystemDir"))->c_str()] = _SystemDir;
}