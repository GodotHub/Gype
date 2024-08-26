import * as internal from '__internal__';
import { Material } from 'src/js_godot/classesmaterial'
import { Color } from 'src/js_godot/variant/color'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicalSkyMaterial");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_rayleigh_coefficient");
      this._bindings.method_set_rayleigh_coefficient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_rayleigh_coefficient");
      this._bindings.method_get_rayleigh_coefficient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_rayleigh_color");
      this._bindings.method_set_rayleigh_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_rayleigh_color");
      this._bindings.method_get_rayleigh_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_mie_coefficient");
      this._bindings.method_set_mie_coefficient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_mie_coefficient");
      this._bindings.method_get_mie_coefficient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_mie_eccentricity");
      this._bindings.method_set_mie_eccentricity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_mie_eccentricity");
      this._bindings.method_get_mie_eccentricity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_mie_color");
      this._bindings.method_set_mie_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_mie_color");
      this._bindings.method_get_mie_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_turbidity");
      this._bindings.method_set_turbidity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_turbidity");
      this._bindings.method_get_turbidity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_sun_disk_scale");
      this._bindings.method_set_sun_disk_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_sun_disk_scale");
      this._bindings.method_get_sun_disk_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_ground_color");
      this._bindings.method_set_ground_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_ground_color");
      this._bindings.method_get_ground_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_energy_multiplier");
      this._bindings.method_set_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_energy_multiplier");
      this._bindings.method_get_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_use_debanding");
      this._bindings.method_set_use_debanding = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_use_debanding");
      this._bindings.method_get_use_debanding = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("set_night_sky");
      this._bindings.method_set_night_sky = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("PhysicalSkyMaterial");
      let methodname = new StringName("get_night_sky");
      this._bindings.method_get_night_sky = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
  }
  set_rayleigh_coefficient(_rayleigh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_rayleigh_coefficient,
      this._owner,
      _rayleigh
    );
  }
  get_rayleigh_coefficient() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rayleigh_coefficient,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_rayleigh_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_rayleigh_color,
      this._owner,
      _color
    );
  }
  get_rayleigh_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rayleigh_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_mie_coefficient(_mie) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mie_coefficient,
      this._owner,
      _mie
    );
  }
  get_mie_coefficient() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mie_coefficient,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_mie_eccentricity(_eccentricity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mie_eccentricity,
      this._owner,
      _eccentricity
    );
  }
  get_mie_eccentricity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mie_eccentricity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_mie_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mie_color,
      this._owner,
      _color
    );
  }
  get_mie_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mie_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_turbidity(_turbidity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_turbidity,
      this._owner,
      _turbidity
    );
  }
  get_turbidity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_turbidity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_sun_disk_scale(_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sun_disk_scale,
      this._owner,
      _scale
    );
  }
  get_sun_disk_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sun_disk_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ground_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ground_color,
      this._owner,
      _color
    );
  }
  get_ground_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ground_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_energy_multiplier(_multiplier) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_energy_multiplier,
      this._owner,
      _multiplier
    );
  }
  get_energy_multiplier() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_energy_multiplier,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_use_debanding(_use_debanding) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_debanding,
      this._owner,
      _use_debanding
    );
  }
  get_use_debanding() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_use_debanding,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_night_sky(_night_sky) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_night_sky,
      this._owner,
      _night_sky
    );
  }
  get_night_sky() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_night_sky,
      this._owner,
			Variant.INT,
      
    );
  }
}