import * as internal from '__internal__';
import { Tweener } from 'src/js_godot/classes/tweener'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_delay;
}


export class CallbackTweener extends Tweener{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CallbackTweener");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("CallbackTweener");
        let methodname = new StringName("set_delay");
        this._bindings.method_set_delay = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3008182292
        );
      }
  }
  set_delay(_delay) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_set_delay,
      this._owner,
			Variant.INT,
      _delay
    );
    
  }
}