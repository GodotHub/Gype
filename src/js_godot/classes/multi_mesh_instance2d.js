import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_multimesh;
  method_get_multimesh;
  method_set_texture;
  method_get_texture;
}
export class MultiMeshInstance2D extends Node2D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("MultiMeshInstance2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_multimesh() {
    if (!this.#_bindings.method_set_multimesh) {
      let classname = new StringName("MultiMeshInstance2D");
      let methodname = new StringName("set_multimesh");
      this.#_bindings.method_set_multimesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2246127404
      );
    }
  }
  static init_method_get_multimesh() {
    if (!this.#_bindings.method_get_multimesh) {
      let classname = new StringName("MultiMeshInstance2D");
      let methodname = new StringName("get_multimesh");
      this.#_bindings.method_get_multimesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1385450523
      );
    }
  }
  static init_method_set_texture() {
    if (!this.#_bindings.method_set_texture) {
      let classname = new StringName("MultiMeshInstance2D");
      let methodname = new StringName("set_texture");
      this.#_bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_texture() {
    if (!this.#_bindings.method_get_texture) {
      let classname = new StringName("MultiMeshInstance2D");
      let methodname = new StringName("get_texture");
      this.#_bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }

  
  
  set_multimesh(_multimesh) {
    MultiMeshInstance2D.init_method_set_multimesh();
    return _call_native_mb_no_ret(
      MultiMeshInstance2D.#_bindings.method_set_multimesh,
      this._owner,
      _multimesh
    );
    
  }
  get_multimesh() {
    MultiMeshInstance2D.init_method_get_multimesh();
    return _call_native_mb_ret(
      MultiMeshInstance2D.#_bindings.method_get_multimesh,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_texture(_texture) {
    MultiMeshInstance2D.init_method_set_texture();
    return _call_native_mb_no_ret(
      MultiMeshInstance2D.#_bindings.method_set_texture,
      this._owner,
      _texture
    );
    
  }
  get_texture() {
    MultiMeshInstance2D.init_method_get_texture();
    return _call_native_mb_ret(
      MultiMeshInstance2D.#_bindings.method_get_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get multimesh () {
  return this.get_multimesh();
}
set multimesh (new_value) {
  this.set_multimesh(new_value);
}
get texture () {
  return this.get_texture();
}
set texture (new_value) {
  this.set_texture(new_value);
}

}