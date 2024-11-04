
import { MainLoop } from "@godot/classes/main_loop";
import { GodotObject } from "@godot/classes/godot_object";
import { ScriptLanguage } from "@godot/classes/script_language";
declare global {
export declare class _Engine extends GodotObject{
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
  public get_copyright_info(): GDArray;
  public get_donor_info(): Dictionary;
  public get_license_info(): Dictionary;
  public get_license_text(): String;
  public get_architecture_name(): String;
  public is_in_physics_frame(): boolean;
  public has_singleton(_name: GDString | StringName | string): boolean;
  public get_singleton(_name: GDString | StringName | string): GodotObject;
  public register_singleton(_name: GDString | StringName | string, _instance: GodotObject): void;
  public unregister_singleton(_name: GDString | StringName | string): void;
  public get_singleton_list(): PackedStringArray;
  public register_script_language(_language: ScriptLanguage): number;
  public unregister_script_language(_language: ScriptLanguage): number;
  public get_script_language_count(): number;
  public get_script_language(_index: number): ScriptLanguage;
  public is_editor_hint(): boolean;
  public get_write_movie_path(): String;
  public set_print_error_messages(_enabled: boolean): void;
  public is_printing_error_messages(): boolean;
  public get print_error_messages(): boolean;
  public set print_error_messages(value): void;
  public get physics_ticks_per_second(): number;
  public set physics_ticks_per_second(value): void;
  public get max_physics_steps_per_frame(): number;
  public set max_physics_steps_per_frame(value): void;
  public get max_fps(): number;
  public set max_fps(value): void;
  public get time_scale(): number;
  public set time_scale(value): void;
  public get physics_jitter_fix(): number;
  public set physics_jitter_fix(value): void;
}
const Engine: _Engine;
}