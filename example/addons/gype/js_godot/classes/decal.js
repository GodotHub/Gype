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

class _MethodBindings {
  method_set_size;
  method_get_size;
  method_set_texture;
  method_get_texture;
  method_set_emission_energy;
  method_get_emission_energy;
  method_set_albedo_mix;
  method_get_albedo_mix;
  method_set_modulate;
  method_get_modulate;
  method_set_upper_fade;
  method_get_upper_fade;
  method_set_lower_fade;
  method_get_lower_fade;
  method_set_normal_fade;
  method_get_normal_fade;
  method_set_enable_distance_fade;
  method_is_distance_fade_enabled;
  method_set_distance_fade_begin;
  method_get_distance_fade_begin;
  method_set_distance_fade_length;
  method_get_distance_fade_length;
  method_set_cull_mask;
  method_get_cull_mask;
}
export class Decal extends VisualInstance3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Decal");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_size() {
    if (!this.#_bindings.method_set_size) {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_size");
      this.#_bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_size() {
    if (!this.#_bindings.method_get_size) {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_size");
      this.#_bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_texture() {
    if (!this.#_bindings.method_set_texture) {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_texture");
      this.#_bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2086764391
      );
    }
  }
  static init_method_get_texture() {
    if (!this.#_bindings.method_get_texture) {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_texture");
      this.#_bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3244119503
      );
    }
  }
  static init_method_set_emission_energy() {
    if (!this.#_bindings.method_set_emission_energy) {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_emission_energy");
      this.#_bindings.method_set_emission_energy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_emission_energy() {
    if (!this.#_bindings.method_get_emission_energy) {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_emission_energy");
      this.#_bindings.method_get_emission_energy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_albedo_mix() {
    if (!this.#_bindings.method_set_albedo_mix) {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_albedo_mix");
      this.#_bindings.method_set_albedo_mix = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_albedo_mix() {
    if (!this.#_bindings.method_get_albedo_mix) {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_albedo_mix");
      this.#_bindings.method_get_albedo_mix = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_modulate() {
    if (!this.#_bindings.method_set_modulate) {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_modulate");
      this.#_bindings.method_set_modulate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_modulate() {
    if (!this.#_bindings.method_get_modulate) {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_modulate");
      this.#_bindings.method_get_modulate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_upper_fade() {
    if (!this.#_bindings.method_set_upper_fade) {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_upper_fade");
      this.#_bindings.method_set_upper_fade = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_upper_fade() {
    if (!this.#_bindings.method_get_upper_fade) {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_upper_fade");
      this.#_bindings.method_get_upper_fade = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_lower_fade() {
    if (!this.#_bindings.method_set_lower_fade) {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_lower_fade");
      this.#_bindings.method_set_lower_fade = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_lower_fade() {
    if (!this.#_bindings.method_get_lower_fade) {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_lower_fade");
      this.#_bindings.method_get_lower_fade = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_normal_fade() {
    if (!this.#_bindings.method_set_normal_fade) {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_normal_fade");
      this.#_bindings.method_set_normal_fade = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_normal_fade() {
    if (!this.#_bindings.method_get_normal_fade) {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_normal_fade");
      this.#_bindings.method_get_normal_fade = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_enable_distance_fade() {
    if (!this.#_bindings.method_set_enable_distance_fade) {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_enable_distance_fade");
      this.#_bindings.method_set_enable_distance_fade = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_distance_fade_enabled() {
    if (!this.#_bindings.method_is_distance_fade_enabled) {
      let classname = new StringName("Decal");
      let methodname = new StringName("is_distance_fade_enabled");
      this.#_bindings.method_is_distance_fade_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_distance_fade_begin() {
    if (!this.#_bindings.method_set_distance_fade_begin) {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_distance_fade_begin");
      this.#_bindings.method_set_distance_fade_begin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_distance_fade_begin() {
    if (!this.#_bindings.method_get_distance_fade_begin) {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_distance_fade_begin");
      this.#_bindings.method_get_distance_fade_begin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_distance_fade_length() {
    if (!this.#_bindings.method_set_distance_fade_length) {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_distance_fade_length");
      this.#_bindings.method_set_distance_fade_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_distance_fade_length() {
    if (!this.#_bindings.method_get_distance_fade_length) {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_distance_fade_length");
      this.#_bindings.method_get_distance_fade_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_cull_mask() {
    if (!this.#_bindings.method_set_cull_mask) {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_cull_mask");
      this.#_bindings.method_set_cull_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_cull_mask() {
    if (!this.#_bindings.method_get_cull_mask) {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_cull_mask");
      this.#_bindings.method_get_cull_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  set_size(_size) {
    Decal.init_method_set_size();
    return _call_native_mb_no_ret(
      Decal.#_bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_size() {
    Decal.init_method_get_size();
    return _call_native_mb_ret(
      Decal.#_bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_texture(_type, _texture) {
    Decal.init_method_set_texture();
    return _call_native_mb_no_ret(
      Decal.#_bindings.method_set_texture,
      this._owner,
      _type, _texture
    );
    
  }
  get_texture(_type) {
    Decal.init_method_get_texture();
    return _call_native_mb_ret(
      Decal.#_bindings.method_get_texture,
      this._owner,
			Variant.Type.OBJECT,
      _type
    );
    
  }
  set_emission_energy(_energy) {
    Decal.init_method_set_emission_energy();
    return _call_native_mb_no_ret(
      Decal.#_bindings.method_set_emission_energy,
      this._owner,
      _energy
    );
    
  }
  get_emission_energy() {
    Decal.init_method_get_emission_energy();
    return _call_native_mb_ret(
      Decal.#_bindings.method_get_emission_energy,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_albedo_mix(_energy) {
    Decal.init_method_set_albedo_mix();
    return _call_native_mb_no_ret(
      Decal.#_bindings.method_set_albedo_mix,
      this._owner,
      _energy
    );
    
  }
  get_albedo_mix() {
    Decal.init_method_get_albedo_mix();
    return _call_native_mb_ret(
      Decal.#_bindings.method_get_albedo_mix,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_modulate(_color) {
    Decal.init_method_set_modulate();
    return _call_native_mb_no_ret(
      Decal.#_bindings.method_set_modulate,
      this._owner,
      _color
    );
    
  }
  get_modulate() {
    Decal.init_method_get_modulate();
    return _call_native_mb_ret(
      Decal.#_bindings.method_get_modulate,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_upper_fade(_fade) {
    Decal.init_method_set_upper_fade();
    return _call_native_mb_no_ret(
      Decal.#_bindings.method_set_upper_fade,
      this._owner,
      _fade
    );
    
  }
  get_upper_fade() {
    Decal.init_method_get_upper_fade();
    return _call_native_mb_ret(
      Decal.#_bindings.method_get_upper_fade,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_lower_fade(_fade) {
    Decal.init_method_set_lower_fade();
    return _call_native_mb_no_ret(
      Decal.#_bindings.method_set_lower_fade,
      this._owner,
      _fade
    );
    
  }
  get_lower_fade() {
    Decal.init_method_get_lower_fade();
    return _call_native_mb_ret(
      Decal.#_bindings.method_get_lower_fade,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_normal_fade(_fade) {
    Decal.init_method_set_normal_fade();
    return _call_native_mb_no_ret(
      Decal.#_bindings.method_set_normal_fade,
      this._owner,
      _fade
    );
    
  }
  get_normal_fade() {
    Decal.init_method_get_normal_fade();
    return _call_native_mb_ret(
      Decal.#_bindings.method_get_normal_fade,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_enable_distance_fade(_enable) {
    Decal.init_method_set_enable_distance_fade();
    return _call_native_mb_no_ret(
      Decal.#_bindings.method_set_enable_distance_fade,
      this._owner,
      _enable
    );
    
  }
  is_distance_fade_enabled() {
    Decal.init_method_is_distance_fade_enabled();
    return _call_native_mb_ret(
      Decal.#_bindings.method_is_distance_fade_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_distance_fade_begin(_distance) {
    Decal.init_method_set_distance_fade_begin();
    return _call_native_mb_no_ret(
      Decal.#_bindings.method_set_distance_fade_begin,
      this._owner,
      _distance
    );
    
  }
  get_distance_fade_begin() {
    Decal.init_method_get_distance_fade_begin();
    return _call_native_mb_ret(
      Decal.#_bindings.method_get_distance_fade_begin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_distance_fade_length(_distance) {
    Decal.init_method_set_distance_fade_length();
    return _call_native_mb_no_ret(
      Decal.#_bindings.method_set_distance_fade_length,
      this._owner,
      _distance
    );
    
  }
  get_distance_fade_length() {
    Decal.init_method_get_distance_fade_length();
    return _call_native_mb_ret(
      Decal.#_bindings.method_get_distance_fade_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_cull_mask(_mask) {
    Decal.init_method_set_cull_mask();
    return _call_native_mb_no_ret(
      Decal.#_bindings.method_set_cull_mask,
      this._owner,
      _mask
    );
    
  }
  get_cull_mask() {
    Decal.init_method_get_cull_mask();
    return _call_native_mb_ret(
      Decal.#_bindings.method_get_cull_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get size () {
  return this.get_size();
}
set size (new_value) {
  this.set_size(new_value);
}
get texture_albedo () {
  return this.get_texture();
}
set texture_albedo (new_value) {
  this.set_texture(new_value);
}
get texture_normal () {
  return this.get_texture();
}
set texture_normal (new_value) {
  this.set_texture(new_value);
}
get texture_orm () {
  return this.get_texture();
}
set texture_orm (new_value) {
  this.set_texture(new_value);
}
get texture_emission () {
  return this.get_texture();
}
set texture_emission (new_value) {
  this.set_texture(new_value);
}
get emission_energy () {
  return this.get_emission_energy();
}
set emission_energy (new_value) {
  this.set_emission_energy(new_value);
}
get modulate () {
  return this.get_modulate();
}
set modulate (new_value) {
  this.set_modulate(new_value);
}
get albedo_mix () {
  return this.get_albedo_mix();
}
set albedo_mix (new_value) {
  this.set_albedo_mix(new_value);
}
get normal_fade () {
  return this.get_normal_fade();
}
set normal_fade (new_value) {
  this.set_normal_fade(new_value);
}
get upper_fade () {
  return this.get_upper_fade();
}
set upper_fade (new_value) {
  this.set_upper_fade(new_value);
}
get lower_fade () {
  return this.get_lower_fade();
}
set lower_fade (new_value) {
  this.set_lower_fade(new_value);
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
get distance_fade_length () {
  return this.get_distance_fade_length();
}
set distance_fade_length (new_value) {
  this.set_distance_fade_length(new_value);
}
get cull_mask () {
  return this.get_cull_mask();
}
set cull_mask (new_value) {
  this.set_cull_mask(new_value);
}

  static DecalTexture = {
    TEXTURE_ALBEDO: 0,
    TEXTURE_NORMAL: 1,
    TEXTURE_ORM: 2,
    TEXTURE_EMISSION: 3,
    TEXTURE_MAX: 4,
  }
}