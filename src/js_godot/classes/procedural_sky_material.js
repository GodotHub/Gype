import * as internal from '__internal__';
import { Material } from 'src/js_godot/classesmaterial'
import { Color } from 'src/js_godot/variant/color'
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


export class ProceduralSkyMaterial extends Material{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ProceduralSkyMaterial");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_sky_top_color");
      this._bindings.method_set_sky_top_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_sky_top_color");
      this._bindings.method_get_sky_top_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_sky_horizon_color");
      this._bindings.method_set_sky_horizon_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_sky_horizon_color");
      this._bindings.method_get_sky_horizon_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_sky_curve");
      this._bindings.method_set_sky_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_sky_curve");
      this._bindings.method_get_sky_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_sky_energy_multiplier");
      this._bindings.method_set_sky_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_sky_energy_multiplier");
      this._bindings.method_get_sky_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_sky_cover");
      this._bindings.method_set_sky_cover = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_sky_cover");
      this._bindings.method_get_sky_cover = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_sky_cover_modulate");
      this._bindings.method_set_sky_cover_modulate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_sky_cover_modulate");
      this._bindings.method_get_sky_cover_modulate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_ground_bottom_color");
      this._bindings.method_set_ground_bottom_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_ground_bottom_color");
      this._bindings.method_get_ground_bottom_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_ground_horizon_color");
      this._bindings.method_set_ground_horizon_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_ground_horizon_color");
      this._bindings.method_get_ground_horizon_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_ground_curve");
      this._bindings.method_set_ground_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_ground_curve");
      this._bindings.method_get_ground_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_ground_energy_multiplier");
      this._bindings.method_set_ground_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_ground_energy_multiplier");
      this._bindings.method_get_ground_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_sun_angle_max");
      this._bindings.method_set_sun_angle_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_sun_angle_max");
      this._bindings.method_get_sun_angle_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_sun_curve");
      this._bindings.method_set_sun_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_sun_curve");
      this._bindings.method_get_sun_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_use_debanding");
      this._bindings.method_set_use_debanding = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("get_use_debanding");
      this._bindings.method_get_use_debanding = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ProceduralSkyMaterial");
      let methodname = new StringName("set_energy_multiplier");
      this._bindings.method_set_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sky_top_color,
      this._owner,
      _color
    );
  }
  get_sky_top_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sky_top_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_sky_horizon_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sky_horizon_color,
      this._owner,
      _color
    );
  }
  get_sky_horizon_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sky_horizon_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_sky_curve(_curve) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sky_curve,
      this._owner,
      _curve
    );
  }
  get_sky_curve() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sky_curve,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_sky_energy_multiplier(_multiplier) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sky_energy_multiplier,
      this._owner,
      _multiplier
    );
  }
  get_sky_energy_multiplier() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sky_energy_multiplier,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_sky_cover(_sky_cover) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sky_cover,
      this._owner,
      _sky_cover
    );
  }
  get_sky_cover() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sky_cover,
      this._owner,
			Variant.INT,
      
    );
  }
  set_sky_cover_modulate(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sky_cover_modulate,
      this._owner,
      _color
    );
  }
  get_sky_cover_modulate() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sky_cover_modulate,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_ground_bottom_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ground_bottom_color,
      this._owner,
      _color
    );
  }
  get_ground_bottom_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ground_bottom_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_ground_horizon_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ground_horizon_color,
      this._owner,
      _color
    );
  }
  get_ground_horizon_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ground_horizon_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_ground_curve(_curve) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ground_curve,
      this._owner,
      _curve
    );
  }
  get_ground_curve() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ground_curve,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ground_energy_multiplier(_energy) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ground_energy_multiplier,
      this._owner,
      _energy
    );
  }
  get_ground_energy_multiplier() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ground_energy_multiplier,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_sun_angle_max(_degrees) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sun_angle_max,
      this._owner,
      _degrees
    );
  }
  get_sun_angle_max() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sun_angle_max,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_sun_curve(_curve) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sun_curve,
      this._owner,
      _curve
    );
  }
  get_sun_curve() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sun_curve,
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
}