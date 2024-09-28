import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_curve;
  method_get_curve;
}
@GodotClass
export class Path2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Path2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_curve() {
    if (!this._bindings.method_set_curve) {
      let classname = new StringName("Path2D");
      let methodname = new StringName("set_curve");
      this._bindings.method_set_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        659985499
      );
    }
  }
  static init_method_get_curve() {
    if (!this._bindings.method_get_curve) {
      let classname = new StringName("Path2D");
      let methodname = new StringName("get_curve");
      this._bindings.method_get_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        660369445
      );
    }
  }

  
  
  set_curve(_curve) {
    Path2D.init_method_set_curve();
    return _call_native_mb_no_ret(
      Path2D._bindings.method_set_curve,
      this._owner,
      _curve
    );
    
  }
  get_curve() {
    Path2D.init_method_get_curve();
    return _call_native_mb_ret(
      Path2D._bindings.method_get_curve,
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