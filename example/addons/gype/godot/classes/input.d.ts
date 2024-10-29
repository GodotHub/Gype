
import { Object } from "@godot/classes/object";
import { Resource } from "@godot/classes/resource";
import { InputEvent } from "@godot/classes/input_event";

export declare class Input extends Object{
  public is_anything_pressed(): boolean;
  public is_key_pressed(_keycode: number): boolean;
  public is_physical_key_pressed(_keycode: number): boolean;
  public is_key_label_pressed(_keycode: number): boolean;
  public is_mouse_button_pressed(_button: number): boolean;
  public is_joy_button_pressed(_device: number, _button: number): boolean;
  public is_action_pressed(_action: StringName, _exact_match: boolean): boolean;
  public is_action_just_pressed(_action: StringName, _exact_match: boolean): boolean;
  public is_action_just_released(_action: StringName, _exact_match: boolean): boolean;
  public get_action_strength(_action: StringName, _exact_match: boolean): number;
  public get_action_raw_strength(_action: StringName, _exact_match: boolean): number;
  public get_axis(_negative_action: StringName, _positive_action: StringName): number;
  public get_vector(_negative_x: StringName, _positive_x: StringName, _negative_y: StringName, _positive_y: StringName, _deadzone: number): Vector2;
  public add_joy_mapping(_mapping: String, _update_existing: boolean): void;
  public remove_joy_mapping(_guid: String): void;
  public is_joy_known(_device: number): boolean;
  public get_joy_axis(_device: number, _axis: number): number;
  public get_joy_name(_device: number): String;
  public get_joy_guid(_device: number): String;
  public get_joy_info(_device: number): Dictionary;
  public should_ignore_device(_vendor_id: number, _product_id: number): boolean;
  public get_connected_joypads(): GDArray;
  public get_joy_vibration_strength(_device: number): Vector2;
  public get_joy_vibration_duration(_device: number): number;
  public start_joy_vibration(_device: number, _weak_magnitude: number, _strong_magnitude: number, _duration: number): void;
  public stop_joy_vibration(_device: number): void;
  public vibrate_handheld(_duration_ms: number, _amplitude: number): void;
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
  public action_press(_action: StringName, _strength: number): void;
  public action_release(_action: StringName): void;
  public set_default_cursor_shape(_shape: number): void;
  public get_current_cursor_shape(): number;
  public set_custom_mouse_cursor(_image: Resource, _shape: number, _hotspot: Vector2): void;
  public parse_input_event(_event: InputEvent): void;
  public set_use_accumulated_input(_enable: boolean): void;
  public is_using_accumulated_input(): boolean;
  public flush_buffered_events(): void;
  public set_emulate_mouse_from_touch(_enable: boolean): void;
  public is_emulating_mouse_from_touch(): boolean;
  public set_emulate_touch_from_mouse(_enable: boolean): void;
  public is_emulating_touch_from_mouse(): boolean;
  public get mouse_mode(): number {
    get_mouse_mode();
  }
  public set mouse_mode(value): void {
    set_mouse_mode(value);
  }
  public get use_accumulated_input(): boolean {
    is_using_accumulated_input();
  }
  public set use_accumulated_input(value): void {
    set_use_accumulated_input(value);
  }
  public get emulate_mouse_from_touch(): boolean {
    is_emulating_mouse_from_touch();
  }
  public set emulate_mouse_from_touch(value): void {
    set_emulate_mouse_from_touch(value);
  }
  public get emulate_touch_from_mouse(): boolean {
    is_emulating_touch_from_mouse();
  }
  public set emulate_touch_from_mouse(value): void {
    set_emulate_touch_from_mouse(value);
  }
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
}