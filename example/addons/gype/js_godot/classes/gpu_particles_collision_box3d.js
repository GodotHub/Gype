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
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_size;
  method_get_size;
}
@GodotClass
export class GPUParticlesCollisionBox3D extends GPUParticlesCollision3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GPUParticlesCollisionBox3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_size() {
    if (!this._bindings.method_set_size) {
      let classname = new StringName("GPUParticlesCollisionBox3D");
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
      let classname = new StringName("GPUParticlesCollisionBox3D");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }

  
  
  set_size(_size) {
    GPUParticlesCollisionBox3D.init_method_set_size();
    return _call_native_mb_no_ret(
      GPUParticlesCollisionBox3D._bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_size() {
    GPUParticlesCollisionBox3D.init_method_get_size();
    return _call_native_mb_ret(
      GPUParticlesCollisionBox3D._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  
get size () {
  return this.get_size();
}
set size (new_value) {
  this.set_size(new_value);
}

}