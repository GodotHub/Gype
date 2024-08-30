import * as internal from '__internal__';
import { VisualShaderNodeParticleEmitter } from 'src/js_godot/classes/visual_shader_node_particle_emitter'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_mesh;
    method_get_mesh;
    method_set_use_all_surfaces;
    method_is_use_all_surfaces;
    method_set_surface_index;
    method_get_surface_index;
}


export class VisualShaderNodeParticleMeshEmitter extends VisualShaderNodeParticleEmitter{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeParticleMeshEmitter");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("VisualShaderNodeParticleMeshEmitter");
        let methodname = new StringName("set_mesh");
        this._bindings.method_set_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          194775623
        );
      }
      {
        let classname = new StringName("VisualShaderNodeParticleMeshEmitter");
        let methodname = new StringName("get_mesh");
        this._bindings.method_get_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1808005922
        );
      }
      {
        let classname = new StringName("VisualShaderNodeParticleMeshEmitter");
        let methodname = new StringName("set_use_all_surfaces");
        this._bindings.method_set_use_all_surfaces = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("VisualShaderNodeParticleMeshEmitter");
        let methodname = new StringName("is_use_all_surfaces");
        this._bindings.method_is_use_all_surfaces = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("VisualShaderNodeParticleMeshEmitter");
        let methodname = new StringName("set_surface_index");
        this._bindings.method_set_surface_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("VisualShaderNodeParticleMeshEmitter");
        let methodname = new StringName("get_surface_index");
        this._bindings.method_get_surface_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
  }
  set_mesh(_mesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mesh,
      this._owner,
      _mesh
    );
    
  }
  get_mesh() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mesh,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_use_all_surfaces(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_all_surfaces,
      this._owner,
      _enabled
    );
    
  }
  is_use_all_surfaces() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_use_all_surfaces,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_surface_index(_surface_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_surface_index,
      this._owner,
      _surface_index
    );
    
  }
  get_surface_index() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_surface_index,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
}