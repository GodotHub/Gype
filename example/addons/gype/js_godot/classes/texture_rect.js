import * as internal from '__internal__';
import { Control } from '@js_godot/classes/control'
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
  method_set_texture;
  method_get_texture;
  method_set_expand_mode;
  method_get_expand_mode;
  method_set_flip_h;
  method_is_flipped_h;
  method_set_flip_v;
  method_is_flipped_v;
  method_set_stretch_mode;
  method_get_stretch_mode;
}
@GodotClass
export class TextureRect extends Control{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TextureRect");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_texture() {
    if (!this._bindings.method_set_texture) {
      let classname = new StringName("TextureRect");
      let methodname = new StringName("set_texture");
      this._bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_texture() {
    if (!this._bindings.method_get_texture) {
      let classname = new StringName("TextureRect");
      let methodname = new StringName("get_texture");
      this._bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_set_expand_mode() {
    if (!this._bindings.method_set_expand_mode) {
      let classname = new StringName("TextureRect");
      let methodname = new StringName("set_expand_mode");
      this._bindings.method_set_expand_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1870766882
      );
    }
  }
  static init_method_get_expand_mode() {
    if (!this._bindings.method_get_expand_mode) {
      let classname = new StringName("TextureRect");
      let methodname = new StringName("get_expand_mode");
      this._bindings.method_get_expand_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3863824733
      );
    }
  }
  static init_method_set_flip_h() {
    if (!this._bindings.method_set_flip_h) {
      let classname = new StringName("TextureRect");
      let methodname = new StringName("set_flip_h");
      this._bindings.method_set_flip_h = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_flipped_h() {
    if (!this._bindings.method_is_flipped_h) {
      let classname = new StringName("TextureRect");
      let methodname = new StringName("is_flipped_h");
      this._bindings.method_is_flipped_h = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_flip_v() {
    if (!this._bindings.method_set_flip_v) {
      let classname = new StringName("TextureRect");
      let methodname = new StringName("set_flip_v");
      this._bindings.method_set_flip_v = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_flipped_v() {
    if (!this._bindings.method_is_flipped_v) {
      let classname = new StringName("TextureRect");
      let methodname = new StringName("is_flipped_v");
      this._bindings.method_is_flipped_v = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_stretch_mode() {
    if (!this._bindings.method_set_stretch_mode) {
      let classname = new StringName("TextureRect");
      let methodname = new StringName("set_stretch_mode");
      this._bindings.method_set_stretch_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        58788729
      );
    }
  }
  static init_method_get_stretch_mode() {
    if (!this._bindings.method_get_stretch_mode) {
      let classname = new StringName("TextureRect");
      let methodname = new StringName("get_stretch_mode");
      this._bindings.method_get_stretch_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        346396079
      );
    }
  }

  
  
  set_texture(_texture) {
    TextureRect.init_method_set_texture();
    return _call_native_mb_no_ret(
      TextureRect._bindings.method_set_texture,
      this._owner,
      _texture
    );
    
  }
  get_texture() {
    TextureRect.init_method_get_texture();
    return _call_native_mb_ret(
      TextureRect._bindings.method_get_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_expand_mode(_expand_mode) {
    TextureRect.init_method_set_expand_mode();
    return _call_native_mb_no_ret(
      TextureRect._bindings.method_set_expand_mode,
      this._owner,
      _expand_mode
    );
    
  }
  get_expand_mode() {
    TextureRect.init_method_get_expand_mode();
    return _call_native_mb_ret(
      TextureRect._bindings.method_get_expand_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_flip_h(_enable) {
    TextureRect.init_method_set_flip_h();
    return _call_native_mb_no_ret(
      TextureRect._bindings.method_set_flip_h,
      this._owner,
      _enable
    );
    
  }
  is_flipped_h() {
    TextureRect.init_method_is_flipped_h();
    return _call_native_mb_ret(
      TextureRect._bindings.method_is_flipped_h,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_flip_v(_enable) {
    TextureRect.init_method_set_flip_v();
    return _call_native_mb_no_ret(
      TextureRect._bindings.method_set_flip_v,
      this._owner,
      _enable
    );
    
  }
  is_flipped_v() {
    TextureRect.init_method_is_flipped_v();
    return _call_native_mb_ret(
      TextureRect._bindings.method_is_flipped_v,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_stretch_mode(_stretch_mode) {
    TextureRect.init_method_set_stretch_mode();
    return _call_native_mb_no_ret(
      TextureRect._bindings.method_set_stretch_mode,
      this._owner,
      _stretch_mode
    );
    
  }
  get_stretch_mode() {
    TextureRect.init_method_get_stretch_mode();
    return _call_native_mb_ret(
      TextureRect._bindings.method_get_stretch_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get texture () {
  return this.get_texture();
}
set texture (new_value) {
  this.set_texture(new_value);
}
get expand_mode () {
  return this.get_expand_mode();
}
set expand_mode (new_value) {
  this.set_expand_mode(new_value);
}
get stretch_mode () {
  return this.get_stretch_mode();
}
set stretch_mode (new_value) {
  this.set_stretch_mode(new_value);
}
get flip_h () {
  return this.is_flipped_h();
}
set flip_h (new_value) {
  this.set_flip_h(new_value);
}
get flip_v () {
  return this.is_flipped_v();
}
set flip_v (new_value) {
  this.set_flip_v(new_value);
}

  static ExpandMode = {
    EXPAND_KEEP_SIZE: 0,
    EXPAND_IGNORE_SIZE: 1,
    EXPAND_FIT_WIDTH: 2,
    EXPAND_FIT_WIDTH_PROPORTIONAL: 3,
    EXPAND_FIT_HEIGHT: 4,
    EXPAND_FIT_HEIGHT_PROPORTIONAL: 5,
  }
  static StretchMode = {
    STRETCH_SCALE: 0,
    STRETCH_TILE: 1,
    STRETCH_KEEP: 2,
    STRETCH_KEEP_CENTERED: 3,
    STRETCH_KEEP_ASPECT: 4,
    STRETCH_KEEP_ASPECT_CENTERED: 5,
    STRETCH_KEEP_ASPECT_COVERED: 6,
  }
}