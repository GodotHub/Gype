import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { BaseButton } from '@js_godot/classes/base_button'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_texture_normal;
  method_set_texture_pressed;
  method_set_texture_hover;
  method_set_texture_disabled;
  method_set_texture_focused;
  method_set_click_mask;
  method_set_ignore_texture_size;
  method_set_stretch_mode;
  method_set_flip_h;
  method_is_flipped_h;
  method_set_flip_v;
  method_is_flipped_v;
  method_get_texture_normal;
  method_get_texture_pressed;
  method_get_texture_hover;
  method_get_texture_disabled;
  method_get_texture_focused;
  method_get_click_mask;
  method_get_ignore_texture_size;
  method_get_stretch_mode;
}
export class TextureButton extends BaseButton{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("TextureButton");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_texture_normal() {
    if (!this.#_bindings.method_set_texture_normal) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_texture_normal");
      this.#_bindings.method_set_texture_normal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_set_texture_pressed() {
    if (!this.#_bindings.method_set_texture_pressed) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_texture_pressed");
      this.#_bindings.method_set_texture_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_set_texture_hover() {
    if (!this.#_bindings.method_set_texture_hover) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_texture_hover");
      this.#_bindings.method_set_texture_hover = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_set_texture_disabled() {
    if (!this.#_bindings.method_set_texture_disabled) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_texture_disabled");
      this.#_bindings.method_set_texture_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_set_texture_focused() {
    if (!this.#_bindings.method_set_texture_focused) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_texture_focused");
      this.#_bindings.method_set_texture_focused = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_set_click_mask() {
    if (!this.#_bindings.method_set_click_mask) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_click_mask");
      this.#_bindings.method_set_click_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        698588216
      );
    }
  }
  static init_method_set_ignore_texture_size() {
    if (!this.#_bindings.method_set_ignore_texture_size) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_ignore_texture_size");
      this.#_bindings.method_set_ignore_texture_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_stretch_mode() {
    if (!this.#_bindings.method_set_stretch_mode) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_stretch_mode");
      this.#_bindings.method_set_stretch_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        252530840
      );
    }
  }
  static init_method_set_flip_h() {
    if (!this.#_bindings.method_set_flip_h) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_flip_h");
      this.#_bindings.method_set_flip_h = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_flipped_h() {
    if (!this.#_bindings.method_is_flipped_h) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("is_flipped_h");
      this.#_bindings.method_is_flipped_h = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_flip_v() {
    if (!this.#_bindings.method_set_flip_v) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_flip_v");
      this.#_bindings.method_set_flip_v = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_flipped_v() {
    if (!this.#_bindings.method_is_flipped_v) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("is_flipped_v");
      this.#_bindings.method_is_flipped_v = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_texture_normal() {
    if (!this.#_bindings.method_get_texture_normal) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("get_texture_normal");
      this.#_bindings.method_get_texture_normal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_get_texture_pressed() {
    if (!this.#_bindings.method_get_texture_pressed) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("get_texture_pressed");
      this.#_bindings.method_get_texture_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_get_texture_hover() {
    if (!this.#_bindings.method_get_texture_hover) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("get_texture_hover");
      this.#_bindings.method_get_texture_hover = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_get_texture_disabled() {
    if (!this.#_bindings.method_get_texture_disabled) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("get_texture_disabled");
      this.#_bindings.method_get_texture_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_get_texture_focused() {
    if (!this.#_bindings.method_get_texture_focused) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("get_texture_focused");
      this.#_bindings.method_get_texture_focused = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_get_click_mask() {
    if (!this.#_bindings.method_get_click_mask) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("get_click_mask");
      this.#_bindings.method_get_click_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2459671998
      );
    }
  }
  static init_method_get_ignore_texture_size() {
    if (!this.#_bindings.method_get_ignore_texture_size) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("get_ignore_texture_size");
      this.#_bindings.method_get_ignore_texture_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_stretch_mode() {
    if (!this.#_bindings.method_get_stretch_mode) {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("get_stretch_mode");
      this.#_bindings.method_get_stretch_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        33815122
      );
    }
  }

  
  
  set_texture_normal(_texture) {
    TextureButton.init_method_set_texture_normal();
    return _call_native_mb_no_ret(
      TextureButton.#_bindings.method_set_texture_normal,
      this._owner,
      _texture
    );
    
  }
  set_texture_pressed(_texture) {
    TextureButton.init_method_set_texture_pressed();
    return _call_native_mb_no_ret(
      TextureButton.#_bindings.method_set_texture_pressed,
      this._owner,
      _texture
    );
    
  }
  set_texture_hover(_texture) {
    TextureButton.init_method_set_texture_hover();
    return _call_native_mb_no_ret(
      TextureButton.#_bindings.method_set_texture_hover,
      this._owner,
      _texture
    );
    
  }
  set_texture_disabled(_texture) {
    TextureButton.init_method_set_texture_disabled();
    return _call_native_mb_no_ret(
      TextureButton.#_bindings.method_set_texture_disabled,
      this._owner,
      _texture
    );
    
  }
  set_texture_focused(_texture) {
    TextureButton.init_method_set_texture_focused();
    return _call_native_mb_no_ret(
      TextureButton.#_bindings.method_set_texture_focused,
      this._owner,
      _texture
    );
    
  }
  set_click_mask(_mask) {
    TextureButton.init_method_set_click_mask();
    return _call_native_mb_no_ret(
      TextureButton.#_bindings.method_set_click_mask,
      this._owner,
      _mask
    );
    
  }
  set_ignore_texture_size(_ignore) {
    TextureButton.init_method_set_ignore_texture_size();
    return _call_native_mb_no_ret(
      TextureButton.#_bindings.method_set_ignore_texture_size,
      this._owner,
      _ignore
    );
    
  }
  set_stretch_mode(_mode) {
    TextureButton.init_method_set_stretch_mode();
    return _call_native_mb_no_ret(
      TextureButton.#_bindings.method_set_stretch_mode,
      this._owner,
      _mode
    );
    
  }
  set_flip_h(_enable) {
    TextureButton.init_method_set_flip_h();
    return _call_native_mb_no_ret(
      TextureButton.#_bindings.method_set_flip_h,
      this._owner,
      _enable
    );
    
  }
  is_flipped_h() {
    TextureButton.init_method_is_flipped_h();
    return _call_native_mb_ret(
      TextureButton.#_bindings.method_is_flipped_h,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_flip_v(_enable) {
    TextureButton.init_method_set_flip_v();
    return _call_native_mb_no_ret(
      TextureButton.#_bindings.method_set_flip_v,
      this._owner,
      _enable
    );
    
  }
  is_flipped_v() {
    TextureButton.init_method_is_flipped_v();
    return _call_native_mb_ret(
      TextureButton.#_bindings.method_is_flipped_v,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_texture_normal() {
    TextureButton.init_method_get_texture_normal();
    return _call_native_mb_ret(
      TextureButton.#_bindings.method_get_texture_normal,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_texture_pressed() {
    TextureButton.init_method_get_texture_pressed();
    return _call_native_mb_ret(
      TextureButton.#_bindings.method_get_texture_pressed,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_texture_hover() {
    TextureButton.init_method_get_texture_hover();
    return _call_native_mb_ret(
      TextureButton.#_bindings.method_get_texture_hover,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_texture_disabled() {
    TextureButton.init_method_get_texture_disabled();
    return _call_native_mb_ret(
      TextureButton.#_bindings.method_get_texture_disabled,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_texture_focused() {
    TextureButton.init_method_get_texture_focused();
    return _call_native_mb_ret(
      TextureButton.#_bindings.method_get_texture_focused,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_click_mask() {
    TextureButton.init_method_get_click_mask();
    return _call_native_mb_ret(
      TextureButton.#_bindings.method_get_click_mask,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_ignore_texture_size() {
    TextureButton.init_method_get_ignore_texture_size();
    return _call_native_mb_ret(
      TextureButton.#_bindings.method_get_ignore_texture_size,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_stretch_mode() {
    TextureButton.init_method_get_stretch_mode();
    return _call_native_mb_ret(
      TextureButton.#_bindings.method_get_stretch_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get texture_normal () {
  return this.get_texture_normal();
}
set texture_normal (new_value) {
  this.set_texture_normal(new_value);
}
get texture_pressed () {
  return this.get_texture_pressed();
}
set texture_pressed (new_value) {
  this.set_texture_pressed(new_value);
}
get texture_hover () {
  return this.get_texture_hover();
}
set texture_hover (new_value) {
  this.set_texture_hover(new_value);
}
get texture_disabled () {
  return this.get_texture_disabled();
}
set texture_disabled (new_value) {
  this.set_texture_disabled(new_value);
}
get texture_focused () {
  return this.get_texture_focused();
}
set texture_focused (new_value) {
  this.set_texture_focused(new_value);
}
get texture_click_mask () {
  return this.get_click_mask();
}
set texture_click_mask (new_value) {
  this.set_click_mask(new_value);
}
get ignore_texture_size () {
  return this.get_ignore_texture_size();
}
set ignore_texture_size (new_value) {
  this.set_ignore_texture_size(new_value);
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