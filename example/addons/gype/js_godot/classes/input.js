import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { GodotObject } from '@js_godot/classes/godot_object'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_is_anything_pressed;
  method_is_key_pressed;
  method_is_physical_key_pressed;
  method_is_key_label_pressed;
  method_is_mouse_button_pressed;
  method_is_joy_button_pressed;
  method_is_action_pressed;
  method_is_action_just_pressed;
  method_is_action_just_released;
  method_get_action_strength;
  method_get_action_raw_strength;
  method_get_axis;
  method_get_vector;
  method_add_joy_mapping;
  method_remove_joy_mapping;
  method_is_joy_known;
  method_get_joy_axis;
  method_get_joy_name;
  method_get_joy_guid;
  method_get_joy_info;
  method_should_ignore_device;
  method_get_connected_joypads;
  method_get_joy_vibration_strength;
  method_get_joy_vibration_duration;
  method_start_joy_vibration;
  method_stop_joy_vibration;
  method_vibrate_handheld;
  method_get_gravity;
  method_get_accelerometer;
  method_get_magnetometer;
  method_get_gyroscope;
  method_set_gravity;
  method_set_accelerometer;
  method_set_magnetometer;
  method_set_gyroscope;
  method_get_last_mouse_velocity;
  method_get_last_mouse_screen_velocity;
  method_get_mouse_button_mask;
  method_set_mouse_mode;
  method_get_mouse_mode;
  method_warp_mouse;
  method_action_press;
  method_action_release;
  method_set_default_cursor_shape;
  method_get_current_cursor_shape;
  method_set_custom_mouse_cursor;
  method_parse_input_event;
  method_set_use_accumulated_input;
  method_is_using_accumulated_input;
  method_flush_buffered_events;
  method_set_emulate_mouse_from_touch;
  method_is_emulating_mouse_from_touch;
  method_set_emulate_touch_from_mouse;
  method_is_emulating_touch_from_mouse;
}class _Input extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Input");
    } else {
      super(godot_object);
    }
  }
  static init_method_is_anything_pressed() {
    if (!this._bindings.method_is_anything_pressed) {
      let classname = new StringName("Input");
      let methodname = new StringName("is_anything_pressed");
      this._bindings.method_is_anything_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_key_pressed() {
    if (!this._bindings.method_is_key_pressed) {
      let classname = new StringName("Input");
      let methodname = new StringName("is_key_pressed");
      this._bindings.method_is_key_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1938909964
      );
    }
  }
  static init_method_is_physical_key_pressed() {
    if (!this._bindings.method_is_physical_key_pressed) {
      let classname = new StringName("Input");
      let methodname = new StringName("is_physical_key_pressed");
      this._bindings.method_is_physical_key_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1938909964
      );
    }
  }
  static init_method_is_key_label_pressed() {
    if (!this._bindings.method_is_key_label_pressed) {
      let classname = new StringName("Input");
      let methodname = new StringName("is_key_label_pressed");
      this._bindings.method_is_key_label_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1938909964
      );
    }
  }
  static init_method_is_mouse_button_pressed() {
    if (!this._bindings.method_is_mouse_button_pressed) {
      let classname = new StringName("Input");
      let methodname = new StringName("is_mouse_button_pressed");
      this._bindings.method_is_mouse_button_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1821097125
      );
    }
  }
  static init_method_is_joy_button_pressed() {
    if (!this._bindings.method_is_joy_button_pressed) {
      let classname = new StringName("Input");
      let methodname = new StringName("is_joy_button_pressed");
      this._bindings.method_is_joy_button_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        787208542
      );
    }
  }
  static init_method_is_action_pressed() {
    if (!this._bindings.method_is_action_pressed) {
      let classname = new StringName("Input");
      let methodname = new StringName("is_action_pressed");
      this._bindings.method_is_action_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1558498928
      );
    }
  }
  static init_method_is_action_just_pressed() {
    if (!this._bindings.method_is_action_just_pressed) {
      let classname = new StringName("Input");
      let methodname = new StringName("is_action_just_pressed");
      this._bindings.method_is_action_just_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1558498928
      );
    }
  }
  static init_method_is_action_just_released() {
    if (!this._bindings.method_is_action_just_released) {
      let classname = new StringName("Input");
      let methodname = new StringName("is_action_just_released");
      this._bindings.method_is_action_just_released = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1558498928
      );
    }
  }
  static init_method_get_action_strength() {
    if (!this._bindings.method_get_action_strength) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_action_strength");
      this._bindings.method_get_action_strength = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        801543509
      );
    }
  }
  static init_method_get_action_raw_strength() {
    if (!this._bindings.method_get_action_raw_strength) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_action_raw_strength");
      this._bindings.method_get_action_raw_strength = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        801543509
      );
    }
  }
  static init_method_get_axis() {
    if (!this._bindings.method_get_axis) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_axis");
      this._bindings.method_get_axis = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1958752504
      );
    }
  }
  static init_method_get_vector() {
    if (!this._bindings.method_get_vector) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_vector");
      this._bindings.method_get_vector = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2479607902
      );
    }
  }
  static init_method_add_joy_mapping() {
    if (!this._bindings.method_add_joy_mapping) {
      let classname = new StringName("Input");
      let methodname = new StringName("add_joy_mapping");
      this._bindings.method_add_joy_mapping = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1168363258
      );
    }
  }
  static init_method_remove_joy_mapping() {
    if (!this._bindings.method_remove_joy_mapping) {
      let classname = new StringName("Input");
      let methodname = new StringName("remove_joy_mapping");
      this._bindings.method_remove_joy_mapping = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_is_joy_known() {
    if (!this._bindings.method_is_joy_known) {
      let classname = new StringName("Input");
      let methodname = new StringName("is_joy_known");
      this._bindings.method_is_joy_known = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3067735520
      );
    }
  }
  static init_method_get_joy_axis() {
    if (!this._bindings.method_get_joy_axis) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_joy_axis");
      this._bindings.method_get_joy_axis = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4063175957
      );
    }
  }
  static init_method_get_joy_name() {
    if (!this._bindings.method_get_joy_name) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_joy_name");
      this._bindings.method_get_joy_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        990163283
      );
    }
  }
  static init_method_get_joy_guid() {
    if (!this._bindings.method_get_joy_guid) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_joy_guid");
      this._bindings.method_get_joy_guid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_joy_info() {
    if (!this._bindings.method_get_joy_info) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_joy_info");
      this._bindings.method_get_joy_info = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3485342025
      );
    }
  }
  static init_method_should_ignore_device() {
    if (!this._bindings.method_should_ignore_device) {
      let classname = new StringName("Input");
      let methodname = new StringName("should_ignore_device");
      this._bindings.method_should_ignore_device = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2522259332
      );
    }
  }
  static init_method_get_connected_joypads() {
    if (!this._bindings.method_get_connected_joypads) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_connected_joypads");
      this._bindings.method_get_connected_joypads = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_get_joy_vibration_strength() {
    if (!this._bindings.method_get_joy_vibration_strength) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_joy_vibration_strength");
      this._bindings.method_get_joy_vibration_strength = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3114997196
      );
    }
  }
  static init_method_get_joy_vibration_duration() {
    if (!this._bindings.method_get_joy_vibration_duration) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_joy_vibration_duration");
      this._bindings.method_get_joy_vibration_duration = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4025615559
      );
    }
  }
  static init_method_start_joy_vibration() {
    if (!this._bindings.method_start_joy_vibration) {
      let classname = new StringName("Input");
      let methodname = new StringName("start_joy_vibration");
      this._bindings.method_start_joy_vibration = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2576575033
      );
    }
  }
  static init_method_stop_joy_vibration() {
    if (!this._bindings.method_stop_joy_vibration) {
      let classname = new StringName("Input");
      let methodname = new StringName("stop_joy_vibration");
      this._bindings.method_stop_joy_vibration = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_vibrate_handheld() {
    if (!this._bindings.method_vibrate_handheld) {
      let classname = new StringName("Input");
      let methodname = new StringName("vibrate_handheld");
      this._bindings.method_vibrate_handheld = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        544894297
      );
    }
  }
  static init_method_get_gravity() {
    if (!this._bindings.method_get_gravity) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_gravity");
      this._bindings.method_get_gravity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_get_accelerometer() {
    if (!this._bindings.method_get_accelerometer) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_accelerometer");
      this._bindings.method_get_accelerometer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_get_magnetometer() {
    if (!this._bindings.method_get_magnetometer) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_magnetometer");
      this._bindings.method_get_magnetometer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_get_gyroscope() {
    if (!this._bindings.method_get_gyroscope) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_gyroscope");
      this._bindings.method_get_gyroscope = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_gravity() {
    if (!this._bindings.method_set_gravity) {
      let classname = new StringName("Input");
      let methodname = new StringName("set_gravity");
      this._bindings.method_set_gravity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_set_accelerometer() {
    if (!this._bindings.method_set_accelerometer) {
      let classname = new StringName("Input");
      let methodname = new StringName("set_accelerometer");
      this._bindings.method_set_accelerometer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_set_magnetometer() {
    if (!this._bindings.method_set_magnetometer) {
      let classname = new StringName("Input");
      let methodname = new StringName("set_magnetometer");
      this._bindings.method_set_magnetometer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_set_gyroscope() {
    if (!this._bindings.method_set_gyroscope) {
      let classname = new StringName("Input");
      let methodname = new StringName("set_gyroscope");
      this._bindings.method_set_gyroscope = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_last_mouse_velocity() {
    if (!this._bindings.method_get_last_mouse_velocity) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_last_mouse_velocity");
      this._bindings.method_get_last_mouse_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1497962370
      );
    }
  }
  static init_method_get_last_mouse_screen_velocity() {
    if (!this._bindings.method_get_last_mouse_screen_velocity) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_last_mouse_screen_velocity");
      this._bindings.method_get_last_mouse_screen_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1497962370
      );
    }
  }
  static init_method_get_mouse_button_mask() {
    if (!this._bindings.method_get_mouse_button_mask) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_mouse_button_mask");
      this._bindings.method_get_mouse_button_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2512161324
      );
    }
  }
  static init_method_set_mouse_mode() {
    if (!this._bindings.method_set_mouse_mode) {
      let classname = new StringName("Input");
      let methodname = new StringName("set_mouse_mode");
      this._bindings.method_set_mouse_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2228490894
      );
    }
  }
  static init_method_get_mouse_mode() {
    if (!this._bindings.method_get_mouse_mode) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_mouse_mode");
      this._bindings.method_get_mouse_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        965286182
      );
    }
  }
  static init_method_warp_mouse() {
    if (!this._bindings.method_warp_mouse) {
      let classname = new StringName("Input");
      let methodname = new StringName("warp_mouse");
      this._bindings.method_warp_mouse = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_action_press() {
    if (!this._bindings.method_action_press) {
      let classname = new StringName("Input");
      let methodname = new StringName("action_press");
      this._bindings.method_action_press = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1713091165
      );
    }
  }
  static init_method_action_release() {
    if (!this._bindings.method_action_release) {
      let classname = new StringName("Input");
      let methodname = new StringName("action_release");
      this._bindings.method_action_release = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_set_default_cursor_shape() {
    if (!this._bindings.method_set_default_cursor_shape) {
      let classname = new StringName("Input");
      let methodname = new StringName("set_default_cursor_shape");
      this._bindings.method_set_default_cursor_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2124816902
      );
    }
  }
  static init_method_get_current_cursor_shape() {
    if (!this._bindings.method_get_current_cursor_shape) {
      let classname = new StringName("Input");
      let methodname = new StringName("get_current_cursor_shape");
      this._bindings.method_get_current_cursor_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3455658929
      );
    }
  }
  static init_method_set_custom_mouse_cursor() {
    if (!this._bindings.method_set_custom_mouse_cursor) {
      let classname = new StringName("Input");
      let methodname = new StringName("set_custom_mouse_cursor");
      this._bindings.method_set_custom_mouse_cursor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        703945977
      );
    }
  }
  static init_method_parse_input_event() {
    if (!this._bindings.method_parse_input_event) {
      let classname = new StringName("Input");
      let methodname = new StringName("parse_input_event");
      this._bindings.method_parse_input_event = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3754044979
      );
    }
  }
  static init_method_set_use_accumulated_input() {
    if (!this._bindings.method_set_use_accumulated_input) {
      let classname = new StringName("Input");
      let methodname = new StringName("set_use_accumulated_input");
      this._bindings.method_set_use_accumulated_input = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_accumulated_input() {
    if (!this._bindings.method_is_using_accumulated_input) {
      let classname = new StringName("Input");
      let methodname = new StringName("is_using_accumulated_input");
      this._bindings.method_is_using_accumulated_input = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_flush_buffered_events() {
    if (!this._bindings.method_flush_buffered_events) {
      let classname = new StringName("Input");
      let methodname = new StringName("flush_buffered_events");
      this._bindings.method_flush_buffered_events = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_emulate_mouse_from_touch() {
    if (!this._bindings.method_set_emulate_mouse_from_touch) {
      let classname = new StringName("Input");
      let methodname = new StringName("set_emulate_mouse_from_touch");
      this._bindings.method_set_emulate_mouse_from_touch = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_emulating_mouse_from_touch() {
    if (!this._bindings.method_is_emulating_mouse_from_touch) {
      let classname = new StringName("Input");
      let methodname = new StringName("is_emulating_mouse_from_touch");
      this._bindings.method_is_emulating_mouse_from_touch = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_emulate_touch_from_mouse() {
    if (!this._bindings.method_set_emulate_touch_from_mouse) {
      let classname = new StringName("Input");
      let methodname = new StringName("set_emulate_touch_from_mouse");
      this._bindings.method_set_emulate_touch_from_mouse = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_emulating_touch_from_mouse() {
    if (!this._bindings.method_is_emulating_touch_from_mouse) {
      let classname = new StringName("Input");
      let methodname = new StringName("is_emulating_touch_from_mouse");
      this._bindings.method_is_emulating_touch_from_mouse = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  is_anything_pressed() {
    Input.init_method_is_anything_pressed();
    return _call_native_mb_ret(
      _Input._bindings.method_is_anything_pressed,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_key_pressed(_keycode) {
    Input.init_method_is_key_pressed();
    return _call_native_mb_ret(
      _Input._bindings.method_is_key_pressed,
      this._owner,
			Variant.Type.BOOL,
    
      _keycode
    );
    
  }
  is_physical_key_pressed(_keycode) {
    Input.init_method_is_physical_key_pressed();
    return _call_native_mb_ret(
      _Input._bindings.method_is_physical_key_pressed,
      this._owner,
			Variant.Type.BOOL,
    
      _keycode
    );
    
  }
  is_key_label_pressed(_keycode) {
    Input.init_method_is_key_label_pressed();
    return _call_native_mb_ret(
      _Input._bindings.method_is_key_label_pressed,
      this._owner,
			Variant.Type.BOOL,
    
      _keycode
    );
    
  }
  is_mouse_button_pressed(_button) {
    Input.init_method_is_mouse_button_pressed();
    return _call_native_mb_ret(
      _Input._bindings.method_is_mouse_button_pressed,
      this._owner,
			Variant.Type.BOOL,
    
      _button
    );
    
  }
  is_joy_button_pressed(_device, _button) {
    Input.init_method_is_joy_button_pressed();
    return _call_native_mb_ret(
      _Input._bindings.method_is_joy_button_pressed,
      this._owner,
			Variant.Type.BOOL,
    
      _device, _button
    );
    
  }
  is_action_pressed(_action, _exact_match) {
    Input.init_method_is_action_pressed();
    return _call_native_mb_ret(
      _Input._bindings.method_is_action_pressed,
      this._owner,
			Variant.Type.BOOL,
    
      _action, _exact_match
    );
    
  }
  is_action_just_pressed(_action, _exact_match) {
    Input.init_method_is_action_just_pressed();
    return _call_native_mb_ret(
      _Input._bindings.method_is_action_just_pressed,
      this._owner,
			Variant.Type.BOOL,
    
      _action, _exact_match
    );
    
  }
  is_action_just_released(_action, _exact_match) {
    Input.init_method_is_action_just_released();
    return _call_native_mb_ret(
      _Input._bindings.method_is_action_just_released,
      this._owner,
			Variant.Type.BOOL,
    
      _action, _exact_match
    );
    
  }
  get_action_strength(_action, _exact_match) {
    Input.init_method_get_action_strength();
    return _call_native_mb_ret(
      _Input._bindings.method_get_action_strength,
      this._owner,
			Variant.Type.FLOAT,
    
      _action, _exact_match
    );
    
  }
  get_action_raw_strength(_action, _exact_match) {
    Input.init_method_get_action_raw_strength();
    return _call_native_mb_ret(
      _Input._bindings.method_get_action_raw_strength,
      this._owner,
			Variant.Type.FLOAT,
    
      _action, _exact_match
    );
    
  }
  get_axis(_negative_action, _positive_action) {
    Input.init_method_get_axis();
    return _call_native_mb_ret(
      _Input._bindings.method_get_axis,
      this._owner,
			Variant.Type.FLOAT,
    
      _negative_action, _positive_action
    );
    
  }
  get_vector(_negative_x, _positive_x, _negative_y, _positive_y, _deadzone) {
    Input.init_method_get_vector();
    return _call_native_mb_ret(
      _Input._bindings.method_get_vector,
      this._owner,
			Variant.Type.VECTOR2,
    
      _negative_x, _positive_x, _negative_y, _positive_y, _deadzone
    );
    
  }
  add_joy_mapping(_mapping, _update_existing) {
    Input.init_method_add_joy_mapping();
    return _call_native_mb_no_ret(
      _Input._bindings.method_add_joy_mapping,
      this._owner,
      _mapping, _update_existing
    );
    
  }
  remove_joy_mapping(_guid) {
    Input.init_method_remove_joy_mapping();
    return _call_native_mb_no_ret(
      _Input._bindings.method_remove_joy_mapping,
      this._owner,
      _guid
    );
    
  }
  is_joy_known(_device) {
    Input.init_method_is_joy_known();
    return _call_native_mb_ret(
      _Input._bindings.method_is_joy_known,
      this._owner,
			Variant.Type.BOOL,
    
      _device
    );
    
  }
  get_joy_axis(_device, _axis) {
    Input.init_method_get_joy_axis();
    return _call_native_mb_ret(
      _Input._bindings.method_get_joy_axis,
      this._owner,
			Variant.Type.FLOAT,
    
      _device, _axis
    );
    
  }
  get_joy_name(_device) {
    Input.init_method_get_joy_name();
    return _call_native_mb_ret(
      _Input._bindings.method_get_joy_name,
      this._owner,
			Variant.Type.STRING,
    
      _device
    );
    
  }
  get_joy_guid(_device) {
    Input.init_method_get_joy_guid();
    return _call_native_mb_ret(
      _Input._bindings.method_get_joy_guid,
      this._owner,
			Variant.Type.STRING,
    
      _device
    );
    
  }
  get_joy_info(_device) {
    Input.init_method_get_joy_info();
    return _call_native_mb_ret(
      _Input._bindings.method_get_joy_info,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _device
    );
    
  }
  should_ignore_device(_vendor_id, _product_id) {
    Input.init_method_should_ignore_device();
    return _call_native_mb_ret(
      _Input._bindings.method_should_ignore_device,
      this._owner,
			Variant.Type.BOOL,
    
      _vendor_id, _product_id
    );
    
  }
  get_connected_joypads() {
    Input.init_method_get_connected_joypads();
    return _call_native_mb_ret(
      _Input._bindings.method_get_connected_joypads,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  get_joy_vibration_strength(_device) {
    Input.init_method_get_joy_vibration_strength();
    return _call_native_mb_ret(
      _Input._bindings.method_get_joy_vibration_strength,
      this._owner,
			Variant.Type.VECTOR2,
    
      _device
    );
    
  }
  get_joy_vibration_duration(_device) {
    Input.init_method_get_joy_vibration_duration();
    return _call_native_mb_ret(
      _Input._bindings.method_get_joy_vibration_duration,
      this._owner,
			Variant.Type.FLOAT,
    
      _device
    );
    
  }
  start_joy_vibration(_device, _weak_magnitude, _strong_magnitude, _duration) {
    Input.init_method_start_joy_vibration();
    return _call_native_mb_no_ret(
      _Input._bindings.method_start_joy_vibration,
      this._owner,
      _device, _weak_magnitude, _strong_magnitude, _duration
    );
    
  }
  stop_joy_vibration(_device) {
    Input.init_method_stop_joy_vibration();
    return _call_native_mb_no_ret(
      _Input._bindings.method_stop_joy_vibration,
      this._owner,
      _device
    );
    
  }
  vibrate_handheld(_duration_ms, _amplitude) {
    Input.init_method_vibrate_handheld();
    return _call_native_mb_no_ret(
      _Input._bindings.method_vibrate_handheld,
      this._owner,
      _duration_ms, _amplitude
    );
    
  }
  get_gravity() {
    Input.init_method_get_gravity();
    return _call_native_mb_ret(
      _Input._bindings.method_get_gravity,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_accelerometer() {
    Input.init_method_get_accelerometer();
    return _call_native_mb_ret(
      _Input._bindings.method_get_accelerometer,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_magnetometer() {
    Input.init_method_get_magnetometer();
    return _call_native_mb_ret(
      _Input._bindings.method_get_magnetometer,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_gyroscope() {
    Input.init_method_get_gyroscope();
    return _call_native_mb_ret(
      _Input._bindings.method_get_gyroscope,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_gravity(_value) {
    Input.init_method_set_gravity();
    return _call_native_mb_no_ret(
      _Input._bindings.method_set_gravity,
      this._owner,
      _value
    );
    
  }
  set_accelerometer(_value) {
    Input.init_method_set_accelerometer();
    return _call_native_mb_no_ret(
      _Input._bindings.method_set_accelerometer,
      this._owner,
      _value
    );
    
  }
  set_magnetometer(_value) {
    Input.init_method_set_magnetometer();
    return _call_native_mb_no_ret(
      _Input._bindings.method_set_magnetometer,
      this._owner,
      _value
    );
    
  }
  set_gyroscope(_value) {
    Input.init_method_set_gyroscope();
    return _call_native_mb_no_ret(
      _Input._bindings.method_set_gyroscope,
      this._owner,
      _value
    );
    
  }
  get_last_mouse_velocity() {
    Input.init_method_get_last_mouse_velocity();
    return _call_native_mb_ret(
      _Input._bindings.method_get_last_mouse_velocity,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_last_mouse_screen_velocity() {
    Input.init_method_get_last_mouse_screen_velocity();
    return _call_native_mb_ret(
      _Input._bindings.method_get_last_mouse_screen_velocity,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_mouse_button_mask() {
    Input.init_method_get_mouse_button_mask();
    return _call_native_mb_ret(
      _Input._bindings.method_get_mouse_button_mask,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_mouse_mode(_mode) {
    Input.init_method_set_mouse_mode();
    return _call_native_mb_no_ret(
      _Input._bindings.method_set_mouse_mode,
      this._owner,
      _mode
    );
    
  }
  get_mouse_mode() {
    Input.init_method_get_mouse_mode();
    return _call_native_mb_ret(
      _Input._bindings.method_get_mouse_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  warp_mouse(_position) {
    Input.init_method_warp_mouse();
    return _call_native_mb_no_ret(
      _Input._bindings.method_warp_mouse,
      this._owner,
      _position
    );
    
  }
  action_press(_action, _strength) {
    Input.init_method_action_press();
    return _call_native_mb_no_ret(
      _Input._bindings.method_action_press,
      this._owner,
      _action, _strength
    );
    
  }
  action_release(_action) {
    Input.init_method_action_release();
    return _call_native_mb_no_ret(
      _Input._bindings.method_action_release,
      this._owner,
      _action
    );
    
  }
  set_default_cursor_shape(_shape) {
    Input.init_method_set_default_cursor_shape();
    return _call_native_mb_no_ret(
      _Input._bindings.method_set_default_cursor_shape,
      this._owner,
      _shape
    );
    
  }
  get_current_cursor_shape() {
    Input.init_method_get_current_cursor_shape();
    return _call_native_mb_ret(
      _Input._bindings.method_get_current_cursor_shape,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_custom_mouse_cursor(_image, _shape, _hotspot) {
    Input.init_method_set_custom_mouse_cursor();
    return _call_native_mb_no_ret(
      _Input._bindings.method_set_custom_mouse_cursor,
      this._owner,
      _image, _shape, _hotspot
    );
    
  }
  parse_input_event(_event) {
    Input.init_method_parse_input_event();
    return _call_native_mb_no_ret(
      _Input._bindings.method_parse_input_event,
      this._owner,
      _event
    );
    
  }
  set_use_accumulated_input(_enable) {
    Input.init_method_set_use_accumulated_input();
    return _call_native_mb_no_ret(
      _Input._bindings.method_set_use_accumulated_input,
      this._owner,
      _enable
    );
    
  }
  is_using_accumulated_input() {
    Input.init_method_is_using_accumulated_input();
    return _call_native_mb_ret(
      _Input._bindings.method_is_using_accumulated_input,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  flush_buffered_events() {
    Input.init_method_flush_buffered_events();
    return _call_native_mb_no_ret(
      _Input._bindings.method_flush_buffered_events,
      this._owner,
      
    );
    
  }
  set_emulate_mouse_from_touch(_enable) {
    Input.init_method_set_emulate_mouse_from_touch();
    return _call_native_mb_no_ret(
      _Input._bindings.method_set_emulate_mouse_from_touch,
      this._owner,
      _enable
    );
    
  }
  is_emulating_mouse_from_touch() {
    Input.init_method_is_emulating_mouse_from_touch();
    return _call_native_mb_ret(
      _Input._bindings.method_is_emulating_mouse_from_touch,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_emulate_touch_from_mouse(_enable) {
    Input.init_method_set_emulate_touch_from_mouse();
    return _call_native_mb_no_ret(
      _Input._bindings.method_set_emulate_touch_from_mouse,
      this._owner,
      _enable
    );
    
  }
  is_emulating_touch_from_mouse() {
    Input.init_method_is_emulating_touch_from_mouse();
    return _call_native_mb_ret(
      _Input._bindings.method_is_emulating_touch_from_mouse,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get mouse_mode () {
  return this.get_mouse_mode();
}
set mouse_mode (new_value) {
  this.set_mouse_mode(new_value);
}
get use_accumulated_input () {
  return this.is_using_accumulated_input();
}
set use_accumulated_input (new_value) {
  this.set_use_accumulated_input(new_value);
}
get emulate_mouse_from_touch () {
  return this.is_emulating_mouse_from_touch();
}
set emulate_mouse_from_touch (new_value) {
  this.set_emulate_mouse_from_touch(new_value);
}
get emulate_touch_from_mouse () {
  return this.is_emulating_touch_from_mouse();
}
set emulate_touch_from_mouse (new_value) {
  this.set_emulate_touch_from_mouse(new_value);
}

  static MouseMode = {
    MOUSE_MODE_VISIBLE: 0,
    MOUSE_MODE_HIDDEN: 1,
    MOUSE_MODE_CAPTURED: 2,
    MOUSE_MODE_CONFINED: 3,
    MOUSE_MODE_CONFINED_HIDDEN: 4,
  }
  static CursorShape = {
    CURSOR_ARROW: 0,
    CURSOR_IBEAM: 1,
    CURSOR_POINTING_HAND: 2,
    CURSOR_CROSS: 3,
    CURSOR_WAIT: 4,
    CURSOR_BUSY: 5,
    CURSOR_DRAG: 6,
    CURSOR_CAN_DROP: 7,
    CURSOR_FORBIDDEN: 8,
    CURSOR_VSIZE: 9,
    CURSOR_HSIZE: 10,
    CURSOR_BDIAGSIZE: 11,
    CURSOR_FDIAGSIZE: 12,
    CURSOR_MOVE: 13,
    CURSOR_VSPLIT: 14,
    CURSOR_HSPLIT: 15,
    CURSOR_HELP: 16,
  }
}
export const Input = (function () {
  let _instance;
  function create_instance() {
    return new _Input();
  }
  return {
    instance: function () {
      if (!_instance) {
        _instance = create_instance();
      }
      return _instance;
    },
  };
})();