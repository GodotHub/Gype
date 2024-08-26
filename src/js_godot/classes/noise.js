import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { Vector2 } from 'src/js_godot/variant/vector2'
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


export class Noise extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Noise");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("Noise");
      let methodname = new StringName("get_noise_1d");
      this._bindings.method_get_noise_1d = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3919130443
      );
    }
    {
      let classname = new StringName("Noise");
      let methodname = new StringName("get_noise_2d");
      this._bindings.method_get_noise_2d = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2753205203
      );
    }
    {
      let classname = new StringName("Noise");
      let methodname = new StringName("get_noise_2dv");
      this._bindings.method_get_noise_2dv = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2276447920
      );
    }
    {
      let classname = new StringName("Noise");
      let methodname = new StringName("get_noise_3d");
      this._bindings.method_get_noise_3d = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        973811851
      );
    }
    {
      let classname = new StringName("Noise");
      let methodname = new StringName("get_noise_3dv");
      this._bindings.method_get_noise_3dv = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1109078154
      );
    }
    {
      let classname = new StringName("Noise");
      let methodname = new StringName("get_image");
      this._bindings.method_get_image = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3180683109
      );
    }
    {
      let classname = new StringName("Noise");
      let methodname = new StringName("get_seamless_image");
      this._bindings.method_get_seamless_image = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2770743602
      );
    }
    {
      let classname = new StringName("Noise");
      let methodname = new StringName("get_image_3d");
      this._bindings.method_get_image_3d = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3977814329
      );
    }
    {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_noise_1d,
      this._owner,
			Variant.Type.FLOAT,
      _x
    );
  }
  get_noise_2d(_x, _y) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_noise_2d,
      this._owner,
			Variant.Type.FLOAT,
      _x, _y
    );
  }
  get_noise_2dv(_v) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_noise_2dv,
      this._owner,
			Variant.Type.FLOAT,
      _v
    );
  }
  get_noise_3d(_x, _y, _z) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_noise_3d,
      this._owner,
			Variant.Type.FLOAT,
      _x, _y, _z
    );
  }
  get_noise_3dv(_v) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_noise_3dv,
      this._owner,
			Variant.Type.FLOAT,
      _v
    );
  }
  get_image(_width, _height, _invert, _in_3d_space, _normalize) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_image,
      this._owner,
			Variant.INT,
      _width, _height, _invert, _in_3d_space, _normalize
    );
  }
  get_seamless_image(_width, _height, _invert, _in_3d_space, _skirt, _normalize) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_seamless_image,
      this._owner,
			Variant.INT,
      _width, _height, _invert, _in_3d_space, _skirt, _normalize
    );
  }
  get_image_3d(_width, _height, _depth, _invert, _normalize) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_image_3d,
      this._owner,
			Variant.INT,
      _width, _height, _depth, _invert, _normalize
    );
  }
  get_seamless_image_3d(_width, _height, _depth, _invert, _skirt, _normalize) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_seamless_image_3d,
      this._owner,
			Variant.INT,
      _width, _height, _depth, _invert, _skirt, _normalize
    );
  }
}