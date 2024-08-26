import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { PackedVector3Array } from 'src/js_godot/variant/packed_vector3_array'
class _MethodBindings {
    method_get_vertices;
    method_get_indices;
}


export class Occluder3D extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Occluder3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("Occluder3D");
      let methodname = new StringName("get_vertices");
      this._bindings.method_get_vertices = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        497664490
      );
    }
    {
      let classname = new StringName("Occluder3D");
      let methodname = new StringName("get_indices");
      this._bindings.method_get_indices = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1930428628
      );
    }
  }
  get_vertices() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertices,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY
    ,
      
    );
  }
  get_indices() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_indices,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      
    );
  }
}