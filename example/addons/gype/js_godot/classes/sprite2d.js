import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_texture;
  method_get_texture;
  method_set_centered;
  method_is_centered;
  method_set_offset;
  method_get_offset;
  method_set_flip_h;
  method_is_flipped_h;
  method_set_flip_v;
  method_is_flipped_v;
  method_set_region_enabled;
  method_is_region_enabled;
  method_is_pixel_opaque;
  method_set_region_rect;
  method_get_region_rect;
  method_set_region_filter_clip_enabled;
  method_is_region_filter_clip_enabled;
  method_set_frame;
  method_get_frame;
  method_set_frame_coords;
  method_get_frame_coords;
  method_set_vframes;
  method_get_vframes;
  method_set_hframes;
  method_get_hframes;
  method_get_rect;
}
export class Sprite2D extends Node2D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Sprite2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_texture() {
    if (!this.#_bindings.method_set_texture) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("set_texture");
      this.#_bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_texture() {
    if (!this.#_bindings.method_get_texture) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("get_texture");
      this.#_bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_set_centered() {
    if (!this.#_bindings.method_set_centered) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("set_centered");
      this.#_bindings.method_set_centered = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_centered() {
    if (!this.#_bindings.method_is_centered) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("is_centered");
      this.#_bindings.method_is_centered = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_offset() {
    if (!this.#_bindings.method_set_offset) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("set_offset");
      this.#_bindings.method_set_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_offset() {
    if (!this.#_bindings.method_get_offset) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("get_offset");
      this.#_bindings.method_get_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_flip_h() {
    if (!this.#_bindings.method_set_flip_h) {
      let classname = new StringName("Sprite2D");
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
      let classname = new StringName("Sprite2D");
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
      let classname = new StringName("Sprite2D");
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
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("is_flipped_v");
      this.#_bindings.method_is_flipped_v = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_region_enabled() {
    if (!this.#_bindings.method_set_region_enabled) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("set_region_enabled");
      this.#_bindings.method_set_region_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_region_enabled() {
    if (!this.#_bindings.method_is_region_enabled) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("is_region_enabled");
      this.#_bindings.method_is_region_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_pixel_opaque() {
    if (!this.#_bindings.method_is_pixel_opaque) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("is_pixel_opaque");
      this.#_bindings.method_is_pixel_opaque = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        556197845
      );
    }
  }
  static init_method_set_region_rect() {
    if (!this.#_bindings.method_set_region_rect) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("set_region_rect");
      this.#_bindings.method_set_region_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2046264180
      );
    }
  }
  static init_method_get_region_rect() {
    if (!this.#_bindings.method_get_region_rect) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("get_region_rect");
      this.#_bindings.method_get_region_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1639390495
      );
    }
  }
  static init_method_set_region_filter_clip_enabled() {
    if (!this.#_bindings.method_set_region_filter_clip_enabled) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("set_region_filter_clip_enabled");
      this.#_bindings.method_set_region_filter_clip_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_region_filter_clip_enabled() {
    if (!this.#_bindings.method_is_region_filter_clip_enabled) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("is_region_filter_clip_enabled");
      this.#_bindings.method_is_region_filter_clip_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_frame() {
    if (!this.#_bindings.method_set_frame) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("set_frame");
      this.#_bindings.method_set_frame = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_frame() {
    if (!this.#_bindings.method_get_frame) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("get_frame");
      this.#_bindings.method_get_frame = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_frame_coords() {
    if (!this.#_bindings.method_set_frame_coords) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("set_frame_coords");
      this.#_bindings.method_set_frame_coords = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }
  static init_method_get_frame_coords() {
    if (!this.#_bindings.method_get_frame_coords) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("get_frame_coords");
      this.#_bindings.method_get_frame_coords = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }
  static init_method_set_vframes() {
    if (!this.#_bindings.method_set_vframes) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("set_vframes");
      this.#_bindings.method_set_vframes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_vframes() {
    if (!this.#_bindings.method_get_vframes) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("get_vframes");
      this.#_bindings.method_get_vframes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_hframes() {
    if (!this.#_bindings.method_set_hframes) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("set_hframes");
      this.#_bindings.method_set_hframes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_hframes() {
    if (!this.#_bindings.method_get_hframes) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("get_hframes");
      this.#_bindings.method_get_hframes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_rect() {
    if (!this.#_bindings.method_get_rect) {
      let classname = new StringName("Sprite2D");
      let methodname = new StringName("get_rect");
      this.#_bindings.method_get_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1639390495
      );
    }
  }

  
  
  set_texture(_texture) {
    Sprite2D.init_method_set_texture();
    return _call_native_mb_no_ret(
      Sprite2D.#_bindings.method_set_texture,
      this._owner,
      _texture
    );
    
  }
  get_texture() {
    Sprite2D.init_method_get_texture();
    return _call_native_mb_ret(
      Sprite2D.#_bindings.method_get_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_centered(_centered) {
    Sprite2D.init_method_set_centered();
    return _call_native_mb_no_ret(
      Sprite2D.#_bindings.method_set_centered,
      this._owner,
      _centered
    );
    
  }
  is_centered() {
    Sprite2D.init_method_is_centered();
    return _call_native_mb_ret(
      Sprite2D.#_bindings.method_is_centered,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_offset(_offset) {
    Sprite2D.init_method_set_offset();
    return _call_native_mb_no_ret(
      Sprite2D.#_bindings.method_set_offset,
      this._owner,
      _offset
    );
    
  }
  get_offset() {
    Sprite2D.init_method_get_offset();
    return _call_native_mb_ret(
      Sprite2D.#_bindings.method_get_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_flip_h(_flip_h) {
    Sprite2D.init_method_set_flip_h();
    return _call_native_mb_no_ret(
      Sprite2D.#_bindings.method_set_flip_h,
      this._owner,
      _flip_h
    );
    
  }
  is_flipped_h() {
    Sprite2D.init_method_is_flipped_h();
    return _call_native_mb_ret(
      Sprite2D.#_bindings.method_is_flipped_h,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_flip_v(_flip_v) {
    Sprite2D.init_method_set_flip_v();
    return _call_native_mb_no_ret(
      Sprite2D.#_bindings.method_set_flip_v,
      this._owner,
      _flip_v
    );
    
  }
  is_flipped_v() {
    Sprite2D.init_method_is_flipped_v();
    return _call_native_mb_ret(
      Sprite2D.#_bindings.method_is_flipped_v,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_region_enabled(_enabled) {
    Sprite2D.init_method_set_region_enabled();
    return _call_native_mb_no_ret(
      Sprite2D.#_bindings.method_set_region_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_region_enabled() {
    Sprite2D.init_method_is_region_enabled();
    return _call_native_mb_ret(
      Sprite2D.#_bindings.method_is_region_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_pixel_opaque(_pos) {
    Sprite2D.init_method_is_pixel_opaque();
    return _call_native_mb_ret(
      Sprite2D.#_bindings.method_is_pixel_opaque,
      this._owner,
			Variant.Type.BOOL,
    
      _pos
    );
    
  }
  set_region_rect(_rect) {
    Sprite2D.init_method_set_region_rect();
    return _call_native_mb_no_ret(
      Sprite2D.#_bindings.method_set_region_rect,
      this._owner,
      _rect
    );
    
  }
  get_region_rect() {
    Sprite2D.init_method_get_region_rect();
    return _call_native_mb_ret(
      Sprite2D.#_bindings.method_get_region_rect,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  set_region_filter_clip_enabled(_enabled) {
    Sprite2D.init_method_set_region_filter_clip_enabled();
    return _call_native_mb_no_ret(
      Sprite2D.#_bindings.method_set_region_filter_clip_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_region_filter_clip_enabled() {
    Sprite2D.init_method_is_region_filter_clip_enabled();
    return _call_native_mb_ret(
      Sprite2D.#_bindings.method_is_region_filter_clip_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_frame(_frame) {
    Sprite2D.init_method_set_frame();
    return _call_native_mb_no_ret(
      Sprite2D.#_bindings.method_set_frame,
      this._owner,
      _frame
    );
    
  }
  get_frame() {
    Sprite2D.init_method_get_frame();
    return _call_native_mb_ret(
      Sprite2D.#_bindings.method_get_frame,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_frame_coords(_coords) {
    Sprite2D.init_method_set_frame_coords();
    return _call_native_mb_no_ret(
      Sprite2D.#_bindings.method_set_frame_coords,
      this._owner,
      _coords
    );
    
  }
  get_frame_coords() {
    Sprite2D.init_method_get_frame_coords();
    return _call_native_mb_ret(
      Sprite2D.#_bindings.method_get_frame_coords,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  set_vframes(_vframes) {
    Sprite2D.init_method_set_vframes();
    return _call_native_mb_no_ret(
      Sprite2D.#_bindings.method_set_vframes,
      this._owner,
      _vframes
    );
    
  }
  get_vframes() {
    Sprite2D.init_method_get_vframes();
    return _call_native_mb_ret(
      Sprite2D.#_bindings.method_get_vframes,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_hframes(_hframes) {
    Sprite2D.init_method_set_hframes();
    return _call_native_mb_no_ret(
      Sprite2D.#_bindings.method_set_hframes,
      this._owner,
      _hframes
    );
    
  }
  get_hframes() {
    Sprite2D.init_method_get_hframes();
    return _call_native_mb_ret(
      Sprite2D.#_bindings.method_get_hframes,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_rect() {
    Sprite2D.init_method_get_rect();
    return _call_native_mb_ret(
      Sprite2D.#_bindings.method_get_rect,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  
get texture () {
  return this.get_texture();
}
set texture (new_value) {
  this.set_texture(new_value);
}
get centered () {
  return this.is_centered();
}
set centered (new_value) {
  this.set_centered(new_value);
}
get offset () {
  return this.get_offset();
}
set offset (new_value) {
  this.set_offset(new_value);
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
get hframes () {
  return this.get_hframes();
}
set hframes (new_value) {
  this.set_hframes(new_value);
}
get vframes () {
  return this.get_vframes();
}
set vframes (new_value) {
  this.set_vframes(new_value);
}
get frame () {
  return this.get_frame();
}
set frame (new_value) {
  this.set_frame(new_value);
}
get frame_coords () {
  return this.get_frame_coords();
}
set frame_coords (new_value) {
  this.set_frame_coords(new_value);
}
get region_enabled () {
  return this.is_region_enabled();
}
set region_enabled (new_value) {
  this.set_region_enabled(new_value);
}
get region_rect () {
  return this.get_region_rect();
}
set region_rect (new_value) {
  this.set_region_rect(new_value);
}
get region_filter_clip_enabled () {
  return this.is_region_filter_clip_enabled();
}
set region_filter_clip_enabled (new_value) {
  this.set_region_filter_clip_enabled(new_value);
}

}