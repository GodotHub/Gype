import * as internal from '__internal__';
import { CSGShape3D } from '@js_godot/classes/csg_shape3d'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_flip_faces;
  method_get_flip_faces;
}
@GodotClass
export class CSGPrimitive3D extends CSGShape3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CSGPrimitive3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_flip_faces() {
    if (!this._bindings.method_set_flip_faces) {
      let classname = new StringName("CSGPrimitive3D");
      let methodname = new StringName("set_flip_faces");
      this._bindings.method_set_flip_faces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_flip_faces() {
    if (!this._bindings.method_get_flip_faces) {
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
    CSGPrimitive3D.init_method_set_flip_faces();
    return _call_native_mb_no_ret(
      CSGPrimitive3D._bindings.method_set_flip_faces,
      this._owner,
      _flip_faces
    );
    
  }
  get_flip_faces() {
    CSGPrimitive3D.init_method_get_flip_faces();
    return _call_native_mb_ret(
      CSGPrimitive3D._bindings.method_get_flip_faces,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get flip_faces () {
  return this.get_flip_faces();
}
set flip_faces (new_value) {
  this.set_flip_faces(new_value);
}

}