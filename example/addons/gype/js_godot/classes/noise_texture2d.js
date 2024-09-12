import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Texture2D } from '@js_godot/classes/texture2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_width;
  method_set_height;
  method_set_invert;
  method_get_invert;
  method_set_in_3d_space;
  method_is_in_3d_space;
  method_set_generate_mipmaps;
  method_is_generating_mipmaps;
  method_set_seamless;
  method_get_seamless;
  method_set_seamless_blend_skirt;
  method_get_seamless_blend_skirt;
  method_set_as_normal_map;
  method_is_normal_map;
  method_set_bump_strength;
  method_get_bump_strength;
  method_set_normalize;
  method_is_normalized;
  method_set_color_ramp;
  method_get_color_ramp;
  method_set_noise;
  method_get_noise;
}
export class NoiseTexture2D extends Texture2D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("NoiseTexture2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_width() {
    if (!this.#_bindings.method_set_width) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("set_width");
      this.#_bindings.method_set_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_height() {
    if (!this.#_bindings.method_set_height) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("set_height");
      this.#_bindings.method_set_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_invert() {
    if (!this.#_bindings.method_set_invert) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("set_invert");
      this.#_bindings.method_set_invert = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_invert() {
    if (!this.#_bindings.method_get_invert) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("get_invert");
      this.#_bindings.method_get_invert = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_in_3d_space() {
    if (!this.#_bindings.method_set_in_3d_space) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("set_in_3d_space");
      this.#_bindings.method_set_in_3d_space = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_in_3d_space() {
    if (!this.#_bindings.method_is_in_3d_space) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("is_in_3d_space");
      this.#_bindings.method_is_in_3d_space = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_generate_mipmaps() {
    if (!this.#_bindings.method_set_generate_mipmaps) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("set_generate_mipmaps");
      this.#_bindings.method_set_generate_mipmaps = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_generating_mipmaps() {
    if (!this.#_bindings.method_is_generating_mipmaps) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("is_generating_mipmaps");
      this.#_bindings.method_is_generating_mipmaps = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_seamless() {
    if (!this.#_bindings.method_set_seamless) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("set_seamless");
      this.#_bindings.method_set_seamless = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_seamless() {
    if (!this.#_bindings.method_get_seamless) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("get_seamless");
      this.#_bindings.method_get_seamless = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_seamless_blend_skirt() {
    if (!this.#_bindings.method_set_seamless_blend_skirt) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("set_seamless_blend_skirt");
      this.#_bindings.method_set_seamless_blend_skirt = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_seamless_blend_skirt() {
    if (!this.#_bindings.method_get_seamless_blend_skirt) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("get_seamless_blend_skirt");
      this.#_bindings.method_get_seamless_blend_skirt = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_as_normal_map() {
    if (!this.#_bindings.method_set_as_normal_map) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("set_as_normal_map");
      this.#_bindings.method_set_as_normal_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_normal_map() {
    if (!this.#_bindings.method_is_normal_map) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("is_normal_map");
      this.#_bindings.method_is_normal_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_bump_strength() {
    if (!this.#_bindings.method_set_bump_strength) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("set_bump_strength");
      this.#_bindings.method_set_bump_strength = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_bump_strength() {
    if (!this.#_bindings.method_get_bump_strength) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("get_bump_strength");
      this.#_bindings.method_get_bump_strength = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_normalize() {
    if (!this.#_bindings.method_set_normalize) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("set_normalize");
      this.#_bindings.method_set_normalize = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_normalized() {
    if (!this.#_bindings.method_is_normalized) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("is_normalized");
      this.#_bindings.method_is_normalized = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_color_ramp() {
    if (!this.#_bindings.method_set_color_ramp) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("set_color_ramp");
      this.#_bindings.method_set_color_ramp = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2756054477
      );
    }
  }
  static init_method_get_color_ramp() {
    if (!this.#_bindings.method_get_color_ramp) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("get_color_ramp");
      this.#_bindings.method_get_color_ramp = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        132272999
      );
    }
  }
  static init_method_set_noise() {
    if (!this.#_bindings.method_set_noise) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("set_noise");
      this.#_bindings.method_set_noise = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4135492439
      );
    }
  }
  static init_method_get_noise() {
    if (!this.#_bindings.method_get_noise) {
      let classname = new StringName("NoiseTexture2D");
      let methodname = new StringName("get_noise");
      this.#_bindings.method_get_noise = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        185851837
      );
    }
  }

  
  
  set_width(_width) {
    NoiseTexture2D.init_method_set_width();
    return _call_native_mb_no_ret(
      NoiseTexture2D.#_bindings.method_set_width,
      this._owner,
      _width
    );
    
  }
  set_height(_height) {
    NoiseTexture2D.init_method_set_height();
    return _call_native_mb_no_ret(
      NoiseTexture2D.#_bindings.method_set_height,
      this._owner,
      _height
    );
    
  }
  set_invert(_invert) {
    NoiseTexture2D.init_method_set_invert();
    return _call_native_mb_no_ret(
      NoiseTexture2D.#_bindings.method_set_invert,
      this._owner,
      _invert
    );
    
  }
  get_invert() {
    NoiseTexture2D.init_method_get_invert();
    return _call_native_mb_ret(
      NoiseTexture2D.#_bindings.method_get_invert,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_in_3d_space(_enable) {
    NoiseTexture2D.init_method_set_in_3d_space();
    return _call_native_mb_no_ret(
      NoiseTexture2D.#_bindings.method_set_in_3d_space,
      this._owner,
      _enable
    );
    
  }
  is_in_3d_space() {
    NoiseTexture2D.init_method_is_in_3d_space();
    return _call_native_mb_ret(
      NoiseTexture2D.#_bindings.method_is_in_3d_space,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_generate_mipmaps(_invert) {
    NoiseTexture2D.init_method_set_generate_mipmaps();
    return _call_native_mb_no_ret(
      NoiseTexture2D.#_bindings.method_set_generate_mipmaps,
      this._owner,
      _invert
    );
    
  }
  is_generating_mipmaps() {
    NoiseTexture2D.init_method_is_generating_mipmaps();
    return _call_native_mb_ret(
      NoiseTexture2D.#_bindings.method_is_generating_mipmaps,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_seamless(_seamless) {
    NoiseTexture2D.init_method_set_seamless();
    return _call_native_mb_no_ret(
      NoiseTexture2D.#_bindings.method_set_seamless,
      this._owner,
      _seamless
    );
    
  }
  get_seamless() {
    NoiseTexture2D.init_method_get_seamless();
    return _call_native_mb_ret(
      NoiseTexture2D.#_bindings.method_get_seamless,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_seamless_blend_skirt(_seamless_blend_skirt) {
    NoiseTexture2D.init_method_set_seamless_blend_skirt();
    return _call_native_mb_no_ret(
      NoiseTexture2D.#_bindings.method_set_seamless_blend_skirt,
      this._owner,
      _seamless_blend_skirt
    );
    
  }
  get_seamless_blend_skirt() {
    NoiseTexture2D.init_method_get_seamless_blend_skirt();
    return _call_native_mb_ret(
      NoiseTexture2D.#_bindings.method_get_seamless_blend_skirt,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_as_normal_map(_as_normal_map) {
    NoiseTexture2D.init_method_set_as_normal_map();
    return _call_native_mb_no_ret(
      NoiseTexture2D.#_bindings.method_set_as_normal_map,
      this._owner,
      _as_normal_map
    );
    
  }
  is_normal_map() {
    NoiseTexture2D.init_method_is_normal_map();
    return _call_native_mb_ret(
      NoiseTexture2D.#_bindings.method_is_normal_map,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_bump_strength(_bump_strength) {
    NoiseTexture2D.init_method_set_bump_strength();
    return _call_native_mb_no_ret(
      NoiseTexture2D.#_bindings.method_set_bump_strength,
      this._owner,
      _bump_strength
    );
    
  }
  get_bump_strength() {
    NoiseTexture2D.init_method_get_bump_strength();
    return _call_native_mb_ret(
      NoiseTexture2D.#_bindings.method_get_bump_strength,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_normalize(_normalize) {
    NoiseTexture2D.init_method_set_normalize();
    return _call_native_mb_no_ret(
      NoiseTexture2D.#_bindings.method_set_normalize,
      this._owner,
      _normalize
    );
    
  }
  is_normalized() {
    NoiseTexture2D.init_method_is_normalized();
    return _call_native_mb_ret(
      NoiseTexture2D.#_bindings.method_is_normalized,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_color_ramp(_gradient) {
    NoiseTexture2D.init_method_set_color_ramp();
    return _call_native_mb_no_ret(
      NoiseTexture2D.#_bindings.method_set_color_ramp,
      this._owner,
      _gradient
    );
    
  }
  get_color_ramp() {
    NoiseTexture2D.init_method_get_color_ramp();
    return _call_native_mb_ret(
      NoiseTexture2D.#_bindings.method_get_color_ramp,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_noise(_noise) {
    NoiseTexture2D.init_method_set_noise();
    return _call_native_mb_no_ret(
      NoiseTexture2D.#_bindings.method_set_noise,
      this._owner,
      _noise
    );
    
  }
  get_noise() {
    NoiseTexture2D.init_method_get_noise();
    return _call_native_mb_ret(
      NoiseTexture2D.#_bindings.method_get_noise,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get width () {
  return this.get_width();
}
set width (new_value) {
  this.set_width(new_value);
}
get height () {
  return this.get_height();
}
set height (new_value) {
  this.set_height(new_value);
}
get invert () {
  return this.get_invert();
}
set invert (new_value) {
  this.set_invert(new_value);
}
get in_3d_space () {
  return this.is_in_3d_space();
}
set in_3d_space (new_value) {
  this.set_in_3d_space(new_value);
}
get generate_mipmaps () {
  return this.is_generating_mipmaps();
}
set generate_mipmaps (new_value) {
  this.set_generate_mipmaps(new_value);
}
get seamless () {
  return this.get_seamless();
}
set seamless (new_value) {
  this.set_seamless(new_value);
}
get seamless_blend_skirt () {
  return this.get_seamless_blend_skirt();
}
set seamless_blend_skirt (new_value) {
  this.set_seamless_blend_skirt(new_value);
}
get as_normal_map () {
  return this.is_normal_map();
}
set as_normal_map (new_value) {
  this.set_as_normal_map(new_value);
}
get bump_strength () {
  return this.get_bump_strength();
}
set bump_strength (new_value) {
  this.set_bump_strength(new_value);
}
get normalize () {
  return this.is_normalized();
}
set normalize (new_value) {
  this.set_normalize(new_value);
}
get color_ramp () {
  return this.get_color_ramp();
}
set color_ramp (new_value) {
  this.set_color_ramp(new_value);
}
get noise () {
  return this.get_noise();
}
set noise (new_value) {
  this.set_noise(new_value);
}

}