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
  method_set_delta;
  method_get_delta;
}
@GodotClass
export class InputEventPanGesture extends InputEventGesture{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventPanGesture");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_delta() {
    if (!this._bindings.method_set_delta) {
      let classname = new StringName("InputEventPanGesture");
      let methodname = new StringName("set_delta");
      this._bindings.method_set_delta = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_delta() {
    if (!this._bindings.method_get_delta) {
      let classname = new StringName("InputEventPanGesture");
      let methodname = new StringName("get_delta");
      this._bindings.method_get_delta = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }

  
  
  set_delta(_delta) {
    InputEventPanGesture.init_method_set_delta();
    return _call_native_mb_no_ret(
      InputEventPanGesture._bindings.method_set_delta,
      this._owner,
      _delta
    );
    
  }
  get_delta() {
    InputEventPanGesture.init_method_get_delta();
    return _call_native_mb_ret(
      InputEventPanGesture._bindings.method_get_delta,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  
get delta () {
  return this.get_delta();
}
set delta (new_value) {
  this.set_delta(new_value);
}

}