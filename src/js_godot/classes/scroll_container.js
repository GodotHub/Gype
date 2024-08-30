import * as internal from '__internal__';
import { Container } from 'src/js_godot/classes/container'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_h_scroll;
    method_get_h_scroll;
    method_set_v_scroll;
    method_get_v_scroll;
    method_set_horizontal_custom_step;
    method_get_horizontal_custom_step;
    method_set_vertical_custom_step;
    method_get_vertical_custom_step;
    method_set_horizontal_scroll_mode;
    method_get_horizontal_scroll_mode;
    method_set_vertical_scroll_mode;
    method_get_vertical_scroll_mode;
    method_set_deadzone;
    method_get_deadzone;
    method_set_follow_focus;
    method_is_following_focus;
    method_get_h_scroll_bar;
    method_get_v_scroll_bar;
    method_ensure_control_visible;
}


export class ScrollContainer extends Container{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ScrollContainer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("ScrollContainer");
        let methodname = new StringName("set_h_scroll");
        this._bindings.method_set_h_scroll = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("ScrollContainer");
        let methodname = new StringName("get_h_scroll");
        this._bindings.method_get_h_scroll = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("ScrollContainer");
        let methodname = new StringName("set_v_scroll");
        this._bindings.method_set_v_scroll = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("ScrollContainer");
        let methodname = new StringName("get_v_scroll");
        this._bindings.method_get_v_scroll = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("ScrollContainer");
        let methodname = new StringName("set_horizontal_custom_step");
        this._bindings.method_set_horizontal_custom_step = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("ScrollContainer");
        let methodname = new StringName("get_horizontal_custom_step");
        this._bindings.method_get_horizontal_custom_step = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("ScrollContainer");
        let methodname = new StringName("set_vertical_custom_step");
        this._bindings.method_set_vertical_custom_step = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("ScrollContainer");
        let methodname = new StringName("get_vertical_custom_step");
        this._bindings.method_get_vertical_custom_step = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("ScrollContainer");
        let methodname = new StringName("set_horizontal_scroll_mode");
        this._bindings.method_set_horizontal_scroll_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2750506364
        );
      }
      {
        let classname = new StringName("ScrollContainer");
        let methodname = new StringName("get_horizontal_scroll_mode");
        this._bindings.method_get_horizontal_scroll_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3987985145
        );
      }
      {
        let classname = new StringName("ScrollContainer");
        let methodname = new StringName("set_vertical_scroll_mode");
        this._bindings.method_set_vertical_scroll_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2750506364
        );
      }
      {
        let classname = new StringName("ScrollContainer");
        let methodname = new StringName("get_vertical_scroll_mode");
        this._bindings.method_get_vertical_scroll_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3987985145
        );
      }
      {
        let classname = new StringName("ScrollContainer");
        let methodname = new StringName("set_deadzone");
        this._bindings.method_set_deadzone = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("ScrollContainer");
        let methodname = new StringName("get_deadzone");
        this._bindings.method_get_deadzone = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("ScrollContainer");
        let methodname = new StringName("set_follow_focus");
        this._bindings.method_set_follow_focus = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("ScrollContainer");
        let methodname = new StringName("is_following_focus");
        this._bindings.method_is_following_focus = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("ScrollContainer");
        let methodname = new StringName("get_h_scroll_bar");
        this._bindings.method_get_h_scroll_bar = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4004517983
        );
      }
      {
        let classname = new StringName("ScrollContainer");
        let methodname = new StringName("get_v_scroll_bar");
        this._bindings.method_get_v_scroll_bar = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2630340773
        );
      }
      {
        let classname = new StringName("ScrollContainer");
        let methodname = new StringName("ensure_control_visible");
        this._bindings.method_ensure_control_visible = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1496901182
        );
      }
  }
  set_h_scroll(_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_h_scroll,
      this._owner,
      _value
    );
    
  }
  get_h_scroll() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_h_scroll,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_v_scroll(_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_v_scroll,
      this._owner,
      _value
    );
    
  }
  get_v_scroll() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_v_scroll,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_horizontal_custom_step(_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_horizontal_custom_step,
      this._owner,
      _value
    );
    
  }
  get_horizontal_custom_step() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_horizontal_custom_step,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_vertical_custom_step(_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertical_custom_step,
      this._owner,
      _value
    );
    
  }
  get_vertical_custom_step() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertical_custom_step,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_horizontal_scroll_mode(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_horizontal_scroll_mode,
      this._owner,
      _enable
    );
    
  }
  get_horizontal_scroll_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_horizontal_scroll_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_vertical_scroll_mode(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertical_scroll_mode,
      this._owner,
      _enable
    );
    
  }
  get_vertical_scroll_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertical_scroll_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_deadzone(_deadzone) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_deadzone,
      this._owner,
      _deadzone
    );
    
  }
  get_deadzone() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_deadzone,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_follow_focus(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_follow_focus,
      this._owner,
      _enabled
    );
    
  }
  is_following_focus() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_following_focus,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_h_scroll_bar() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_h_scroll_bar,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_v_scroll_bar() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_v_scroll_bar,
      this._owner,
			Variant.INT,
      
    );
    
  }
  ensure_control_visible(_control) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_ensure_control_visible,
      this._owner,
      _control
    );
    
  }
  static ScrollMode = {
    SCROLL_MODE_DISABLED: 0,
    SCROLL_MODE_AUTO: 1,
    SCROLL_MODE_SHOW_ALWAYS: 2,
    SCROLL_MODE_SHOW_NEVER: 3,
  }
}