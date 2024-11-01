
import { Resource } from "@godot/classes/resource";

export declare class Animation extends Resource{
  public add_track(_type: number, _at_position: number): number;
  public remove_track(_track_idx: number): void;
  public get_track_count(): number;
  public track_get_type(_track_idx: number): number;
  public track_get_path(_track_idx: number): NodePath;
  public track_set_path(_track_idx: number, _path: NodePath): void;
  public find_track(_path: NodePath, _type: number): number;
  public track_move_up(_track_idx: number): void;
  public track_move_down(_track_idx: number): void;
  public track_move_to(_track_idx: number, _to_idx: number): void;
  public track_swap(_track_idx: number, _with_idx: number): void;
  public track_set_imported(_track_idx: number, _imported: boolean): void;
  public track_is_imported(_track_idx: number): boolean;
  public track_set_enabled(_track_idx: number, _enabled: boolean): void;
  public track_is_enabled(_track_idx: number): boolean;
  public position_track_insert_key(_track_idx: number, _time: number, _position: Vector3): number;
  public rotation_track_insert_key(_track_idx: number, _time: number, _rotation: Quaternion): number;
  public scale_track_insert_key(_track_idx: number, _time: number, _scale: Vector3): number;
  public blend_shape_track_insert_key(_track_idx: number, _time: number, _amount: number): number;
  public position_track_interpolate(_track_idx: number, _time_sec: number, _backward: boolean): Vector3;
  public rotation_track_interpolate(_track_idx: number, _time_sec: number, _backward: boolean): Quaternion;
  public scale_track_interpolate(_track_idx: number, _time_sec: number, _backward: boolean): Vector3;
  public blend_shape_track_interpolate(_track_idx: number, _time_sec: number, _backward: boolean): number;
  public track_insert_key(_track_idx: number, _time: number, _key: any, _transition: number): number;
  public track_remove_key(_track_idx: number, _key_idx: number): void;
  public track_remove_key_at_time(_track_idx: number, _time: number): void;
  public track_set_key_value(_track_idx: number, _key: number, _value: any): void;
  public track_set_key_transition(_track_idx: number, _key_idx: number, _transition: number): void;
  public track_set_key_time(_track_idx: number, _key_idx: number, _time: number): void;
  public track_get_key_transition(_track_idx: number, _key_idx: number): number;
  public track_get_key_count(_track_idx: number): number;
  public track_get_key_value(_track_idx: number, _key_idx: number): any;
  public track_get_key_time(_track_idx: number, _key_idx: number): number;
  public track_find_key(_track_idx: number, _time: number, _find_mode: number, _limit: boolean, _backward: boolean): number;
  public track_set_interpolation_type(_track_idx: number, _interpolation: number): void;
  public track_get_interpolation_type(_track_idx: number): number;
  public track_set_interpolation_loop_wrap(_track_idx: number, _interpolation: boolean): void;
  public track_get_interpolation_loop_wrap(_track_idx: number): boolean;
  public track_is_compressed(_track_idx: number): boolean;
  public value_track_set_update_mode(_track_idx: number, _mode: number): void;
  public value_track_get_update_mode(_track_idx: number): number;
  public value_track_interpolate(_track_idx: number, _time_sec: number, _backward: boolean): any;
  public method_track_get_name(_track_idx: number, _key_idx: number): StringName;
  public method_track_get_params(_track_idx: number, _key_idx: number): GDArray;
  public bezier_track_insert_key(_track_idx: number, _time: number, _value: number, _in_handle: Vector2, _out_handle: Vector2): number;
  public bezier_track_set_key_value(_track_idx: number, _key_idx: number, _value: number): void;
  public bezier_track_set_key_in_handle(_track_idx: number, _key_idx: number, _in_handle: Vector2, _balanced_value_time_ratio: number): void;
  public bezier_track_set_key_out_handle(_track_idx: number, _key_idx: number, _out_handle: Vector2, _balanced_value_time_ratio: number): void;
  public bezier_track_get_key_value(_track_idx: number, _key_idx: number): number;
  public bezier_track_get_key_in_handle(_track_idx: number, _key_idx: number): Vector2;
  public bezier_track_get_key_out_handle(_track_idx: number, _key_idx: number): Vector2;
  public bezier_track_interpolate(_track_idx: number, _time: number): number;
  public audio_track_insert_key(_track_idx: number, _time: number, _stream: Resource, _start_offset: number, _end_offset: number): number;
  public audio_track_set_key_stream(_track_idx: number, _key_idx: number, _stream: Resource): void;
  public audio_track_set_key_start_offset(_track_idx: number, _key_idx: number, _offset: number): void;
  public audio_track_set_key_end_offset(_track_idx: number, _key_idx: number, _offset: number): void;
  public audio_track_get_key_stream(_track_idx: number, _key_idx: number): Resource;
  public audio_track_get_key_start_offset(_track_idx: number, _key_idx: number): number;
  public audio_track_get_key_end_offset(_track_idx: number, _key_idx: number): number;
  public audio_track_set_use_blend(_track_idx: number, _enable: boolean): void;
  public audio_track_is_use_blend(_track_idx: number): boolean;
  public animation_track_insert_key(_track_idx: number, _time: number, _animation: String | StringName | string): number;
  public animation_track_set_key_animation(_track_idx: number, _key_idx: number, _animation: String | StringName | string): void;
  public animation_track_get_key_animation(_track_idx: number, _key_idx: number): StringName;
  public set_length(_time_sec: number): void;
  public get_length(): number;
  public set_loop_mode(_loop_mode: number): void;
  public get_loop_mode(): number;
  public set_step(_size_sec: number): void;
  public get_step(): number;
  public clear(): void;
  public copy_track(_track_idx: number, _to_animation: Animation): void;
  public compress(_page_size: number, _fps: number, _split_tolerance: number): void;
  public is_capture_included(): boolean;
  public get length(): number {
    get_length();
  }
  public set length(value): void {
    set_length(value);
  }
  public get loop_mode(): number {
    get_loop_mode();
  }
  public set loop_mode(value): void {
    set_loop_mode(value);
  }
  public get step(): number {
    get_step();
  }
  public set step(value): void {
    set_step(value);
  }
  public get capture_included(): boolean {
    is_capture_included();
  }
  static TrackType = {
    TYPE_VALUE = 0,
    TYPE_POSITION_3D = 1,
    TYPE_ROTATION_3D = 2,
    TYPE_SCALE_3D = 3,
    TYPE_BLEND_SHAPE = 4,
    TYPE_METHOD = 5,
    TYPE_BEZIER = 6,
    TYPE_AUDIO = 7,
    TYPE_ANIMATION = 8,
  }
  static InterpolationType = {
    INTERPOLATION_NEAREST = 0,
    INTERPOLATION_LINEAR = 1,
    INTERPOLATION_CUBIC = 2,
    INTERPOLATION_LINEAR_ANGLE = 3,
    INTERPOLATION_CUBIC_ANGLE = 4,
  }
  static UpdateMode = {
    UPDATE_CONTINUOUS = 0,
    UPDATE_DISCRETE = 1,
    UPDATE_CAPTURE = 2,
  }
  static LoopMode = {
    LOOP_NONE = 0,
    LOOP_LINEAR = 1,
    LOOP_PINGPONG = 2,
  }
  static LoopedFlag = {
    LOOPED_FLAG_NONE = 0,
    LOOPED_FLAG_END = 1,
    LOOPED_FLAG_START = 2,
  }
  static FindMode = {
    FIND_MODE_NEAREST = 0,
    FIND_MODE_APPROX = 1,
    FIND_MODE_EXACT = 2,
  }
}