import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { Color } from '@js_godot/variant/color'
import { Vector2 } from '@js_godot/variant/vector2'
import { PackedFloat32Array } from '@js_godot/variant/packed_float32_array'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { RID } from '@js_godot/variant/rid'
import { Rect2 } from '@js_godot/variant/rect2'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_clear;
  method_set_direction;
  method_get_direction;
  method_set_orientation;
  method_get_orientation;
  method_set_preserve_invalid;
  method_get_preserve_invalid;
  method_set_preserve_control;
  method_get_preserve_control;
  method_set_bidi_override;
  method_add_string;
  method_add_object;
  method_resize_object;
  method_set_width;
  method_get_width;
  method_set_horizontal_alignment;
  method_get_horizontal_alignment;
  method_tab_align;
  method_set_flags;
  method_get_flags;
  method_set_text_overrun_behavior;
  method_get_text_overrun_behavior;
  method_set_ellipsis_char;
  method_get_ellipsis_char;
  method_get_objects;
  method_get_object_rect;
  method_get_size;
  method_get_rid;
  method_get_line_ascent;
  method_get_line_descent;
  method_get_line_width;
  method_get_line_underline_position;
  method_get_line_underline_thickness;
  method_draw;
  method_draw_outline;
  method_hit_test;
}
export class TextLine extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("TextLine");
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
      let classname = new StringName("TextLine");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("set_direction");
      this._bindings.method_set_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1418190634
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("get_direction");
      this._bindings.method_get_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2516697328
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("set_orientation");
      this._bindings.method_set_orientation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        42823726
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("get_orientation");
      this._bindings.method_get_orientation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        175768116
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("set_preserve_invalid");
      this._bindings.method_set_preserve_invalid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("get_preserve_invalid");
      this._bindings.method_get_preserve_invalid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("set_preserve_control");
      this._bindings.method_set_preserve_control = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("get_preserve_control");
      this._bindings.method_get_preserve_control = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("set_bidi_override");
      this._bindings.method_set_bidi_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("add_string");
      this._bindings.method_add_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        621426851
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("add_object");
      this._bindings.method_add_object = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1316529304
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("resize_object");
      this._bindings.method_resize_object = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2095776372
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("set_width");
      this._bindings.method_set_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("get_width");
      this._bindings.method_get_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("set_horizontal_alignment");
      this._bindings.method_set_horizontal_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2312603777
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("get_horizontal_alignment");
      this._bindings.method_get_horizontal_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        341400642
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("tab_align");
      this._bindings.method_tab_align = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2899603908
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("set_flags");
      this._bindings.method_set_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2877345813
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("get_flags");
      this._bindings.method_get_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1583363614
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("set_text_overrun_behavior");
      this._bindings.method_set_text_overrun_behavior = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1008890932
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("get_text_overrun_behavior");
      this._bindings.method_get_text_overrun_behavior = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3779142101
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("set_ellipsis_char");
      this._bindings.method_set_ellipsis_char = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("get_ellipsis_char");
      this._bindings.method_get_ellipsis_char = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("get_objects");
      this._bindings.method_get_objects = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("get_object_rect");
      this._bindings.method_get_object_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1742700391
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("get_rid");
      this._bindings.method_get_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("get_line_ascent");
      this._bindings.method_get_line_ascent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("get_line_descent");
      this._bindings.method_get_line_descent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("get_line_width");
      this._bindings.method_get_line_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("get_line_underline_position");
      this._bindings.method_get_line_underline_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("get_line_underline_thickness");
      this._bindings.method_get_line_underline_thickness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("draw");
      this._bindings.method_draw = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        856975658
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("draw_outline");
      this._bindings.method_draw_outline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1343401456
      );
    }
    {
      let classname = new StringName("TextLine");
      let methodname = new StringName("hit_test");
      this._bindings.method_hit_test = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2401831903
      );
    }
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
    
  }
  set_direction(_direction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_direction,
      this._owner,
      _direction
    );
    
  }
  get_direction() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_direction,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_orientation(_orientation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_orientation,
      this._owner,
      _orientation
    );
    
  }
  get_orientation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_orientation,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_preserve_invalid(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_preserve_invalid,
      this._owner,
      _enabled
    );
    
  }
  get_preserve_invalid() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_preserve_invalid,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_preserve_control(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_preserve_control,
      this._owner,
      _enabled
    );
    
  }
  get_preserve_control() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_preserve_control,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_bidi_override(_override) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bidi_override,
      this._owner,
      _override
    );
    
  }
  add_string(_text, _font, _font_size, _language, _meta) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_add_string,
      this._owner,
			Variant.Type.BOOL,
      _text, _font, _font_size, _language, _meta
    );
    
  }
  add_object(_key, _size, _inline_align, _length, _baseline) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_add_object,
      this._owner,
			Variant.Type.BOOL,
      _key, _size, _inline_align, _length, _baseline
    );
    
  }
  resize_object(_key, _size, _inline_align, _baseline) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_resize_object,
      this._owner,
			Variant.Type.BOOL,
      _key, _size, _inline_align, _baseline
    );
    
  }
  set_width(_width) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_width,
      this._owner,
      _width
    );
    
  }
  get_width() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_width,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_horizontal_alignment(_alignment) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_horizontal_alignment,
      this._owner,
      _alignment
    );
    
  }
  get_horizontal_alignment() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_horizontal_alignment,
      this._owner,
			Variant.INT,
      
    );
    
  }
  tab_align(_tab_stops) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_tab_align,
      this._owner,
      _tab_stops
    );
    
  }
  set_flags(_flags) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_flags,
      this._owner,
      _flags
    );
    
  }
  get_flags() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_flags,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_text_overrun_behavior(_overrun_behavior) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_text_overrun_behavior,
      this._owner,
      _overrun_behavior
    );
    
  }
  get_text_overrun_behavior() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_text_overrun_behavior,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_ellipsis_char(_char) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ellipsis_char,
      this._owner,
      _char
    );
    
  }
  get_ellipsis_char() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ellipsis_char,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_objects() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_objects,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  get_object_rect(_key) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_object_rect,
      this._owner,
			Variant.Type.RECT2,
    
      _key
    );
    
  }
  get_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_rid() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  get_line_ascent() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_ascent,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_line_descent() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_descent,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_line_width() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_width,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_line_underline_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_underline_position,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_line_underline_thickness() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_underline_thickness,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  draw(_canvas, _pos, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw,
      this._owner,
      _canvas, _pos, _color
    );
    
  }
  draw_outline(_canvas, _pos, _outline_size, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_outline,
      this._owner,
      _canvas, _pos, _outline_size, _color
    );
    
  }
  hit_test(_coords) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_hit_test,
      this._owner,
			Variant.Type.INT,
      _coords
    );
    
  }
  
get direction () {
  return this.get_direction();
}
set direction (new_value) {
  this.set_direction(new_value);
}
get orientation () {
  return this.get_orientation();
}
set orientation (new_value) {
  this.set_orientation(new_value);
}
get preserve_invalid () {
  return this.get_preserve_invalid();
}
set preserve_invalid (new_value) {
  this.set_preserve_invalid(new_value);
}
get preserve_control () {
  return this.get_preserve_control();
}
set preserve_control (new_value) {
  this.set_preserve_control(new_value);
}
get width () {
  return this.get_width();
}
set width (new_value) {
  this.set_width(new_value);
}
get alignment () {
  return this.get_horizontal_alignment();
}
set alignment (new_value) {
  this.set_horizontal_alignment(new_value);
}
get flags () {
  return this.get_flags();
}
set flags (new_value) {
  this.set_flags(new_value);
}
get text_overrun_behavior () {
  return this.get_text_overrun_behavior();
}
set text_overrun_behavior (new_value) {
  this.set_text_overrun_behavior(new_value);
}
get ellipsis_char () {
  return this.get_ellipsis_char();
}
set ellipsis_char (new_value) {
  this.set_ellipsis_char(new_value);
}


  static {
    this._init_bindings();
  }
}