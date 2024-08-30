import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { VisualInstance3D } from 'src/js_godot/classes/visual_instance3d'
import { Color } from 'src/js_godot/variant/color'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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


export class Light3D extends VisualInstance3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Light3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("set_editor_only");
        this._bindings.method_set_editor_only = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("is_editor_only");
        this._bindings.method_is_editor_only = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("set_param");
        this._bindings.method_set_param = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1722734213
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("get_param");
        this._bindings.method_get_param = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1844084987
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("set_shadow");
        this._bindings.method_set_shadow = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("has_shadow");
        this._bindings.method_has_shadow = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("set_negative");
        this._bindings.method_set_negative = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("is_negative");
        this._bindings.method_is_negative = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("set_cull_mask");
        this._bindings.method_set_cull_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("get_cull_mask");
        this._bindings.method_get_cull_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("set_enable_distance_fade");
        this._bindings.method_set_enable_distance_fade = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("is_distance_fade_enabled");
        this._bindings.method_is_distance_fade_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("set_distance_fade_begin");
        this._bindings.method_set_distance_fade_begin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("get_distance_fade_begin");
        this._bindings.method_get_distance_fade_begin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("set_distance_fade_shadow");
        this._bindings.method_set_distance_fade_shadow = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("get_distance_fade_shadow");
        this._bindings.method_get_distance_fade_shadow = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("set_distance_fade_length");
        this._bindings.method_set_distance_fade_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("get_distance_fade_length");
        this._bindings.method_get_distance_fade_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("set_color");
        this._bindings.method_set_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("get_color");
        this._bindings.method_get_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("set_shadow_reverse_cull_face");
        this._bindings.method_set_shadow_reverse_cull_face = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("get_shadow_reverse_cull_face");
        this._bindings.method_get_shadow_reverse_cull_face = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("set_bake_mode");
        this._bindings.method_set_bake_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          37739303
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("get_bake_mode");
        this._bindings.method_get_bake_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          371737608
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("set_projector");
        this._bindings.method_set_projector = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4051416890
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("get_projector");
        this._bindings.method_get_projector = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3635182373
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("set_temperature");
        this._bindings.method_set_temperature = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Light3D");
        let methodname = new StringName("get_temperature");
        this._bindings.method_get_temperature = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_editor_only,
      this._owner,
      _editor_only
    );
    
  }
  is_editor_only() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_editor_only,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_param(_param, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_param,
      this._owner,
      _param, _value
    );
    
  }
  get_param(_param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_param,
      this._owner,
			Variant.Type.FLOAT,
      _param
    );
    
  }
  set_shadow(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shadow,
      this._owner,
      _enabled
    );
    
  }
  has_shadow() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_shadow,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_negative(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_negative,
      this._owner,
      _enabled
    );
    
  }
  is_negative() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_negative,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_cull_mask(_cull_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cull_mask,
      this._owner,
      _cull_mask
    );
    
  }
  get_cull_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cull_mask,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_enable_distance_fade(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enable_distance_fade,
      this._owner,
      _enable
    );
    
  }
  is_distance_fade_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_distance_fade_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_distance_fade_begin(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_distance_fade_begin,
      this._owner,
      _distance
    );
    
  }
  get_distance_fade_begin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_distance_fade_begin,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_distance_fade_shadow(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_distance_fade_shadow,
      this._owner,
      _distance
    );
    
  }
  get_distance_fade_shadow() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_distance_fade_shadow,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_distance_fade_length(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_distance_fade_length,
      this._owner,
      _distance
    );
    
  }
  get_distance_fade_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_distance_fade_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_color,
      this._owner,
      _color
    );
    
  }
  get_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_shadow_reverse_cull_face(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shadow_reverse_cull_face,
      this._owner,
      _enable
    );
    
  }
  get_shadow_reverse_cull_face() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shadow_reverse_cull_face,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_bake_mode(_bake_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bake_mode,
      this._owner,
      _bake_mode
    );
    
  }
  get_bake_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bake_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_projector(_projector) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_projector,
      this._owner,
      _projector
    );
    
  }
  get_projector() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_projector,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_temperature(_temperature) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_temperature,
      this._owner,
      _temperature
    );
    
  }
  get_temperature() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_temperature,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_correlated_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_correlated_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
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