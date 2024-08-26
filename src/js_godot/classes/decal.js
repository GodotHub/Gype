import * as internal from '__internal__';
import { VisualInstance3D } from 'src/js_godot/classesvisual_instance3d'
import { Color } from 'src/js_godot/variant/color'
import { Vector3 } from 'src/js_godot/variant/vector3'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Decal");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_texture");
      this._bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2086764391
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_texture");
      this._bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3244119503
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_emission_energy");
      this._bindings.method_set_emission_energy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_emission_energy");
      this._bindings.method_get_emission_energy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_albedo_mix");
      this._bindings.method_set_albedo_mix = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_albedo_mix");
      this._bindings.method_get_albedo_mix = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_modulate");
      this._bindings.method_set_modulate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_modulate");
      this._bindings.method_get_modulate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_upper_fade");
      this._bindings.method_set_upper_fade = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_upper_fade");
      this._bindings.method_get_upper_fade = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_lower_fade");
      this._bindings.method_set_lower_fade = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_lower_fade");
      this._bindings.method_get_lower_fade = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_normal_fade");
      this._bindings.method_set_normal_fade = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_normal_fade");
      this._bindings.method_get_normal_fade = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_enable_distance_fade");
      this._bindings.method_set_enable_distance_fade = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("is_distance_fade_enabled");
      this._bindings.method_is_distance_fade_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_distance_fade_begin");
      this._bindings.method_set_distance_fade_begin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_distance_fade_begin");
      this._bindings.method_get_distance_fade_begin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_distance_fade_length");
      this._bindings.method_set_distance_fade_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_distance_fade_length");
      this._bindings.method_get_distance_fade_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("set_cull_mask");
      this._bindings.method_set_cull_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Decal");
      let methodname = new StringName("get_cull_mask");
      this._bindings.method_get_cull_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  set_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_size,
      this._owner,
      _size
    );
  }
  get_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  set_texture(_type, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture,
      this._owner,
      _type, _texture
    );
  }
  get_texture(_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture,
      this._owner,
			Variant.INT,
      _type
    );
  }
  set_emission_energy(_energy) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_energy,
      this._owner,
      _energy
    );
  }
  get_emission_energy() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_energy,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_albedo_mix(_energy) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_albedo_mix,
      this._owner,
      _energy
    );
  }
  get_albedo_mix() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_albedo_mix,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_modulate(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_modulate,
      this._owner,
      _color
    );
  }
  get_modulate() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_modulate,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_upper_fade(_fade) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_upper_fade,
      this._owner,
      _fade
    );
  }
  get_upper_fade() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_upper_fade,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_lower_fade(_fade) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_lower_fade,
      this._owner,
      _fade
    );
  }
  get_lower_fade() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_lower_fade,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_normal_fade(_fade) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_normal_fade,
      this._owner,
      _fade
    );
  }
  get_normal_fade() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_normal_fade,
      this._owner,
			Variant.Type.FLOAT,
      
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
  set_cull_mask(_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cull_mask,
      this._owner,
      _mask
    );
  }
  get_cull_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cull_mask,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  static DecalTexture = {
    TEXTURE_ALBEDO: 0,
    TEXTURE_NORMAL: 1,
    TEXTURE_ORM: 2,
    TEXTURE_EMISSION: 3,
    TEXTURE_MAX: 4,
  }
}