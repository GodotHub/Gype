import * as internal from '__internal__';
import { InputEventWithModifiers } from 'src/js_godot/classes/input_event_with_modifiers'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_position;
    method_get_position;
}


export class InputEventGesture extends InputEventWithModifiers{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventGesture");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
}