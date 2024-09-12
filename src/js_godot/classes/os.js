import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_entropy;
  method_get_system_ca_certificates;
  method_get_connected_midi_inputs;
  method_open_midi_inputs;
  method_close_midi_inputs;
  method_alert;
  method_crash;
  method_set_low_processor_usage_mode;
  method_is_in_low_processor_usage_mode;
  method_set_low_processor_usage_mode_sleep_usec;
  method_get_low_processor_usage_mode_sleep_usec;
  method_set_delta_smoothing;
  method_is_delta_smoothing_enabled;
  method_get_processor_count;
  method_get_processor_name;
  method_get_system_fonts;
  method_get_system_font_path;
  method_get_system_font_path_for_text;
  method_get_executable_path;
  method_read_string_from_stdin;
  method_execute;
  method_execute_with_pipe;
  method_create_process;
  method_create_instance;
  method_kill;
  method_shell_open;
  method_shell_show_in_file_manager;
  method_is_process_running;
  method_get_process_exit_code;
  method_get_process_id;
  method_has_environment;
  method_get_environment;
  method_set_environment;
  method_unset_environment;
  method_get_name;
  method_get_distribution_name;
  method_get_version;
  method_get_cmdline_args;
  method_get_cmdline_user_args;
  method_get_video_adapter_driver_info;
  method_set_restart_on_exit;
  method_is_restart_on_exit_set;
  method_get_restart_on_exit_arguments;
  method_delay_usec;
  method_delay_msec;
  method_get_locale;
  method_get_locale_language;
  method_get_model_name;
  method_is_userfs_persistent;
  method_is_stdout_verbose;
  method_is_debug_build;
  method_get_static_memory_usage;
  method_get_static_memory_peak_usage;
  method_get_memory_info;
  method_move_to_trash;
  method_get_user_data_dir;
  method_get_system_dir;
  method_get_config_dir;
  method_get_data_dir;
  method_get_cache_dir;
  method_get_unique_id;
  method_get_keycode_string;
  method_is_keycode_unicode;
  method_find_keycode_from_string;
  method_set_use_file_access_save_and_swap;
  method_set_thread_name;
  method_get_thread_caller_id;
  method_get_main_thread_id;
  method_has_feature;
  method_is_sandboxed;
  method_request_permission;
  method_request_permissions;
  method_get_granted_permissions;
  method_revoke_granted_permissions;
}class _OS extends GodotObject{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("OS");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_entropy() {
    if (!this.#_bindings.method_get_entropy) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_entropy");
      this.#_bindings.method_get_entropy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        47165747
      );
    }
  }
  static init_method_get_system_ca_certificates() {
    if (!this.#_bindings.method_get_system_ca_certificates) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_system_ca_certificates");
      this.#_bindings.method_get_system_ca_certificates = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2841200299
      );
    }
  }
  static init_method_get_connected_midi_inputs() {
    if (!this.#_bindings.method_get_connected_midi_inputs) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_connected_midi_inputs");
      this.#_bindings.method_get_connected_midi_inputs = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2981934095
      );
    }
  }
  static init_method_open_midi_inputs() {
    if (!this.#_bindings.method_open_midi_inputs) {
      let classname = new StringName("OS");
      let methodname = new StringName("open_midi_inputs");
      this.#_bindings.method_open_midi_inputs = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_close_midi_inputs() {
    if (!this.#_bindings.method_close_midi_inputs) {
      let classname = new StringName("OS");
      let methodname = new StringName("close_midi_inputs");
      this.#_bindings.method_close_midi_inputs = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_alert() {
    if (!this.#_bindings.method_alert) {
      let classname = new StringName("OS");
      let methodname = new StringName("alert");
      this.#_bindings.method_alert = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1783970740
      );
    }
  }
  static init_method_crash() {
    if (!this.#_bindings.method_crash) {
      let classname = new StringName("OS");
      let methodname = new StringName("crash");
      this.#_bindings.method_crash = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_set_low_processor_usage_mode() {
    if (!this.#_bindings.method_set_low_processor_usage_mode) {
      let classname = new StringName("OS");
      let methodname = new StringName("set_low_processor_usage_mode");
      this.#_bindings.method_set_low_processor_usage_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_in_low_processor_usage_mode() {
    if (!this.#_bindings.method_is_in_low_processor_usage_mode) {
      let classname = new StringName("OS");
      let methodname = new StringName("is_in_low_processor_usage_mode");
      this.#_bindings.method_is_in_low_processor_usage_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_low_processor_usage_mode_sleep_usec() {
    if (!this.#_bindings.method_set_low_processor_usage_mode_sleep_usec) {
      let classname = new StringName("OS");
      let methodname = new StringName("set_low_processor_usage_mode_sleep_usec");
      this.#_bindings.method_set_low_processor_usage_mode_sleep_usec = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_low_processor_usage_mode_sleep_usec() {
    if (!this.#_bindings.method_get_low_processor_usage_mode_sleep_usec) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_low_processor_usage_mode_sleep_usec");
      this.#_bindings.method_get_low_processor_usage_mode_sleep_usec = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_delta_smoothing() {
    if (!this.#_bindings.method_set_delta_smoothing) {
      let classname = new StringName("OS");
      let methodname = new StringName("set_delta_smoothing");
      this.#_bindings.method_set_delta_smoothing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_delta_smoothing_enabled() {
    if (!this.#_bindings.method_is_delta_smoothing_enabled) {
      let classname = new StringName("OS");
      let methodname = new StringName("is_delta_smoothing_enabled");
      this.#_bindings.method_is_delta_smoothing_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_processor_count() {
    if (!this.#_bindings.method_get_processor_count) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_processor_count");
      this.#_bindings.method_get_processor_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_processor_name() {
    if (!this.#_bindings.method_get_processor_name) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_processor_name");
      this.#_bindings.method_get_processor_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_system_fonts() {
    if (!this.#_bindings.method_get_system_fonts) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_system_fonts");
      this.#_bindings.method_get_system_fonts = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_get_system_font_path() {
    if (!this.#_bindings.method_get_system_font_path) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_system_font_path");
      this.#_bindings.method_get_system_font_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        626580860
      );
    }
  }
  static init_method_get_system_font_path_for_text() {
    if (!this.#_bindings.method_get_system_font_path_for_text) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_system_font_path_for_text");
      this.#_bindings.method_get_system_font_path_for_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        197317981
      );
    }
  }
  static init_method_get_executable_path() {
    if (!this.#_bindings.method_get_executable_path) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_executable_path");
      this.#_bindings.method_get_executable_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_read_string_from_stdin() {
    if (!this.#_bindings.method_read_string_from_stdin) {
      let classname = new StringName("OS");
      let methodname = new StringName("read_string_from_stdin");
      this.#_bindings.method_read_string_from_stdin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2841200299
      );
    }
  }
  static init_method_execute() {
    if (!this.#_bindings.method_execute) {
      let classname = new StringName("OS");
      let methodname = new StringName("execute");
      this.#_bindings.method_execute = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1488299882
      );
    }
  }
  static init_method_execute_with_pipe() {
    if (!this.#_bindings.method_execute_with_pipe) {
      let classname = new StringName("OS");
      let methodname = new StringName("execute_with_pipe");
      this.#_bindings.method_execute_with_pipe = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3845631403
      );
    }
  }
  static init_method_create_process() {
    if (!this.#_bindings.method_create_process) {
      let classname = new StringName("OS");
      let methodname = new StringName("create_process");
      this.#_bindings.method_create_process = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2903767230
      );
    }
  }
  static init_method_create_instance() {
    if (!this.#_bindings.method_create_instance) {
      let classname = new StringName("OS");
      let methodname = new StringName("create_instance");
      this.#_bindings.method_create_instance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1080601263
      );
    }
  }
  static init_method_kill() {
    if (!this.#_bindings.method_kill) {
      let classname = new StringName("OS");
      let methodname = new StringName("kill");
      this.#_bindings.method_kill = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844576869
      );
    }
  }
  static init_method_shell_open() {
    if (!this.#_bindings.method_shell_open) {
      let classname = new StringName("OS");
      let methodname = new StringName("shell_open");
      this.#_bindings.method_shell_open = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166001499
      );
    }
  }
  static init_method_shell_show_in_file_manager() {
    if (!this.#_bindings.method_shell_show_in_file_manager) {
      let classname = new StringName("OS");
      let methodname = new StringName("shell_show_in_file_manager");
      this.#_bindings.method_shell_show_in_file_manager = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3565188097
      );
    }
  }
  static init_method_is_process_running() {
    if (!this.#_bindings.method_is_process_running) {
      let classname = new StringName("OS");
      let methodname = new StringName("is_process_running");
      this.#_bindings.method_is_process_running = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_get_process_exit_code() {
    if (!this.#_bindings.method_get_process_exit_code) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_process_exit_code");
      this.#_bindings.method_get_process_exit_code = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_get_process_id() {
    if (!this.#_bindings.method_get_process_id) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_process_id");
      this.#_bindings.method_get_process_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_has_environment() {
    if (!this.#_bindings.method_has_environment) {
      let classname = new StringName("OS");
      let methodname = new StringName("has_environment");
      this.#_bindings.method_has_environment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3927539163
      );
    }
  }
  static init_method_get_environment() {
    if (!this.#_bindings.method_get_environment) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_environment");
      this.#_bindings.method_get_environment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3135753539
      );
    }
  }
  static init_method_set_environment() {
    if (!this.#_bindings.method_set_environment) {
      let classname = new StringName("OS");
      let methodname = new StringName("set_environment");
      this.#_bindings.method_set_environment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3605043004
      );
    }
  }
  static init_method_unset_environment() {
    if (!this.#_bindings.method_unset_environment) {
      let classname = new StringName("OS");
      let methodname = new StringName("unset_environment");
      this.#_bindings.method_unset_environment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3089850668
      );
    }
  }
  static init_method_get_name() {
    if (!this.#_bindings.method_get_name) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_name");
      this.#_bindings.method_get_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_distribution_name() {
    if (!this.#_bindings.method_get_distribution_name) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_distribution_name");
      this.#_bindings.method_get_distribution_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_version() {
    if (!this.#_bindings.method_get_version) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_version");
      this.#_bindings.method_get_version = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_cmdline_args() {
    if (!this.#_bindings.method_get_cmdline_args) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_cmdline_args");
      this.#_bindings.method_get_cmdline_args = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2981934095
      );
    }
  }
  static init_method_get_cmdline_user_args() {
    if (!this.#_bindings.method_get_cmdline_user_args) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_cmdline_user_args");
      this.#_bindings.method_get_cmdline_user_args = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2981934095
      );
    }
  }
  static init_method_get_video_adapter_driver_info() {
    if (!this.#_bindings.method_get_video_adapter_driver_info) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_video_adapter_driver_info");
      this.#_bindings.method_get_video_adapter_driver_info = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_set_restart_on_exit() {
    if (!this.#_bindings.method_set_restart_on_exit) {
      let classname = new StringName("OS");
      let methodname = new StringName("set_restart_on_exit");
      this.#_bindings.method_set_restart_on_exit = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3331453935
      );
    }
  }
  static init_method_is_restart_on_exit_set() {
    if (!this.#_bindings.method_is_restart_on_exit_set) {
      let classname = new StringName("OS");
      let methodname = new StringName("is_restart_on_exit_set");
      this.#_bindings.method_is_restart_on_exit_set = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_restart_on_exit_arguments() {
    if (!this.#_bindings.method_get_restart_on_exit_arguments) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_restart_on_exit_arguments");
      this.#_bindings.method_get_restart_on_exit_arguments = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_delay_usec() {
    if (!this.#_bindings.method_delay_usec) {
      let classname = new StringName("OS");
      let methodname = new StringName("delay_usec");
      this.#_bindings.method_delay_usec = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        998575451
      );
    }
  }
  static init_method_delay_msec() {
    if (!this.#_bindings.method_delay_msec) {
      let classname = new StringName("OS");
      let methodname = new StringName("delay_msec");
      this.#_bindings.method_delay_msec = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        998575451
      );
    }
  }
  static init_method_get_locale() {
    if (!this.#_bindings.method_get_locale) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_locale");
      this.#_bindings.method_get_locale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_locale_language() {
    if (!this.#_bindings.method_get_locale_language) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_locale_language");
      this.#_bindings.method_get_locale_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_model_name() {
    if (!this.#_bindings.method_get_model_name) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_model_name");
      this.#_bindings.method_get_model_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_is_userfs_persistent() {
    if (!this.#_bindings.method_is_userfs_persistent) {
      let classname = new StringName("OS");
      let methodname = new StringName("is_userfs_persistent");
      this.#_bindings.method_is_userfs_persistent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_stdout_verbose() {
    if (!this.#_bindings.method_is_stdout_verbose) {
      let classname = new StringName("OS");
      let methodname = new StringName("is_stdout_verbose");
      this.#_bindings.method_is_stdout_verbose = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_debug_build() {
    if (!this.#_bindings.method_is_debug_build) {
      let classname = new StringName("OS");
      let methodname = new StringName("is_debug_build");
      this.#_bindings.method_is_debug_build = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_static_memory_usage() {
    if (!this.#_bindings.method_get_static_memory_usage) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_static_memory_usage");
      this.#_bindings.method_get_static_memory_usage = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_static_memory_peak_usage() {
    if (!this.#_bindings.method_get_static_memory_peak_usage) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_static_memory_peak_usage");
      this.#_bindings.method_get_static_memory_peak_usage = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_memory_info() {
    if (!this.#_bindings.method_get_memory_info) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_memory_info");
      this.#_bindings.method_get_memory_info = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3102165223
      );
    }
  }
  static init_method_move_to_trash() {
    if (!this.#_bindings.method_move_to_trash) {
      let classname = new StringName("OS");
      let methodname = new StringName("move_to_trash");
      this.#_bindings.method_move_to_trash = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2113323047
      );
    }
  }
  static init_method_get_user_data_dir() {
    if (!this.#_bindings.method_get_user_data_dir) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_user_data_dir");
      this.#_bindings.method_get_user_data_dir = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_system_dir() {
    if (!this.#_bindings.method_get_system_dir) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_system_dir");
      this.#_bindings.method_get_system_dir = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3073895123
      );
    }
  }
  static init_method_get_config_dir() {
    if (!this.#_bindings.method_get_config_dir) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_config_dir");
      this.#_bindings.method_get_config_dir = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_data_dir() {
    if (!this.#_bindings.method_get_data_dir) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_data_dir");
      this.#_bindings.method_get_data_dir = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_cache_dir() {
    if (!this.#_bindings.method_get_cache_dir) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_cache_dir");
      this.#_bindings.method_get_cache_dir = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_unique_id() {
    if (!this.#_bindings.method_get_unique_id) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_unique_id");
      this.#_bindings.method_get_unique_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_keycode_string() {
    if (!this.#_bindings.method_get_keycode_string) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_keycode_string");
      this.#_bindings.method_get_keycode_string = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2261993717
      );
    }
  }
  static init_method_is_keycode_unicode() {
    if (!this.#_bindings.method_is_keycode_unicode) {
      let classname = new StringName("OS");
      let methodname = new StringName("is_keycode_unicode");
      this.#_bindings.method_is_keycode_unicode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_find_keycode_from_string() {
    if (!this.#_bindings.method_find_keycode_from_string) {
      let classname = new StringName("OS");
      let methodname = new StringName("find_keycode_from_string");
      this.#_bindings.method_find_keycode_from_string = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1084858572
      );
    }
  }
  static init_method_set_use_file_access_save_and_swap() {
    if (!this.#_bindings.method_set_use_file_access_save_and_swap) {
      let classname = new StringName("OS");
      let methodname = new StringName("set_use_file_access_save_and_swap");
      this.#_bindings.method_set_use_file_access_save_and_swap = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_thread_name() {
    if (!this.#_bindings.method_set_thread_name) {
      let classname = new StringName("OS");
      let methodname = new StringName("set_thread_name");
      this.#_bindings.method_set_thread_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166001499
      );
    }
  }
  static init_method_get_thread_caller_id() {
    if (!this.#_bindings.method_get_thread_caller_id) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_thread_caller_id");
      this.#_bindings.method_get_thread_caller_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_main_thread_id() {
    if (!this.#_bindings.method_get_main_thread_id) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_main_thread_id");
      this.#_bindings.method_get_main_thread_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_has_feature() {
    if (!this.#_bindings.method_has_feature) {
      let classname = new StringName("OS");
      let methodname = new StringName("has_feature");
      this.#_bindings.method_has_feature = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3927539163
      );
    }
  }
  static init_method_is_sandboxed() {
    if (!this.#_bindings.method_is_sandboxed) {
      let classname = new StringName("OS");
      let methodname = new StringName("is_sandboxed");
      this.#_bindings.method_is_sandboxed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_request_permission() {
    if (!this.#_bindings.method_request_permission) {
      let classname = new StringName("OS");
      let methodname = new StringName("request_permission");
      this.#_bindings.method_request_permission = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2323990056
      );
    }
  }
  static init_method_request_permissions() {
    if (!this.#_bindings.method_request_permissions) {
      let classname = new StringName("OS");
      let methodname = new StringName("request_permissions");
      this.#_bindings.method_request_permissions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_get_granted_permissions() {
    if (!this.#_bindings.method_get_granted_permissions) {
      let classname = new StringName("OS");
      let methodname = new StringName("get_granted_permissions");
      this.#_bindings.method_get_granted_permissions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_revoke_granted_permissions() {
    if (!this.#_bindings.method_revoke_granted_permissions) {
      let classname = new StringName("OS");
      let methodname = new StringName("revoke_granted_permissions");
      this.#_bindings.method_revoke_granted_permissions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }

  
  
  get_entropy(_size) {
    OS.init_method_get_entropy();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_entropy,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _size
    );
    
  }
  get_system_ca_certificates() {
    OS.init_method_get_system_ca_certificates();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_system_ca_certificates,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_connected_midi_inputs() {
    OS.init_method_get_connected_midi_inputs();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_connected_midi_inputs,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  open_midi_inputs() {
    OS.init_method_open_midi_inputs();
    return _call_native_mb_no_ret(
      _OS.#_bindings.method_open_midi_inputs,
      this._owner,
      
    );
    
  }
  close_midi_inputs() {
    OS.init_method_close_midi_inputs();
    return _call_native_mb_no_ret(
      _OS.#_bindings.method_close_midi_inputs,
      this._owner,
      
    );
    
  }
  alert(_text, _title) {
    OS.init_method_alert();
    return _call_native_mb_no_ret(
      _OS.#_bindings.method_alert,
      this._owner,
      _text, _title
    );
    
  }
  crash(_message) {
    OS.init_method_crash();
    return _call_native_mb_no_ret(
      _OS.#_bindings.method_crash,
      this._owner,
      _message
    );
    
  }
  set_low_processor_usage_mode(_enable) {
    OS.init_method_set_low_processor_usage_mode();
    return _call_native_mb_no_ret(
      _OS.#_bindings.method_set_low_processor_usage_mode,
      this._owner,
      _enable
    );
    
  }
  is_in_low_processor_usage_mode() {
    OS.init_method_is_in_low_processor_usage_mode();
    return _call_native_mb_ret(
      _OS.#_bindings.method_is_in_low_processor_usage_mode,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_low_processor_usage_mode_sleep_usec(_usec) {
    OS.init_method_set_low_processor_usage_mode_sleep_usec();
    return _call_native_mb_no_ret(
      _OS.#_bindings.method_set_low_processor_usage_mode_sleep_usec,
      this._owner,
      _usec
    );
    
  }
  get_low_processor_usage_mode_sleep_usec() {
    OS.init_method_get_low_processor_usage_mode_sleep_usec();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_low_processor_usage_mode_sleep_usec,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_delta_smoothing(_delta_smoothing_enabled) {
    OS.init_method_set_delta_smoothing();
    return _call_native_mb_no_ret(
      _OS.#_bindings.method_set_delta_smoothing,
      this._owner,
      _delta_smoothing_enabled
    );
    
  }
  is_delta_smoothing_enabled() {
    OS.init_method_is_delta_smoothing_enabled();
    return _call_native_mb_ret(
      _OS.#_bindings.method_is_delta_smoothing_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_processor_count() {
    OS.init_method_get_processor_count();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_processor_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_processor_name() {
    OS.init_method_get_processor_name();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_processor_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_system_fonts() {
    OS.init_method_get_system_fonts();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_system_fonts,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_system_font_path(_font_name, _weight, _stretch, _italic) {
    OS.init_method_get_system_font_path();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_system_font_path,
      this._owner,
			Variant.Type.STRING,
    
      _font_name, _weight, _stretch, _italic
    );
    
  }
  get_system_font_path_for_text(_font_name, _text, _locale, _script, _weight, _stretch, _italic) {
    OS.init_method_get_system_font_path_for_text();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_system_font_path_for_text,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _font_name, _text, _locale, _script, _weight, _stretch, _italic
    );
    
  }
  get_executable_path() {
    OS.init_method_get_executable_path();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_executable_path,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  read_string_from_stdin() {
    OS.init_method_read_string_from_stdin();
    return _call_native_mb_ret(
      _OS.#_bindings.method_read_string_from_stdin,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  execute(_path, _arguments, _output, _read_stderr, _open_console) {
    OS.init_method_execute();
    return _call_native_mb_ret(
      _OS.#_bindings.method_execute,
      this._owner,
			Variant.Type.INT,
    
      _path, _arguments, _output, _read_stderr, _open_console
    );
    
  }
  execute_with_pipe(_path, _arguments) {
    OS.init_method_execute_with_pipe();
    return _call_native_mb_ret(
      _OS.#_bindings.method_execute_with_pipe,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _path, _arguments
    );
    
  }
  create_process(_path, _arguments, _open_console) {
    OS.init_method_create_process();
    return _call_native_mb_ret(
      _OS.#_bindings.method_create_process,
      this._owner,
			Variant.Type.INT,
    
      _path, _arguments, _open_console
    );
    
  }
  create_instance(_arguments) {
    OS.init_method_create_instance();
    return _call_native_mb_ret(
      _OS.#_bindings.method_create_instance,
      this._owner,
			Variant.Type.INT,
    
      _arguments
    );
    
  }
  kill(_pid) {
    OS.init_method_kill();
    return _call_native_mb_ret(
      _OS.#_bindings.method_kill,
      this._owner,
			Variant.Type.INT,
    
      _pid
    );
    
  }
  shell_open(_uri) {
    OS.init_method_shell_open();
    return _call_native_mb_ret(
      _OS.#_bindings.method_shell_open,
      this._owner,
			Variant.Type.INT,
    
      _uri
    );
    
  }
  shell_show_in_file_manager(_file_or_dir_path, _open_folder) {
    OS.init_method_shell_show_in_file_manager();
    return _call_native_mb_ret(
      _OS.#_bindings.method_shell_show_in_file_manager,
      this._owner,
			Variant.Type.INT,
    
      _file_or_dir_path, _open_folder
    );
    
  }
  is_process_running(_pid) {
    OS.init_method_is_process_running();
    return _call_native_mb_ret(
      _OS.#_bindings.method_is_process_running,
      this._owner,
			Variant.Type.BOOL,
    
      _pid
    );
    
  }
  get_process_exit_code(_pid) {
    OS.init_method_get_process_exit_code();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_process_exit_code,
      this._owner,
			Variant.Type.INT,
    
      _pid
    );
    
  }
  get_process_id() {
    OS.init_method_get_process_id();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_process_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  has_environment(_variable) {
    OS.init_method_has_environment();
    return _call_native_mb_ret(
      _OS.#_bindings.method_has_environment,
      this._owner,
			Variant.Type.BOOL,
    
      _variable
    );
    
  }
  get_environment(_variable) {
    OS.init_method_get_environment();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_environment,
      this._owner,
			Variant.Type.STRING,
    
      _variable
    );
    
  }
  set_environment(_variable, _value) {
    OS.init_method_set_environment();
    return _call_native_mb_no_ret(
      _OS.#_bindings.method_set_environment,
      this._owner,
      _variable, _value
    );
    
  }
  unset_environment(_variable) {
    OS.init_method_unset_environment();
    return _call_native_mb_no_ret(
      _OS.#_bindings.method_unset_environment,
      this._owner,
      _variable
    );
    
  }
  get_name() {
    OS.init_method_get_name();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_distribution_name() {
    OS.init_method_get_distribution_name();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_distribution_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_version() {
    OS.init_method_get_version();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_version,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_cmdline_args() {
    OS.init_method_get_cmdline_args();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_cmdline_args,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_cmdline_user_args() {
    OS.init_method_get_cmdline_user_args();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_cmdline_user_args,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_video_adapter_driver_info() {
    OS.init_method_get_video_adapter_driver_info();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_video_adapter_driver_info,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  set_restart_on_exit(_restart, _arguments) {
    OS.init_method_set_restart_on_exit();
    return _call_native_mb_no_ret(
      _OS.#_bindings.method_set_restart_on_exit,
      this._owner,
      _restart, _arguments
    );
    
  }
  is_restart_on_exit_set() {
    OS.init_method_is_restart_on_exit_set();
    return _call_native_mb_ret(
      _OS.#_bindings.method_is_restart_on_exit_set,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_restart_on_exit_arguments() {
    OS.init_method_get_restart_on_exit_arguments();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_restart_on_exit_arguments,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  delay_usec(_usec) {
    OS.init_method_delay_usec();
    return _call_native_mb_no_ret(
      _OS.#_bindings.method_delay_usec,
      this._owner,
      _usec
    );
    
  }
  delay_msec(_msec) {
    OS.init_method_delay_msec();
    return _call_native_mb_no_ret(
      _OS.#_bindings.method_delay_msec,
      this._owner,
      _msec
    );
    
  }
  get_locale() {
    OS.init_method_get_locale();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_locale,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_locale_language() {
    OS.init_method_get_locale_language();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_locale_language,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_model_name() {
    OS.init_method_get_model_name();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_model_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  is_userfs_persistent() {
    OS.init_method_is_userfs_persistent();
    return _call_native_mb_ret(
      _OS.#_bindings.method_is_userfs_persistent,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_stdout_verbose() {
    OS.init_method_is_stdout_verbose();
    return _call_native_mb_ret(
      _OS.#_bindings.method_is_stdout_verbose,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_debug_build() {
    OS.init_method_is_debug_build();
    return _call_native_mb_ret(
      _OS.#_bindings.method_is_debug_build,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_static_memory_usage() {
    OS.init_method_get_static_memory_usage();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_static_memory_usage,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_static_memory_peak_usage() {
    OS.init_method_get_static_memory_peak_usage();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_static_memory_peak_usage,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_memory_info() {
    OS.init_method_get_memory_info();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_memory_info,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  move_to_trash(_path) {
    OS.init_method_move_to_trash();
    return _call_native_mb_ret(
      _OS.#_bindings.method_move_to_trash,
      this._owner,
			Variant.Type.INT,
    
      _path
    );
    
  }
  get_user_data_dir() {
    OS.init_method_get_user_data_dir();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_user_data_dir,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_system_dir(_dir, _shared_storage) {
    OS.init_method_get_system_dir();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_system_dir,
      this._owner,
			Variant.Type.STRING,
    
      _dir, _shared_storage
    );
    
  }
  get_config_dir() {
    OS.init_method_get_config_dir();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_config_dir,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_data_dir() {
    OS.init_method_get_data_dir();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_data_dir,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_cache_dir() {
    OS.init_method_get_cache_dir();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_cache_dir,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_unique_id() {
    OS.init_method_get_unique_id();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_unique_id,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_keycode_string(_code) {
    OS.init_method_get_keycode_string();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_keycode_string,
      this._owner,
			Variant.Type.STRING,
    
      _code
    );
    
  }
  is_keycode_unicode(_code) {
    OS.init_method_is_keycode_unicode();
    return _call_native_mb_ret(
      _OS.#_bindings.method_is_keycode_unicode,
      this._owner,
			Variant.Type.BOOL,
    
      _code
    );
    
  }
  find_keycode_from_string(_string) {
    OS.init_method_find_keycode_from_string();
    return _call_native_mb_ret(
      _OS.#_bindings.method_find_keycode_from_string,
      this._owner,
			Variant.Type.INT,
    
      _string
    );
    
  }
  set_use_file_access_save_and_swap(_enabled) {
    OS.init_method_set_use_file_access_save_and_swap();
    return _call_native_mb_no_ret(
      _OS.#_bindings.method_set_use_file_access_save_and_swap,
      this._owner,
      _enabled
    );
    
  }
  set_thread_name(_name) {
    OS.init_method_set_thread_name();
    return _call_native_mb_ret(
      _OS.#_bindings.method_set_thread_name,
      this._owner,
			Variant.Type.INT,
    
      _name
    );
    
  }
  get_thread_caller_id() {
    OS.init_method_get_thread_caller_id();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_thread_caller_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_main_thread_id() {
    OS.init_method_get_main_thread_id();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_main_thread_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  has_feature(_tag_name) {
    OS.init_method_has_feature();
    return _call_native_mb_ret(
      _OS.#_bindings.method_has_feature,
      this._owner,
			Variant.Type.BOOL,
    
      _tag_name
    );
    
  }
  is_sandboxed() {
    OS.init_method_is_sandboxed();
    return _call_native_mb_ret(
      _OS.#_bindings.method_is_sandboxed,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  request_permission(_name) {
    OS.init_method_request_permission();
    return _call_native_mb_ret(
      _OS.#_bindings.method_request_permission,
      this._owner,
			Variant.Type.BOOL,
    
      _name
    );
    
  }
  request_permissions() {
    OS.init_method_request_permissions();
    return _call_native_mb_ret(
      _OS.#_bindings.method_request_permissions,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_granted_permissions() {
    OS.init_method_get_granted_permissions();
    return _call_native_mb_ret(
      _OS.#_bindings.method_get_granted_permissions,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  revoke_granted_permissions() {
    OS.init_method_revoke_granted_permissions();
    return _call_native_mb_no_ret(
      _OS.#_bindings.method_revoke_granted_permissions,
      this._owner,
      
    );
    
  }
  
get low_processor_usage_mode () {
  return this.is_in_low_processor_usage_mode();
}
set low_processor_usage_mode (new_value) {
  this.set_low_processor_usage_mode(new_value);
}
get low_processor_usage_mode_sleep_usec () {
  return this.get_low_processor_usage_mode_sleep_usec();
}
set low_processor_usage_mode_sleep_usec (new_value) {
  this.set_low_processor_usage_mode_sleep_usec(new_value);
}
get delta_smoothing () {
  return this.is_delta_smoothing_enabled();
}
set delta_smoothing (new_value) {
  this.set_delta_smoothing(new_value);
}

  static RenderingDriver = {
    RENDERING_DRIVER_VULKAN: 0,
    RENDERING_DRIVER_OPENGL3: 1,
    RENDERING_DRIVER_D3D12: 2,
  }
  static SystemDir = {
    SYSTEM_DIR_DESKTOP: 0,
    SYSTEM_DIR_DCIM: 1,
    SYSTEM_DIR_DOCUMENTS: 2,
    SYSTEM_DIR_DOWNLOADS: 3,
    SYSTEM_DIR_MOVIES: 4,
    SYSTEM_DIR_MUSIC: 5,
    SYSTEM_DIR_PICTURES: 6,
    SYSTEM_DIR_RINGTONES: 7,
  }
}
export const OS = (function () {
  let _instance;
  function create_instance() {
    return new _OS();
  }
  return {
    instance: function () {
      if (!_instance) {
        _instance = create_instance();
      }
      return _instance;
    },
  };
})();