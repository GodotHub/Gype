import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { VisualShaderNodeParticleEmitter } from '@js_godot/classes/visual_shader_node_particle_emitter'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_mesh;
  method_get_mesh;
  method_set_use_all_surfaces;
  method_is_use_all_surfaces;
  method_set_surface_index;
  method_get_surface_index;
}
export class VisualShaderNodeParticleMeshEmitter extends VisualShaderNodeParticleEmitter{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeParticleMeshEmitter");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_mesh() {
    if (!this.#_bindings.method_set_mesh) {
      let classname = new StringName("VisualShaderNodeParticleMeshEmitter");
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
      let classname = new StringName("VisualShaderNodeParticleMeshEmitter");
      let methodname = new StringName("get_mesh");
      this.#_bindings.method_get_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1808005922
      );
    }
  }
  static init_method_set_use_all_surfaces() {
    if (!this.#_bindings.method_set_use_all_surfaces) {
      let classname = new StringName("VisualShaderNodeParticleMeshEmitter");
      let methodname = new StringName("set_use_all_surfaces");
      this.#_bindings.method_set_use_all_surfaces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_use_all_surfaces() {
    if (!this.#_bindings.method_is_use_all_surfaces) {
      let classname = new StringName("VisualShaderNodeParticleMeshEmitter");
      let methodname = new StringName("is_use_all_surfaces");
      this.#_bindings.method_is_use_all_surfaces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_surface_index() {
    if (!this.#_bindings.method_set_surface_index) {
      let classname = new StringName("VisualShaderNodeParticleMeshEmitter");
      let methodname = new StringName("set_surface_index");
      this.#_bindings.method_set_surface_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_surface_index() {
    if (!this.#_bindings.method_get_surface_index) {
      let classname = new StringName("VisualShaderNodeParticleMeshEmitter");
      let methodname = new StringName("get_surface_index");
      this.#_bindings.method_get_surface_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  set_mesh(_mesh) {
    VisualShaderNodeParticleMeshEmitter.init_method_set_mesh();
    return _call_native_mb_no_ret(
      VisualShaderNodeParticleMeshEmitter.#_bindings.method_set_mesh,
      this._owner,
      _mesh
    );
    
  }
  get_mesh() {
    VisualShaderNodeParticleMeshEmitter.init_method_get_mesh();
    return _call_native_mb_ret(
      VisualShaderNodeParticleMeshEmitter.#_bindings.method_get_mesh,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_use_all_surfaces(_enabled) {
    VisualShaderNodeParticleMeshEmitter.init_method_set_use_all_surfaces();
    return _call_native_mb_no_ret(
      VisualShaderNodeParticleMeshEmitter.#_bindings.method_set_use_all_surfaces,
      this._owner,
      _enabled
    );
    
  }
  is_use_all_surfaces() {
    VisualShaderNodeParticleMeshEmitter.init_method_is_use_all_surfaces();
    return _call_native_mb_ret(
      VisualShaderNodeParticleMeshEmitter.#_bindings.method_is_use_all_surfaces,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_surface_index(_surface_index) {
    VisualShaderNodeParticleMeshEmitter.init_method_set_surface_index();
    return _call_native_mb_no_ret(
      VisualShaderNodeParticleMeshEmitter.#_bindings.method_set_surface_index,
      this._owner,
      _surface_index
    );
    
  }
  get_surface_index() {
    VisualShaderNodeParticleMeshEmitter.init_method_get_surface_index();
    return _call_native_mb_ret(
      VisualShaderNodeParticleMeshEmitter.#_bindings.method_get_surface_index,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get mesh () {
  return this.get_mesh();
}
set mesh (new_value) {
  this.set_mesh(new_value);
}
get use_all_surfaces () {
  return this.is_use_all_surfaces();
}
set use_all_surfaces (new_value) {
  this.set_use_all_surfaces(new_value);
}
get surface_index () {
  return this.get_surface_index();
}
set surface_index (new_value) {
  this.set_surface_index(new_value);
}

}