import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { InputEvent } from '@js_godot/classes/input_event'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_window_id;
  method_get_window_id;
}
export class InputEventFromWindow extends InputEvent{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventFromWindow");
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
      let classname = new StringName("InputEventFromWindow");
      let methodname = new StringName("set_window_id");
      this._bindings.method_set_window_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("InputEventFromWindow");
      let methodname = new StringName("get_window_id");
      this._bindings.method_get_window_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  
  set_window_id(_id) {
    return _call_native_mb_no_ret(
      InputEventFromWindow._bindings.method_set_window_id,
      this._owner,
      _id
    );
    
  }
  get_window_id() {
    return _call_native_mb_ret(
      InputEventFromWindow._bindings.method_get_window_id,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  
get window_id () {
  return this.get_window_id();
}
set window_id (new_value) {
  this.set_window_id(new_value);
}


  static {
    this._init_bindings();
  }
}