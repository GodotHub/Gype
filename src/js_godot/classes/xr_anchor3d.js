import * as internal from '__internal__';
import { XRNode3D } from 'src/js_godot/classes/xr_node3d'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { Plane } from 'src/js_godot/variant/plane'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_get_size;
    method_get_plane;
}


export class XRAnchor3D extends XRNode3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("XRAnchor3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("XRAnchor3D");
        let methodname = new StringName("get_size");
        this._bindings.method_get_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3360562783
        );
      }
      {
        let classname = new StringName("XRAnchor3D");
        let methodname = new StringName("get_plane");
        this._bindings.method_get_plane = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2753500971
        );
      }
  }
  get_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
    
  }
  get_plane() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_plane,
      this._owner,
			Variant.Type.PLANE
    ,
      
    );
    
  }
}