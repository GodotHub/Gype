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
  method_set_curve_x;
  method_get_curve_x;
  method_set_curve_y;
  method_get_curve_y;
  method_set_curve_z;
  method_get_curve_z;
}
export class CurveXYZTexture extends Texture2D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("CurveXYZTexture");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_width() {
    if (!this.#_bindings.method_set_width) {
      let classname = new StringName("CurveXYZTexture");
      let methodname = new StringName("set_width");
      this.#_bindings.method_set_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_curve_x() {
    if (!this.#_bindings.method_set_curve_x) {
      let classname = new StringName("CurveXYZTexture");
      let methodname = new StringName("set_curve_x");
      this.#_bindings.method_set_curve_x = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        270443179
      );
    }
  }
  static init_method_get_curve_x() {
    if (!this.#_bindings.method_get_curve_x) {
      let classname = new StringName("CurveXYZTexture");
      let methodname = new StringName("get_curve_x");
      this.#_bindings.method_get_curve_x = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2460114913
      );
    }
  }
  static init_method_set_curve_y() {
    if (!this.#_bindings.method_set_curve_y) {
      let classname = new StringName("CurveXYZTexture");
      let methodname = new StringName("set_curve_y");
      this.#_bindings.method_set_curve_y = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        270443179
      );
    }
  }
  static init_method_get_curve_y() {
    if (!this.#_bindings.method_get_curve_y) {
      let classname = new StringName("CurveXYZTexture");
      let methodname = new StringName("get_curve_y");
      this.#_bindings.method_get_curve_y = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2460114913
      );
    }
  }
  static init_method_set_curve_z() {
    if (!this.#_bindings.method_set_curve_z) {
      let classname = new StringName("CurveXYZTexture");
      let methodname = new StringName("set_curve_z");
      this.#_bindings.method_set_curve_z = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        270443179
      );
    }
  }
  static init_method_get_curve_z() {
    if (!this.#_bindings.method_get_curve_z) {
      let classname = new StringName("CurveXYZTexture");
      let methodname = new StringName("get_curve_z");
      this.#_bindings.method_get_curve_z = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2460114913
      );
    }
  }

  
  
  set_width(_width) {
    CurveXYZTexture.init_method_set_width();
    return _call_native_mb_no_ret(
      CurveXYZTexture.#_bindings.method_set_width,
      this._owner,
      _width
    );
    
  }
  set_curve_x(_curve) {
    CurveXYZTexture.init_method_set_curve_x();
    return _call_native_mb_no_ret(
      CurveXYZTexture.#_bindings.method_set_curve_x,
      this._owner,
      _curve
    );
    
  }
  get_curve_x() {
    CurveXYZTexture.init_method_get_curve_x();
    return _call_native_mb_ret(
      CurveXYZTexture.#_bindings.method_get_curve_x,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_curve_y(_curve) {
    CurveXYZTexture.init_method_set_curve_y();
    return _call_native_mb_no_ret(
      CurveXYZTexture.#_bindings.method_set_curve_y,
      this._owner,
      _curve
    );
    
  }
  get_curve_y() {
    CurveXYZTexture.init_method_get_curve_y();
    return _call_native_mb_ret(
      CurveXYZTexture.#_bindings.method_get_curve_y,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_curve_z(_curve) {
    CurveXYZTexture.init_method_set_curve_z();
    return _call_native_mb_no_ret(
      CurveXYZTexture.#_bindings.method_set_curve_z,
      this._owner,
      _curve
    );
    
  }
  get_curve_z() {
    CurveXYZTexture.init_method_get_curve_z();
    return _call_native_mb_ret(
      CurveXYZTexture.#_bindings.method_get_curve_z,
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
get curve_x () {
  return this.get_curve_x();
}
set curve_x (new_value) {
  this.set_curve_x(new_value);
}
get curve_y () {
  return this.get_curve_y();
}
set curve_y (new_value) {
  this.set_curve_y(new_value);
}
get curve_z () {
  return this.get_curve_z();
}
set curve_z (new_value) {
  this.set_curve_z(new_value);
}

}