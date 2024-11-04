
import { GodotObject } from "@godot/classes/godot_object";
import { Resource } from "@godot/classes/resource";
import { InputEvent } from "@godot/classes/input_event";
declare global {
export declare class _Input extends GodotObject{
  public is_anything_pressed(): boolean;
  public is_key_pressed(_keycode: number): boolean;
  public is_physical_key_pressed(_keycode: number): boolean;
  public is_key_label_pressed(_keycode: number): boolean;
  public is_mouse_button_pressed(_button: number): boolean;
  public is_joy_button_pressed(_device: number, _button: number): boolean;
  public is_action_pressed(_action: GDString | StringName | string, _exact_match: boolean = false): boolean;
  public is_action_just_pressed(_action: GDString | StringName | string, _exact_match: boolean = false): boolean;
  public is_action_just_released(_action: GDString | StringName | string, _exact_match: boolean = false): boolean;
  public get_action_strength(_action: GDString | StringName | string, _exact_match: boolean = false): number;
  public get_action_raw_strength(_action: GDString | StringName | string, _exact_match: boolean = false): number;
  public get_axis(_negative_action: GDString | StringName | string, _positive_action: GDString | StringName | string): number;
  public get_vector(_negative_x: GDString | StringName | string, _positive_x: GDString | StringName | string, _negative_y: GDString | StringName | string, _positive_y: GDString | StringName | string, _deadzone: number = -1.0): Vector2;
  public add_joy_mapping(_mapping: GDString | StringName | string, _update_existing: boolean = false): void;
  public remove_joy_mapping(_guid: GDString | StringName | string): void;
  public is_joy_known(_device: number): boolean;
  public get_joy_axis(_device: number, _axis: number): number;
  public get_joy_name(_device: number): String;
  public get_joy_guid(_device: number): String;
  public get_joy_info(_device: number): Dictionary;
  public should_ignore_device(_vendor_id: number, _product_id: number): boolean;
  public get_connected_joypads(): GDArray;
  public get_joy_vibration_strength(_device: number): Vector2;
  public get_joy_vibration_duration(_device: number): number;
  public start_joy_vibration(_device: number, _weak_magnitude: number, _strong_magnitude: number, _duration: number = 0): void;
  public stop_joy_vibration(_device: number): void;
  public vibrate_handheld(_duration_ms: number = 500, _amplitude: number = -1.0): void;
  public get_gravity(): Vector3;
  public get_accelerometer(): Vector3;
  public get_magnetometer(): Vector3;
  public get_gyroscope(): Vector3;
  public set_gravity(_value: Vector3): void;
  public set_accelerometer(_value: Vector3): void;
  public set_magnetometer(_value: Vector3): void;
  public set_gyroscope(_value: Vector3): void;
  public get_last_mouse_velocity(): Vector2;
  public get_last_mouse_screen_velocity(): Vector2;
  public get_mouse_button_mask(): number;
  public set_mouse_mode(_mode: number): void;
  public get_mouse_mode(): number;
  public warp_mouse(_position: Vector2): void;
  public action_press(_action: GDString | StringName | string, _strength: number = 1.0): void;
  public action_release(_action: GDString | StringName | string): void;
  public set_default_cursor_shape(_shape: number = 0): void;
  public get_current_cursor_shape(): number;
  public set_custom_mouse_cursor(_image: Resource, _shape: number = 0, _hotspot: Vector2 = Vector2(0, 0)): void;
  public parse_input_event(_event: InputEvent): void;
  public set_use_accumulated_input(_enable: boolean): void;
  public is_using_accumulated_input(): boolean;
  public flush_buffered_events(): void;
  public set_emulate_mouse_from_touch(_enable: boolean): void;
  public is_emulating_mouse_from_touch(): boolean;
  public set_emulate_touch_from_mouse(_enable: boolean): void;
  public is_emulating_touch_from_mouse(): boolean;
  public get mouse_mode(): number;
  public set mouse_mode(value): void;
  public get use_accumulated_input(): boolean;
  public set use_accumulated_input(value): void;
  public get emulate_mouse_from_touch(): boolean;
  public set emulate_mouse_from_touch(value): void;
  public get emulate_touch_from_mouse(): boolean;
  public set emulate_touch_from_mouse(value): void;
  static MouseMode = {
    MOUSE_MODE_VISIBLE = 0,
    MOUSE_MODE_HIDDEN = 1,
    MOUSE_MODE_CAPTURED = 2,
    MOUSE_MODE_CONFINED = 3,
    MOUSE_MODE_CONFINED_HIDDEN = 4,
  }
  static CursorShape = {
    CURSOR_ARROW = 0,
    CURSOR_IBEAM = 1,
    CURSOR_POINTING_HAND = 2,
    CURSOR_CROSS = 3,
    CURSOR_WAIT = 4,
    CURSOR_BUSY = 5,
    CURSOR_DRAG = 6,
    CURSOR_CAN_DROP = 7,
    CURSOR_FORBIDDEN = 8,
    CURSOR_VSIZE = 9,
    CURSOR_HSIZE = 10,
    CURSOR_BDIAGSIZE = 11,
    CURSOR_FDIAGSIZE = 12,
    CURSOR_MOVE = 13,
    CURSOR_VSPLIT = 14,
    CURSOR_HSPLIT = 15,
    CURSOR_HELP = 16,
  }
  public get joy_connection_changed(): Signal;
}
const Input: _Input;
}