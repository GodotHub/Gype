import * as internal from '__internal__';
import { CSGPrimitive3D } from '@js_godot/classes/csg_primitive3d'
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
  method_set_size;
  method_get_size;
  method_set_material;
  method_get_material;
}
@GodotClass
export class CSGBox3D extends CSGPrimitive3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CSGBox3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_size() {
    if (!this._bindings.method_set_size) {
      let classname = new StringName("CSGBox3D");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_size() {
    if (!this._bindings.method_get_size) {
      let classname = new StringName("CSGBox3D");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_material() {
    if (!this._bindings.method_set_material) {
      let classname = new StringName("CSGBox3D");
      let methodname = new StringName("set_material");
      this._bindings.method_set_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2757459619
      );
    }
  }
  static init_method_get_material() {
    if (!this._bindings.method_get_material) {
      let classname = new StringName("CSGBox3D");
      let methodname = new StringName("get_material");
      this._bindings.method_get_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        5934680
      );
    }
  }

  
  
  set_size(_size) {
    CSGBox3D.init_method_set_size();
    return _call_native_mb_no_ret(
      CSGBox3D._bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_size() {
    CSGBox3D.init_method_get_size();
    return _call_native_mb_ret(
      CSGBox3D._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_material(_material) {
    CSGBox3D.init_method_set_material();
    return _call_native_mb_no_ret(
      CSGBox3D._bindings.method_set_material,
      this._owner,
      _material
    );
    
  }
  get_material() {
    CSGBox3D.init_method_get_material();
    return _call_native_mb_ret(
      CSGBox3D._bindings.method_get_material,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get size () {
  return this.get_size();
}
set size (new_value) {
  this.set_size(new_value);
}
get material () {
  return this.get_material();
}
set material (new_value) {
  this.set_material(new_value);
}

}