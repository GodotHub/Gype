import * as internal from '__internal__';
import { StyleBox } from '@js_godot/classes/style_box'
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
  method_set_bg_color;
  method_get_bg_color;
  method_set_border_color;
  method_get_border_color;
  method_set_border_width_all;
  method_get_border_width_min;
  method_set_border_width;
  method_get_border_width;
  method_set_border_blend;
  method_get_border_blend;
  method_set_corner_radius_all;
  method_set_corner_radius;
  method_get_corner_radius;
  method_set_expand_margin;
  method_set_expand_margin_all;
  method_get_expand_margin;
  method_set_draw_center;
  method_is_draw_center_enabled;
  method_set_skew;
  method_get_skew;
  method_set_shadow_color;
  method_get_shadow_color;
  method_set_shadow_size;
  method_get_shadow_size;
  method_set_shadow_offset;
  method_get_shadow_offset;
  method_set_anti_aliased;
  method_is_anti_aliased;
  method_set_aa_size;
  method_get_aa_size;
  method_set_corner_detail;
  method_get_corner_detail;
}
@GodotClass
export class StyleBoxFlat extends StyleBox{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("StyleBoxFlat");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_bg_color() {
    if (!this._bindings.method_set_bg_color) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("set_bg_color");
      this._bindings.method_set_bg_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_bg_color() {
    if (!this._bindings.method_get_bg_color) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("get_bg_color");
      this._bindings.method_get_bg_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_border_color() {
    if (!this._bindings.method_set_border_color) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("set_border_color");
      this._bindings.method_set_border_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_border_color() {
    if (!this._bindings.method_get_border_color) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("get_border_color");
      this._bindings.method_get_border_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_border_width_all() {
    if (!this._bindings.method_set_border_width_all) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("set_border_width_all");
      this._bindings.method_set_border_width_all = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_border_width_min() {
    if (!this._bindings.method_get_border_width_min) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("get_border_width_min");
      this._bindings.method_get_border_width_min = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_border_width() {
    if (!this._bindings.method_set_border_width) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("set_border_width");
      this._bindings.method_set_border_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        437707142
      );
    }
  }
  static init_method_get_border_width() {
    if (!this._bindings.method_get_border_width) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("get_border_width");
      this._bindings.method_get_border_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1983885014
      );
    }
  }
  static init_method_set_border_blend() {
    if (!this._bindings.method_set_border_blend) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("set_border_blend");
      this._bindings.method_set_border_blend = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_border_blend() {
    if (!this._bindings.method_get_border_blend) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("get_border_blend");
      this._bindings.method_get_border_blend = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_corner_radius_all() {
    if (!this._bindings.method_set_corner_radius_all) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("set_corner_radius_all");
      this._bindings.method_set_corner_radius_all = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_corner_radius() {
    if (!this._bindings.method_set_corner_radius) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("set_corner_radius");
      this._bindings.method_set_corner_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2696158768
      );
    }
  }
  static init_method_get_corner_radius() {
    if (!this._bindings.method_get_corner_radius) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("get_corner_radius");
      this._bindings.method_get_corner_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3982397690
      );
    }
  }
  static init_method_set_expand_margin() {
    if (!this._bindings.method_set_expand_margin) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("set_expand_margin");
      this._bindings.method_set_expand_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4290182280
      );
    }
  }
  static init_method_set_expand_margin_all() {
    if (!this._bindings.method_set_expand_margin_all) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("set_expand_margin_all");
      this._bindings.method_set_expand_margin_all = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_expand_margin() {
    if (!this._bindings.method_get_expand_margin) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("get_expand_margin");
      this._bindings.method_get_expand_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2869120046
      );
    }
  }
  static init_method_set_draw_center() {
    if (!this._bindings.method_set_draw_center) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("set_draw_center");
      this._bindings.method_set_draw_center = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_draw_center_enabled() {
    if (!this._bindings.method_is_draw_center_enabled) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("is_draw_center_enabled");
      this._bindings.method_is_draw_center_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_skew() {
    if (!this._bindings.method_set_skew) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("set_skew");
      this._bindings.method_set_skew = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_skew() {
    if (!this._bindings.method_get_skew) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("get_skew");
      this._bindings.method_get_skew = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_shadow_color() {
    if (!this._bindings.method_set_shadow_color) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("set_shadow_color");
      this._bindings.method_set_shadow_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_shadow_color() {
    if (!this._bindings.method_get_shadow_color) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("get_shadow_color");
      this._bindings.method_get_shadow_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_shadow_size() {
    if (!this._bindings.method_set_shadow_size) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("set_shadow_size");
      this._bindings.method_set_shadow_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_shadow_size() {
    if (!this._bindings.method_get_shadow_size) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("get_shadow_size");
      this._bindings.method_get_shadow_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_shadow_offset() {
    if (!this._bindings.method_set_shadow_offset) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("set_shadow_offset");
      this._bindings.method_set_shadow_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_shadow_offset() {
    if (!this._bindings.method_get_shadow_offset) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("get_shadow_offset");
      this._bindings.method_get_shadow_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_anti_aliased() {
    if (!this._bindings.method_set_anti_aliased) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("set_anti_aliased");
      this._bindings.method_set_anti_aliased = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_anti_aliased() {
    if (!this._bindings.method_is_anti_aliased) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("is_anti_aliased");
      this._bindings.method_is_anti_aliased = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_aa_size() {
    if (!this._bindings.method_set_aa_size) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("set_aa_size");
      this._bindings.method_set_aa_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_aa_size() {
    if (!this._bindings.method_get_aa_size) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("get_aa_size");
      this._bindings.method_get_aa_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_corner_detail() {
    if (!this._bindings.method_set_corner_detail) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("set_corner_detail");
      this._bindings.method_set_corner_detail = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_corner_detail() {
    if (!this._bindings.method_get_corner_detail) {
      let classname = new StringName("StyleBoxFlat");
      let methodname = new StringName("get_corner_detail");
      this._bindings.method_get_corner_detail = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  set_bg_color(_color) {
    StyleBoxFlat.init_method_set_bg_color();
    return _call_native_mb_no_ret(
      StyleBoxFlat._bindings.method_set_bg_color,
      this._owner,
      _color
    );
    
  }
  get_bg_color() {
    StyleBoxFlat.init_method_get_bg_color();
    return _call_native_mb_ret(
      StyleBoxFlat._bindings.method_get_bg_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_border_color(_color) {
    StyleBoxFlat.init_method_set_border_color();
    return _call_native_mb_no_ret(
      StyleBoxFlat._bindings.method_set_border_color,
      this._owner,
      _color
    );
    
  }
  get_border_color() {
    StyleBoxFlat.init_method_get_border_color();
    return _call_native_mb_ret(
      StyleBoxFlat._bindings.method_get_border_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_border_width_all(_width) {
    StyleBoxFlat.init_method_set_border_width_all();
    return _call_native_mb_no_ret(
      StyleBoxFlat._bindings.method_set_border_width_all,
      this._owner,
      _width
    );
    
  }
  get_border_width_min() {
    StyleBoxFlat.init_method_get_border_width_min();
    return _call_native_mb_ret(
      StyleBoxFlat._bindings.method_get_border_width_min,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_border_width(_margin, _width) {
    StyleBoxFlat.init_method_set_border_width();
    return _call_native_mb_no_ret(
      StyleBoxFlat._bindings.method_set_border_width,
      this._owner,
      _margin, _width
    );
    
  }
  get_border_width(_margin) {
    StyleBoxFlat.init_method_get_border_width();
    return _call_native_mb_ret(
      StyleBoxFlat._bindings.method_get_border_width,
      this._owner,
			Variant.Type.INT,
    
      _margin
    );
    
  }
  set_border_blend(_blend) {
    StyleBoxFlat.init_method_set_border_blend();
    return _call_native_mb_no_ret(
      StyleBoxFlat._bindings.method_set_border_blend,
      this._owner,
      _blend
    );
    
  }
  get_border_blend() {
    StyleBoxFlat.init_method_get_border_blend();
    return _call_native_mb_ret(
      StyleBoxFlat._bindings.method_get_border_blend,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_corner_radius_all(_radius) {
    StyleBoxFlat.init_method_set_corner_radius_all();
    return _call_native_mb_no_ret(
      StyleBoxFlat._bindings.method_set_corner_radius_all,
      this._owner,
      _radius
    );
    
  }
  set_corner_radius(_corner, _radius) {
    StyleBoxFlat.init_method_set_corner_radius();
    return _call_native_mb_no_ret(
      StyleBoxFlat._bindings.method_set_corner_radius,
      this._owner,
      _corner, _radius
    );
    
  }
  get_corner_radius(_corner) {
    StyleBoxFlat.init_method_get_corner_radius();
    return _call_native_mb_ret(
      StyleBoxFlat._bindings.method_get_corner_radius,
      this._owner,
			Variant.Type.INT,
    
      _corner
    );
    
  }
  set_expand_margin(_margin, _size) {
    StyleBoxFlat.init_method_set_expand_margin();
    return _call_native_mb_no_ret(
      StyleBoxFlat._bindings.method_set_expand_margin,
      this._owner,
      _margin, _size
    );
    
  }
  set_expand_margin_all(_size) {
    StyleBoxFlat.init_method_set_expand_margin_all();
    return _call_native_mb_no_ret(
      StyleBoxFlat._bindings.method_set_expand_margin_all,
      this._owner,
      _size
    );
    
  }
  get_expand_margin(_margin) {
    StyleBoxFlat.init_method_get_expand_margin();
    return _call_native_mb_ret(
      StyleBoxFlat._bindings.method_get_expand_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      _margin
    );
    
  }
  set_draw_center(_draw_center) {
    StyleBoxFlat.init_method_set_draw_center();
    return _call_native_mb_no_ret(
      StyleBoxFlat._bindings.method_set_draw_center,
      this._owner,
      _draw_center
    );
    
  }
  is_draw_center_enabled() {
    StyleBoxFlat.init_method_is_draw_center_enabled();
    return _call_native_mb_ret(
      StyleBoxFlat._bindings.method_is_draw_center_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_skew(_skew) {
    StyleBoxFlat.init_method_set_skew();
    return _call_native_mb_no_ret(
      StyleBoxFlat._bindings.method_set_skew,
      this._owner,
      _skew
    );
    
  }
  get_skew() {
    StyleBoxFlat.init_method_get_skew();
    return _call_native_mb_ret(
      StyleBoxFlat._bindings.method_get_skew,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_shadow_color(_color) {
    StyleBoxFlat.init_method_set_shadow_color();
    return _call_native_mb_no_ret(
      StyleBoxFlat._bindings.method_set_shadow_color,
      this._owner,
      _color
    );
    
  }
  get_shadow_color() {
    StyleBoxFlat.init_method_get_shadow_color();
    return _call_native_mb_ret(
      StyleBoxFlat._bindings.method_get_shadow_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_shadow_size(_size) {
    StyleBoxFlat.init_method_set_shadow_size();
    return _call_native_mb_no_ret(
      StyleBoxFlat._bindings.method_set_shadow_size,
      this._owner,
      _size
    );
    
  }
  get_shadow_size() {
    StyleBoxFlat.init_method_get_shadow_size();
    return _call_native_mb_ret(
      StyleBoxFlat._bindings.method_get_shadow_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_shadow_offset(_offset) {
    StyleBoxFlat.init_method_set_shadow_offset();
    return _call_native_mb_no_ret(
      StyleBoxFlat._bindings.method_set_shadow_offset,
      this._owner,
      _offset
    );
    
  }
  get_shadow_offset() {
    StyleBoxFlat.init_method_get_shadow_offset();
    return _call_native_mb_ret(
      StyleBoxFlat._bindings.method_get_shadow_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_anti_aliased(_anti_aliased) {
    StyleBoxFlat.init_method_set_anti_aliased();
    return _call_native_mb_no_ret(
      StyleBoxFlat._bindings.method_set_anti_aliased,
      this._owner,
      _anti_aliased
    );
    
  }
  is_anti_aliased() {
    StyleBoxFlat.init_method_is_anti_aliased();
    return _call_native_mb_ret(
      StyleBoxFlat._bindings.method_is_anti_aliased,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_aa_size(_size) {
    StyleBoxFlat.init_method_set_aa_size();
    return _call_native_mb_no_ret(
      StyleBoxFlat._bindings.method_set_aa_size,
      this._owner,
      _size
    );
    
  }
  get_aa_size() {
    StyleBoxFlat.init_method_get_aa_size();
    return _call_native_mb_ret(
      StyleBoxFlat._bindings.method_get_aa_size,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_corner_detail(_detail) {
    StyleBoxFlat.init_method_set_corner_detail();
    return _call_native_mb_no_ret(
      StyleBoxFlat._bindings.method_set_corner_detail,
      this._owner,
      _detail
    );
    
  }
  get_corner_detail() {
    StyleBoxFlat.init_method_get_corner_detail();
    return _call_native_mb_ret(
      StyleBoxFlat._bindings.method_get_corner_detail,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get bg_color () {
  return this.get_bg_color();
}
set bg_color (new_value) {
  this.set_bg_color(new_value);
}
get draw_center () {
  return this.is_draw_center_enabled();
}
set draw_center (new_value) {
  this.set_draw_center(new_value);
}
get skew () {
  return this.get_skew();
}
set skew (new_value) {
  this.set_skew(new_value);
}
get border_width_left () {
  return this.get_border_width();
}
set border_width_left (new_value) {
  this.set_border_width(new_value);
}
get border_width_top () {
  return this.get_border_width();
}
set border_width_top (new_value) {
  this.set_border_width(new_value);
}
get border_width_right () {
  return this.get_border_width();
}
set border_width_right (new_value) {
  this.set_border_width(new_value);
}
get border_width_bottom () {
  return this.get_border_width();
}
set border_width_bottom (new_value) {
  this.set_border_width(new_value);
}
get border_color () {
  return this.get_border_color();
}
set border_color (new_value) {
  this.set_border_color(new_value);
}
get border_blend () {
  return this.get_border_blend();
}
set border_blend (new_value) {
  this.set_border_blend(new_value);
}
get corner_radius_top_left () {
  return this.get_corner_radius();
}
set corner_radius_top_left (new_value) {
  this.set_corner_radius(new_value);
}
get corner_radius_top_right () {
  return this.get_corner_radius();
}
set corner_radius_top_right (new_value) {
  this.set_corner_radius(new_value);
}
get corner_radius_bottom_right () {
  return this.get_corner_radius();
}
set corner_radius_bottom_right (new_value) {
  this.set_corner_radius(new_value);
}
get corner_radius_bottom_left () {
  return this.get_corner_radius();
}
set corner_radius_bottom_left (new_value) {
  this.set_corner_radius(new_value);
}
get corner_detail () {
  return this.get_corner_detail();
}
set corner_detail (new_value) {
  this.set_corner_detail(new_value);
}
get expand_margin_left () {
  return this.get_expand_margin();
}
set expand_margin_left (new_value) {
  this.set_expand_margin(new_value);
}
get expand_margin_top () {
  return this.get_expand_margin();
}
set expand_margin_top (new_value) {
  this.set_expand_margin(new_value);
}
get expand_margin_right () {
  return this.get_expand_margin();
}
set expand_margin_right (new_value) {
  this.set_expand_margin(new_value);
}
get expand_margin_bottom () {
  return this.get_expand_margin();
}
set expand_margin_bottom (new_value) {
  this.set_expand_margin(new_value);
}
get shadow_color () {
  return this.get_shadow_color();
}
set shadow_color (new_value) {
  this.set_shadow_color(new_value);
}
get shadow_size () {
  return this.get_shadow_size();
}
set shadow_size (new_value) {
  this.set_shadow_size(new_value);
}
get shadow_offset () {
  return this.get_shadow_offset();
}
set shadow_offset (new_value) {
  this.set_shadow_offset(new_value);
}
get anti_aliasing () {
  return this.is_anti_aliased();
}
set anti_aliasing (new_value) {
  this.set_anti_aliased(new_value);
}
get anti_aliasing_size () {
  return this.get_aa_size();
}
set anti_aliasing_size (new_value) {
  this.set_aa_size(new_value);
}

}