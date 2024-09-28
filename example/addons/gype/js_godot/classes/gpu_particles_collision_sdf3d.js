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
  method_set_resolution;
  method_get_resolution;
  method_set_texture;
  method_get_texture;
  method_set_thickness;
  method_get_thickness;
  method_set_bake_mask;
  method_get_bake_mask;
  method_set_bake_mask_value;
  method_get_bake_mask_value;
}
@GodotClass
export class GPUParticlesCollisionSDF3D extends GPUParticlesCollision3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GPUParticlesCollisionSDF3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_size() {
    if (!this._bindings.method_set_size) {
      let classname = new StringName("GPUParticlesCollisionSDF3D");
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
      let classname = new StringName("GPUParticlesCollisionSDF3D");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_resolution() {
    if (!this._bindings.method_set_resolution) {
      let classname = new StringName("GPUParticlesCollisionSDF3D");
      let methodname = new StringName("set_resolution");
      this._bindings.method_set_resolution = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1155629297
      );
    }
  }
  static init_method_get_resolution() {
    if (!this._bindings.method_get_resolution) {
      let classname = new StringName("GPUParticlesCollisionSDF3D");
      let methodname = new StringName("get_resolution");
      this._bindings.method_get_resolution = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2919555867
      );
    }
  }
  static init_method_set_texture() {
    if (!this._bindings.method_set_texture) {
      let classname = new StringName("GPUParticlesCollisionSDF3D");
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
      let classname = new StringName("GPUParticlesCollisionSDF3D");
      let methodname = new StringName("get_texture");
      this._bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373985333
      );
    }
  }
  static init_method_set_thickness() {
    if (!this._bindings.method_set_thickness) {
      let classname = new StringName("GPUParticlesCollisionSDF3D");
      let methodname = new StringName("set_thickness");
      this._bindings.method_set_thickness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_thickness() {
    if (!this._bindings.method_get_thickness) {
      let classname = new StringName("GPUParticlesCollisionSDF3D");
      let methodname = new StringName("get_thickness");
      this._bindings.method_get_thickness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_bake_mask() {
    if (!this._bindings.method_set_bake_mask) {
      let classname = new StringName("GPUParticlesCollisionSDF3D");
      let methodname = new StringName("set_bake_mask");
      this._bindings.method_set_bake_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_bake_mask() {
    if (!this._bindings.method_get_bake_mask) {
      let classname = new StringName("GPUParticlesCollisionSDF3D");
      let methodname = new StringName("get_bake_mask");
      this._bindings.method_get_bake_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_bake_mask_value() {
    if (!this._bindings.method_set_bake_mask_value) {
      let classname = new StringName("GPUParticlesCollisionSDF3D");
      let methodname = new StringName("set_bake_mask_value");
      this._bindings.method_set_bake_mask_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_bake_mask_value() {
    if (!this._bindings.method_get_bake_mask_value) {
      let classname = new StringName("GPUParticlesCollisionSDF3D");
      let methodname = new StringName("get_bake_mask_value");
      this._bindings.method_get_bake_mask_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }

  
  
  set_size(_size) {
    GPUParticlesCollisionSDF3D.init_method_set_size();
    return _call_native_mb_no_ret(
      GPUParticlesCollisionSDF3D._bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_size() {
    GPUParticlesCollisionSDF3D.init_method_get_size();
    return _call_native_mb_ret(
      GPUParticlesCollisionSDF3D._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_resolution(_resolution) {
    GPUParticlesCollisionSDF3D.init_method_set_resolution();
    return _call_native_mb_no_ret(
      GPUParticlesCollisionSDF3D._bindings.method_set_resolution,
      this._owner,
      _resolution
    );
    
  }
  get_resolution() {
    GPUParticlesCollisionSDF3D.init_method_get_resolution();
    return _call_native_mb_ret(
      GPUParticlesCollisionSDF3D._bindings.method_get_resolution,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_texture(_texture) {
    GPUParticlesCollisionSDF3D.init_method_set_texture();
    return _call_native_mb_no_ret(
      GPUParticlesCollisionSDF3D._bindings.method_set_texture,
      this._owner,
      _texture
    );
    
  }
  get_texture() {
    GPUParticlesCollisionSDF3D.init_method_get_texture();
    return _call_native_mb_ret(
      GPUParticlesCollisionSDF3D._bindings.method_get_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_thickness(_thickness) {
    GPUParticlesCollisionSDF3D.init_method_set_thickness();
    return _call_native_mb_no_ret(
      GPUParticlesCollisionSDF3D._bindings.method_set_thickness,
      this._owner,
      _thickness
    );
    
  }
  get_thickness() {
    GPUParticlesCollisionSDF3D.init_method_get_thickness();
    return _call_native_mb_ret(
      GPUParticlesCollisionSDF3D._bindings.method_get_thickness,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_bake_mask(_mask) {
    GPUParticlesCollisionSDF3D.init_method_set_bake_mask();
    return _call_native_mb_no_ret(
      GPUParticlesCollisionSDF3D._bindings.method_set_bake_mask,
      this._owner,
      _mask
    );
    
  }
  get_bake_mask() {
    GPUParticlesCollisionSDF3D.init_method_get_bake_mask();
    return _call_native_mb_ret(
      GPUParticlesCollisionSDF3D._bindings.method_get_bake_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_bake_mask_value(_layer_number, _value) {
    GPUParticlesCollisionSDF3D.init_method_set_bake_mask_value();
    return _call_native_mb_no_ret(
      GPUParticlesCollisionSDF3D._bindings.method_set_bake_mask_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_bake_mask_value(_layer_number) {
    GPUParticlesCollisionSDF3D.init_method_get_bake_mask_value();
    return _call_native_mb_ret(
      GPUParticlesCollisionSDF3D._bindings.method_get_bake_mask_value,
      this._owner,
			Variant.Type.BOOL,
    
      _layer_number
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
get thickness () {
  return this.get_thickness();
}
set thickness (new_value) {
  this.set_thickness(new_value);
}
get bake_mask () {
  return this.get_bake_mask();
}
set bake_mask (new_value) {
  this.set_bake_mask(new_value);
}
get texture () {
  return this.get_texture();
}
set texture (new_value) {
  this.set_texture(new_value);
}

  static Resolution = {
    RESOLUTION_16: 0,
    RESOLUTION_32: 1,
    RESOLUTION_64: 2,
    RESOLUTION_128: 3,
    RESOLUTION_256: 4,
    RESOLUTION_512: 5,
    RESOLUTION_MAX: 6,
  }
}