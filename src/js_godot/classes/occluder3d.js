import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_vertices;
  method_get_indices;
}
export class Occluder3D extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Occluder3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_vertices() {
    if (!this.#_bindings.method_get_vertices) {
      let classname = new StringName("Occluder3D");
      let methodname = new StringName("get_vertices");
      this.#_bindings.method_get_vertices = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        497664490
      );
    }
  }
  static init_method_get_indices() {
    if (!this.#_bindings.method_get_indices) {
      let classname = new StringName("Occluder3D");
      let methodname = new StringName("get_indices");
      this.#_bindings.method_get_indices = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1930428628
      );
    }
  }

  
  
  get_vertices() {
    Occluder3D.init_method_get_vertices();
    return _call_native_mb_ret(
      Occluder3D.#_bindings.method_get_vertices,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      
    );
    
  }
  get_indices() {
    Occluder3D.init_method_get_indices();
    return _call_native_mb_ret(
      Occluder3D.#_bindings.method_get_indices,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  

}