import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { VisualInstance3D } from '@js_godot/classes/visual_instance3d'
import { Color } from '@js_godot/variant/color'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_light_data;
  method_get_light_data;
  method_set_bake_quality;
  method_get_bake_quality;
  method_set_bounces;
  method_get_bounces;
  method_set_bounce_indirect_energy;
  method_get_bounce_indirect_energy;
  method_set_generate_probes;
  method_get_generate_probes;
  method_set_bias;
  method_get_bias;
  method_set_environment_mode;
  method_get_environment_mode;
  method_set_environment_custom_sky;
  method_get_environment_custom_sky;
  method_set_environment_custom_color;
  method_get_environment_custom_color;
  method_set_environment_custom_energy;
  method_get_environment_custom_energy;
  method_set_texel_scale;
  method_get_texel_scale;
  method_set_max_texture_size;
  method_get_max_texture_size;
  method_set_use_denoiser;
  method_is_using_denoiser;
  method_set_denoiser_strength;
  method_get_denoiser_strength;
  method_set_denoiser_range;
  method_get_denoiser_range;
  method_set_interior;
  method_is_interior;
  method_set_directional;
  method_is_directional;
  method_set_use_texture_for_bounces;
  method_is_using_texture_for_bounces;
  method_set_camera_attributes;
  method_get_camera_attributes;
}
export class LightmapGI extends VisualInstance3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("LightmapGI");
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
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("set_light_data");
      this._bindings.method_set_light_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1790597277
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("get_light_data");
      this._bindings.method_get_light_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        290354153
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("set_bake_quality");
      this._bindings.method_set_bake_quality = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1192215803
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("get_bake_quality");
      this._bindings.method_get_bake_quality = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        688832735
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("set_bounces");
      this._bindings.method_set_bounces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("get_bounces");
      this._bindings.method_get_bounces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("set_bounce_indirect_energy");
      this._bindings.method_set_bounce_indirect_energy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("get_bounce_indirect_energy");
      this._bindings.method_get_bounce_indirect_energy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("set_generate_probes");
      this._bindings.method_set_generate_probes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        549981046
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("get_generate_probes");
      this._bindings.method_get_generate_probes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3930596226
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("set_bias");
      this._bindings.method_set_bias = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("get_bias");
      this._bindings.method_get_bias = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("set_environment_mode");
      this._bindings.method_set_environment_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2282650285
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("get_environment_mode");
      this._bindings.method_get_environment_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4128646479
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("set_environment_custom_sky");
      this._bindings.method_set_environment_custom_sky = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3336722921
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("get_environment_custom_sky");
      this._bindings.method_get_environment_custom_sky = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1177136966
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("set_environment_custom_color");
      this._bindings.method_set_environment_custom_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("get_environment_custom_color");
      this._bindings.method_get_environment_custom_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("set_environment_custom_energy");
      this._bindings.method_set_environment_custom_energy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("get_environment_custom_energy");
      this._bindings.method_get_environment_custom_energy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("set_texel_scale");
      this._bindings.method_set_texel_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("get_texel_scale");
      this._bindings.method_get_texel_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("set_max_texture_size");
      this._bindings.method_set_max_texture_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("get_max_texture_size");
      this._bindings.method_get_max_texture_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("set_use_denoiser");
      this._bindings.method_set_use_denoiser = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("is_using_denoiser");
      this._bindings.method_is_using_denoiser = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("set_denoiser_strength");
      this._bindings.method_set_denoiser_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("get_denoiser_strength");
      this._bindings.method_get_denoiser_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("set_denoiser_range");
      this._bindings.method_set_denoiser_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("get_denoiser_range");
      this._bindings.method_get_denoiser_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("set_interior");
      this._bindings.method_set_interior = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("is_interior");
      this._bindings.method_is_interior = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("set_directional");
      this._bindings.method_set_directional = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("is_directional");
      this._bindings.method_is_directional = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("set_use_texture_for_bounces");
      this._bindings.method_set_use_texture_for_bounces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("is_using_texture_for_bounces");
      this._bindings.method_is_using_texture_for_bounces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("set_camera_attributes");
      this._bindings.method_set_camera_attributes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2817810567
      );
    }
    {
      let classname = new StringName("LightmapGI");
      let methodname = new StringName("get_camera_attributes");
      this._bindings.method_get_camera_attributes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3921283215
      );
    }
  }
  
  set_light_data(_data) {
    return _call_native_mb_no_ret(
      LightmapGI._bindings.method_set_light_data,
      this._owner,
      _data
    );
    
  }
  get_light_data() {
    return _call_native_mb_ret(
      LightmapGI._bindings.method_get_light_data,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_bake_quality(_bake_quality) {
    return _call_native_mb_no_ret(
      LightmapGI._bindings.method_set_bake_quality,
      this._owner,
      _bake_quality
    );
    
  }
  get_bake_quality() {
    return _call_native_mb_ret(
      LightmapGI._bindings.method_get_bake_quality,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_bounces(_bounces) {
    return _call_native_mb_no_ret(
      LightmapGI._bindings.method_set_bounces,
      this._owner,
      _bounces
    );
    
  }
  get_bounces() {
    return _call_native_mb_ret(
      LightmapGI._bindings.method_get_bounces,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_bounce_indirect_energy(_bounce_indirect_energy) {
    return _call_native_mb_no_ret(
      LightmapGI._bindings.method_set_bounce_indirect_energy,
      this._owner,
      _bounce_indirect_energy
    );
    
  }
  get_bounce_indirect_energy() {
    return _call_native_mb_ret(
      LightmapGI._bindings.method_get_bounce_indirect_energy,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_generate_probes(_subdivision) {
    return _call_native_mb_no_ret(
      LightmapGI._bindings.method_set_generate_probes,
      this._owner,
      _subdivision
    );
    
  }
  get_generate_probes() {
    return _call_native_mb_ret(
      LightmapGI._bindings.method_get_generate_probes,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_bias(_bias) {
    return _call_native_mb_no_ret(
      LightmapGI._bindings.method_set_bias,
      this._owner,
      _bias
    );
    
  }
  get_bias() {
    return _call_native_mb_ret(
      LightmapGI._bindings.method_get_bias,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_environment_mode(_mode) {
    return _call_native_mb_no_ret(
      LightmapGI._bindings.method_set_environment_mode,
      this._owner,
      _mode
    );
    
  }
  get_environment_mode() {
    return _call_native_mb_ret(
      LightmapGI._bindings.method_get_environment_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_environment_custom_sky(_sky) {
    return _call_native_mb_no_ret(
      LightmapGI._bindings.method_set_environment_custom_sky,
      this._owner,
      _sky
    );
    
  }
  get_environment_custom_sky() {
    return _call_native_mb_ret(
      LightmapGI._bindings.method_get_environment_custom_sky,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_environment_custom_color(_color) {
    return _call_native_mb_no_ret(
      LightmapGI._bindings.method_set_environment_custom_color,
      this._owner,
      _color
    );
    
  }
  get_environment_custom_color() {
    return _call_native_mb_ret(
      LightmapGI._bindings.method_get_environment_custom_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_environment_custom_energy(_energy) {
    return _call_native_mb_no_ret(
      LightmapGI._bindings.method_set_environment_custom_energy,
      this._owner,
      _energy
    );
    
  }
  get_environment_custom_energy() {
    return _call_native_mb_ret(
      LightmapGI._bindings.method_get_environment_custom_energy,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_texel_scale(_texel_scale) {
    return _call_native_mb_no_ret(
      LightmapGI._bindings.method_set_texel_scale,
      this._owner,
      _texel_scale
    );
    
  }
  get_texel_scale() {
    return _call_native_mb_ret(
      LightmapGI._bindings.method_get_texel_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_max_texture_size(_max_texture_size) {
    return _call_native_mb_no_ret(
      LightmapGI._bindings.method_set_max_texture_size,
      this._owner,
      _max_texture_size
    );
    
  }
  get_max_texture_size() {
    return _call_native_mb_ret(
      LightmapGI._bindings.method_get_max_texture_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_use_denoiser(_use_denoiser) {
    return _call_native_mb_no_ret(
      LightmapGI._bindings.method_set_use_denoiser,
      this._owner,
      _use_denoiser
    );
    
  }
  is_using_denoiser() {
    return _call_native_mb_ret(
      LightmapGI._bindings.method_is_using_denoiser,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_denoiser_strength(_denoiser_strength) {
    return _call_native_mb_no_ret(
      LightmapGI._bindings.method_set_denoiser_strength,
      this._owner,
      _denoiser_strength
    );
    
  }
  get_denoiser_strength() {
    return _call_native_mb_ret(
      LightmapGI._bindings.method_get_denoiser_strength,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_denoiser_range(_denoiser_range) {
    return _call_native_mb_no_ret(
      LightmapGI._bindings.method_set_denoiser_range,
      this._owner,
      _denoiser_range
    );
    
  }
  get_denoiser_range() {
    return _call_native_mb_ret(
      LightmapGI._bindings.method_get_denoiser_range,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_interior(_enable) {
    return _call_native_mb_no_ret(
      LightmapGI._bindings.method_set_interior,
      this._owner,
      _enable
    );
    
  }
  is_interior() {
    return _call_native_mb_ret(
      LightmapGI._bindings.method_is_interior,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_directional(_directional) {
    return _call_native_mb_no_ret(
      LightmapGI._bindings.method_set_directional,
      this._owner,
      _directional
    );
    
  }
  is_directional() {
    return _call_native_mb_ret(
      LightmapGI._bindings.method_is_directional,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_use_texture_for_bounces(_use_texture_for_bounces) {
    return _call_native_mb_no_ret(
      LightmapGI._bindings.method_set_use_texture_for_bounces,
      this._owner,
      _use_texture_for_bounces
    );
    
  }
  is_using_texture_for_bounces() {
    return _call_native_mb_ret(
      LightmapGI._bindings.method_is_using_texture_for_bounces,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_camera_attributes(_camera_attributes) {
    return _call_native_mb_no_ret(
      LightmapGI._bindings.method_set_camera_attributes,
      this._owner,
      _camera_attributes
    );
    
  }
  get_camera_attributes() {
    return _call_native_mb_ret(
      LightmapGI._bindings.method_get_camera_attributes,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get quality () {
  return this.get_bake_quality();
}
set quality (new_value) {
  this.set_bake_quality(new_value);
}
get bounces () {
  return this.get_bounces();
}
set bounces (new_value) {
  this.set_bounces(new_value);
}
get bounce_indirect_energy () {
  return this.get_bounce_indirect_energy();
}
set bounce_indirect_energy (new_value) {
  this.set_bounce_indirect_energy(new_value);
}
get directional () {
  return this.is_directional();
}
set directional (new_value) {
  this.set_directional(new_value);
}
get use_texture_for_bounces () {
  return this.is_using_texture_for_bounces();
}
set use_texture_for_bounces (new_value) {
  this.set_use_texture_for_bounces(new_value);
}
get interior () {
  return this.is_interior();
}
set interior (new_value) {
  this.set_interior(new_value);
}
get use_denoiser () {
  return this.is_using_denoiser();
}
set use_denoiser (new_value) {
  this.set_use_denoiser(new_value);
}
get denoiser_strength () {
  return this.get_denoiser_strength();
}
set denoiser_strength (new_value) {
  this.set_denoiser_strength(new_value);
}
get denoiser_range () {
  return this.get_denoiser_range();
}
set denoiser_range (new_value) {
  this.set_denoiser_range(new_value);
}
get bias () {
  return this.get_bias();
}
set bias (new_value) {
  this.set_bias(new_value);
}
get texel_scale () {
  return this.get_texel_scale();
}
set texel_scale (new_value) {
  this.set_texel_scale(new_value);
}
get max_texture_size () {
  return this.get_max_texture_size();
}
set max_texture_size (new_value) {
  this.set_max_texture_size(new_value);
}
get environment_mode () {
  return this.get_environment_mode();
}
set environment_mode (new_value) {
  this.set_environment_mode(new_value);
}
get environment_custom_sky () {
  return this.get_environment_custom_sky();
}
set environment_custom_sky (new_value) {
  this.set_environment_custom_sky(new_value);
}
get environment_custom_color () {
  return this.get_environment_custom_color();
}
set environment_custom_color (new_value) {
  this.set_environment_custom_color(new_value);
}
get environment_custom_energy () {
  return this.get_environment_custom_energy();
}
set environment_custom_energy (new_value) {
  this.set_environment_custom_energy(new_value);
}
get camera_attributes () {
  return this.get_camera_attributes();
}
set camera_attributes (new_value) {
  this.set_camera_attributes(new_value);
}
get generate_probes_subdiv () {
  return this.get_generate_probes();
}
set generate_probes_subdiv (new_value) {
  this.set_generate_probes(new_value);
}
get light_data () {
  return this.get_light_data();
}
set light_data (new_value) {
  this.set_light_data(new_value);
}

  static BakeQuality = {
    BAKE_QUALITY_LOW: 0,
    BAKE_QUALITY_MEDIUM: 1,
    BAKE_QUALITY_HIGH: 2,
    BAKE_QUALITY_ULTRA: 3,
  }
  static GenerateProbes = {
    GENERATE_PROBES_DISABLED: 0,
    GENERATE_PROBES_SUBDIV_4: 1,
    GENERATE_PROBES_SUBDIV_8: 2,
    GENERATE_PROBES_SUBDIV_16: 3,
    GENERATE_PROBES_SUBDIV_32: 4,
  }
  static BakeError = {
    BAKE_ERROR_OK: 0,
    BAKE_ERROR_NO_SCENE_ROOT: 1,
    BAKE_ERROR_FOREIGN_DATA: 2,
    BAKE_ERROR_NO_LIGHTMAPPER: 3,
    BAKE_ERROR_NO_SAVE_PATH: 4,
    BAKE_ERROR_NO_MESHES: 5,
    BAKE_ERROR_MESHES_INVALID: 6,
    BAKE_ERROR_CANT_CREATE_IMAGE: 7,
    BAKE_ERROR_USER_ABORTED: 8,
    BAKE_ERROR_TEXTURE_SIZE_TOO_SMALL: 9,
    BAKE_ERROR_LIGHTMAP_TOO_SMALL: 10,
    BAKE_ERROR_ATLAS_TOO_SMALL: 11,
  }
  static EnvironmentMode = {
    ENVIRONMENT_MODE_DISABLED: 0,
    ENVIRONMENT_MODE_SCENE: 1,
    ENVIRONMENT_MODE_CUSTOM_SKY: 2,
    ENVIRONMENT_MODE_CUSTOM_COLOR: 3,
  }

  static {
    this._init_bindings();
  }
}