
import { AnimationMixer } from "@godot/classes/animation_mixer";
export declare class AnimationPlayer extends AnimationMixer{
  public animation_set_next(_animation_from: GDString | StringName | string, _animation_to: GDString | StringName | string): void;
  public animation_get_next(_animation_from: GDString | StringName | string): StringName;
  public set_blend_time(_animation_from: GDString | StringName | string, _animation_to: GDString | StringName | string, _sec: number): void;
  public get_blend_time(_animation_from: GDString | StringName | string, _animation_to: GDString | StringName | string): number;
  public set_default_blend_time(_sec: number): void;
  public get_default_blend_time(): number;
  public set_auto_capture(_auto_capture: boolean): void;
  public is_auto_capture(): boolean;
  public set_auto_capture_duration(_auto_capture_duration: number): void;
  public get_auto_capture_duration(): number;
  public set_auto_capture_transition_type(_auto_capture_transition_type: number): void;
  public get_auto_capture_transition_type(): number;
  public set_auto_capture_ease_type(_auto_capture_ease_type: number): void;
  public get_auto_capture_ease_type(): number;
  public play(_name: GDString | StringName | string = "", _custom_blend: number = -1, _custom_speed: number = 1.0, _from_end: boolean = false): void;
  public play_backwards(_name: GDString | StringName | string = "", _custom_blend: number = -1): void;
  public play_with_capture(_name: GDString | StringName | string = "", _duration: number = -1.0, _custom_blend: number = -1, _custom_speed: number = 1.0, _from_end: boolean = false, _trans_type: number = 0, _ease_type: number = 0): void;
  public pause(): void;
  public stop(_keep_state: boolean = false): void;
  public is_playing(): boolean;
  public set_current_animation(_animation: GDString | StringName | string): void;
  public get_current_animation(): String;
  public set_assigned_animation(_animation: GDString | StringName | string): void;
  public get_assigned_animation(): String;
  public queue(_name: GDString | StringName | string): void;
  public get_queue(): PackedStringArray;
  public clear_queue(): void;
  public set_speed_scale(_speed: number): void;
  public get_speed_scale(): number;
  public get_playing_speed(): number;
  public set_autoplay(_name: GDString | StringName | string): void;
  public get_autoplay(): String;
  public set_movie_quit_on_finish_enabled(_enabled: boolean): void;
  public is_movie_quit_on_finish_enabled(): boolean;
  public get_current_animation_position(): number;
  public get_current_animation_length(): number;
  public seek(_seconds: number, _update: boolean = false, _update_only: boolean = false): void;
  public set_process_callback(_mode: number): void;
  public get_process_callback(): number;
  public set_method_call_mode(_mode: number): void;
  public get_method_call_mode(): number;
  public set_root(_path: GDString | NodePath | string): void;
  public get_root(): NodePath;
  public get current_animation(): StringName;
  public set current_animation(value): void;
  public get assigned_animation(): StringName;
  public set assigned_animation(value): void;
  public get autoplay(): StringName;
  public set autoplay(value): void;
  public get current_animation_length(): number;
  public get current_animation_position(): number;
  public get playback_auto_capture(): boolean;
  public set playback_auto_capture(value): void;
  public get playback_auto_capture_duration(): number;
  public set playback_auto_capture_duration(value): void;
  public get playback_auto_capture_transition_type(): number;
  public set playback_auto_capture_transition_type(value): void;
  public get playback_auto_capture_ease_type(): number;
  public set playback_auto_capture_ease_type(value): void;
  public get playback_default_blend_time(): number;
  public set playback_default_blend_time(value): void;
  public get speed_scale(): number;
  public set speed_scale(value): void;
  public get movie_quit_on_finish(): boolean;
  public set movie_quit_on_finish(value): void;
  static AnimationProcessCallback = {
    ANIMATION_PROCESS_PHYSICS = 0,
    ANIMATION_PROCESS_IDLE = 1,
    ANIMATION_PROCESS_MANUAL = 2,
  }
  static AnimationMethodCallMode = {
    ANIMATION_METHOD_CALL_DEFERRED = 0,
    ANIMATION_METHOD_CALL_IMMEDIATE = 1,
  }
  public get current_animation_changed(): Signal;
  public get animation_changed(): Signal;
}