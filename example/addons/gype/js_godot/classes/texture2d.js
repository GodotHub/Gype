import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Texture } from '@js_godot/classes/texture'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

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
@GodotClass
export class Texture2D extends Texture{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Texture2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_width() {
    if (!this._bindings.method_get_width) {
      let classname = new StringName("Texture2D");
      let methodname = new StringName("get_width");
      this._bindings.method_get_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_height() {
    if (!this._bindings.method_get_height) {
      let classname = new StringName("Texture2D");
      let methodname = new StringName("get_height");
      this._bindings.method_get_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_size() {
    if (!this._bindings.method_get_size) {
      let classname = new StringName("Texture2D");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_has_alpha() {
    if (!this._bindings.method_has_alpha) {
      let classname = new StringName("Texture2D");
      let methodname = new StringName("has_alpha");
      this._bindings.method_has_alpha = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_draw() {
    if (!this._bindings.method_draw) {
      let classname = new StringName("Texture2D");
      let methodname = new StringName("draw");
      this._bindings.method_draw = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2729649137
      );
    }
  }
  static init_method_draw_rect() {
    if (!this._bindings.method_draw_rect) {
      let classname = new StringName("Texture2D");
      let methodname = new StringName("draw_rect");
      this._bindings.method_draw_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3499451691
      );
    }
  }
  static init_method_draw_rect_region() {
    if (!this._bindings.method_draw_rect_region) {
      let classname = new StringName("Texture2D");
      let methodname = new StringName("draw_rect_region");
      this._bindings.method_draw_rect_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2963678660
      );
    }
  }
  static init_method_get_image() {
    if (!this._bindings.method_get_image) {
      let classname = new StringName("Texture2D");
      let methodname = new StringName("get_image");
      this._bindings.method_get_image = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4190603485
      );
    }
  }
  static init_method_create_placeholder() {
    if (!this._bindings.method_create_placeholder) {
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
    Texture2D.init_method_get_width();
    return _call_native_mb_ret(
      Texture2D._bindings.method_get_width,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_height() {
    Texture2D.init_method_get_height();
    return _call_native_mb_ret(
      Texture2D._bindings.method_get_height,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_size() {
    Texture2D.init_method_get_size();
    return _call_native_mb_ret(
      Texture2D._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  has_alpha() {
    Texture2D.init_method_has_alpha();
    return _call_native_mb_ret(
      Texture2D._bindings.method_has_alpha,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  draw(_canvas_item, _position, _modulate, _transpose) {
    Texture2D.init_method_draw();
    return _call_native_mb_no_ret(
      Texture2D._bindings.method_draw,
      this._owner,
      _canvas_item, _position, _modulate, _transpose
    );
    
  }
  draw_rect(_canvas_item, _rect, _tile, _modulate, _transpose) {
    Texture2D.init_method_draw_rect();
    return _call_native_mb_no_ret(
      Texture2D._bindings.method_draw_rect,
      this._owner,
      _canvas_item, _rect, _tile, _modulate, _transpose
    );
    
  }
  draw_rect_region(_canvas_item, _rect, _src_rect, _modulate, _transpose, _clip_uv) {
    Texture2D.init_method_draw_rect_region();
    return _call_native_mb_no_ret(
      Texture2D._bindings.method_draw_rect_region,
      this._owner,
      _canvas_item, _rect, _src_rect, _modulate, _transpose, _clip_uv
    );
    
  }
  get_image() {
    Texture2D.init_method_get_image();
    return _call_native_mb_ret(
      Texture2D._bindings.method_get_image,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  create_placeholder() {
    Texture2D.init_method_create_placeholder();
    return _call_native_mb_ret(
      Texture2D._bindings.method_create_placeholder,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  

}