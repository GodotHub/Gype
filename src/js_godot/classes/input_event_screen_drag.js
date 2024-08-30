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
    method_set_tilt;
    method_get_tilt;
    method_set_pressure;
    method_get_pressure;
    method_set_pen_inverted;
    method_get_pen_inverted;
    method_set_position;
    method_get_position;
    method_set_relative;
    method_get_relative;
    method_set_screen_relative;
    method_get_screen_relative;
    method_set_velocity;
    method_get_velocity;
    method_set_screen_velocity;
    method_get_screen_velocity;
}


export class InputEventScreenDrag extends InputEventFromWindow{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventScreenDrag");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("InputEventScreenDrag");
        let methodname = new StringName("set_index");
        this._bindings.method_set_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("InputEventScreenDrag");
        let methodname = new StringName("get_index");
        this._bindings.method_get_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("InputEventScreenDrag");
        let methodname = new StringName("set_tilt");
        this._bindings.method_set_tilt = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("InputEventScreenDrag");
        let methodname = new StringName("get_tilt");
        this._bindings.method_get_tilt = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("InputEventScreenDrag");
        let methodname = new StringName("set_pressure");
        this._bindings.method_set_pressure = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("InputEventScreenDrag");
        let methodname = new StringName("get_pressure");
        this._bindings.method_get_pressure = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("InputEventScreenDrag");
        let methodname = new StringName("set_pen_inverted");
        this._bindings.method_set_pen_inverted = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("InputEventScreenDrag");
        let methodname = new StringName("get_pen_inverted");
        this._bindings.method_get_pen_inverted = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("InputEventScreenDrag");
        let methodname = new StringName("set_position");
        this._bindings.method_set_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("InputEventScreenDrag");
        let methodname = new StringName("get_position");
        this._bindings.method_get_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("InputEventScreenDrag");
        let methodname = new StringName("set_relative");
        this._bindings.method_set_relative = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("InputEventScreenDrag");
        let methodname = new StringName("get_relative");
        this._bindings.method_get_relative = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("InputEventScreenDrag");
        let methodname = new StringName("set_screen_relative");
        this._bindings.method_set_screen_relative = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("InputEventScreenDrag");
        let methodname = new StringName("get_screen_relative");
        this._bindings.method_get_screen_relative = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("InputEventScreenDrag");
        let methodname = new StringName("set_velocity");
        this._bindings.method_set_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("InputEventScreenDrag");
        let methodname = new StringName("get_velocity");
        this._bindings.method_get_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("InputEventScreenDrag");
        let methodname = new StringName("set_screen_velocity");
        this._bindings.method_set_screen_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("InputEventScreenDrag");
        let methodname = new StringName("get_screen_velocity");
        this._bindings.method_get_screen_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
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
  set_tilt(_tilt) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tilt,
      this._owner,
      _tilt
    );
    
  }
  get_tilt() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tilt,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  set_pressure(_pressure) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pressure,
      this._owner,
      _pressure
    );
    
  }
  get_pressure() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pressure,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_pen_inverted(_pen_inverted) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pen_inverted,
      this._owner,
      _pen_inverted
    );
    
  }
  get_pen_inverted() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pen_inverted,
      this._owner,
			Variant.Type.BOOL,
      
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
  set_relative(_relative) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_relative,
      this._owner,
      _relative
    );
    
  }
  get_relative() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_relative,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  set_screen_relative(_relative) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_screen_relative,
      this._owner,
      _relative
    );
    
  }
  get_screen_relative() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_screen_relative,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  set_velocity(_velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_velocity,
      this._owner,
      _velocity
    );
    
  }
  get_velocity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_velocity,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  set_screen_velocity(_velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_screen_velocity,
      this._owner,
      _velocity
    );
    
  }
  get_screen_velocity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_screen_velocity,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
}