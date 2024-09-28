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
  method_set_window_id;
  method_get_window_id;
}
@GodotClass
export class InputEventFromWindow extends InputEvent{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventFromWindow");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_window_id() {
    if (!this._bindings.method_set_window_id) {
      let classname = new StringName("InputEventFromWindow");
      let methodname = new StringName("set_window_id");
      this._bindings.method_set_window_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_window_id() {
    if (!this._bindings.method_get_window_id) {
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
    InputEventFromWindow.init_method_set_window_id();
    return _call_native_mb_no_ret(
      InputEventFromWindow._bindings.method_set_window_id,
      this._owner,
      _id
    );
    
  }
  get_window_id() {
    InputEventFromWindow.init_method_get_window_id();
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

}