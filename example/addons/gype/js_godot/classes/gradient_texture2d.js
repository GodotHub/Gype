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
@GodotClass
export class GradientTexture2D extends Texture2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GradientTexture2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_gradient() {
    if (!this._bindings.method_set_gradient) {
      let classname = new StringName("GradientTexture2D");
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
      let classname = new StringName("GradientTexture2D");
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
      let classname = new StringName("GradientTexture2D");
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
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("set_height");
      this._bindings.method_set_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_use_hdr() {
    if (!this._bindings.method_set_use_hdr) {
      let classname = new StringName("GradientTexture2D");
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
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("is_using_hdr");
      this._bindings.method_is_using_hdr = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_fill() {
    if (!this._bindings.method_set_fill) {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("set_fill");
      this._bindings.method_set_fill = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3623927636
      );
    }
  }
  static init_method_get_fill() {
    if (!this._bindings.method_get_fill) {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("get_fill");
      this._bindings.method_get_fill = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1876227217
      );
    }
  }
  static init_method_set_fill_from() {
    if (!this._bindings.method_set_fill_from) {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("set_fill_from");
      this._bindings.method_set_fill_from = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_fill_from() {
    if (!this._bindings.method_get_fill_from) {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("get_fill_from");
      this._bindings.method_get_fill_from = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_fill_to() {
    if (!this._bindings.method_set_fill_to) {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("set_fill_to");
      this._bindings.method_set_fill_to = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_fill_to() {
    if (!this._bindings.method_get_fill_to) {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("get_fill_to");
      this._bindings.method_get_fill_to = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_repeat() {
    if (!this._bindings.method_set_repeat) {
      let classname = new StringName("GradientTexture2D");
      let methodname = new StringName("set_repeat");
      this._bindings.method_set_repeat = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1357597002
      );
    }
  }
  static init_method_get_repeat() {
    if (!this._bindings.method_get_repeat) {
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
    GradientTexture2D.init_method_set_gradient();
    return _call_native_mb_no_ret(
      GradientTexture2D._bindings.method_set_gradient,
      this._owner,
      _gradient
    );
    
  }
  get_gradient() {
    GradientTexture2D.init_method_get_gradient();
    return _call_native_mb_ret(
      GradientTexture2D._bindings.method_get_gradient,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_width(_width) {
    GradientTexture2D.init_method_set_width();
    return _call_native_mb_no_ret(
      GradientTexture2D._bindings.method_set_width,
      this._owner,
      _width
    );
    
  }
  set_height(_height) {
    GradientTexture2D.init_method_set_height();
    return _call_native_mb_no_ret(
      GradientTexture2D._bindings.method_set_height,
      this._owner,
      _height
    );
    
  }
  set_use_hdr(_enabled) {
    GradientTexture2D.init_method_set_use_hdr();
    return _call_native_mb_no_ret(
      GradientTexture2D._bindings.method_set_use_hdr,
      this._owner,
      _enabled
    );
    
  }
  is_using_hdr() {
    GradientTexture2D.init_method_is_using_hdr();
    return _call_native_mb_ret(
      GradientTexture2D._bindings.method_is_using_hdr,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_fill(_fill) {
    GradientTexture2D.init_method_set_fill();
    return _call_native_mb_no_ret(
      GradientTexture2D._bindings.method_set_fill,
      this._owner,
      _fill
    );
    
  }
  get_fill() {
    GradientTexture2D.init_method_get_fill();
    return _call_native_mb_ret(
      GradientTexture2D._bindings.method_get_fill,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_fill_from(_fill_from) {
    GradientTexture2D.init_method_set_fill_from();
    return _call_native_mb_no_ret(
      GradientTexture2D._bindings.method_set_fill_from,
      this._owner,
      _fill_from
    );
    
  }
  get_fill_from() {
    GradientTexture2D.init_method_get_fill_from();
    return _call_native_mb_ret(
      GradientTexture2D._bindings.method_get_fill_from,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_fill_to(_fill_to) {
    GradientTexture2D.init_method_set_fill_to();
    return _call_native_mb_no_ret(
      GradientTexture2D._bindings.method_set_fill_to,
      this._owner,
      _fill_to
    );
    
  }
  get_fill_to() {
    GradientTexture2D.init_method_get_fill_to();
    return _call_native_mb_ret(
      GradientTexture2D._bindings.method_get_fill_to,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_repeat(_repeat) {
    GradientTexture2D.init_method_set_repeat();
    return _call_native_mb_no_ret(
      GradientTexture2D._bindings.method_set_repeat,
      this._owner,
      _repeat
    );
    
  }
  get_repeat() {
    GradientTexture2D.init_method_get_repeat();
    return _call_native_mb_ret(
      GradientTexture2D._bindings.method_get_repeat,
      this._owner,
			Variant.Type.INT,
    
      
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
}