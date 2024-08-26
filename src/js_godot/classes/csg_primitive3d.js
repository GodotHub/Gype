import * as internal from '__internal__';
import { CSGShape3D } from 'src/js_godot/classescsg_shape3d'
class _MethodBindings {
    method_set_flip_faces;
    method_get_flip_faces;
}


export class CSGPrimitive3D extends CSGShape3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CSGPrimitive3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("CSGPrimitive3D");
      let methodname = new StringName("set_flip_faces");
      this._bindings.method_set_flip_faces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CSGPrimitive3D");
      let methodname = new StringName("get_flip_faces");
      this._bindings.method_get_flip_faces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
  }
  set_flip_faces(_flip_faces) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_flip_faces,
      this._owner,
      _flip_faces
    );
  }
  get_flip_faces() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_flip_faces,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}