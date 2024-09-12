import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Node3D } from '@js_godot/classes/node3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_curve;
  method_get_curve;
}
export class Path3D extends Node3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Path3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_curve() {
    if (!this.#_bindings.method_set_curve) {
      let classname = new StringName("Path3D");
      let methodname = new StringName("set_curve");
      this.#_bindings.method_set_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        408955118
      );
    }
  }
  static init_method_get_curve() {
    if (!this.#_bindings.method_get_curve) {
      let classname = new StringName("Path3D");
      let methodname = new StringName("get_curve");
      this.#_bindings.method_get_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4244715212
      );
    }
  }

  
  
  set_curve(_curve) {
    Path3D.init_method_set_curve();
    return _call_native_mb_no_ret(
      Path3D.#_bindings.method_set_curve,
      this._owner,
      _curve
    );
    
  }
  get_curve() {
    Path3D.init_method_get_curve();
    return _call_native_mb_ret(
      Path3D.#_bindings.method_get_curve,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get curve () {
  return this.get_curve();
}
set curve (new_value) {
  this.set_curve(new_value);
}

}