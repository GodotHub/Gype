import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { VisualInstance3D } from '@js_godot/classes/visual_instance3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_cull_mask;
  method_get_cull_mask;
  method_set_strength;
  method_get_strength;
  method_set_attenuation;
  method_get_attenuation;
  method_set_directionality;
  method_get_directionality;
}
export class GPUParticlesAttractor3D extends VisualInstance3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GPUParticlesAttractor3D");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("GPUParticlesAttractor3D");
      let methodname = new StringName("set_cull_mask");
      this._bindings.method_set_cull_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GPUParticlesAttractor3D");
      let methodname = new StringName("get_cull_mask");
      this._bindings.method_get_cull_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("GPUParticlesAttractor3D");
      let methodname = new StringName("set_strength");
      this._bindings.method_set_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GPUParticlesAttractor3D");
      let methodname = new StringName("get_strength");
      this._bindings.method_get_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GPUParticlesAttractor3D");
      let methodname = new StringName("set_attenuation");
      this._bindings.method_set_attenuation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GPUParticlesAttractor3D");
      let methodname = new StringName("get_attenuation");
      this._bindings.method_get_attenuation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GPUParticlesAttractor3D");
      let methodname = new StringName("set_directionality");
      this._bindings.method_set_directionality = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GPUParticlesAttractor3D");
      let methodname = new StringName("get_directionality");
      this._bindings.method_get_directionality = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_cull_mask(_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cull_mask,
      this._owner,
      _mask
    );
    
  }
  get_cull_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cull_mask,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_strength(_strength) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_strength,
      this._owner,
      _strength
    );
    
  }
  get_strength() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_strength,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_attenuation(_attenuation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_attenuation,
      this._owner,
      _attenuation
    );
    
  }
  get_attenuation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_attenuation,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_directionality(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_directionality,
      this._owner,
      _amount
    );
    
  }
  get_directionality() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_directionality,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  
get strength () {
  return this.get_strength();
}
set strength (new_value) {
  this.set_strength(new_value);
}
get attenuation () {
  return this.get_attenuation();
}
set attenuation (new_value) {
  this.set_attenuation(new_value);
}
get directionality () {
  return this.get_directionality();
}
set directionality (new_value) {
  this.set_directionality(new_value);
}
get cull_mask () {
  return this.get_cull_mask();
}
set cull_mask (new_value) {
  this.set_cull_mask(new_value);
}


  static {
    this._init_bindings();
  }
}