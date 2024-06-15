#include <godot_cpp/classes/os.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_OS() {
	qjs::Value js_singleton = context->newObject();
    OS *singleton = OS::get_singleton();
    js_singleton.add("get_connected_midi_inputs", [singleton]()->PackedStringArray{return singleton->get_connected_midi_inputs();});
    js_singleton.add("open_midi_inputs", [singleton]()->void{singleton->open_midi_inputs();});
    js_singleton.add("close_midi_inputs", [singleton]()->void{singleton->close_midi_inputs();});
    js_singleton.add("alert", [singleton](const String & text,const String & title)->void{singleton->alert(text,title);});
    js_singleton.add("crash", [singleton](const String & message)->void{singleton->crash(message);});
    js_singleton.add("set_low_processor_usage_mode", [singleton](bool enable)->void{singleton->set_low_processor_usage_mode(enable);});
    js_singleton.add("is_in_low_processor_usage_mode", [singleton]()->bool{return singleton->is_in_low_processor_usage_mode();});
    js_singleton.add("set_low_processor_usage_mode_sleep_usec", [singleton](int32_t usec)->void{singleton->set_low_processor_usage_mode_sleep_usec(usec);});
    js_singleton.add("get_low_processor_usage_mode_sleep_usec", [singleton]()->int64_t{return singleton->get_low_processor_usage_mode_sleep_usec();});
    js_singleton.add("set_delta_smoothing", [singleton](bool delta_smoothing_enabled)->void{singleton->set_delta_smoothing(delta_smoothing_enabled);});
    js_singleton.add("is_delta_smoothing_enabled", [singleton]()->bool{return singleton->is_delta_smoothing_enabled();});
    js_singleton.add("get_processor_count", [singleton]()->int64_t{return singleton->get_processor_count();});
    js_singleton.add("get_processor_name", [singleton]()->String{return singleton->get_processor_name();});
    js_singleton.add("get_system_fonts", [singleton]()->PackedStringArray{return singleton->get_system_fonts();});
    js_singleton.add("get_system_font_path", [singleton](const String & font_name,int32_t weight,int32_t stretch,bool italic)->String{return singleton->get_system_font_path(font_name,weight,stretch,italic);});
    js_singleton.add("get_system_font_path_for_text", [singleton](const String & font_name,const String & text,const String & locale,const String & script,int32_t weight,int32_t stretch,bool italic)->PackedStringArray{return singleton->get_system_font_path_for_text(font_name,text,locale,script,weight,stretch,italic);});
    js_singleton.add("get_executable_path", [singleton]()->String{return singleton->get_executable_path();});
    js_singleton.add("read_string_from_stdin", [singleton]()->String{return singleton->read_string_from_stdin();});
    js_singleton.add("execute", [singleton](const String & path,const PackedStringArray & arguments,const Array & output,bool read_stderr,bool open_console)->int64_t{return singleton->execute(path,arguments,output,read_stderr,open_console);});
    js_singleton.add("execute_with_pipe", [singleton](const String & path,const PackedStringArray & arguments)->Dictionary{return singleton->execute_with_pipe(path,arguments);});
    js_singleton.add("create_process", [singleton](const String & path,const PackedStringArray & arguments,bool open_console)->int64_t{return singleton->create_process(path,arguments,open_console);});
    js_singleton.add("create_instance", [singleton](const PackedStringArray & arguments)->int64_t{return singleton->create_instance(arguments);});
    js_singleton.add("kill", [singleton](int32_t pid)->Error{return singleton->kill(pid);});
    js_singleton.add("shell_open", [singleton](const String & uri)->Error{return singleton->shell_open(uri);});
    js_singleton.add("shell_show_in_file_manager", [singleton](const String & file_or_dir_path,bool open_folder)->Error{return singleton->shell_show_in_file_manager(file_or_dir_path,open_folder);});
    js_singleton.add("is_process_running", [singleton](int32_t pid)->bool{return singleton->is_process_running(pid);});
    js_singleton.add("get_process_exit_code", [singleton](int32_t pid)->int64_t{return singleton->get_process_exit_code(pid);});
    js_singleton.add("get_process_id", [singleton]()->int64_t{return singleton->get_process_id();});
    js_singleton.add("has_environment", [singleton](const String & variable)->bool{return singleton->has_environment(variable);});
    js_singleton.add("get_environment", [singleton](const String & variable)->String{return singleton->get_environment(variable);});
    js_singleton.add("set_environment", [singleton](const String & variable,const String & value)->void{singleton->set_environment(variable,value);});
    js_singleton.add("unset_environment", [singleton](const String & variable)->void{singleton->unset_environment(variable);});
    js_singleton.add("get_name", [singleton]()->String{return singleton->get_name();});
    js_singleton.add("get_distribution_name", [singleton]()->String{return singleton->get_distribution_name();});
    js_singleton.add("get_version", [singleton]()->String{return singleton->get_version();});
    js_singleton.add("get_cmdline_args", [singleton]()->PackedStringArray{return singleton->get_cmdline_args();});
    js_singleton.add("get_cmdline_user_args", [singleton]()->PackedStringArray{return singleton->get_cmdline_user_args();});
    js_singleton.add("get_video_adapter_driver_info", [singleton]()->PackedStringArray{return singleton->get_video_adapter_driver_info();});
    js_singleton.add("set_restart_on_exit", [singleton](bool restart,const PackedStringArray & arguments)->void{singleton->set_restart_on_exit(restart,arguments);});
    js_singleton.add("is_restart_on_exit_set", [singleton]()->bool{return singleton->is_restart_on_exit_set();});
    js_singleton.add("get_restart_on_exit_arguments", [singleton]()->PackedStringArray{return singleton->get_restart_on_exit_arguments();});
    js_singleton.add("delay_usec", [singleton](int32_t usec)->void{singleton->delay_usec(usec);});
    js_singleton.add("delay_msec", [singleton](int32_t msec)->void{singleton->delay_msec(msec);});
    js_singleton.add("get_locale", [singleton]()->String{return singleton->get_locale();});
    js_singleton.add("get_locale_language", [singleton]()->String{return singleton->get_locale_language();});
    js_singleton.add("get_model_name", [singleton]()->String{return singleton->get_model_name();});
    js_singleton.add("is_userfs_persistent", [singleton]()->bool{return singleton->is_userfs_persistent();});
    js_singleton.add("is_stdout_verbose", [singleton]()->bool{return singleton->is_stdout_verbose();});
    js_singleton.add("is_debug_build", [singleton]()->bool{return singleton->is_debug_build();});
    js_singleton.add("get_static_memory_usage", [singleton]()->int64_t{return singleton->get_static_memory_usage();});
    js_singleton.add("get_static_memory_peak_usage", [singleton]()->int64_t{return singleton->get_static_memory_peak_usage();});
    js_singleton.add("get_memory_info", [singleton]()->Dictionary{return singleton->get_memory_info();});
    js_singleton.add("move_to_trash", [singleton](const String & path)->Error{return singleton->move_to_trash(path);});
    js_singleton.add("get_user_data_dir", [singleton]()->String{return singleton->get_user_data_dir();});
    js_singleton.add("get_system_dir", [singleton](OS::SystemDir dir,bool shared_storage)->String{return singleton->get_system_dir(dir,shared_storage);});
    js_singleton.add("get_config_dir", [singleton]()->String{return singleton->get_config_dir();});
    js_singleton.add("get_data_dir", [singleton]()->String{return singleton->get_data_dir();});
    js_singleton.add("get_cache_dir", [singleton]()->String{return singleton->get_cache_dir();});
    js_singleton.add("get_unique_id", [singleton]()->String{return singleton->get_unique_id();});
    js_singleton.add("get_keycode_string", [singleton](Key code)->String{return singleton->get_keycode_string(code);});
    js_singleton.add("is_keycode_unicode", [singleton](int64_t code)->bool{return singleton->is_keycode_unicode(code);});
    js_singleton.add("find_keycode_from_string", [singleton](const String & string)->Key{return singleton->find_keycode_from_string(string);});
    js_singleton.add("set_use_file_access_save_and_swap", [singleton](bool enabled)->void{singleton->set_use_file_access_save_and_swap(enabled);});
    js_singleton.add("set_thread_name", [singleton](const String & name)->Error{return singleton->set_thread_name(name);});
    js_singleton.add("get_thread_caller_id", [singleton]()->int64_t{return singleton->get_thread_caller_id();});
    js_singleton.add("get_main_thread_id", [singleton]()->int64_t{return singleton->get_main_thread_id();});
    js_singleton.add("has_feature", [singleton](const String & tag_name)->bool{return singleton->has_feature(tag_name);});
    js_singleton.add("is_sandboxed", [singleton]()->bool{return singleton->is_sandboxed();});
    js_singleton.add("request_permission", [singleton](const String & name)->bool{return singleton->request_permission(name);});
    js_singleton.add("request_permissions", [singleton]()->bool{return singleton->request_permissions();});
    js_singleton.add("get_granted_permissions", [singleton]()->PackedStringArray{return singleton->get_granted_permissions();});
    js_singleton.add("revoke_granted_permissions", [singleton]()->void{singleton->revoke_granted_permissions();});
    context->global()["OS"] = js_singleton;

    qjs::Value _RenderingDriver = context->newObject();
    _RenderingDriver["RENDERING_DRIVER_VULKAN"] = OS::RenderingDriver::RENDERING_DRIVER_VULKAN;
    _RenderingDriver["RENDERING_DRIVER_OPENGL3"] = OS::RenderingDriver::RENDERING_DRIVER_OPENGL3;
    _RenderingDriver["RENDERING_DRIVER_D3D12"] = OS::RenderingDriver::RENDERING_DRIVER_D3D12;
    js_singleton["RenderingDriver"] = _RenderingDriver;
    qjs::Value _SystemDir = context->newObject();
    _SystemDir["SYSTEM_DIR_DESKTOP"] = OS::SystemDir::SYSTEM_DIR_DESKTOP;
    _SystemDir["SYSTEM_DIR_DCIM"] = OS::SystemDir::SYSTEM_DIR_DCIM;
    _SystemDir["SYSTEM_DIR_DOCUMENTS"] = OS::SystemDir::SYSTEM_DIR_DOCUMENTS;
    _SystemDir["SYSTEM_DIR_DOWNLOADS"] = OS::SystemDir::SYSTEM_DIR_DOWNLOADS;
    _SystemDir["SYSTEM_DIR_MOVIES"] = OS::SystemDir::SYSTEM_DIR_MOVIES;
    _SystemDir["SYSTEM_DIR_MUSIC"] = OS::SystemDir::SYSTEM_DIR_MUSIC;
    _SystemDir["SYSTEM_DIR_PICTURES"] = OS::SystemDir::SYSTEM_DIR_PICTURES;
    _SystemDir["SYSTEM_DIR_RINGTONES"] = OS::SystemDir::SYSTEM_DIR_RINGTONES;
    js_singleton["SystemDir"] = _SystemDir;
}