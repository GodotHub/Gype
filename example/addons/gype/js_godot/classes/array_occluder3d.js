import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { PackedVector3Array } from '@js_godot/variant/packed_vector3_array'
import { Occluder3D } from '@js_godot/classes/occluder3d'
import { PackedInt32Array } from '@js_godot/variant/packed_int32_array'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_arrays;
  method_set_vertices;
  method_set_indices;
}
export class ArrayOccluder3D extends Occluder3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ArrayOccluder3D");
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
      let classname = new StringName("ArrayOccluder3D");
      let methodname = new StringName("set_arrays");
      this._bindings.method_set_arrays = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3233972621
      );
    }
    {
      let classname = new StringName("ArrayOccluder3D");
      let methodname = new StringName("set_vertices");
      this._bindings.method_set_vertices = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        334873810
      );
    }
    {
      let classname = new StringName("ArrayOccluder3D");
      let methodname = new StringName("set_indices");
      this._bindings.method_set_indices = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3614634198
      );
    }
  }
  
  set_arrays(_vertices, _indices) {
    return _call_native_mb_no_ret(
      ArrayOccluder3D._bindings.method_set_arrays,
      this._owner,
      _vertices, _indices
    );
    
  }
  set_vertices(_vertices) {
    return _call_native_mb_no_ret(
      ArrayOccluder3D._bindings.method_set_vertices,
      this._owner,
      _vertices
    );
    
  }
  set_indices(_indices) {
    return _call_native_mb_no_ret(
      ArrayOccluder3D._bindings.method_set_indices,
      this._owner,
      _indices
    );
    
  }
  
get vertices () {
  return this.get_vertices();
}
set vertices (new_value) {
  this.set_vertices(new_value);
}
get indices () {
  return this.get_indices();
}
set indices (new_value) {
  this.set_indices(new_value);
}


  static {
    this._init_bindings();
  }
}