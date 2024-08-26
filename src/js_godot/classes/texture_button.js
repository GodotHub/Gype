import * as internal from '__internal__';
import { BaseButton } from 'src/js_godot/classesbase_button'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TextureButton");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_texture_normal");
      this._bindings.method_set_texture_normal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_texture_pressed");
      this._bindings.method_set_texture_pressed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_texture_hover");
      this._bindings.method_set_texture_hover = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_texture_disabled");
      this._bindings.method_set_texture_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_texture_focused");
      this._bindings.method_set_texture_focused = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_click_mask");
      this._bindings.method_set_click_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        698588216
      );
    }
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_ignore_texture_size");
      this._bindings.method_set_ignore_texture_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_stretch_mode");
      this._bindings.method_set_stretch_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        252530840
      );
    }
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_flip_h");
      this._bindings.method_set_flip_h = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("is_flipped_h");
      this._bindings.method_is_flipped_h = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("set_flip_v");
      this._bindings.method_set_flip_v = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("is_flipped_v");
      this._bindings.method_is_flipped_v = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("get_texture_normal");
      this._bindings.method_get_texture_normal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("get_texture_pressed");
      this._bindings.method_get_texture_pressed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("get_texture_hover");
      this._bindings.method_get_texture_hover = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("get_texture_disabled");
      this._bindings.method_get_texture_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("get_texture_focused");
      this._bindings.method_get_texture_focused = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("get_click_mask");
      this._bindings.method_get_click_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2459671998
      );
    }
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("get_ignore_texture_size");
      this._bindings.method_get_ignore_texture_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("TextureButton");
      let methodname = new StringName("get_stretch_mode");
      this._bindings.method_get_stretch_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        33815122
      );
    }
  }
  set_texture_normal(_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_normal,
      this._owner,
      _texture
    );
  }
  set_texture_pressed(_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_pressed,
      this._owner,
      _texture
    );
  }
  set_texture_hover(_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_hover,
      this._owner,
      _texture
    );
  }
  set_texture_disabled(_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_disabled,
      this._owner,
      _texture
    );
  }
  set_texture_focused(_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_focused,
      this._owner,
      _texture
    );
  }
  set_click_mask(_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_click_mask,
      this._owner,
      _mask
    );
  }
  set_ignore_texture_size(_ignore) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ignore_texture_size,
      this._owner,
      _ignore
    );
  }
  set_stretch_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_stretch_mode,
      this._owner,
      _mode
    );
  }
  set_flip_h(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_flip_h,
      this._owner,
      _enable
    );
  }
  is_flipped_h() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_flipped_h,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_flip_v(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_flip_v,
      this._owner,
      _enable
    );
  }
  is_flipped_v() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_flipped_v,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_texture_normal() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_normal,
      this._owner,
			Variant.INT,
      
    );
  }
  get_texture_pressed() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_pressed,
      this._owner,
			Variant.INT,
      
    );
  }
  get_texture_hover() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_hover,
      this._owner,
			Variant.INT,
      
    );
  }
  get_texture_disabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_disabled,
      this._owner,
			Variant.INT,
      
    );
  }
  get_texture_focused() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_focused,
      this._owner,
			Variant.INT,
      
    );
  }
  get_click_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_click_mask,
      this._owner,
			Variant.INT,
      
    );
  }
  get_ignore_texture_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ignore_texture_size,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_stretch_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_stretch_mode,
      this._owner,
			Variant.INT,
      
    );
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