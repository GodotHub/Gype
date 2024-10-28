
import { MainLoop } from "@godot/classes/main_loop";
import { Object } from "@godot/classes/object";
import { ScriptLanguage } from "@godot/classes/script_language";

export declare class Engine extends Object{
  public set_physics_ticks_per_second(_physics_ticks_per_second: number): void;
  public get_physics_ticks_per_second(): number;
  public set_max_physics_steps_per_frame(_max_physics_steps: number): void;
  public get_max_physics_steps_per_frame(): number;
  public set_physics_jitter_fix(_physics_jitter_fix: number): void;
  public get_physics_jitter_fix(): number;
  public get_physics_interpolation_fraction(): number;
  public set_max_fps(_max_fps: number): void;
  public get_max_fps(): number;
  public set_time_scale(_time_scale: number): void;
  public get_time_scale(): number;
  public get_frames_drawn(): number;
  public get_frames_per_second(): number;
  public get_physics_frames(): number;
  public get_process_frames(): number;
  public get_main_loop(): MainLoop;
  public get_version_info(): Dictionary;
  public get_author_info(): Dictionary;
  public get_copyright_info(): Array;
  public get_donor_info(): Dictionary;
  public get_license_info(): Dictionary;
  public get_license_text(): String;
  public get_architecture_name(): String;
  public is_in_physics_frame(): boolean;
  public has_singleton(_name: StringName): boolean;
  public get_singleton(_name: StringName): Object;
  public register_singleton(_name: StringName, _instance: Object): void;
  public unregister_singleton(_name: StringName): void;
  public get_singleton_list(): PackedStringArray;
  public register_script_language(_language: ScriptLanguage): number;
  public unregister_script_language(_language: ScriptLanguage): number;
  public get_script_language_count(): number;
  public get_script_language(_index: number): ScriptLanguage;
  public is_editor_hint(): boolean;
  public get_write_movie_path(): String;
  public set_print_error_messages(_enabled: boolean): void;
  public is_printing_error_messages(): boolean;
  public get print_error_messages(): boolean {
    is_printing_error_messages();
  }
  public set print_error_messages(value: boolean): void {
    set_print_error_messages(value);
  }
  public get physics_ticks_per_second(): number {
    get_physics_ticks_per_second();
  }
  public set physics_ticks_per_second(value: number): void {
    set_physics_ticks_per_second(value);
  }
  public get max_physics_steps_per_frame(): number {
    get_max_physics_steps_per_frame();
  }
  public set max_physics_steps_per_frame(value: number): void {
    set_max_physics_steps_per_frame(value);
  }
  public get max_fps(): number {
    get_max_fps();
  }
  public set max_fps(value: number): void {
    set_max_fps(value);
  }
  public get time_scale(): number {
    get_time_scale();
  }
  public set time_scale(value: number): void {
    set_time_scale(value);
  }
  public get physics_jitter_fix(): number {
    get_physics_jitter_fix();
  }
  public set physics_jitter_fix(value: number): void {
    set_physics_jitter_fix(value);
  }
}