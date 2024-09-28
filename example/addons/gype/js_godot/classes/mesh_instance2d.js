import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_mesh;
  method_get_mesh;
  method_set_texture;
  method_get_texture;
}
@GodotClass
export class MeshInstance2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MeshInstance2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_mesh() {
    if (!this._bindings.method_set_mesh) {
      let classname = new StringName("MeshInstance2D");
      let methodname = new StringName("set_mesh");
      this._bindings.method_set_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        194775623
      );
    }
  }
  static init_method_get_mesh() {
    if (!this._bindings.method_get_mesh) {
      let classname = new StringName("MeshInstance2D");
      let methodname = new StringName("get_mesh");
      this._bindings.method_get_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1808005922
      );
    }
  }
  static init_method_set_texture() {
    if (!this._bindings.method_set_texture) {
      let classname = new StringName("MeshInstance2D");
      let methodname = new StringName("set_texture");
      this._bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_texture() {
    if (!this._bindings.method_get_texture) {
      let classname = new StringName("MeshInstance2D");
      let methodname = new StringName("get_texture");
      this._bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }

  
  
  set_mesh(_mesh) {
    MeshInstance2D.init_method_set_mesh();
    return _call_native_mb_no_ret(
      MeshInstance2D._bindings.method_set_mesh,
      this._owner,
      _mesh
    );
    
  }
  get_mesh() {
    MeshInstance2D.init_method_get_mesh();
    return _call_native_mb_ret(
      MeshInstance2D._bindings.method_get_mesh,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_texture(_texture) {
    MeshInstance2D.init_method_set_texture();
    return _call_native_mb_no_ret(
      MeshInstance2D._bindings.method_set_texture,
      this._owner,
      _texture
    );
    
  }
  get_texture() {
    MeshInstance2D.init_method_get_texture();
    return _call_native_mb_ret(
      MeshInstance2D._bindings.method_get_texture,
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
get texture () {
  return this.get_texture();
}
set texture (new_value) {
  this.set_texture(new_value);
}

}