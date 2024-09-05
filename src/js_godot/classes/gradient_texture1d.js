import * as internal from '__internal__';
import { Texture2D } from '@js_godot/classes/texture2d'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_gradient;
  method_get_gradient;
  method_set_width;
  method_set_use_hdr;
  method_is_using_hdr;
}
export class GradientTexture1D extends Texture2D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GradientTexture1D");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("GradientTexture1D");
      let methodname = new StringName("set_gradient");
      this._bindings.method_set_gradient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2756054477
      );
    }
    {
      let classname = new StringName("GradientTexture1D");
      let methodname = new StringName("get_gradient");
      this._bindings.method_get_gradient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        132272999
      );
    }
    {
      let classname = new StringName("GradientTexture1D");
      let methodname = new StringName("set_width");
      this._bindings.method_set_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GradientTexture1D");
      let methodname = new StringName("set_use_hdr");
      this._bindings.method_set_use_hdr = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
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
    return _call_native_mb_no_ret(
      GradientTexture1D._bindings.method_set_gradient,
      this._owner,
      _gradient
    );
    
  }
  get_gradient() {
    return _call_native_mb_ret(
      GradientTexture1D._bindings.method_get_gradient,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_width(_width) {
    return _call_native_mb_no_ret(
      GradientTexture1D._bindings.method_set_width,
      this._owner,
      _width
    );
    
  }
  set_use_hdr(_enabled) {
    return _call_native_mb_no_ret(
      GradientTexture1D._bindings.method_set_use_hdr,
      this._owner,
      _enabled
    );
    
  }
  is_using_hdr() {
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


  static {
    this._init_bindings();
  }
}