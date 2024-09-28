import * as internal from '__internal__';
import { VisualInstance3D } from '@js_godot/classes/visual_instance3d'
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
  method_set_editor_only;
  method_is_editor_only;
  method_set_param;
  method_get_param;
  method_set_shadow;
  method_has_shadow;
  method_set_negative;
  method_is_negative;
  method_set_cull_mask;
  method_get_cull_mask;
  method_set_enable_distance_fade;
  method_is_distance_fade_enabled;
  method_set_distance_fade_begin;
  method_get_distance_fade_begin;
  method_set_distance_fade_shadow;
  method_get_distance_fade_shadow;
  method_set_distance_fade_length;
  method_get_distance_fade_length;
  method_set_color;
  method_get_color;
  method_set_shadow_reverse_cull_face;
  method_get_shadow_reverse_cull_face;
  method_set_bake_mode;
  method_get_bake_mode;
  method_set_projector;
  method_get_projector;
  method_set_temperature;
  method_get_temperature;
  method_get_correlated_color;
}
@GodotClass
export class Light3D extends VisualInstance3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Light3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_editor_only() {
    if (!this._bindings.method_set_editor_only) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("set_editor_only");
      this._bindings.method_set_editor_only = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_editor_only() {
    if (!this._bindings.method_is_editor_only) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("is_editor_only");
      this._bindings.method_is_editor_only = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_param() {
    if (!this._bindings.method_set_param) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("set_param");
      this._bindings.method_set_param = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1722734213
      );
    }
  }
  static init_method_get_param() {
    if (!this._bindings.method_get_param) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("get_param");
      this._bindings.method_get_param = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1844084987
      );
    }
  }
  static init_method_set_shadow() {
    if (!this._bindings.method_set_shadow) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("set_shadow");
      this._bindings.method_set_shadow = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_has_shadow() {
    if (!this._bindings.method_has_shadow) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("has_shadow");
      this._bindings.method_has_shadow = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_negative() {
    if (!this._bindings.method_set_negative) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("set_negative");
      this._bindings.method_set_negative = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_negative() {
    if (!this._bindings.method_is_negative) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("is_negative");
      this._bindings.method_is_negative = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_cull_mask() {
    if (!this._bindings.method_set_cull_mask) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("set_cull_mask");
      this._bindings.method_set_cull_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_cull_mask() {
    if (!this._bindings.method_get_cull_mask) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("get_cull_mask");
      this._bindings.method_get_cull_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_enable_distance_fade() {
    if (!this._bindings.method_set_enable_distance_fade) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("set_enable_distance_fade");
      this._bindings.method_set_enable_distance_fade = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_distance_fade_enabled() {
    if (!this._bindings.method_is_distance_fade_enabled) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("is_distance_fade_enabled");
      this._bindings.method_is_distance_fade_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_distance_fade_begin() {
    if (!this._bindings.method_set_distance_fade_begin) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("set_distance_fade_begin");
      this._bindings.method_set_distance_fade_begin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_distance_fade_begin() {
    if (!this._bindings.method_get_distance_fade_begin) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("get_distance_fade_begin");
      this._bindings.method_get_distance_fade_begin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_distance_fade_shadow() {
    if (!this._bindings.method_set_distance_fade_shadow) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("set_distance_fade_shadow");
      this._bindings.method_set_distance_fade_shadow = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_distance_fade_shadow() {
    if (!this._bindings.method_get_distance_fade_shadow) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("get_distance_fade_shadow");
      this._bindings.method_get_distance_fade_shadow = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_distance_fade_length() {
    if (!this._bindings.method_set_distance_fade_length) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("set_distance_fade_length");
      this._bindings.method_set_distance_fade_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_distance_fade_length() {
    if (!this._bindings.method_get_distance_fade_length) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("get_distance_fade_length");
      this._bindings.method_get_distance_fade_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_color() {
    if (!this._bindings.method_set_color) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("set_color");
      this._bindings.method_set_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_color() {
    if (!this._bindings.method_get_color) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("get_color");
      this._bindings.method_get_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_shadow_reverse_cull_face() {
    if (!this._bindings.method_set_shadow_reverse_cull_face) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("set_shadow_reverse_cull_face");
      this._bindings.method_set_shadow_reverse_cull_face = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_shadow_reverse_cull_face() {
    if (!this._bindings.method_get_shadow_reverse_cull_face) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("get_shadow_reverse_cull_face");
      this._bindings.method_get_shadow_reverse_cull_face = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_bake_mode() {
    if (!this._bindings.method_set_bake_mode) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("set_bake_mode");
      this._bindings.method_set_bake_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        37739303
      );
    }
  }
  static init_method_get_bake_mode() {
    if (!this._bindings.method_get_bake_mode) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("get_bake_mode");
      this._bindings.method_get_bake_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        371737608
      );
    }
  }
  static init_method_set_projector() {
    if (!this._bindings.method_set_projector) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("set_projector");
      this._bindings.method_set_projector = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_projector() {
    if (!this._bindings.method_get_projector) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("get_projector");
      this._bindings.method_get_projector = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_set_temperature() {
    if (!this._bindings.method_set_temperature) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("set_temperature");
      this._bindings.method_set_temperature = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_temperature() {
    if (!this._bindings.method_get_temperature) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("get_temperature");
      this._bindings.method_get_temperature = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_correlated_color() {
    if (!this._bindings.method_get_correlated_color) {
      let classname = new StringName("Light3D");
      let methodname = new StringName("get_correlated_color");
      this._bindings.method_get_correlated_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }

  
  
  set_editor_only(_editor_only) {
    Light3D.init_method_set_editor_only();
    return _call_native_mb_no_ret(
      Light3D._bindings.method_set_editor_only,
      this._owner,
      _editor_only
    );
    
  }
  is_editor_only() {
    Light3D.init_method_is_editor_only();
    return _call_native_mb_ret(
      Light3D._bindings.method_is_editor_only,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_param(_param, _value) {
    Light3D.init_method_set_param();
    return _call_native_mb_no_ret(
      Light3D._bindings.method_set_param,
      this._owner,
      _param, _value
    );
    
  }
  get_param(_param) {
    Light3D.init_method_get_param();
    return _call_native_mb_ret(
      Light3D._bindings.method_get_param,
      this._owner,
			Variant.Type.FLOAT,
    
      _param
    );
    
  }
  set_shadow(_enabled) {
    Light3D.init_method_set_shadow();
    return _call_native_mb_no_ret(
      Light3D._bindings.method_set_shadow,
      this._owner,
      _enabled
    );
    
  }
  has_shadow() {
    Light3D.init_method_has_shadow();
    return _call_native_mb_ret(
      Light3D._bindings.method_has_shadow,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_negative(_enabled) {
    Light3D.init_method_set_negative();
    return _call_native_mb_no_ret(
      Light3D._bindings.method_set_negative,
      this._owner,
      _enabled
    );
    
  }
  is_negative() {
    Light3D.init_method_is_negative();
    return _call_native_mb_ret(
      Light3D._bindings.method_is_negative,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_cull_mask(_cull_mask) {
    Light3D.init_method_set_cull_mask();
    return _call_native_mb_no_ret(
      Light3D._bindings.method_set_cull_mask,
      this._owner,
      _cull_mask
    );
    
  }
  get_cull_mask() {
    Light3D.init_method_get_cull_mask();
    return _call_native_mb_ret(
      Light3D._bindings.method_get_cull_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_enable_distance_fade(_enable) {
    Light3D.init_method_set_enable_distance_fade();
    return _call_native_mb_no_ret(
      Light3D._bindings.method_set_enable_distance_fade,
      this._owner,
      _enable
    );
    
  }
  is_distance_fade_enabled() {
    Light3D.init_method_is_distance_fade_enabled();
    return _call_native_mb_ret(
      Light3D._bindings.method_is_distance_fade_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_distance_fade_begin(_distance) {
    Light3D.init_method_set_distance_fade_begin();
    return _call_native_mb_no_ret(
      Light3D._bindings.method_set_distance_fade_begin,
      this._owner,
      _distance
    );
    
  }
  get_distance_fade_begin() {
    Light3D.init_method_get_distance_fade_begin();
    return _call_native_mb_ret(
      Light3D._bindings.method_get_distance_fade_begin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_distance_fade_shadow(_distance) {
    Light3D.init_method_set_distance_fade_shadow();
    return _call_native_mb_no_ret(
      Light3D._bindings.method_set_distance_fade_shadow,
      this._owner,
      _distance
    );
    
  }
  get_distance_fade_shadow() {
    Light3D.init_method_get_distance_fade_shadow();
    return _call_native_mb_ret(
      Light3D._bindings.method_get_distance_fade_shadow,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_distance_fade_length(_distance) {
    Light3D.init_method_set_distance_fade_length();
    return _call_native_mb_no_ret(
      Light3D._bindings.method_set_distance_fade_length,
      this._owner,
      _distance
    );
    
  }
  get_distance_fade_length() {
    Light3D.init_method_get_distance_fade_length();
    return _call_native_mb_ret(
      Light3D._bindings.method_get_distance_fade_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_color(_color) {
    Light3D.init_method_set_color();
    return _call_native_mb_no_ret(
      Light3D._bindings.method_set_color,
      this._owner,
      _color
    );
    
  }
  get_color() {
    Light3D.init_method_get_color();
    return _call_native_mb_ret(
      Light3D._bindings.method_get_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_shadow_reverse_cull_face(_enable) {
    Light3D.init_method_set_shadow_reverse_cull_face();
    return _call_native_mb_no_ret(
      Light3D._bindings.method_set_shadow_reverse_cull_face,
      this._owner,
      _enable
    );
    
  }
  get_shadow_reverse_cull_face() {
    Light3D.init_method_get_shadow_reverse_cull_face();
    return _call_native_mb_ret(
      Light3D._bindings.method_get_shadow_reverse_cull_face,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_bake_mode(_bake_mode) {
    Light3D.init_method_set_bake_mode();
    return _call_native_mb_no_ret(
      Light3D._bindings.method_set_bake_mode,
      this._owner,
      _bake_mode
    );
    
  }
  get_bake_mode() {
    Light3D.init_method_get_bake_mode();
    return _call_native_mb_ret(
      Light3D._bindings.method_get_bake_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_projector(_projector) {
    Light3D.init_method_set_projector();
    return _call_native_mb_no_ret(
      Light3D._bindings.method_set_projector,
      this._owner,
      _projector
    );
    
  }
  get_projector() {
    Light3D.init_method_get_projector();
    return _call_native_mb_ret(
      Light3D._bindings.method_get_projector,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_temperature(_temperature) {
    Light3D.init_method_set_temperature();
    return _call_native_mb_no_ret(
      Light3D._bindings.method_set_temperature,
      this._owner,
      _temperature
    );
    
  }
  get_temperature() {
    Light3D.init_method_get_temperature();
    return _call_native_mb_ret(
      Light3D._bindings.method_get_temperature,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_correlated_color() {
    Light3D.init_method_get_correlated_color();
    return _call_native_mb_ret(
      Light3D._bindings.method_get_correlated_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  
get light_intensity_lumens () {
  return this.get_param();
}
set light_intensity_lumens (new_value) {
  this.set_param(new_value);
}
get light_intensity_lux () {
  return this.get_param();
}
set light_intensity_lux (new_value) {
  this.set_param(new_value);
}
get light_temperature () {
  return this.get_temperature();
}
set light_temperature (new_value) {
  this.set_temperature(new_value);
}
get light_color () {
  return this.get_color();
}
set light_color (new_value) {
  this.set_color(new_value);
}
get light_energy () {
  return this.get_param();
}
set light_energy (new_value) {
  this.set_param(new_value);
}
get light_indirect_energy () {
  return this.get_param();
}
set light_indirect_energy (new_value) {
  this.set_param(new_value);
}
get light_volumetric_fog_energy () {
  return this.get_param();
}
set light_volumetric_fog_energy (new_value) {
  this.set_param(new_value);
}
get light_projector () {
  return this.get_projector();
}
set light_projector (new_value) {
  this.set_projector(new_value);
}
get light_size () {
  return this.get_param();
}
set light_size (new_value) {
  this.set_param(new_value);
}
get light_angular_distance () {
  return this.get_param();
}
set light_angular_distance (new_value) {
  this.set_param(new_value);
}
get light_negative () {
  return this.is_negative();
}
set light_negative (new_value) {
  this.set_negative(new_value);
}
get light_specular () {
  return this.get_param();
}
set light_specular (new_value) {
  this.set_param(new_value);
}
get light_bake_mode () {
  return this.get_bake_mode();
}
set light_bake_mode (new_value) {
  this.set_bake_mode(new_value);
}
get light_cull_mask () {
  return this.get_cull_mask();
}
set light_cull_mask (new_value) {
  this.set_cull_mask(new_value);
}
get shadow_enabled () {
  return this.has_shadow();
}
set shadow_enabled (new_value) {
  this.set_shadow(new_value);
}
get shadow_bias () {
  return this.get_param();
}
set shadow_bias (new_value) {
  this.set_param(new_value);
}
get shadow_normal_bias () {
  return this.get_param();
}
set shadow_normal_bias (new_value) {
  this.set_param(new_value);
}
get shadow_reverse_cull_face () {
  return this.get_shadow_reverse_cull_face();
}
set shadow_reverse_cull_face (new_value) {
  this.set_shadow_reverse_cull_face(new_value);
}
get shadow_transmittance_bias () {
  return this.get_param();
}
set shadow_transmittance_bias (new_value) {
  this.set_param(new_value);
}
get shadow_opacity () {
  return this.get_param();
}
set shadow_opacity (new_value) {
  this.set_param(new_value);
}
get shadow_blur () {
  return this.get_param();
}
set shadow_blur (new_value) {
  this.set_param(new_value);
}
get distance_fade_enabled () {
  return this.is_distance_fade_enabled();
}
set distance_fade_enabled (new_value) {
  this.set_enable_distance_fade(new_value);
}
get distance_fade_begin () {
  return this.get_distance_fade_begin();
}
set distance_fade_begin (new_value) {
  this.set_distance_fade_begin(new_value);
}
get distance_fade_shadow () {
  return this.get_distance_fade_shadow();
}
set distance_fade_shadow (new_value) {
  this.set_distance_fade_shadow(new_value);
}
get distance_fade_length () {
  return this.get_distance_fade_length();
}
set distance_fade_length (new_value) {
  this.set_distance_fade_length(new_value);
}
get editor_only () {
  return this.is_editor_only();
}
set editor_only (new_value) {
  this.set_editor_only(new_value);
}

  static Param = {
    PARAM_ENERGY: 0,
    PARAM_INDIRECT_ENERGY: 1,
    PARAM_VOLUMETRIC_FOG_ENERGY: 2,
    PARAM_SPECULAR: 3,
    PARAM_RANGE: 4,
    PARAM_SIZE: 5,
    PARAM_ATTENUATION: 6,
    PARAM_SPOT_ANGLE: 7,
    PARAM_SPOT_ATTENUATION: 8,
    PARAM_SHADOW_MAX_DISTANCE: 9,
    PARAM_SHADOW_SPLIT_1_OFFSET: 10,
    PARAM_SHADOW_SPLIT_2_OFFSET: 11,
    PARAM_SHADOW_SPLIT_3_OFFSET: 12,
    PARAM_SHADOW_FADE_START: 13,
    PARAM_SHADOW_NORMAL_BIAS: 14,
    PARAM_SHADOW_BIAS: 15,
    PARAM_SHADOW_PANCAKE_SIZE: 16,
    PARAM_SHADOW_OPACITY: 17,
    PARAM_SHADOW_BLUR: 18,
    PARAM_TRANSMITTANCE_BIAS: 19,
    PARAM_INTENSITY: 20,
    PARAM_MAX: 21,
  }
  static BakeMode = {
    BAKE_DISABLED: 0,
    BAKE_STATIC: 1,
    BAKE_DYNAMIC: 2,
  }
}