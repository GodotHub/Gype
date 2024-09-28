import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { InputEventGesture } from '@js_godot/classes/input_event_gesture'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_factor;
  method_get_factor;
}
@GodotClass
export class InputEventMagnifyGesture extends InputEventGesture{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventMagnifyGesture");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_factor() {
    if (!this._bindings.method_set_factor) {
      let classname = new StringName("InputEventMagnifyGesture");
      let methodname = new StringName("set_factor");
      this._bindings.method_set_factor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_factor() {
    if (!this._bindings.method_get_factor) {
      let classname = new StringName("InputEventMagnifyGesture");
      let methodname = new StringName("get_factor");
      this._bindings.method_get_factor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_factor(_factor) {
    InputEventMagnifyGesture.init_method_set_factor();
    return _call_native_mb_no_ret(
      InputEventMagnifyGesture._bindings.method_set_factor,
      this._owner,
      _factor
    );
    
  }
  get_factor() {
    InputEventMagnifyGesture.init_method_get_factor();
    return _call_native_mb_ret(
      InputEventMagnifyGesture._bindings.method_get_factor,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get factor () {
  return this.get_factor();
}
set factor (new_value) {
  this.set_factor(new_value);
}

}