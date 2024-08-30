import * as internal from '__internal__';
import { Node2D } from 'src/js_godot/classes/node2d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_curve;
    method_get_curve;
}


export class Path2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Path2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Path2D");
        let methodname = new StringName("set_curve");
        this._bindings.method_set_curve = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          659985499
        );
      }
      {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_curve,
      this._owner,
      _curve
    );
    
  }
  get_curve() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_curve,
      this._owner,
			Variant.INT,
      
    );
    
  }
}