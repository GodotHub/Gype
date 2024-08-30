import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { InputEventMouse } from 'src/js_godot/classes/input_event_mouse'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_factor;
    method_get_factor;
    method_set_button_index;
    method_get_button_index;
    method_set_pressed;
    method_set_canceled;
    method_set_double_click;
    method_is_double_click;
}


export class InputEventMouseButton extends InputEventMouse{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventMouseButton");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("InputEventMouseButton");
        let methodname = new StringName("set_factor");
        this._bindings.method_set_factor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("InputEventMouseButton");
        let methodname = new StringName("get_factor");
        this._bindings.method_get_factor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("InputEventMouseButton");
        let methodname = new StringName("set_button_index");
        this._bindings.method_set_button_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3624991109
        );
      }
      {
        let classname = new StringName("InputEventMouseButton");
        let methodname = new StringName("get_button_index");
        this._bindings.method_get_button_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1132662608
        );
      }
      {
        let classname = new StringName("InputEventMouseButton");
        let methodname = new StringName("set_pressed");
        this._bindings.method_set_pressed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("InputEventMouseButton");
        let methodname = new StringName("set_canceled");
        this._bindings.method_set_canceled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("InputEventMouseButton");
        let methodname = new StringName("set_double_click");
        this._bindings.method_set_double_click = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("InputEventMouseButton");
        let methodname = new StringName("is_double_click");
        this._bindings.method_is_double_click = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  set_factor(_factor) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_factor,
      this._owner,
      _factor
    );
    
  }
  get_factor() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_factor,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_button_index(_button_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_button_index,
      this._owner,
      _button_index
    );
    
  }
  get_button_index() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_button_index,
      this._owner,
			Variant.INT,
      
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
  set_double_click(_double_click) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_double_click,
      this._owner,
      _double_click
    );
    
  }
  is_double_click() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_double_click,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}