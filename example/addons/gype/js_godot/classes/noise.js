import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_get_noise_1d;
  method_get_noise_2d;
  method_get_noise_2dv;
  method_get_noise_3d;
  method_get_noise_3dv;
  method_get_image;
  method_get_seamless_image;
  method_get_image_3d;
  method_get_seamless_image_3d;
}
@GodotClass
export class Noise extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Noise");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_noise_1d() {
    if (!this._bindings.method_get_noise_1d) {
      let classname = new StringName("Noise");
      let methodname = new StringName("get_noise_1d");
      this._bindings.method_get_noise_1d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3919130443
      );
    }
  }
  static init_method_get_noise_2d() {
    if (!this._bindings.method_get_noise_2d) {
      let classname = new StringName("Noise");
      let methodname = new StringName("get_noise_2d");
      this._bindings.method_get_noise_2d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2753205203
      );
    }
  }
  static init_method_get_noise_2dv() {
    if (!this._bindings.method_get_noise_2dv) {
      let classname = new StringName("Noise");
      let methodname = new StringName("get_noise_2dv");
      this._bindings.method_get_noise_2dv = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2276447920
      );
    }
  }
  static init_method_get_noise_3d() {
    if (!this._bindings.method_get_noise_3d) {
      let classname = new StringName("Noise");
      let methodname = new StringName("get_noise_3d");
      this._bindings.method_get_noise_3d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        973811851
      );
    }
  }
  static init_method_get_noise_3dv() {
    if (!this._bindings.method_get_noise_3dv) {
      let classname = new StringName("Noise");
      let methodname = new StringName("get_noise_3dv");
      this._bindings.method_get_noise_3dv = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1109078154
      );
    }
  }
  static init_method_get_image() {
    if (!this._bindings.method_get_image) {
      let classname = new StringName("Noise");
      let methodname = new StringName("get_image");
      this._bindings.method_get_image = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3180683109
      );
    }
  }
  static init_method_get_seamless_image() {
    if (!this._bindings.method_get_seamless_image) {
      let classname = new StringName("Noise");
      let methodname = new StringName("get_seamless_image");
      this._bindings.method_get_seamless_image = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2770743602
      );
    }
  }
  static init_method_get_image_3d() {
    if (!this._bindings.method_get_image_3d) {
      let classname = new StringName("Noise");
      let methodname = new StringName("get_image_3d");
      this._bindings.method_get_image_3d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3977814329
      );
    }
  }
  static init_method_get_seamless_image_3d() {
    if (!this._bindings.method_get_seamless_image_3d) {
      let classname = new StringName("Noise");
      let methodname = new StringName("get_seamless_image_3d");
      this._bindings.method_get_seamless_image_3d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        451006340
      );
    }
  }

  
  
  get_noise_1d(_x) {
    Noise.init_method_get_noise_1d();
    return _call_native_mb_ret(
      Noise._bindings.method_get_noise_1d,
      this._owner,
			Variant.Type.FLOAT,
    
      _x
    );
    
  }
  get_noise_2d(_x, _y) {
    Noise.init_method_get_noise_2d();
    return _call_native_mb_ret(
      Noise._bindings.method_get_noise_2d,
      this._owner,
			Variant.Type.FLOAT,
    
      _x, _y
    );
    
  }
  get_noise_2dv(_v) {
    Noise.init_method_get_noise_2dv();
    return _call_native_mb_ret(
      Noise._bindings.method_get_noise_2dv,
      this._owner,
			Variant.Type.FLOAT,
    
      _v
    );
    
  }
  get_noise_3d(_x, _y, _z) {
    Noise.init_method_get_noise_3d();
    return _call_native_mb_ret(
      Noise._bindings.method_get_noise_3d,
      this._owner,
			Variant.Type.FLOAT,
    
      _x, _y, _z
    );
    
  }
  get_noise_3dv(_v) {
    Noise.init_method_get_noise_3dv();
    return _call_native_mb_ret(
      Noise._bindings.method_get_noise_3dv,
      this._owner,
			Variant.Type.FLOAT,
    
      _v
    );
    
  }
  get_image(_width, _height, _invert, _in_3d_space, _normalize) {
    Noise.init_method_get_image();
    return _call_native_mb_ret(
      Noise._bindings.method_get_image,
      this._owner,
			Variant.Type.OBJECT,
      _width, _height, _invert, _in_3d_space, _normalize
    );
    
  }
  get_seamless_image(_width, _height, _invert, _in_3d_space, _skirt, _normalize) {
    Noise.init_method_get_seamless_image();
    return _call_native_mb_ret(
      Noise._bindings.method_get_seamless_image,
      this._owner,
			Variant.Type.OBJECT,
      _width, _height, _invert, _in_3d_space, _skirt, _normalize
    );
    
  }
  get_image_3d(_width, _height, _depth, _invert, _normalize) {
    Noise.init_method_get_image_3d();
    return _call_native_mb_ret(
      Noise._bindings.method_get_image_3d,
      this._owner,
			Variant.Type.ARRAY,
      _width, _height, _depth, _invert, _normalize
    );
    
  }
  get_seamless_image_3d(_width, _height, _depth, _invert, _skirt, _normalize) {
    Noise.init_method_get_seamless_image_3d();
    return _call_native_mb_ret(
      Noise._bindings.method_get_seamless_image_3d,
      this._owner,
			Variant.Type.ARRAY,
      _width, _height, _depth, _invert, _skirt, _normalize
    );
    
  }
  

}