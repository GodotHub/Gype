import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Texture2D } from '@js_godot/classes/texture2d'
import { Vector2 } from '@js_godot/variant/vector2'
import { Variant } from '@js_godot/variant/variant'
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
  method_set_height;
  method_set_use_hdr;
  method_is_using_hdr;
  method_set_fill;
  method_get_fill;
  method_set_fill_from;
  method_get_fill_from;
  method_set_fill_to;
  method_get_fill_to;
  method_set_repeat;
  method_get_repeat;
}
export class GradientTexture2D extends Texture2D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GradientTexture2D");
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
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("set_gradient");
      this._bindings.method_set_gradient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2756054477
      );
    }
    {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("get_gradient");
      this._bindings.method_get_gradient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        132272999
      );
    }
    {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("set_width");
      this._bindings.method_set_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("set_height");
      this._bindings.method_set_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("set_use_hdr");
      this._bindings.method_set_use_hdr = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("is_using_hdr");
      this._bindings.method_is_using_hdr = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("set_fill");
      this._bindings.method_set_fill = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3623927636
      );
    }
    {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("get_fill");
      this._bindings.method_get_fill = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1876227217
      );
    }
    {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("set_fill_from");
      this._bindings.method_set_fill_from = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("get_fill_from");
      this._bindings.method_get_fill_from = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("set_fill_to");
      this._bindings.method_set_fill_to = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("get_fill_to");
      this._bindings.method_get_fill_to = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("set_repeat");
      this._bindings.method_set_repeat = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1357597002
      );
    }
    {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("get_repeat");
      this._bindings.method_get_repeat = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3351758665
      );
    }
  }
  
  set_gradient(_gradient) {
    return _call_native_mb_no_ret(
      GradientTexture2D._bindings.method_set_gradient,
      this._owner,
      _gradient
    );
    
  }
  get_gradient() {
    return _call_native_mb_ret(
      GradientTexture2D._bindings.method_get_gradient,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_width(_width) {
    return _call_native_mb_no_ret(
      GradientTexture2D._bindings.method_set_width,
      this._owner,
      _width
    );
    
  }
  set_height(_height) {
    return _call_native_mb_no_ret(
      GradientTexture2D._bindings.method_set_height,
      this._owner,
      _height
    );
    
  }
  set_use_hdr(_enabled) {
    return _call_native_mb_no_ret(
      GradientTexture2D._bindings.method_set_use_hdr,
      this._owner,
      _enabled
    );
    
  }
  is_using_hdr() {
    return _call_native_mb_ret(
      GradientTexture2D._bindings.method_is_using_hdr,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_fill(_fill) {
    return _call_native_mb_no_ret(
      GradientTexture2D._bindings.method_set_fill,
      this._owner,
      _fill
    );
    
  }
  get_fill() {
    return _call_native_mb_ret(
      GradientTexture2D._bindings.method_get_fill,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_fill_from(_fill_from) {
    return _call_native_mb_no_ret(
      GradientTexture2D._bindings.method_set_fill_from,
      this._owner,
      _fill_from
    );
    
  }
  get_fill_from() {
    return _call_native_mb_ret(
      GradientTexture2D._bindings.method_get_fill_from,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_fill_to(_fill_to) {
    return _call_native_mb_no_ret(
      GradientTexture2D._bindings.method_set_fill_to,
      this._owner,
      _fill_to
    );
    
  }
  get_fill_to() {
    return _call_native_mb_ret(
      GradientTexture2D._bindings.method_get_fill_to,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_repeat(_repeat) {
    return _call_native_mb_no_ret(
      GradientTexture2D._bindings.method_set_repeat,
      this._owner,
      _repeat
    );
    
  }
  get_repeat() {
    return _call_native_mb_ret(
      GradientTexture2D._bindings.method_get_repeat,
      this._owner,
			Variant.INT,
      
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
get height () {
  return this.get_height();
}
set height (new_value) {
  this.set_height(new_value);
}
get use_hdr () {
  return this.is_using_hdr();
}
set use_hdr (new_value) {
  this.set_use_hdr(new_value);
}
get fill () {
  return this.get_fill();
}
set fill (new_value) {
  this.set_fill(new_value);
}
get fill_from () {
  return this.get_fill_from();
}
set fill_from (new_value) {
  this.set_fill_from(new_value);
}
get fill_to () {
  return this.get_fill_to();
}
set fill_to (new_value) {
  this.set_fill_to(new_value);
}
get repeat () {
  return this.get_repeat();
}
set repeat (new_value) {
  this.set_repeat(new_value);
}

  static Fill = {
    FILL_LINEAR: 0,
    FILL_RADIAL: 1,
    FILL_SQUARE: 2,
  }
  static Repeat = {
    REPEAT_NONE: 0,
    REPEAT: 1,
    REPEAT_MIRROR: 2,
  }

  static {
    this._init_bindings();
  }
}