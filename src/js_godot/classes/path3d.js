import * as internal from '__internal__';
import { Node3D } from 'src/js_godot/classes/node3d'
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


export class Path3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Path3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Path3D");
        let methodname = new StringName("set_curve");
        this._bindings.method_set_curve = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          408955118
        );
      }
      {
        let classname = new StringName("Path3D");
        let methodname = new StringName("get_curve");
        this._bindings.method_get_curve = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4244715212
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