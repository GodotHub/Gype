import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { Material } from 'src/js_godot/classes/material'
import { Color } from 'src/js_godot/variant/color'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_density;
    method_get_density;
    method_set_albedo;
    method_get_albedo;
    method_set_emission;
    method_get_emission;
    method_set_height_falloff;
    method_get_height_falloff;
    method_set_edge_fade;
    method_get_edge_fade;
    method_set_density_texture;
    method_get_density_texture;
}


export class FogMaterial extends Material{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("FogMaterial");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("FogMaterial");
        let methodname = new StringName("set_density");
        this._bindings.method_set_density = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("FogMaterial");
        let methodname = new StringName("get_density");
        this._bindings.method_get_density = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("FogMaterial");
        let methodname = new StringName("set_albedo");
        this._bindings.method_set_albedo = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("FogMaterial");
        let methodname = new StringName("get_albedo");
        this._bindings.method_get_albedo = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("FogMaterial");
        let methodname = new StringName("set_emission");
        this._bindings.method_set_emission = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("FogMaterial");
        let methodname = new StringName("get_emission");
        this._bindings.method_get_emission = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("FogMaterial");
        let methodname = new StringName("set_height_falloff");
        this._bindings.method_set_height_falloff = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("FogMaterial");
        let methodname = new StringName("get_height_falloff");
        this._bindings.method_get_height_falloff = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("FogMaterial");
        let methodname = new StringName("set_edge_fade");
        this._bindings.method_set_edge_fade = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("FogMaterial");
        let methodname = new StringName("get_edge_fade");
        this._bindings.method_get_edge_fade = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("FogMaterial");
        let methodname = new StringName("set_density_texture");
        this._bindings.method_set_density_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1188404210
        );
      }
      {
        let classname = new StringName("FogMaterial");
        let methodname = new StringName("get_density_texture");
        this._bindings.method_get_density_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373985333
        );
      }
  }
  set_density(_density) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_density,
      this._owner,
      _density
    );
    
  }
  get_density() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_density,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_albedo(_albedo) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_albedo,
      this._owner,
      _albedo
    );
    
  }
  get_albedo() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_albedo,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_emission(_emission) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission,
      this._owner,
      _emission
    );
    
  }
  get_emission() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_height_falloff(_height_falloff) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_height_falloff,
      this._owner,
      _height_falloff
    );
    
  }
  get_height_falloff() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_height_falloff,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_edge_fade(_edge_fade) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_edge_fade,
      this._owner,
      _edge_fade
    );
    
  }
  get_edge_fade() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_edge_fade,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_density_texture(_density_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_density_texture,
      this._owner,
      _density_texture
    );
    
  }
  get_density_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_density_texture,
      this._owner,
			Variant.INT,
      
    );
    
  }
}