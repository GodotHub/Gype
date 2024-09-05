import * as internal from '__internal__';
import { Texture } from '@js_godot/classes/texture'
import { RID } from '@js_godot/variant/rid'
import { Color } from '@js_godot/variant/color'
import { Variant } from '@js_godot/variant/variant'
import { Vector2 } from '@js_godot/variant/vector2'
import { StringName } from '@js_godot/variant/string_name'
import { Rect2 } from '@js_godot/variant/rect2'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_width;
  method_get_height;
  method_get_size;
  method_has_alpha;
  method_draw;
  method_draw_rect;
  method_draw_rect_region;
  method_get_image;
  method_create_placeholder;
}
export class Texture2D extends Texture{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Texture2D");
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
      let classname = new StringName("Texture2D");
      let methodname = new StringName("get_width");
      this._bindings.method_get_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Texture2D");
      let methodname = new StringName("get_height");
      this._bindings.method_get_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Texture2D");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Texture2D");
      let methodname = new StringName("has_alpha");
      this._bindings.method_has_alpha = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Texture2D");
      let methodname = new StringName("draw");
      this._bindings.method_draw = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2729649137
      );
    }
    {
      let classname = new StringName("Texture2D");
      let methodname = new StringName("draw_rect");
      this._bindings.method_draw_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3499451691
      );
    }
    {
      let classname = new StringName("Texture2D");
      let methodname = new StringName("draw_rect_region");
      this._bindings.method_draw_rect_region = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2963678660
      );
    }
    {
      let classname = new StringName("Texture2D");
      let methodname = new StringName("get_image");
      this._bindings.method_get_image = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4190603485
      );
    }
    {
      let classname = new StringName("Texture2D");
      let methodname = new StringName("create_placeholder");
      this._bindings.method_create_placeholder = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        121922552
      );
    }
  }
  
  _get_width() {
  }
  _get_height() {
  }
  _is_pixel_opaque(_x, _y) {
  }
  _has_alpha() {
  }
  _draw(_to_canvas_item, _pos, _modulate, _transpose) {
  }
  _draw_rect(_to_canvas_item, _rect, _tile, _modulate, _transpose) {
  }
  _draw_rect_region(_to_canvas_item, _rect, _src_rect, _modulate, _transpose, _clip_uv) {
  }
  get_width() {
    return _call_native_mb_ret(
      Texture2D._bindings.method_get_width,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_height() {
    return _call_native_mb_ret(
      Texture2D._bindings.method_get_height,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_size() {
    return _call_native_mb_ret(
      Texture2D._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  has_alpha() {
    return _call_native_mb_ret(
      Texture2D._bindings.method_has_alpha,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  draw(_canvas_item, _position, _modulate, _transpose) {
    return _call_native_mb_no_ret(
      Texture2D._bindings.method_draw,
      this._owner,
      _canvas_item, _position, _modulate, _transpose
    );
    
  }
  draw_rect(_canvas_item, _rect, _tile, _modulate, _transpose) {
    return _call_native_mb_no_ret(
      Texture2D._bindings.method_draw_rect,
      this._owner,
      _canvas_item, _rect, _tile, _modulate, _transpose
    );
    
  }
  draw_rect_region(_canvas_item, _rect, _src_rect, _modulate, _transpose, _clip_uv) {
    return _call_native_mb_no_ret(
      Texture2D._bindings.method_draw_rect_region,
      this._owner,
      _canvas_item, _rect, _src_rect, _modulate, _transpose, _clip_uv
    );
    
  }
  get_image() {
    return _call_native_mb_ret(
      Texture2D._bindings.method_get_image,
      this._owner,
			Variant.INT,
      
    );
    
  }
  create_placeholder() {
    return _call_native_mb_ret(
      Texture2D._bindings.method_create_placeholder,
      this._owner,
			Variant.INT,
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}