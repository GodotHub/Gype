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
  method_set_gradient;
  method_get_gradient;
  method_set_width;
  method_set_use_hdr;
  method_is_using_hdr;
}
@GodotClass
export class GradientTexture1D extends Texture2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GradientTexture1D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_gradient() {
    if (!this._bindings.method_set_gradient) {
      let classname = new StringName("GradientTexture1D");
      let methodname = new StringName("set_gradient");
      this._bindings.method_set_gradient = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2756054477
      );
    }
  }
  static init_method_get_gradient() {
    if (!this._bindings.method_get_gradient) {
      let classname = new StringName("GradientTexture1D");
      let methodname = new StringName("get_gradient");
      this._bindings.method_get_gradient = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        132272999
      );
    }
  }
  static init_method_set_width() {
    if (!this._bindings.method_set_width) {
      let classname = new StringName("GradientTexture1D");
      let methodname = new StringName("set_width");
      this._bindings.method_set_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_use_hdr() {
    if (!this._bindings.method_set_use_hdr) {
      let classname = new StringName("GradientTexture1D");
      let methodname = new StringName("set_use_hdr");
      this._bindings.method_set_use_hdr = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_hdr() {
    if (!this._bindings.method_is_using_hdr) {
      let classname = new StringName("GradientTexture1D");
      let methodname = new StringName("is_using_hdr");
      this._bindings.method_is_using_hdr = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_gradient(_gradient) {
    GradientTexture1D.init_method_set_gradient();
    return _call_native_mb_no_ret(
      GradientTexture1D._bindings.method_set_gradient,
      this._owner,
      _gradient
    );
    
  }
  get_gradient() {
    GradientTexture1D.init_method_get_gradient();
    return _call_native_mb_ret(
      GradientTexture1D._bindings.method_get_gradient,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_width(_width) {
    GradientTexture1D.init_method_set_width();
    return _call_native_mb_no_ret(
      GradientTexture1D._bindings.method_set_width,
      this._owner,
      _width
    );
    
  }
  set_use_hdr(_enabled) {
    GradientTexture1D.init_method_set_use_hdr();
    return _call_native_mb_no_ret(
      GradientTexture1D._bindings.method_set_use_hdr,
      this._owner,
      _enabled
    );
    
  }
  is_using_hdr() {
    GradientTexture1D.init_method_is_using_hdr();
    return _call_native_mb_ret(
      GradientTexture1D._bindings.method_is_using_hdr,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get gradient () {
  return this.get_gradient();
}
set gradient (new_value) {
  this.set_gradient(new_value);
}
get width () {
  return this.get_width();
}
set width (new_value) {
  this.set_width(new_value);
}
get use_hdr () {
  return this.is_using_hdr();
}
set use_hdr (new_value) {
  this.set_use_hdr(new_value);
}

}