import * as internal from '__internal__';
import { Material } from '@js_godot/classes/material'
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
  method_set_panorama;
  method_get_panorama;
  method_set_filtering_enabled;
  method_is_filtering_enabled;
  method_set_energy_multiplier;
  method_get_energy_multiplier;
}
@GodotClass
export class PanoramaSkyMaterial extends Material{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PanoramaSkyMaterial");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_panorama() {
    if (!this._bindings.method_set_panorama) {
      let classname = new StringName("PanoramaSkyMaterial");
      let methodname = new StringName("set_panorama");
      this._bindings.method_set_panorama = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_panorama() {
    if (!this._bindings.method_get_panorama) {
      let classname = new StringName("PanoramaSkyMaterial");
      let methodname = new StringName("get_panorama");
      this._bindings.method_get_panorama = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_set_filtering_enabled() {
    if (!this._bindings.method_set_filtering_enabled) {
      let classname = new StringName("PanoramaSkyMaterial");
      let methodname = new StringName("set_filtering_enabled");
      this._bindings.method_set_filtering_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_filtering_enabled() {
    if (!this._bindings.method_is_filtering_enabled) {
      let classname = new StringName("PanoramaSkyMaterial");
      let methodname = new StringName("is_filtering_enabled");
      this._bindings.method_is_filtering_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_energy_multiplier() {
    if (!this._bindings.method_set_energy_multiplier) {
      let classname = new StringName("PanoramaSkyMaterial");
      let methodname = new StringName("set_energy_multiplier");
      this._bindings.method_set_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_energy_multiplier() {
    if (!this._bindings.method_get_energy_multiplier) {
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
    PanoramaSkyMaterial.init_method_set_panorama();
    return _call_native_mb_no_ret(
      PanoramaSkyMaterial._bindings.method_set_panorama,
      this._owner,
      _texture
    );
    
  }
  get_panorama() {
    PanoramaSkyMaterial.init_method_get_panorama();
    return _call_native_mb_ret(
      PanoramaSkyMaterial._bindings.method_get_panorama,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_filtering_enabled(_enabled) {
    PanoramaSkyMaterial.init_method_set_filtering_enabled();
    return _call_native_mb_no_ret(
      PanoramaSkyMaterial._bindings.method_set_filtering_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_filtering_enabled() {
    PanoramaSkyMaterial.init_method_is_filtering_enabled();
    return _call_native_mb_ret(
      PanoramaSkyMaterial._bindings.method_is_filtering_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_energy_multiplier(_multiplier) {
    PanoramaSkyMaterial.init_method_set_energy_multiplier();
    return _call_native_mb_no_ret(
      PanoramaSkyMaterial._bindings.method_set_energy_multiplier,
      this._owner,
      _multiplier
    );
    
  }
  get_energy_multiplier() {
    PanoramaSkyMaterial.init_method_get_energy_multiplier();
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

}