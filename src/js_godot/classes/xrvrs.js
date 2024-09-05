import * as internal from '__internal__';
import { RID } from '@js_godot/variant/rid'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Vector2 } from '@js_godot/variant/vector2'
import { GodotObject } from '@js_godot/classes/godot_object'
import { PackedVector2Array } from '@js_godot/variant/packed_vector2_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_vrs_min_radius;
  method_set_vrs_min_radius;
  method_get_vrs_strength;
  method_set_vrs_strength;
  method_make_vrs_texture;
}
export class XRVRS extends GodotObject{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("XRVRS");
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
      let classname = new StringName("XRVRS");
      let methodname = new StringName("get_vrs_min_radius");
      this._bindings.method_get_vrs_min_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("XRVRS");
      let methodname = new StringName("set_vrs_min_radius");
      this._bindings.method_set_vrs_min_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("XRVRS");
      let methodname = new StringName("get_vrs_strength");
      this._bindings.method_get_vrs_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("XRVRS");
      let methodname = new StringName("set_vrs_strength");
      this._bindings.method_set_vrs_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("XRVRS");
      let methodname = new StringName("make_vrs_texture");
      this._bindings.method_make_vrs_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3647044786
      );
    }
  }
  
  get_vrs_min_radius() {
    return _call_native_mb_ret(
      XRVRS._bindings.method_get_vrs_min_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_vrs_min_radius(_radius) {
    return _call_native_mb_no_ret(
      XRVRS._bindings.method_set_vrs_min_radius,
      this._owner,
      _radius
    );
    
  }
  get_vrs_strength() {
    return _call_native_mb_ret(
      XRVRS._bindings.method_get_vrs_strength,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_vrs_strength(_strength) {
    return _call_native_mb_no_ret(
      XRVRS._bindings.method_set_vrs_strength,
      this._owner,
      _strength
    );
    
  }
  make_vrs_texture(_target_size, _eye_foci) {
    return _call_native_mb_ret(
      XRVRS._bindings.method_make_vrs_texture,
      this._owner,
			Variant.Type.RID,
    
      _target_size, _eye_foci
    );
    
  }
  
get vrs_min_radius () {
  return this.get_vrs_min_radius();
}
set vrs_min_radius (new_value) {
  this.set_vrs_min_radius(new_value);
}
get vrs_strength () {
  return this.get_vrs_strength();
}
set vrs_strength (new_value) {
  this.set_vrs_strength(new_value);
}


  static {
    this._init_bindings();
  }
}