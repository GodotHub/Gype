import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { InputEventGesture } from 'src/js_godot/classes/input_event_gesture'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_delta;
    method_get_delta;
}


export class InputEventPanGesture extends InputEventGesture{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventPanGesture");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("InputEventPanGesture");
        let methodname = new StringName("set_delta");
        this._bindings.method_set_delta = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_delta,
      this._owner,
      _delta
    );
    
  }
  get_delta() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_delta,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
}