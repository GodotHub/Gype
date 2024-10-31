
import { AnimationMixer } from "@godot/classes/animation_mixer";

export declare class AnimationPlayer extends AnimationMixer{
  public animation_set_next(_animation_from: String | StringName | string, _animation_to: String | StringName | string): void;
  public animation_get_next(_animation_from: String | StringName | string): StringName;
  public set_blend_time(_animation_from: String | StringName | string, _animation_to: String | StringName | string, _sec: number): void;
  public get_blend_time(_animation_from: String | StringName | string, _animation_to: String | StringName | string): number;
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
  public play(_name: String | StringName | string, _custom_blend: number, _custom_speed: number, _from_end: boolean): void;
  public play_backwards(_name: String | StringName | string, _custom_blend: number): void;
  public play_with_capture(_name: String | StringName | string, _duration: number, _custom_blend: number, _custom_speed: number, _from_end: boolean, _trans_type: number, _ease_type: number): void;
  public pause(): void;
  public stop(_keep_state: boolean): void;
  public is_playing(): boolean;
  public set_current_animation(_animation: String | StringName | string): void;
  public get_current_animation(): String;
  public set_assigned_animation(_animation: String | StringName | string): void;
  public get_assigned_animation(): String;
  public queue(_name: String | StringName | string): void;
  public get_queue(): PackedStringArray;
  public clear_queue(): void;
  public set_speed_scale(_speed: number): void;
  public get_speed_scale(): number;
  public get_playing_speed(): number;
  public set_autoplay(_name: String | StringName | string): void;
  public get_autoplay(): String;
  public set_movie_quit_on_finish_enabled(_enabled: boolean): void;
  public is_movie_quit_on_finish_enabled(): boolean;
  public get_current_animation_position(): number;
  public get_current_animation_length(): number;
  public seek(_seconds: number, _update: boolean, _update_only: boolean): void;
  public set_process_callback(_mode: number): void;
  public get_process_callback(): number;
  public set_method_call_mode(_mode: number): void;
  public get_method_call_mode(): number;
  public set_root(_path: NodePath): void;
  public get_root(): NodePath;
  public get current_animation(): StringName {
    get_current_animation();
  }
  public set current_animation(value): void {
    set_current_animation(value);
  }
  public get assigned_animation(): StringName {
    get_assigned_animation();
  }
  public set assigned_animation(value): void {
    set_assigned_animation(value);
  }
  public get autoplay(): StringName {
    get_autoplay();
  }
  public set autoplay(value): void {
    set_autoplay(value);
  }
  public get current_animation_length(): number {
    get_current_animation_length();
  }
  public get current_animation_position(): number {
    get_current_animation_position();
  }
  public get playback_auto_capture(): boolean {
    is_auto_capture();
  }
  public set playback_auto_capture(value): void {
    set_auto_capture(value);
  }
  public get playback_auto_capture_duration(): number {
    get_auto_capture_duration();
  }
  public set playback_auto_capture_duration(value): void {
    set_auto_capture_duration(value);
  }
  public get playback_auto_capture_transition_type(): number {
    get_auto_capture_transition_type();
  }
  public set playback_auto_capture_transition_type(value): void {
    set_auto_capture_transition_type(value);
  }
  public get playback_auto_capture_ease_type(): number {
    get_auto_capture_ease_type();
  }
  public set playback_auto_capture_ease_type(value): void {
    set_auto_capture_ease_type(value);
  }
  public get playback_default_blend_time(): number {
    get_default_blend_time();
  }
  public set playback_default_blend_time(value): void {
    set_default_blend_time(value);
  }
  public get speed_scale(): number {
    get_speed_scale();
  }
  public set speed_scale(value): void {
    set_speed_scale(value);
  }
  public get movie_quit_on_finish(): boolean {
    is_movie_quit_on_finish_enabled();
  }
  public set movie_quit_on_finish(value): void {
    set_movie_quit_on_finish_enabled(value);
  }
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