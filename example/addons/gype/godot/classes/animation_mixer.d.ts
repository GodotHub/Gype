
import { AnimationLibrary } from "@godot/classes/animation_library";
import { Node } from "@godot/classes/node";
import { Animation } from "@godot/classes/animation";
export declare class AnimationMixer extends Node{
  public _post_process_key_value(_animation: Animation, _track: number, _value: any, _object_id: number, _object_sub_idx: number): any;
  public add_animation_library(_name: GDString | StringName | string, _library: AnimationLibrary): number;
  public remove_animation_library(_name: GDString | StringName | string): void;
  public rename_animation_library(_name: GDString | StringName | string, _newname: GDString | StringName | string): void;
  public has_animation_library(_name: GDString | StringName | string): boolean;
  public get_animation_library(_name: GDString | StringName | string): AnimationLibrary;
  public get_animation_library_list(): GDArray;
  public has_animation(_name: GDString | StringName | string): boolean;
  public get_animation(_name: GDString | StringName | string): Animation;
  public get_animation_list(): PackedStringArray;
  public set_active(_active: boolean): void;
  public is_active(): boolean;
  public set_deterministic(_deterministic: boolean): void;
  public is_deterministic(): boolean;
  public set_root_node(_path: GDString | NodePath | string): void;
  public get_root_node(): NodePath;
  public set_callback_mode_process(_mode: number): void;
  public get_callback_mode_process(): number;
  public set_callback_mode_method(_mode: number): void;
  public get_callback_mode_method(): number;
  public set_callback_mode_discrete(_mode: number): void;
  public get_callback_mode_discrete(): number;
  public set_audio_max_polyphony(_max_polyphony: number): void;
  public get_audio_max_polyphony(): number;
  public set_root_motion_track(_path: GDString | NodePath | string): void;
  public get_root_motion_track(): NodePath;
  public get_root_motion_position(): Vector3;
  public get_root_motion_rotation(): Quaternion;
  public get_root_motion_scale(): Vector3;
  public get_root_motion_position_accumulator(): Vector3;
  public get_root_motion_rotation_accumulator(): Quaternion;
  public get_root_motion_scale_accumulator(): Vector3;
  public clear_caches(): void;
  public advance(_delta: number): void;
  public capture(_name: GDString | StringName | string, _duration: number, _trans_type: number = 0, _ease_type: number = 0): void;
  public set_reset_on_save_enabled(_enabled: boolean): void;
  public is_reset_on_save_enabled(): boolean;
  public find_animation(_animation: Animation): StringName;
  public find_animation_library(_animation: Animation): StringName;
  public get active(): boolean;
  public set active(value): void;
  public get deterministic(): boolean;
  public set deterministic(value): void;
  public get reset_on_save(): boolean;
  public set reset_on_save(value): void;
  public get root_node(): NodePath;
  public set root_node(value): void;
  public get root_motion_track(): NodePath;
  public set root_motion_track(value): void;
  public get audio_max_polyphony(): number;
  public set audio_max_polyphony(value): void;
  public get callback_mode_process(): number;
  public set callback_mode_process(value): void;
  public get callback_mode_method(): number;
  public set callback_mode_method(value): void;
  public get callback_mode_discrete(): number;
  public set callback_mode_discrete(value): void;
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