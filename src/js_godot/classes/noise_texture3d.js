import * as internal from '__internal__';
import { Texture3D } from 'src/js_godot/classes/texture3d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_width;
    method_set_height;
    method_set_depth;
    method_set_invert;
    method_get_invert;
    method_set_seamless;
    method_get_seamless;
    method_set_seamless_blend_skirt;
    method_get_seamless_blend_skirt;
    method_set_normalize;
    method_is_normalized;
    method_set_color_ramp;
    method_get_color_ramp;
    method_set_noise;
    method_get_noise;
}


export class NoiseTexture3D extends Texture3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("NoiseTexture3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("NoiseTexture3D");
        let methodname = new StringName("set_width");
        this._bindings.method_set_width = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("NoiseTexture3D");
        let methodname = new StringName("set_height");
        this._bindings.method_set_height = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("NoiseTexture3D");
        let methodname = new StringName("set_depth");
        this._bindings.method_set_depth = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("NoiseTexture3D");
        let methodname = new StringName("set_invert");
        this._bindings.method_set_invert = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("NoiseTexture3D");
        let methodname = new StringName("get_invert");
        this._bindings.method_get_invert = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("NoiseTexture3D");
        let methodname = new StringName("set_seamless");
        this._bindings.method_set_seamless = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("NoiseTexture3D");
        let methodname = new StringName("get_seamless");
        this._bindings.method_get_seamless = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2240911060
        );
      }
      {
        let classname = new StringName("NoiseTexture3D");
        let methodname = new StringName("set_seamless_blend_skirt");
        this._bindings.method_set_seamless_blend_skirt = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("NoiseTexture3D");
        let methodname = new StringName("get_seamless_blend_skirt");
        this._bindings.method_get_seamless_blend_skirt = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          191475506
        );
      }
      {
        let classname = new StringName("NoiseTexture3D");
        let methodname = new StringName("set_normalize");
        this._bindings.method_set_normalize = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("NoiseTexture3D");
        let methodname = new StringName("is_normalized");
        this._bindings.method_is_normalized = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("NoiseTexture3D");
        let methodname = new StringName("set_color_ramp");
        this._bindings.method_set_color_ramp = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2756054477
        );
      }
      {
        let classname = new StringName("NoiseTexture3D");
        let methodname = new StringName("get_color_ramp");
        this._bindings.method_get_color_ramp = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          132272999
        );
      }
      {
        let classname = new StringName("NoiseTexture3D");
        let methodname = new StringName("set_noise");
        this._bindings.method_set_noise = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4135492439
        );
      }
      {
        let classname = new StringName("NoiseTexture3D");
        let methodname = new StringName("get_noise");
        this._bindings.method_get_noise = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          185851837
        );
      }
  }
  set_width(_width) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_width,
      this._owner,
      _width
    );
    
  }
  set_height(_height) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_height,
      this._owner,
      _height
    );
    
  }
  set_depth(_depth) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_depth,
      this._owner,
      _depth
    );
    
  }
  set_invert(_invert) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_invert,
      this._owner,
      _invert
    );
    
  }
  get_invert() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_invert,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_seamless(_seamless) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_seamless,
      this._owner,
      _seamless
    );
    
  }
  get_seamless() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_seamless,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_seamless_blend_skirt(_seamless_blend_skirt) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_seamless_blend_skirt,
      this._owner,
      _seamless_blend_skirt
    );
    
  }
  get_seamless_blend_skirt() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_seamless_blend_skirt,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_normalize(_normalize) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_normalize,
      this._owner,
      _normalize
    );
    
  }
  is_normalized() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_normalized,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_color_ramp(_gradient) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_color_ramp,
      this._owner,
      _gradient
    );
    
  }
  get_color_ramp() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_color_ramp,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_noise(_noise) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_noise,
      this._owner,
      _noise
    );
    
  }
  get_noise() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_noise,
      this._owner,
			Variant.INT,
      
    );
    
  }
}