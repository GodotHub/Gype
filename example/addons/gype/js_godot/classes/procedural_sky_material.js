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
  method_set_sky_top_color;
  method_get_sky_top_color;
  method_set_sky_horizon_color;
  method_get_sky_horizon_color;
  method_set_sky_curve;
  method_get_sky_curve;
  method_set_sky_energy_multiplier;
  method_get_sky_energy_multiplier;
  method_set_sky_cover;
  method_get_sky_cover;
  method_set_sky_cover_modulate;
  method_get_sky_cover_modulate;
  method_set_ground_bottom_color;
  method_get_ground_bottom_color;
  method_set_ground_horizon_color;
  method_get_ground_horizon_color;
  method_set_ground_curve;
  method_get_ground_curve;
  method_set_ground_energy_multiplier;
  method_get_ground_energy_multiplier;
  method_set_sun_angle_max;
  method_get_sun_angle_max;
  method_set_sun_curve;
  method_get_sun_curve;
  method_set_use_debanding;
  method_get_use_debanding;
  method_set_energy_multiplier;
  method_get_energy_multiplier;
}
@GodotClass
export class ProceduralSkyMaterial extends Material{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ProceduralSkyMaterial");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_sky_top_color() {
    if (!this._bindings.method_set_sky_top_color) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_sky_top_color");
      this._bindings.method_set_sky_top_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_sky_top_color() {
    if (!this._bindings.method_get_sky_top_color) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_sky_top_color");
      this._bindings.method_get_sky_top_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_sky_horizon_color() {
    if (!this._bindings.method_set_sky_horizon_color) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_sky_horizon_color");
      this._bindings.method_set_sky_horizon_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_sky_horizon_color() {
    if (!this._bindings.method_get_sky_horizon_color) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_sky_horizon_color");
      this._bindings.method_get_sky_horizon_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_sky_curve() {
    if (!this._bindings.method_set_sky_curve) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_sky_curve");
      this._bindings.method_set_sky_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_sky_curve() {
    if (!this._bindings.method_get_sky_curve) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_sky_curve");
      this._bindings.method_get_sky_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_sky_energy_multiplier() {
    if (!this._bindings.method_set_sky_energy_multiplier) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_sky_energy_multiplier");
      this._bindings.method_set_sky_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_sky_energy_multiplier() {
    if (!this._bindings.method_get_sky_energy_multiplier) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_sky_energy_multiplier");
      this._bindings.method_get_sky_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_sky_cover() {
    if (!this._bindings.method_set_sky_cover) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_sky_cover");
      this._bindings.method_set_sky_cover = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_sky_cover() {
    if (!this._bindings.method_get_sky_cover) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_sky_cover");
      this._bindings.method_get_sky_cover = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_set_sky_cover_modulate() {
    if (!this._bindings.method_set_sky_cover_modulate) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_sky_cover_modulate");
      this._bindings.method_set_sky_cover_modulate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_sky_cover_modulate() {
    if (!this._bindings.method_get_sky_cover_modulate) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_sky_cover_modulate");
      this._bindings.method_get_sky_cover_modulate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_ground_bottom_color() {
    if (!this._bindings.method_set_ground_bottom_color) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_ground_bottom_color");
      this._bindings.method_set_ground_bottom_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_ground_bottom_color() {
    if (!this._bindings.method_get_ground_bottom_color) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_ground_bottom_color");
      this._bindings.method_get_ground_bottom_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_ground_horizon_color() {
    if (!this._bindings.method_set_ground_horizon_color) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_ground_horizon_color");
      this._bindings.method_set_ground_horizon_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_ground_horizon_color() {
    if (!this._bindings.method_get_ground_horizon_color) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_ground_horizon_color");
      this._bindings.method_get_ground_horizon_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_ground_curve() {
    if (!this._bindings.method_set_ground_curve) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_ground_curve");
      this._bindings.method_set_ground_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ground_curve() {
    if (!this._bindings.method_get_ground_curve) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_ground_curve");
      this._bindings.method_get_ground_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_ground_energy_multiplier() {
    if (!this._bindings.method_set_ground_energy_multiplier) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_ground_energy_multiplier");
      this._bindings.method_set_ground_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ground_energy_multiplier() {
    if (!this._bindings.method_get_ground_energy_multiplier) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_ground_energy_multiplier");
      this._bindings.method_get_ground_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_sun_angle_max() {
    if (!this._bindings.method_set_sun_angle_max) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_sun_angle_max");
      this._bindings.method_set_sun_angle_max = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_sun_angle_max() {
    if (!this._bindings.method_get_sun_angle_max) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_sun_angle_max");
      this._bindings.method_get_sun_angle_max = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_sun_curve() {
    if (!this._bindings.method_set_sun_curve) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_sun_curve");
      this._bindings.method_set_sun_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_sun_curve() {
    if (!this._bindings.method_get_sun_curve) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_sun_curve");
      this._bindings.method_get_sun_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_use_debanding() {
    if (!this._bindings.method_set_use_debanding) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_use_debanding");
      this._bindings.method_set_use_debanding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_use_debanding() {
    if (!this._bindings.method_get_use_debanding) {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_use_debanding");
      this._bindings.method_get_use_debanding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_energy_multiplier() {
    if (!this._bindings.method_set_energy_multiplier) {
      let classname = new StringName("ProceduralSkyMaterial");
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
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_energy_multiplier");
      this._bindings.method_get_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_sky_top_color(_color) {
    ProceduralSkyMaterial.init_method_set_sky_top_color();
    return _call_native_mb_no_ret(
      ProceduralSkyMaterial._bindings.method_set_sky_top_color,
      this._owner,
      _color
    );
    
  }
  get_sky_top_color() {
    ProceduralSkyMaterial.init_method_get_sky_top_color();
    return _call_native_mb_ret(
      ProceduralSkyMaterial._bindings.method_get_sky_top_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_sky_horizon_color(_color) {
    ProceduralSkyMaterial.init_method_set_sky_horizon_color();
    return _call_native_mb_no_ret(
      ProceduralSkyMaterial._bindings.method_set_sky_horizon_color,
      this._owner,
      _color
    );
    
  }
  get_sky_horizon_color() {
    ProceduralSkyMaterial.init_method_get_sky_horizon_color();
    return _call_native_mb_ret(
      ProceduralSkyMaterial._bindings.method_get_sky_horizon_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_sky_curve(_curve) {
    ProceduralSkyMaterial.init_method_set_sky_curve();
    return _call_native_mb_no_ret(
      ProceduralSkyMaterial._bindings.method_set_sky_curve,
      this._owner,
      _curve
    );
    
  }
  get_sky_curve() {
    ProceduralSkyMaterial.init_method_get_sky_curve();
    return _call_native_mb_ret(
      ProceduralSkyMaterial._bindings.method_get_sky_curve,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_sky_energy_multiplier(_multiplier) {
    ProceduralSkyMaterial.init_method_set_sky_energy_multiplier();
    return _call_native_mb_no_ret(
      ProceduralSkyMaterial._bindings.method_set_sky_energy_multiplier,
      this._owner,
      _multiplier
    );
    
  }
  get_sky_energy_multiplier() {
    ProceduralSkyMaterial.init_method_get_sky_energy_multiplier();
    return _call_native_mb_ret(
      ProceduralSkyMaterial._bindings.method_get_sky_energy_multiplier,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_sky_cover(_sky_cover) {
    ProceduralSkyMaterial.init_method_set_sky_cover();
    return _call_native_mb_no_ret(
      ProceduralSkyMaterial._bindings.method_set_sky_cover,
      this._owner,
      _sky_cover
    );
    
  }
  get_sky_cover() {
    ProceduralSkyMaterial.init_method_get_sky_cover();
    return _call_native_mb_ret(
      ProceduralSkyMaterial._bindings.method_get_sky_cover,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_sky_cover_modulate(_color) {
    ProceduralSkyMaterial.init_method_set_sky_cover_modulate();
    return _call_native_mb_no_ret(
      ProceduralSkyMaterial._bindings.method_set_sky_cover_modulate,
      this._owner,
      _color
    );
    
  }
  get_sky_cover_modulate() {
    ProceduralSkyMaterial.init_method_get_sky_cover_modulate();
    return _call_native_mb_ret(
      ProceduralSkyMaterial._bindings.method_get_sky_cover_modulate,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_ground_bottom_color(_color) {
    ProceduralSkyMaterial.init_method_set_ground_bottom_color();
    return _call_native_mb_no_ret(
      ProceduralSkyMaterial._bindings.method_set_ground_bottom_color,
      this._owner,
      _color
    );
    
  }
  get_ground_bottom_color() {
    ProceduralSkyMaterial.init_method_get_ground_bottom_color();
    return _call_native_mb_ret(
      ProceduralSkyMaterial._bindings.method_get_ground_bottom_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_ground_horizon_color(_color) {
    ProceduralSkyMaterial.init_method_set_ground_horizon_color();
    return _call_native_mb_no_ret(
      ProceduralSkyMaterial._bindings.method_set_ground_horizon_color,
      this._owner,
      _color
    );
    
  }
  get_ground_horizon_color() {
    ProceduralSkyMaterial.init_method_get_ground_horizon_color();
    return _call_native_mb_ret(
      ProceduralSkyMaterial._bindings.method_get_ground_horizon_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_ground_curve(_curve) {
    ProceduralSkyMaterial.init_method_set_ground_curve();
    return _call_native_mb_no_ret(
      ProceduralSkyMaterial._bindings.method_set_ground_curve,
      this._owner,
      _curve
    );
    
  }
  get_ground_curve() {
    ProceduralSkyMaterial.init_method_get_ground_curve();
    return _call_native_mb_ret(
      ProceduralSkyMaterial._bindings.method_get_ground_curve,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_ground_energy_multiplier(_energy) {
    ProceduralSkyMaterial.init_method_set_ground_energy_multiplier();
    return _call_native_mb_no_ret(
      ProceduralSkyMaterial._bindings.method_set_ground_energy_multiplier,
      this._owner,
      _energy
    );
    
  }
  get_ground_energy_multiplier() {
    ProceduralSkyMaterial.init_method_get_ground_energy_multiplier();
    return _call_native_mb_ret(
      ProceduralSkyMaterial._bindings.method_get_ground_energy_multiplier,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_sun_angle_max(_degrees) {
    ProceduralSkyMaterial.init_method_set_sun_angle_max();
    return _call_native_mb_no_ret(
      ProceduralSkyMaterial._bindings.method_set_sun_angle_max,
      this._owner,
      _degrees
    );
    
  }
  get_sun_angle_max() {
    ProceduralSkyMaterial.init_method_get_sun_angle_max();
    return _call_native_mb_ret(
      ProceduralSkyMaterial._bindings.method_get_sun_angle_max,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_sun_curve(_curve) {
    ProceduralSkyMaterial.init_method_set_sun_curve();
    return _call_native_mb_no_ret(
      ProceduralSkyMaterial._bindings.method_set_sun_curve,
      this._owner,
      _curve
    );
    
  }
  get_sun_curve() {
    ProceduralSkyMaterial.init_method_get_sun_curve();
    return _call_native_mb_ret(
      ProceduralSkyMaterial._bindings.method_get_sun_curve,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_use_debanding(_use_debanding) {
    ProceduralSkyMaterial.init_method_set_use_debanding();
    return _call_native_mb_no_ret(
      ProceduralSkyMaterial._bindings.method_set_use_debanding,
      this._owner,
      _use_debanding
    );
    
  }
  get_use_debanding() {
    ProceduralSkyMaterial.init_method_get_use_debanding();
    return _call_native_mb_ret(
      ProceduralSkyMaterial._bindings.method_get_use_debanding,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_energy_multiplier(_multiplier) {
    ProceduralSkyMaterial.init_method_set_energy_multiplier();
    return _call_native_mb_no_ret(
      ProceduralSkyMaterial._bindings.method_set_energy_multiplier,
      this._owner,
      _multiplier
    );
    
  }
  get_energy_multiplier() {
    ProceduralSkyMaterial.init_method_get_energy_multiplier();
    return _call_native_mb_ret(
      ProceduralSkyMaterial._bindings.method_get_energy_multiplier,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get sky_top_color () {
  return this.get_sky_top_color();
}
set sky_top_color (new_value) {
  this.set_sky_top_color(new_value);
}
get sky_horizon_color () {
  return this.get_sky_horizon_color();
}
set sky_horizon_color (new_value) {
  this.set_sky_horizon_color(new_value);
}
get sky_curve () {
  return this.get_sky_curve();
}
set sky_curve (new_value) {
  this.set_sky_curve(new_value);
}
get sky_energy_multiplier () {
  return this.get_sky_energy_multiplier();
}
set sky_energy_multiplier (new_value) {
  this.set_sky_energy_multiplier(new_value);
}
get sky_cover () {
  return this.get_sky_cover();
}
set sky_cover (new_value) {
  this.set_sky_cover(new_value);
}
get sky_cover_modulate () {
  return this.get_sky_cover_modulate();
}
set sky_cover_modulate (new_value) {
  this.set_sky_cover_modulate(new_value);
}
get ground_bottom_color () {
  return this.get_ground_bottom_color();
}
set ground_bottom_color (new_value) {
  this.set_ground_bottom_color(new_value);
}
get ground_horizon_color () {
  return this.get_ground_horizon_color();
}
set ground_horizon_color (new_value) {
  this.set_ground_horizon_color(new_value);
}
get ground_curve () {
  return this.get_ground_curve();
}
set ground_curve (new_value) {
  this.set_ground_curve(new_value);
}
get ground_energy_multiplier () {
  return this.get_ground_energy_multiplier();
}
set ground_energy_multiplier (new_value) {
  this.set_ground_energy_multiplier(new_value);
}
get sun_angle_max () {
  return this.get_sun_angle_max();
}
set sun_angle_max (new_value) {
  this.set_sun_angle_max(new_value);
}
get sun_curve () {
  return this.get_sun_curve();
}
set sun_curve (new_value) {
  this.set_sun_curve(new_value);
}
get use_debanding () {
  return this.get_use_debanding();
}
set use_debanding (new_value) {
  this.set_use_debanding(new_value);
}
get energy_multiplier () {
  return this.get_energy_multiplier();
}
set energy_multiplier (new_value) {
  this.set_energy_multiplier(new_value);
}

}