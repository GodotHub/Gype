import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Vector2 } from '@js_godot/variant/vector2'
import { InputEventWithModifiers } from '@js_godot/classes/input_event_with_modifiers'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_position;
  method_get_position;
}
export class InputEventGesture extends InputEventWithModifiers{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventGesture");
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
      let classname = new StringName("InputEventGesture");
      let methodname = new StringName("set_position");
      this._bindings.method_set_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("InputEventGesture");
      let methodname = new StringName("get_position");
      this._bindings.method_get_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
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
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  
get position () {
  return this.get_position();
}
set position (new_value) {
  this.set_position(new_value);
}


  static {
    this._init_bindings();
  }
}