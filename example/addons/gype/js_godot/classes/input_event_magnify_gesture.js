import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { InputEventGesture } from '@js_godot/classes/input_event_gesture'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_factor;
  method_get_factor;
}
export class InputEventMagnifyGesture extends InputEventGesture{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventMagnifyGesture");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("InputEventMagnifyGesture");
      let methodname = new StringName("set_factor");
      this._bindings.method_set_factor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
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
  
get factor () {
  return this.get_factor();
}
set factor (new_value) {
  this.set_factor(new_value);
}


  static {
    this._init_bindings();
  }
}