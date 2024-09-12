import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GPUParticlesCollision3D } from '@js_godot/classes/gpu_particles_collision3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_radius;
  method_get_radius;
}
export class GPUParticlesCollisionSphere3D extends GPUParticlesCollision3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GPUParticlesCollisionSphere3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_radius() {
    if (!this.#_bindings.method_set_radius) {
      let classname = new StringName("GPUParticlesCollisionSphere3D");
      let methodname = new StringName("set_radius");
      this.#_bindings.method_set_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_radius() {
    if (!this.#_bindings.method_get_radius) {
      let classname = new StringName("GPUParticlesCollisionSphere3D");
      let methodname = new StringName("get_radius");
      this.#_bindings.method_get_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_radius(_radius) {
    GPUParticlesCollisionSphere3D.init_method_set_radius();
    return _call_native_mb_no_ret(
      GPUParticlesCollisionSphere3D.#_bindings.method_set_radius,
      this._owner,
      _radius
    );
    
  }
  get_radius() {
    GPUParticlesCollisionSphere3D.init_method_get_radius();
    return _call_native_mb_ret(
      GPUParticlesCollisionSphere3D.#_bindings.method_get_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get radius () {
  return this.get_radius();
}
set radius (new_value) {
  this.set_radius(new_value);
}

}