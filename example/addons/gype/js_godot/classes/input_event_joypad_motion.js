import * as internal from '__internal__';
import { InputEvent } from '@js_godot/classes/input_event'
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
  method_set_axis;
  method_get_axis;
  method_set_axis_value;
  method_get_axis_value;
}
@GodotClass
export class InputEventJoypadMotion extends InputEvent{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventJoypadMotion");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_axis() {
    if (!this._bindings.method_set_axis) {
      let classname = new StringName("InputEventJoypadMotion");
      let methodname = new StringName("set_axis");
      this._bindings.method_set_axis = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1332685170
      );
    }
  }
  static init_method_get_axis() {
    if (!this._bindings.method_get_axis) {
      let classname = new StringName("InputEventJoypadMotion");
      let methodname = new StringName("get_axis");
      this._bindings.method_get_axis = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4019121683
      );
    }
  }
  static init_method_set_axis_value() {
    if (!this._bindings.method_set_axis_value) {
      let classname = new StringName("InputEventJoypadMotion");
      let methodname = new StringName("set_axis_value");
      this._bindings.method_set_axis_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_axis_value() {
    if (!this._bindings.method_get_axis_value) {
      let classname = new StringName("InputEventJoypadMotion");
      let methodname = new StringName("get_axis_value");
      this._bindings.method_get_axis_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_axis(_axis) {
    InputEventJoypadMotion.init_method_set_axis();
    return _call_native_mb_no_ret(
      InputEventJoypadMotion._bindings.method_set_axis,
      this._owner,
      _axis
    );
    
  }
  get_axis() {
    InputEventJoypadMotion.init_method_get_axis();
    return _call_native_mb_ret(
      InputEventJoypadMotion._bindings.method_get_axis,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_axis_value(_axis_value) {
    InputEventJoypadMotion.init_method_set_axis_value();
    return _call_native_mb_no_ret(
      InputEventJoypadMotion._bindings.method_set_axis_value,
      this._owner,
      _axis_value
    );
    
  }
  get_axis_value() {
    InputEventJoypadMotion.init_method_get_axis_value();
    return _call_native_mb_ret(
      InputEventJoypadMotion._bindings.method_get_axis_value,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get axis () {
  return this.get_axis();
}
set axis (new_value) {
  this.set_axis(new_value);
}
get axis_value () {
  return this.get_axis_value();
}
set axis_value (new_value) {
  this.set_axis_value(new_value);
}

}