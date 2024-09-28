import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { InputEventWithModifiers } from '@js_godot/classes/input_event_with_modifiers'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_position;
  method_get_position;
}
@GodotClass
export class InputEventGesture extends InputEventWithModifiers{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventGesture");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_position() {
    if (!this._bindings.method_set_position) {
      let classname = new StringName("InputEventGesture");
      let methodname = new StringName("set_position");
      this._bindings.method_set_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_position() {
    if (!this._bindings.method_get_position) {
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
    InputEventGesture.init_method_set_position();
    return _call_native_mb_no_ret(
      InputEventGesture._bindings.method_set_position,
      this._owner,
      _position
    );
    
  }
  get_position() {
    InputEventGesture.init_method_get_position();
    return _call_native_mb_ret(
      InputEventGesture._bindings.method_get_position,
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

}