import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Material } from '@js_godot/classes/material'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_rayleigh_coefficient;
  method_get_rayleigh_coefficient;
  method_set_rayleigh_color;
  method_get_rayleigh_color;
  method_set_mie_coefficient;
  method_get_mie_coefficient;
  method_set_mie_eccentricity;
  method_get_mie_eccentricity;
  method_set_mie_color;
  method_get_mie_color;
  method_set_turbidity;
  method_get_turbidity;
  method_set_sun_disk_scale;
  method_get_sun_disk_scale;
  method_set_ground_color;
  method_get_ground_color;
  method_set_energy_multiplier;
  method_get_energy_multiplier;
  method_set_use_debanding;
  method_get_use_debanding;
  method_set_night_sky;
  method_get_night_sky;
}
export class PhysicalSkyMaterial extends Material{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicalSkyMaterial");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_rayleigh_coefficient() {
    if (!this.#_bindings.method_set_rayleigh_coefficient) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_rayleigh_coefficient");
      this.#_bindings.method_set_rayleigh_coefficient = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_rayleigh_coefficient() {
    if (!this.#_bindings.method_get_rayleigh_coefficient) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_rayleigh_coefficient");
      this.#_bindings.method_get_rayleigh_coefficient = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_rayleigh_color() {
    if (!this.#_bindings.method_set_rayleigh_color) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_rayleigh_color");
      this.#_bindings.method_set_rayleigh_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_rayleigh_color() {
    if (!this.#_bindings.method_get_rayleigh_color) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_rayleigh_color");
      this.#_bindings.method_get_rayleigh_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_mie_coefficient() {
    if (!this.#_bindings.method_set_mie_coefficient) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_mie_coefficient");
      this.#_bindings.method_set_mie_coefficient = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_mie_coefficient() {
    if (!this.#_bindings.method_get_mie_coefficient) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_mie_coefficient");
      this.#_bindings.method_get_mie_coefficient = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_mie_eccentricity() {
    if (!this.#_bindings.method_set_mie_eccentricity) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_mie_eccentricity");
      this.#_bindings.method_set_mie_eccentricity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_mie_eccentricity() {
    if (!this.#_bindings.method_get_mie_eccentricity) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_mie_eccentricity");
      this.#_bindings.method_get_mie_eccentricity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_mie_color() {
    if (!this.#_bindings.method_set_mie_color) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_mie_color");
      this.#_bindings.method_set_mie_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_mie_color() {
    if (!this.#_bindings.method_get_mie_color) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_mie_color");
      this.#_bindings.method_get_mie_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_turbidity() {
    if (!this.#_bindings.method_set_turbidity) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_turbidity");
      this.#_bindings.method_set_turbidity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_turbidity() {
    if (!this.#_bindings.method_get_turbidity) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_turbidity");
      this.#_bindings.method_get_turbidity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_sun_disk_scale() {
    if (!this.#_bindings.method_set_sun_disk_scale) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_sun_disk_scale");
      this.#_bindings.method_set_sun_disk_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_sun_disk_scale() {
    if (!this.#_bindings.method_get_sun_disk_scale) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_sun_disk_scale");
      this.#_bindings.method_get_sun_disk_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_ground_color() {
    if (!this.#_bindings.method_set_ground_color) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_ground_color");
      this.#_bindings.method_set_ground_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_ground_color() {
    if (!this.#_bindings.method_get_ground_color) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_ground_color");
      this.#_bindings.method_get_ground_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_energy_multiplier() {
    if (!this.#_bindings.method_set_energy_multiplier) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_energy_multiplier");
      this.#_bindings.method_set_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_energy_multiplier() {
    if (!this.#_bindings.method_get_energy_multiplier) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_energy_multiplier");
      this.#_bindings.method_get_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_use_debanding() {
    if (!this.#_bindings.method_set_use_debanding) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_use_debanding");
      this.#_bindings.method_set_use_debanding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_use_debanding() {
    if (!this.#_bindings.method_get_use_debanding) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_use_debanding");
      this.#_bindings.method_get_use_debanding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_night_sky() {
    if (!this.#_bindings.method_set_night_sky) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_night_sky");
      this.#_bindings.method_set_night_sky = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_night_sky() {
    if (!this.#_bindings.method_get_night_sky) {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_night_sky");
      this.#_bindings.method_get_night_sky = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }

  
  
  set_rayleigh_coefficient(_rayleigh) {
    PhysicalSkyMaterial.init_method_set_rayleigh_coefficient();
    return _call_native_mb_no_ret(
      PhysicalSkyMaterial.#_bindings.method_set_rayleigh_coefficient,
      this._owner,
      _rayleigh
    );
    
  }
  get_rayleigh_coefficient() {
    PhysicalSkyMaterial.init_method_get_rayleigh_coefficient();
    return _call_native_mb_ret(
      PhysicalSkyMaterial.#_bindings.method_get_rayleigh_coefficient,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_rayleigh_color(_color) {
    PhysicalSkyMaterial.init_method_set_rayleigh_color();
    return _call_native_mb_no_ret(
      PhysicalSkyMaterial.#_bindings.method_set_rayleigh_color,
      this._owner,
      _color
    );
    
  }
  get_rayleigh_color() {
    PhysicalSkyMaterial.init_method_get_rayleigh_color();
    return _call_native_mb_ret(
      PhysicalSkyMaterial.#_bindings.method_get_rayleigh_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_mie_coefficient(_mie) {
    PhysicalSkyMaterial.init_method_set_mie_coefficient();
    return _call_native_mb_no_ret(
      PhysicalSkyMaterial.#_bindings.method_set_mie_coefficient,
      this._owner,
      _mie
    );
    
  }
  get_mie_coefficient() {
    PhysicalSkyMaterial.init_method_get_mie_coefficient();
    return _call_native_mb_ret(
      PhysicalSkyMaterial.#_bindings.method_get_mie_coefficient,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_mie_eccentricity(_eccentricity) {
    PhysicalSkyMaterial.init_method_set_mie_eccentricity();
    return _call_native_mb_no_ret(
      PhysicalSkyMaterial.#_bindings.method_set_mie_eccentricity,
      this._owner,
      _eccentricity
    );
    
  }
  get_mie_eccentricity() {
    PhysicalSkyMaterial.init_method_get_mie_eccentricity();
    return _call_native_mb_ret(
      PhysicalSkyMaterial.#_bindings.method_get_mie_eccentricity,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_mie_color(_color) {
    PhysicalSkyMaterial.init_method_set_mie_color();
    return _call_native_mb_no_ret(
      PhysicalSkyMaterial.#_bindings.method_set_mie_color,
      this._owner,
      _color
    );
    
  }
  get_mie_color() {
    PhysicalSkyMaterial.init_method_get_mie_color();
    return _call_native_mb_ret(
      PhysicalSkyMaterial.#_bindings.method_get_mie_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_turbidity(_turbidity) {
    PhysicalSkyMaterial.init_method_set_turbidity();
    return _call_native_mb_no_ret(
      PhysicalSkyMaterial.#_bindings.method_set_turbidity,
      this._owner,
      _turbidity
    );
    
  }
  get_turbidity() {
    PhysicalSkyMaterial.init_method_get_turbidity();
    return _call_native_mb_ret(
      PhysicalSkyMaterial.#_bindings.method_get_turbidity,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_sun_disk_scale(_scale) {
    PhysicalSkyMaterial.init_method_set_sun_disk_scale();
    return _call_native_mb_no_ret(
      PhysicalSkyMaterial.#_bindings.method_set_sun_disk_scale,
      this._owner,
      _scale
    );
    
  }
  get_sun_disk_scale() {
    PhysicalSkyMaterial.init_method_get_sun_disk_scale();
    return _call_native_mb_ret(
      PhysicalSkyMaterial.#_bindings.method_get_sun_disk_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_ground_color(_color) {
    PhysicalSkyMaterial.init_method_set_ground_color();
    return _call_native_mb_no_ret(
      PhysicalSkyMaterial.#_bindings.method_set_ground_color,
      this._owner,
      _color
    );
    
  }
  get_ground_color() {
    PhysicalSkyMaterial.init_method_get_ground_color();
    return _call_native_mb_ret(
      PhysicalSkyMaterial.#_bindings.method_get_ground_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_energy_multiplier(_multiplier) {
    PhysicalSkyMaterial.init_method_set_energy_multiplier();
    return _call_native_mb_no_ret(
      PhysicalSkyMaterial.#_bindings.method_set_energy_multiplier,
      this._owner,
      _multiplier
    );
    
  }
  get_energy_multiplier() {
    PhysicalSkyMaterial.init_method_get_energy_multiplier();
    return _call_native_mb_ret(
      PhysicalSkyMaterial.#_bindings.method_get_energy_multiplier,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_use_debanding(_use_debanding) {
    PhysicalSkyMaterial.init_method_set_use_debanding();
    return _call_native_mb_no_ret(
      PhysicalSkyMaterial.#_bindings.method_set_use_debanding,
      this._owner,
      _use_debanding
    );
    
  }
  get_use_debanding() {
    PhysicalSkyMaterial.init_method_get_use_debanding();
    return _call_native_mb_ret(
      PhysicalSkyMaterial.#_bindings.method_get_use_debanding,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_night_sky(_night_sky) {
    PhysicalSkyMaterial.init_method_set_night_sky();
    return _call_native_mb_no_ret(
      PhysicalSkyMaterial.#_bindings.method_set_night_sky,
      this._owner,
      _night_sky
    );
    
  }
  get_night_sky() {
    PhysicalSkyMaterial.init_method_get_night_sky();
    return _call_native_mb_ret(
      PhysicalSkyMaterial.#_bindings.method_get_night_sky,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get rayleigh_coefficient () {
  return this.get_rayleigh_coefficient();
}
set rayleigh_coefficient (new_value) {
  this.set_rayleigh_coefficient(new_value);
}
get rayleigh_color () {
  return this.get_rayleigh_color();
}
set rayleigh_color (new_value) {
  this.set_rayleigh_color(new_value);
}
get mie_coefficient () {
  return this.get_mie_coefficient();
}
set mie_coefficient (new_value) {
  this.set_mie_coefficient(new_value);
}
get mie_eccentricity () {
  return this.get_mie_eccentricity();
}
set mie_eccentricity (new_value) {
  this.set_mie_eccentricity(new_value);
}
get mie_color () {
  return this.get_mie_color();
}
set mie_color (new_value) {
  this.set_mie_color(new_value);
}
get turbidity () {
  return this.get_turbidity();
}
set turbidity (new_value) {
  this.set_turbidity(new_value);
}
get sun_disk_scale () {
  return this.get_sun_disk_scale();
}
set sun_disk_scale (new_value) {
  this.set_sun_disk_scale(new_value);
}
get ground_color () {
  return this.get_ground_color();
}
set ground_color (new_value) {
  this.set_ground_color(new_value);
}
get energy_multiplier () {
  return this.get_energy_multiplier();
}
set energy_multiplier (new_value) {
  this.set_energy_multiplier(new_value);
}
get use_debanding () {
  return this.get_use_debanding();
}
set use_debanding (new_value) {
  this.set_use_debanding(new_value);
}
get night_sky () {
  return this.get_night_sky();
}
set night_sky (new_value) {
  this.set_night_sky(new_value);
}

}