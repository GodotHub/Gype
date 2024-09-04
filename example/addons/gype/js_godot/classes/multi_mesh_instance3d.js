import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { GeometryInstance3D } from '@js_godot/classes/geometry_instance3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_multimesh;
  method_get_multimesh;
}
export class MultiMeshInstance3D extends GeometryInstance3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("MultiMeshInstance3D");
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
      let classname = new StringName("MultiMeshInstance3D");
      let methodname = new StringName("set_multimesh");
      this._bindings.method_set_multimesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2246127404
      );
    }
    {
      let classname = new StringName("MultiMeshInstance3D");
      let methodname = new StringName("get_multimesh");
      this._bindings.method_get_multimesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1385450523
      );
    }
  }
  set_multimesh(_multimesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_multimesh,
      this._owner,
      _multimesh
    );
    
  }
  get_multimesh() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_multimesh,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get multimesh () {
  return this.get_multimesh();
}
set multimesh (new_value) {
  this.set_multimesh(new_value);
}


  static {
    this._init_bindings();
  }
}