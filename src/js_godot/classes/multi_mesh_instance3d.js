import * as internal from '__internal__';
import { GeometryInstance3D } from 'src/js_godot/classes/geometry_instance3d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_multimesh;
    method_get_multimesh;
}


export class MultiMeshInstance3D extends GeometryInstance3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MultiMeshInstance3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
}