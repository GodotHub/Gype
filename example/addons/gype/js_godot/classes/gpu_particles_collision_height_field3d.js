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
  method_set_size;
  method_get_size;
  method_set_resolution;
  method_get_resolution;
  method_set_update_mode;
  method_get_update_mode;
  method_set_follow_camera_enabled;
  method_is_follow_camera_enabled;
}
export class GPUParticlesCollisionHeightField3D extends GPUParticlesCollision3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GPUParticlesCollisionHeightField3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_size() {
    if (!this.#_bindings.method_set_size) {
      let classname = new StringName("GPUParticlesCollisionHeightField3D");
      let methodname = new StringName("set_size");
      this.#_bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_size() {
    if (!this.#_bindings.method_get_size) {
      let classname = new StringName("GPUParticlesCollisionHeightField3D");
      let methodname = new StringName("get_size");
      this.#_bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_resolution() {
    if (!this.#_bindings.method_set_resolution) {
      let classname = new StringName("GPUParticlesCollisionHeightField3D");
      let methodname = new StringName("set_resolution");
      this.#_bindings.method_set_resolution = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1009996517
      );
    }
  }
  static init_method_get_resolution() {
    if (!this.#_bindings.method_get_resolution) {
      let classname = new StringName("GPUParticlesCollisionHeightField3D");
      let methodname = new StringName("get_resolution");
      this.#_bindings.method_get_resolution = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1156065644
      );
    }
  }
  static init_method_set_update_mode() {
    if (!this.#_bindings.method_set_update_mode) {
      let classname = new StringName("GPUParticlesCollisionHeightField3D");
      let methodname = new StringName("set_update_mode");
      this.#_bindings.method_set_update_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        673680859
      );
    }
  }
  static init_method_get_update_mode() {
    if (!this.#_bindings.method_get_update_mode) {
      let classname = new StringName("GPUParticlesCollisionHeightField3D");
      let methodname = new StringName("get_update_mode");
      this.#_bindings.method_get_update_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1998141380
      );
    }
  }
  static init_method_set_follow_camera_enabled() {
    if (!this.#_bindings.method_set_follow_camera_enabled) {
      let classname = new StringName("GPUParticlesCollisionHeightField3D");
      let methodname = new StringName("set_follow_camera_enabled");
      this.#_bindings.method_set_follow_camera_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_follow_camera_enabled() {
    if (!this.#_bindings.method_is_follow_camera_enabled) {
      let classname = new StringName("GPUParticlesCollisionHeightField3D");
      let methodname = new StringName("is_follow_camera_enabled");
      this.#_bindings.method_is_follow_camera_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_size(_size) {
    GPUParticlesCollisionHeightField3D.init_method_set_size();
    return _call_native_mb_no_ret(
      GPUParticlesCollisionHeightField3D.#_bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_size() {
    GPUParticlesCollisionHeightField3D.init_method_get_size();
    return _call_native_mb_ret(
      GPUParticlesCollisionHeightField3D.#_bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_resolution(_resolution) {
    GPUParticlesCollisionHeightField3D.init_method_set_resolution();
    return _call_native_mb_no_ret(
      GPUParticlesCollisionHeightField3D.#_bindings.method_set_resolution,
      this._owner,
      _resolution
    );
    
  }
  get_resolution() {
    GPUParticlesCollisionHeightField3D.init_method_get_resolution();
    return _call_native_mb_ret(
      GPUParticlesCollisionHeightField3D.#_bindings.method_get_resolution,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_update_mode(_update_mode) {
    GPUParticlesCollisionHeightField3D.init_method_set_update_mode();
    return _call_native_mb_no_ret(
      GPUParticlesCollisionHeightField3D.#_bindings.method_set_update_mode,
      this._owner,
      _update_mode
    );
    
  }
  get_update_mode() {
    GPUParticlesCollisionHeightField3D.init_method_get_update_mode();
    return _call_native_mb_ret(
      GPUParticlesCollisionHeightField3D.#_bindings.method_get_update_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_follow_camera_enabled(_enabled) {
    GPUParticlesCollisionHeightField3D.init_method_set_follow_camera_enabled();
    return _call_native_mb_no_ret(
      GPUParticlesCollisionHeightField3D.#_bindings.method_set_follow_camera_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_follow_camera_enabled() {
    GPUParticlesCollisionHeightField3D.init_method_is_follow_camera_enabled();
    return _call_native_mb_ret(
      GPUParticlesCollisionHeightField3D.#_bindings.method_is_follow_camera_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get size () {
  return this.get_size();
}
set size (new_value) {
  this.set_size(new_value);
}
get resolution () {
  return this.get_resolution();
}
set resolution (new_value) {
  this.set_resolution(new_value);
}
get update_mode () {
  return this.get_update_mode();
}
set update_mode (new_value) {
  this.set_update_mode(new_value);
}
get follow_camera_enabled () {
  return this.is_follow_camera_enabled();
}
set follow_camera_enabled (new_value) {
  this.set_follow_camera_enabled(new_value);
}

  static Resolution = {
    RESOLUTION_256: 0,
    RESOLUTION_512: 1,
    RESOLUTION_1024: 2,
    RESOLUTION_2048: 3,
    RESOLUTION_4096: 4,
    RESOLUTION_8192: 5,
    RESOLUTION_MAX: 6,
  }
  static UpdateMode = {
    UPDATE_MODE_WHEN_MOVED: 0,
    UPDATE_MODE_ALWAYS: 1,
  }
}