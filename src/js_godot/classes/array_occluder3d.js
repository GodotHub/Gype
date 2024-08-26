import * as internal from '__internal__';
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { Occluder3D } from 'src/js_godot/classesoccluder3d'
import { PackedVector3Array } from 'src/js_godot/variant/packed_vector3_array'
class _MethodBindings {
    method_set_arrays;
    method_set_vertices;
    method_set_indices;
}


export class ArrayOccluder3D extends Occluder3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ArrayOccluder3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_set_arrays,
      this._owner,
      _vertices, _indices
    );
  }
  set_vertices(_vertices) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertices,
      this._owner,
      _vertices
    );
  }
  set_indices(_indices) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_indices,
      this._owner,
      _indices
    );
  }
}