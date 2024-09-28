import * as internal from '__internal__';
import { Texture3D } from '@js_godot/classes/texture3d'
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
@GodotClass
export class NoiseTexture3D extends Texture3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("NoiseTexture3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_width() {
    if (!this._bindings.method_set_width) {
      let classname = new StringName("NoiseTexture3D");
      let methodname = new StringName("set_width");
      this._bindings.method_set_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_height() {
    if (!this._bindings.method_set_height) {
      let classname = new StringName("NoiseTexture3D");
      let methodname = new StringName("set_height");
      this._bindings.method_set_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_depth() {
    if (!this._bindings.method_set_depth) {
      let classname = new StringName("NoiseTexture3D");
      let methodname = new StringName("set_depth");
      this._bindings.method_set_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_invert() {
    if (!this._bindings.method_set_invert) {
      let classname = new StringName("NoiseTexture3D");
      let methodname = new StringName("set_invert");
      this._bindings.method_set_invert = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_invert() {
    if (!this._bindings.method_get_invert) {
      let classname = new StringName("NoiseTexture3D");
      let methodname = new StringName("get_invert");
      this._bindings.method_get_invert = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_seamless() {
    if (!this._bindings.method_set_seamless) {
      let classname = new StringName("NoiseTexture3D");
      let methodname = new StringName("set_seamless");
      this._bindings.method_set_seamless = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_seamless() {
    if (!this._bindings.method_get_seamless) {
      let classname = new StringName("NoiseTexture3D");
      let methodname = new StringName("get_seamless");
      this._bindings.method_get_seamless = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_seamless_blend_skirt() {
    if (!this._bindings.method_set_seamless_blend_skirt) {
      let classname = new StringName("NoiseTexture3D");
      let methodname = new StringName("set_seamless_blend_skirt");
      this._bindings.method_set_seamless_blend_skirt = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_seamless_blend_skirt() {
    if (!this._bindings.method_get_seamless_blend_skirt) {
      let classname = new StringName("NoiseTexture3D");
      let methodname = new StringName("get_seamless_blend_skirt");
      this._bindings.method_get_seamless_blend_skirt = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_normalize() {
    if (!this._bindings.method_set_normalize) {
      let classname = new StringName("NoiseTexture3D");
      let methodname = new StringName("set_normalize");
      this._bindings.method_set_normalize = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_normalized() {
    if (!this._bindings.method_is_normalized) {
      let classname = new StringName("NoiseTexture3D");
      let methodname = new StringName("is_normalized");
      this._bindings.method_is_normalized = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_color_ramp() {
    if (!this._bindings.method_set_color_ramp) {
      let classname = new StringName("NoiseTexture3D");
      let methodname = new StringName("set_color_ramp");
      this._bindings.method_set_color_ramp = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2756054477
      );
    }
  }
  static init_method_get_color_ramp() {
    if (!this._bindings.method_get_color_ramp) {
      let classname = new StringName("NoiseTexture3D");
      let methodname = new StringName("get_color_ramp");
      this._bindings.method_get_color_ramp = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        132272999
      );
    }
  }
  static init_method_set_noise() {
    if (!this._bindings.method_set_noise) {
      let classname = new StringName("NoiseTexture3D");
      let methodname = new StringName("set_noise");
      this._bindings.method_set_noise = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4135492439
      );
    }
  }
  static init_method_get_noise() {
    if (!this._bindings.method_get_noise) {
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
    NoiseTexture3D.init_method_set_width();
    return _call_native_mb_no_ret(
      NoiseTexture3D._bindings.method_set_width,
      this._owner,
      _width
    );
    
  }
  set_height(_height) {
    NoiseTexture3D.init_method_set_height();
    return _call_native_mb_no_ret(
      NoiseTexture3D._bindings.method_set_height,
      this._owner,
      _height
    );
    
  }
  set_depth(_depth) {
    NoiseTexture3D.init_method_set_depth();
    return _call_native_mb_no_ret(
      NoiseTexture3D._bindings.method_set_depth,
      this._owner,
      _depth
    );
    
  }
  set_invert(_invert) {
    NoiseTexture3D.init_method_set_invert();
    return _call_native_mb_no_ret(
      NoiseTexture3D._bindings.method_set_invert,
      this._owner,
      _invert
    );
    
  }
  get_invert() {
    NoiseTexture3D.init_method_get_invert();
    return _call_native_mb_ret(
      NoiseTexture3D._bindings.method_get_invert,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_seamless(_seamless) {
    NoiseTexture3D.init_method_set_seamless();
    return _call_native_mb_no_ret(
      NoiseTexture3D._bindings.method_set_seamless,
      this._owner,
      _seamless
    );
    
  }
  get_seamless() {
    NoiseTexture3D.init_method_get_seamless();
    return _call_native_mb_ret(
      NoiseTexture3D._bindings.method_get_seamless,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_seamless_blend_skirt(_seamless_blend_skirt) {
    NoiseTexture3D.init_method_set_seamless_blend_skirt();
    return _call_native_mb_no_ret(
      NoiseTexture3D._bindings.method_set_seamless_blend_skirt,
      this._owner,
      _seamless_blend_skirt
    );
    
  }
  get_seamless_blend_skirt() {
    NoiseTexture3D.init_method_get_seamless_blend_skirt();
    return _call_native_mb_ret(
      NoiseTexture3D._bindings.method_get_seamless_blend_skirt,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_normalize(_normalize) {
    NoiseTexture3D.init_method_set_normalize();
    return _call_native_mb_no_ret(
      NoiseTexture3D._bindings.method_set_normalize,
      this._owner,
      _normalize
    );
    
  }
  is_normalized() {
    NoiseTexture3D.init_method_is_normalized();
    return _call_native_mb_ret(
      NoiseTexture3D._bindings.method_is_normalized,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_color_ramp(_gradient) {
    NoiseTexture3D.init_method_set_color_ramp();
    return _call_native_mb_no_ret(
      NoiseTexture3D._bindings.method_set_color_ramp,
      this._owner,
      _gradient
    );
    
  }
  get_color_ramp() {
    NoiseTexture3D.init_method_get_color_ramp();
    return _call_native_mb_ret(
      NoiseTexture3D._bindings.method_get_color_ramp,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_noise(_noise) {
    NoiseTexture3D.init_method_set_noise();
    return _call_native_mb_no_ret(
      NoiseTexture3D._bindings.method_set_noise,
      this._owner,
      _noise
    );
    
  }
  get_noise() {
    NoiseTexture3D.init_method_get_noise();
    return _call_native_mb_ret(
      NoiseTexture3D._bindings.method_get_noise,
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
get depth () {
  return this.get_depth();
}
set depth (new_value) {
  this.set_depth(new_value);
}
get invert () {
  return this.get_invert();
}
set invert (new_value) {
  this.set_invert(new_value);
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