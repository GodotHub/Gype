import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Texture2D } from '@js_godot/classes/texture2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_width;
  method_set_curve;
  method_get_curve;
  method_set_texture_mode;
  method_get_texture_mode;
}
@GodotClass
export class CurveTexture extends Texture2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CurveTexture");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_width() {
    if (!this._bindings.method_set_width) {
      let classname = new StringName("CurveTexture");
      let methodname = new StringName("set_width");
      this._bindings.method_set_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_curve() {
    if (!this._bindings.method_set_curve) {
      let classname = new StringName("CurveTexture");
      let methodname = new StringName("set_curve");
      this._bindings.method_set_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        270443179
      );
    }
  }
  static init_method_get_curve() {
    if (!this._bindings.method_get_curve) {
      let classname = new StringName("CurveTexture");
      let methodname = new StringName("get_curve");
      this._bindings.method_get_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2460114913
      );
    }
  }
  static init_method_set_texture_mode() {
    if (!this._bindings.method_set_texture_mode) {
      let classname = new StringName("CurveTexture");
      let methodname = new StringName("set_texture_mode");
      this._bindings.method_set_texture_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1321955367
      );
    }
  }
  static init_method_get_texture_mode() {
    if (!this._bindings.method_get_texture_mode) {
      let classname = new StringName("CurveTexture");
      let methodname = new StringName("get_texture_mode");
      this._bindings.method_get_texture_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        715756376
      );
    }
  }

  
  
  set_width(_width) {
    CurveTexture.init_method_set_width();
    return _call_native_mb_no_ret(
      CurveTexture._bindings.method_set_width,
      this._owner,
      _width
    );
    
  }
  set_curve(_curve) {
    CurveTexture.init_method_set_curve();
    return _call_native_mb_no_ret(
      CurveTexture._bindings.method_set_curve,
      this._owner,
      _curve
    );
    
  }
  get_curve() {
    CurveTexture.init_method_get_curve();
    return _call_native_mb_ret(
      CurveTexture._bindings.method_get_curve,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_texture_mode(_texture_mode) {
    CurveTexture.init_method_set_texture_mode();
    return _call_native_mb_no_ret(
      CurveTexture._bindings.method_set_texture_mode,
      this._owner,
      _texture_mode
    );
    
  }
  get_texture_mode() {
    CurveTexture.init_method_get_texture_mode();
    return _call_native_mb_ret(
      CurveTexture._bindings.method_get_texture_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get width () {
  return this.get_width();
}
set width (new_value) {
  this.set_width(new_value);
}
get texture_mode () {
  return this.get_texture_mode();
}
set texture_mode (new_value) {
  this.set_texture_mode(new_value);
}
get curve () {
  return this.get_curve();
}
set curve (new_value) {
  this.set_curve(new_value);
}

  static TextureMode = {
    TEXTURE_MODE_RGB: 0,
    TEXTURE_MODE_RED: 1,
  }
}