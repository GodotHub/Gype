import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Tweener } from '@js_godot/classes/tweener'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_delay;
}
@GodotClass
export class CallbackTweener extends Tweener{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CallbackTweener");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_delay() {
    if (!this._bindings.method_set_delay) {
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
    CallbackTweener.init_method_set_delay();
    return _call_native_mb_ret(
      CallbackTweener._bindings.method_set_delay,
      this._owner,
			Variant.Type.OBJECT,
      _delay
    );
    
  }
  

}