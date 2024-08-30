import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { InputEventFromWindow } from 'src/js_godot/classes/input_event_from_window'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_index;
    method_get_index;
    method_set_position;
    method_get_position;
    method_set_pressed;
    method_set_canceled;
    method_set_double_tap;
    method_is_double_tap;
}


export class InputEventScreenTouch extends InputEventFromWindow{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventScreenTouch");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("InputEventScreenTouch");
        let methodname = new StringName("set_index");
        this._bindings.method_set_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("InputEventScreenTouch");
        let methodname = new StringName("get_index");
        this._bindings.method_get_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("InputEventScreenTouch");
        let methodname = new StringName("set_position");
        this._bindings.method_set_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("InputEventScreenTouch");
        let methodname = new StringName("get_position");
        this._bindings.method_get_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("InputEventScreenTouch");
        let methodname = new StringName("set_pressed");
        this._bindings.method_set_pressed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("InputEventScreenTouch");
        let methodname = new StringName("set_canceled");
        this._bindings.method_set_canceled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("InputEventScreenTouch");
        let methodname = new StringName("set_double_tap");
        this._bindings.method_set_double_tap = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("InputEventScreenTouch");
        let methodname = new StringName("is_double_tap");
        this._bindings.method_is_double_tap = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  set_index(_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_index,
      this._owner,
      _index
    );
    
  }
  get_index() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_index,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_position(_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_position,
      this._owner,
      _position
    );
    
  }
  get_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_position,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  set_pressed(_pressed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pressed,
      this._owner,
      _pressed
    );
    
  }
  set_canceled(_canceled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_canceled,
      this._owner,
      _canceled
    );
    
  }
  set_double_tap(_double_tap) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_double_tap,
      this._owner,
      _double_tap
    );
    
  }
  is_double_tap() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_double_tap,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}