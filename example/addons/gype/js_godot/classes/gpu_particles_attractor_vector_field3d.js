import * as internal from '__internal__';
import { GPUParticlesAttractor3D } from '@js_godot/classes/gpu_particles_attractor3d'
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
  method_set_texture;
  method_get_texture;
}
@GodotClass
export class GPUParticlesAttractorVectorField3D extends GPUParticlesAttractor3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GPUParticlesAttractorVectorField3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_size() {
    if (!this._bindings.method_set_size) {
      let classname = new StringName("GPUParticlesAttractorVectorField3D");
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
      let classname = new StringName("GPUParticlesAttractorVectorField3D");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_texture() {
    if (!this._bindings.method_set_texture) {
      let classname = new StringName("GPUParticlesAttractorVectorField3D");
      let methodname = new StringName("set_texture");
      this._bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1188404210
      );
    }
  }
  static init_method_get_texture() {
    if (!this._bindings.method_get_texture) {
      let classname = new StringName("GPUParticlesAttractorVectorField3D");
      let methodname = new StringName("get_texture");
      this._bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373985333
      );
    }
  }

  
  
  set_size(_size) {
    GPUParticlesAttractorVectorField3D.init_method_set_size();
    return _call_native_mb_no_ret(
      GPUParticlesAttractorVectorField3D._bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_size() {
    GPUParticlesAttractorVectorField3D.init_method_get_size();
    return _call_native_mb_ret(
      GPUParticlesAttractorVectorField3D._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_texture(_texture) {
    GPUParticlesAttractorVectorField3D.init_method_set_texture();
    return _call_native_mb_no_ret(
      GPUParticlesAttractorVectorField3D._bindings.method_set_texture,
      this._owner,
      _texture
    );
    
  }
  get_texture() {
    GPUParticlesAttractorVectorField3D.init_method_get_texture();
    return _call_native_mb_ret(
      GPUParticlesAttractorVectorField3D._bindings.method_get_texture,
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
get texture () {
  return this.get_texture();
}
set texture (new_value) {
  this.set_texture(new_value);
}

}