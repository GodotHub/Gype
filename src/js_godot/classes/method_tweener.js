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
    method_set_trans;
    method_set_ease;
}


export class MethodTweener extends Tweener{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MethodTweener");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_set_delay,
      this._owner,
			Variant.INT,
      _delay
    );
    
  }
  set_trans(_trans) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_set_trans,
      this._owner,
			Variant.INT,
      _trans
    );
    
  }
  set_ease(_ease) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_set_ease,
      this._owner,
			Variant.INT,
      _ease
    );
    
  }
}