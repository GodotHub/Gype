import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Material } from '@js_godot/classes/material'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_panorama;
  method_get_panorama;
  method_set_filtering_enabled;
  method_is_filtering_enabled;
  method_set_energy_multiplier;
  method_get_energy_multiplier;
}
export class PanoramaSkyMaterial extends Material{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PanoramaSkyMaterial");
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
      let classname = new StringName("PanoramaSkyMaterial");
      let methodname = new StringName("set_panorama");
      this._bindings.method_set_panorama = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("PanoramaSkyMaterial");
      let methodname = new StringName("get_panorama");
      this._bindings.method_get_panorama = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("PanoramaSkyMaterial");
      let methodname = new StringName("set_filtering_enabled");
      this._bindings.method_set_filtering_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PanoramaSkyMaterial");
      let methodname = new StringName("is_filtering_enabled");
      this._bindings.method_is_filtering_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("PanoramaSkyMaterial");
      let methodname = new StringName("set_energy_multiplier");
      this._bindings.method_set_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PanoramaSkyMaterial");
      let methodname = new StringName("get_energy_multiplier");
      this._bindings.method_get_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  
  set_panorama(_texture) {
    return _call_native_mb_no_ret(
      PanoramaSkyMaterial._bindings.method_set_panorama,
      this._owner,
      _texture
    );
    
  }
  get_panorama() {
    return _call_native_mb_ret(
      PanoramaSkyMaterial._bindings.method_get_panorama,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_filtering_enabled(_enabled) {
    return _call_native_mb_no_ret(
      PanoramaSkyMaterial._bindings.method_set_filtering_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_filtering_enabled() {
    return _call_native_mb_ret(
      PanoramaSkyMaterial._bindings.method_is_filtering_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_energy_multiplier(_multiplier) {
    return _call_native_mb_no_ret(
      PanoramaSkyMaterial._bindings.method_set_energy_multiplier,
      this._owner,
      _multiplier
    );
    
  }
  get_energy_multiplier() {
    return _call_native_mb_ret(
      PanoramaSkyMaterial._bindings.method_get_energy_multiplier,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  
get panorama () {
  return this.get_panorama();
}
set panorama (new_value) {
  this.set_panorama(new_value);
}
get filter () {
  return this.is_filtering_enabled();
}
set filter (new_value) {
  this.set_filtering_enabled(new_value);
}
get energy_multiplier () {
  return this.get_energy_multiplier();
}
set energy_multiplier (new_value) {
  this.set_energy_multiplier(new_value);
}


  static {
    this._init_bindings();
  }
}