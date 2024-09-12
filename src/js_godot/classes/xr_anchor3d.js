import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { XRNode3D } from '@js_godot/classes/xr_node3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_size;
  method_get_plane;
}
export class XRAnchor3D extends XRNode3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("XRAnchor3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_size() {
    if (!this.#_bindings.method_get_size) {
      let classname = new StringName("XRAnchor3D");
      let methodname = new StringName("get_size");
      this.#_bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_get_plane() {
    if (!this.#_bindings.method_get_plane) {
      let classname = new StringName("XRAnchor3D");
      let methodname = new StringName("get_plane");
      this.#_bindings.method_get_plane = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2753500971
      );
    }
  }

  
  
  get_size() {
    XRAnchor3D.init_method_get_size();
    return _call_native_mb_ret(
      XRAnchor3D.#_bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_plane() {
    XRAnchor3D.init_method_get_plane();
    return _call_native_mb_ret(
      XRAnchor3D.#_bindings.method_get_plane,
      this._owner,
			Variant.Type.PLANE,
    
      
    );
    
  }
  

}