import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Tweener } from '@js_godot/classes/tweener'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_delay;
  method_set_trans;
  method_set_ease;
}
export class MethodTweener extends Tweener{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("MethodTweener");
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
      let classname = new StringName("MethodTweener");
      let methodname = new StringName("set_delay");
      this._bindings.method_set_delay = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        266477812
      );
    }
    {
      let classname = new StringName("MethodTweener");
      let methodname = new StringName("set_trans");
      this._bindings.method_set_trans = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3740975367
      );
    }
    {
      let classname = new StringName("MethodTweener");
      let methodname = new StringName("set_ease");
      this._bindings.method_set_ease = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        315540545
      );
    }
  }
  
  set_delay(_delay) {
    return _call_native_mb_ret(
      MethodTweener._bindings.method_set_delay,
      this._owner,
			Variant.INT,
      _delay
    );
    
  }
  set_trans(_trans) {
    return _call_native_mb_ret(
      MethodTweener._bindings.method_set_trans,
      this._owner,
			Variant.INT,
      _trans
    );
    
  }
  set_ease(_ease) {
    return _call_native_mb_ret(
      MethodTweener._bindings.method_set_ease,
      this._owner,
			Variant.INT,
      _ease
    );
    
  }
  


  static {
    this._init_bindings();
  }
}