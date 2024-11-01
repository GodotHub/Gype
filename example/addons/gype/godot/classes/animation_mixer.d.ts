
import { Animation } from "@godot/classes/animation";
import { Node } from "@godot/classes/node";
import { AnimationLibrary } from "@godot/classes/animation_library";

export declare class AnimationMixer extends Node{
  public _post_process_key_value(_animation: Animation, _track: number, _value: any, _object_id: number, _object_sub_idx: number): any;
  public add_animation_library(_name: String | StringName | string, _library: AnimationLibrary): number;
  public remove_animation_library(_name: String | StringName | string): void;
  public rename_animation_library(_name: String | StringName | string, _newname: String | StringName | string): void;
  public has_animation_library(_name: String | StringName | string): boolean;
  public get_animation_library(_name: String | StringName | string): AnimationLibrary;
  public get_animation_library_list(): GDArray;
  public has_animation(_name: String | StringName | string): boolean;
  public get_animation(_name: String | StringName | string): Animation;
  public get_animation_list(): PackedStringArray;
  public set_active(_active: boolean): void;
  public is_active(): boolean;
  public set_deterministic(_deterministic: boolean): void;
  public is_deterministic(): boolean;
  public set_root_node(_path: NodePath): void;
  public get_root_node(): NodePath;
  public set_callback_mode_process(_mode: number): void;
  public get_callback_mode_process(): number;
  public set_callback_mode_method(_mode: number): void;
  public get_callback_mode_method(): number;
  public set_callback_mode_discrete(_mode: number): void;
  public get_callback_mode_discrete(): number;
  public set_audio_max_polyphony(_max_polyphony: number): void;
  public get_audio_max_polyphony(): number;
  public set_root_motion_track(_path: NodePath): void;
  public get_root_motion_track(): NodePath;
  public get_root_motion_position(): Vector3;
  public get_root_motion_rotation(): Quaternion;
  public get_root_motion_scale(): Vector3;
  public get_root_motion_position_accumulator(): Vector3;
  public get_root_motion_rotation_accumulator(): Quaternion;
  public get_root_motion_scale_accumulator(): Vector3;
  public clear_caches(): void;
  public advance(_delta: number): void;
  public capture(_name: String | StringName | string, _duration: number, _trans_type: number, _ease_type: number): void;
  public set_reset_on_save_enabled(_enabled: boolean): void;
  public is_reset_on_save_enabled(): boolean;
  public find_animation(_animation: Animation): StringName;
  public find_animation_library(_animation: Animation): StringName;
  public get active(): boolean {
    is_active();
  }
  public set active(value): void {
    set_active(value);
  }
  public get deterministic(): boolean {
    is_deterministic();
  }
  public set deterministic(value): void {
    set_deterministic(value);
  }
  public get reset_on_save(): boolean {
    is_reset_on_save_enabled();
  }
  public set reset_on_save(value): void {
    set_reset_on_save_enabled(value);
  }
  public get root_node(): NodePath {
    get_root_node();
  }
  public set root_node(value): void {
    set_root_node(value);
  }
  public get root_motion_track(): NodePath {
    get_root_motion_track();
  }
  public set root_motion_track(value): void {
    set_root_motion_track(value);
  }
  public get audio_max_polyphony(): number {
    get_audio_max_polyphony();
  }
  public set audio_max_polyphony(value): void {
    set_audio_max_polyphony(value);
  }
  public get callback_mode_process(): number {
    get_callback_mode_process();
  }
  public set callback_mode_process(value): void {
    set_callback_mode_process(value);
  }
  public get callback_mode_method(): number {
    get_callback_mode_method();
  }
  public set callback_mode_method(value): void {
    set_callback_mode_method(value);
  }
  public get callback_mode_discrete(): number {
    get_callback_mode_discrete();
  }
  public set callback_mode_discrete(value): void {
    set_callback_mode_discrete(value);
  }
  static AnimationCallbackModeProcess = {
    ANIMATION_CALLBACK_MODE_PROCESS_PHYSICS = 0,
    ANIMATION_CALLBACK_MODE_PROCESS_IDLE = 1,
    ANIMATION_CALLBACK_MODE_PROCESS_MANUAL = 2,
  }
  static AnimationCallbackModeMethod = {
    ANIMATION_CALLBACK_MODE_METHOD_DEFERRED = 0,
    ANIMATION_CALLBACK_MODE_METHOD_IMMEDIATE = 1,
  }
  static AnimationCallbackModeDiscrete = {
    ANIMATION_CALLBACK_MODE_DISCRETE_DOMINANT = 0,
    ANIMATION_CALLBACK_MODE_DISCRETE_RECESSIVE = 1,
    ANIMATION_CALLBACK_MODE_DISCRETE_FORCE_CONTINUOUS = 2,
  }
  public get animation_list_changed(): Signal;
  public get animation_libraries_updated(): Signal;
  public get animation_finished(): Signal;
  public get animation_started(): Signal;
  public get caches_cleared(): Signal;
  public get mixer_applied(): Signal;
  public get mixer_updated(): Signal;
}