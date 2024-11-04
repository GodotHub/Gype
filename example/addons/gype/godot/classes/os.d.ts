
import { GodotObject } from "@godot/classes/godot_object";
declare global {
export declare class _OS extends GodotObject{
  public get_entropy(_size: number): PackedByteArray;
  public get_system_ca_certificates(): String;
  public get_connected_midi_inputs(): PackedStringArray;
  public open_midi_inputs(): void;
  public close_midi_inputs(): void;
  public alert(_text: GDString | StringName | string, _title: GDString | StringName | string = "Alert!"): void;
  public crash(_message: GDString | StringName | string): void;
  public set_low_processor_usage_mode(_enable: boolean): void;
  public is_in_low_processor_usage_mode(): boolean;
  public set_low_processor_usage_mode_sleep_usec(_usec: number): void;
  public get_low_processor_usage_mode_sleep_usec(): number;
  public set_delta_smoothing(_delta_smoothing_enabled: boolean): void;
  public is_delta_smoothing_enabled(): boolean;
  public get_processor_count(): number;
  public get_processor_name(): String;
  public get_system_fonts(): PackedStringArray;
  public get_system_font_path(_font_name: GDString | StringName | string, _weight: number = 400, _stretch: number = 100, _italic: boolean = false): String;
  public get_system_font_path_for_text(_font_name: GDString | StringName | string, _text: GDString | StringName | string, _locale: GDString | StringName | string = "", _script: GDString | StringName | string = "", _weight: number = 400, _stretch: number = 100, _italic: boolean = false): PackedStringArray;
  public get_executable_path(): String;
  public read_string_from_stdin(): String;
  public execute(_path: GDString | StringName | string, _arguments: PackedStringArray, _output: GDArray = [], _read_stderr: boolean = false, _open_console: boolean = false): number;
  public execute_with_pipe(_path: GDString | StringName | string, _arguments: PackedStringArray): Dictionary;
  public create_process(_path: GDString | StringName | string, _arguments: PackedStringArray, _open_console: boolean = false): number;
  public create_instance(_arguments: PackedStringArray): number;
  public kill(_pid: number): number;
  public shell_open(_uri: GDString | StringName | string): number;
  public shell_show_in_file_manager(_file_or_dir_path: GDString | StringName | string, _open_folder: boolean = true): number;
  public is_process_running(_pid: number): boolean;
  public get_process_exit_code(_pid: number): number;
  public get_process_id(): number;
  public has_environment(_variable: GDString | StringName | string): boolean;
  public get_environment(_variable: GDString | StringName | string): String;
  public set_environment(_variable: GDString | StringName | string, _value: GDString | StringName | string): void;
  public unset_environment(_variable: GDString | StringName | string): void;
  public get_name(): String;
  public get_distribution_name(): String;
  public get_version(): String;
  public get_cmdline_args(): PackedStringArray;
  public get_cmdline_user_args(): PackedStringArray;
  public get_video_adapter_driver_info(): PackedStringArray;
  public set_restart_on_exit(_restart: boolean, _arguments: PackedStringArray = PackedStringArray()): void;
  public is_restart_on_exit_set(): boolean;
  public get_restart_on_exit_arguments(): PackedStringArray;
  public delay_usec(_usec: number): void;
  public delay_msec(_msec: number): void;
  public get_locale(): String;
  public get_locale_language(): String;
  public get_model_name(): String;
  public is_userfs_persistent(): boolean;
  public is_stdout_verbose(): boolean;
  public is_debug_build(): boolean;
  public get_static_memory_usage(): number;
  public get_static_memory_peak_usage(): number;
  public get_memory_info(): Dictionary;
  public move_to_trash(_path: GDString | StringName | string): number;
  public get_user_data_dir(): String;
  public get_system_dir(_dir: number, _shared_storage: boolean = true): String;
  public get_config_dir(): String;
  public get_data_dir(): String;
  public get_cache_dir(): String;
  public get_unique_id(): String;
  public get_keycode_string(_code: number): String;
  public is_keycode_unicode(_code: number): boolean;
  public find_keycode_from_string(_string: GDString | StringName | string): number;
  public set_use_file_access_save_and_swap(_enabled: boolean): void;
  public set_thread_name(_name: GDString | StringName | string): number;
  public get_thread_caller_id(): number;
  public get_main_thread_id(): number;
  public has_feature(_tag_name: GDString | StringName | string): boolean;
  public is_sandboxed(): boolean;
  public request_permission(_name: GDString | StringName | string): boolean;
  public request_permissions(): boolean;
  public get_granted_permissions(): PackedStringArray;
  public revoke_granted_permissions(): void;
  public get low_processor_usage_mode(): boolean;
  public set low_processor_usage_mode(value): void;
  public get low_processor_usage_mode_sleep_usec(): number;
  public set low_processor_usage_mode_sleep_usec(value): void;
  public get delta_smoothing(): boolean;
  public set delta_smoothing(value): void;
  static RenderingDriver = {
    RENDERING_DRIVER_VULKAN = 0,
    RENDERING_DRIVER_OPENGL3 = 1,
    RENDERING_DRIVER_D3D12 = 2,
  }
  static SystemDir = {
    SYSTEM_DIR_DESKTOP = 0,
    SYSTEM_DIR_DCIM = 1,
    SYSTEM_DIR_DOCUMENTS = 2,
    SYSTEM_DIR_DOWNLOADS = 3,
    SYSTEM_DIR_MOVIES = 4,
    SYSTEM_DIR_MUSIC = 5,
    SYSTEM_DIR_PICTURES = 6,
    SYSTEM_DIR_RINGTONES = 7,
  }
}
const OS: _OS;
}