import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { CSGPrimitive3D } from '@js_godot/classes/csg_primitive3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_mesh;
  method_get_mesh;
  method_set_material;
  method_get_material;
}
export class CSGMesh3D extends CSGPrimitive3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("CSGMesh3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_mesh() {
    if (!this.#_bindings.method_set_mesh) {
      let classname = new StringName("CSGMesh3D");
      let methodname = new StringName("set_mesh");
      this.#_bindings.method_set_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        194775623
      );
    }
  }
  static init_method_get_mesh() {
    if (!this.#_bindings.method_get_mesh) {
      let classname = new StringName("CSGMesh3D");
      let methodname = new StringName("get_mesh");
      this.#_bindings.method_get_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4081188045
      );
    }
  }
  static init_method_set_material() {
    if (!this.#_bindings.method_set_material) {
      let classname = new StringName("CSGMesh3D");
      let methodname = new StringName("set_material");
      this.#_bindings.method_set_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2757459619
      );
    }
  }
  static init_method_get_material() {
    if (!this.#_bindings.method_get_material) {
      let classname = new StringName("CSGMesh3D");
      let methodname = new StringName("get_material");
      this.#_bindings.method_get_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        5934680
      );
    }
  }

  
  
  set_mesh(_mesh) {
    CSGMesh3D.init_method_set_mesh();
    return _call_native_mb_no_ret(
      CSGMesh3D.#_bindings.method_set_mesh,
      this._owner,
      _mesh
    );
    
  }
  get_mesh() {
    CSGMesh3D.init_method_get_mesh();
    return _call_native_mb_ret(
      CSGMesh3D.#_bindings.method_get_mesh,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_material(_material) {
    CSGMesh3D.init_method_set_material();
    return _call_native_mb_no_ret(
      CSGMesh3D.#_bindings.method_set_material,
      this._owner,
      _material
    );
    
  }
  get_material() {
    CSGMesh3D.init_method_get_material();
    return _call_native_mb_ret(
      CSGMesh3D.#_bindings.method_get_material,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get mesh () {
  return this.get_mesh();
}
set mesh (new_value) {
  this.set_mesh(new_value);
}
get material () {
  return this.get_material();
}
set material (new_value) {
  this.set_material(new_value);
}

}