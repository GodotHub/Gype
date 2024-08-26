import * as internal from '__internal__';
import { Color } from 'src/js_godot/variant/color'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { GDString } from 'src/js_godot/variant/gd_string'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { Rect2 } from 'src/js_godot/variant/rect2'
import { Variant } from 'src/js_godot/variant/variant'
import { Vector2i } from 'src/js_godot/variant/vector2i'
import { RID } from 'src/js_godot/variant/rid'
import { RefCounted } from 'src/js_godot/classesref_counted'
import { PackedFloat32Array } from 'src/js_godot/variant/packed_float32_array'
class _MethodBindings {
    method_clear;
    method_set_direction;
    method_get_direction;
    method_set_custom_punctuation;
    method_get_custom_punctuation;
    method_set_orientation;
    method_get_orientation;
    method_set_preserve_invalid;
    method_get_preserve_invalid;
    method_set_preserve_control;
    method_get_preserve_control;
    method_set_bidi_override;
    method_set_dropcap;
    method_clear_dropcap;
    method_add_string;
    method_add_object;
    method_resize_object;
    method_set_alignment;
    method_get_alignment;
    method_tab_align;
    method_set_break_flags;
    method_get_break_flags;
    method_set_justification_flags;
    method_get_justification_flags;
    method_set_text_overrun_behavior;
    method_get_text_overrun_behavior;
    method_set_ellipsis_char;
    method_get_ellipsis_char;
    method_set_width;
    method_get_width;
    method_get_non_wrapped_size;
    method_get_size;
    method_get_rid;
    method_get_line_rid;
    method_get_dropcap_rid;
    method_get_line_count;
    method_set_max_lines_visible;
    method_get_max_lines_visible;
    method_get_line_objects;
    method_get_line_object_rect;
    method_get_line_size;
    method_get_line_range;
    method_get_line_ascent;
    method_get_line_descent;
    method_get_line_width;
    method_get_line_underline_position;
    method_get_line_underline_thickness;
    method_get_dropcap_size;
    method_get_dropcap_lines;
    method_draw;
    method_draw_outline;
    method_draw_line;
    method_draw_line_outline;
    method_draw_dropcap;
    method_draw_dropcap_outline;
    method_hit_test;
}


export class TextParagraph extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TextParagraph");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_direction");
      this._bindings.method_set_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1418190634
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_direction");
      this._bindings.method_get_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2516697328
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_custom_punctuation");
      this._bindings.method_set_custom_punctuation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_custom_punctuation");
      this._bindings.method_get_custom_punctuation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_orientation");
      this._bindings.method_set_orientation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        42823726
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_orientation");
      this._bindings.method_get_orientation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        175768116
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_preserve_invalid");
      this._bindings.method_set_preserve_invalid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_preserve_invalid");
      this._bindings.method_get_preserve_invalid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_preserve_control");
      this._bindings.method_set_preserve_control = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_preserve_control");
      this._bindings.method_get_preserve_control = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_bidi_override");
      this._bindings.method_set_bidi_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_dropcap");
      this._bindings.method_set_dropcap = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2498990330
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("clear_dropcap");
      this._bindings.method_clear_dropcap = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("add_string");
      this._bindings.method_add_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        621426851
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("add_object");
      this._bindings.method_add_object = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1316529304
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("resize_object");
      this._bindings.method_resize_object = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2095776372
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_alignment");
      this._bindings.method_set_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2312603777
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_alignment");
      this._bindings.method_get_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        341400642
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("tab_align");
      this._bindings.method_tab_align = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2899603908
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_break_flags");
      this._bindings.method_set_break_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2809697122
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_break_flags");
      this._bindings.method_get_break_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2340632602
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_justification_flags");
      this._bindings.method_set_justification_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2877345813
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_justification_flags");
      this._bindings.method_get_justification_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1583363614
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_text_overrun_behavior");
      this._bindings.method_set_text_overrun_behavior = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1008890932
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_text_overrun_behavior");
      this._bindings.method_get_text_overrun_behavior = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3779142101
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_ellipsis_char");
      this._bindings.method_set_ellipsis_char = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_ellipsis_char");
      this._bindings.method_get_ellipsis_char = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_width");
      this._bindings.method_set_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_width");
      this._bindings.method_get_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_non_wrapped_size");
      this._bindings.method_get_non_wrapped_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_rid");
      this._bindings.method_get_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_rid");
      this._bindings.method_get_line_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        495598643
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_dropcap_rid");
      this._bindings.method_get_dropcap_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_count");
      this._bindings.method_get_line_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_max_lines_visible");
      this._bindings.method_set_max_lines_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_max_lines_visible");
      this._bindings.method_get_max_lines_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_objects");
      this._bindings.method_get_line_objects = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        663333327
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_object_rect");
      this._bindings.method_get_line_object_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        204315017
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_size");
      this._bindings.method_get_line_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2299179447
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_range");
      this._bindings.method_get_line_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        880721226
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_ascent");
      this._bindings.method_get_line_ascent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_descent");
      this._bindings.method_get_line_descent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_width");
      this._bindings.method_get_line_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_underline_position");
      this._bindings.method_get_line_underline_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_underline_thickness");
      this._bindings.method_get_line_underline_thickness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_dropcap_size");
      this._bindings.method_get_dropcap_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_dropcap_lines");
      this._bindings.method_get_dropcap_lines = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("draw");
      this._bindings.method_draw = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1567802413
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("draw_outline");
      this._bindings.method_draw_outline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1893131224
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("draw_line");
      this._bindings.method_draw_line = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1242169894
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("draw_line_outline");
      this._bindings.method_draw_line_outline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2664926980
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("draw_dropcap");
      this._bindings.method_draw_dropcap = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        856975658
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("draw_dropcap_outline");
      this._bindings.method_draw_dropcap_outline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1343401456
      );
    }
    {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("hit_test");
      this._bindings.method_hit_test = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3820158470
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
  set_custom_punctuation(_custom_punctuation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_custom_punctuation,
      this._owner,
      _custom_punctuation
    );
  }
  get_custom_punctuation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_custom_punctuation,
      this._owner,
			Variant.Type.STRING
    ,
      
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
  set_dropcap(_text, _font, _font_size, _dropcap_margins, _language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_set_dropcap,
      this._owner,
			Variant.Type.BOOL,
      _text, _font, _font_size, _dropcap_margins, _language
    );
  }
  clear_dropcap() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_dropcap,
      this._owner,
      
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
  set_alignment(_alignment) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_alignment,
      this._owner,
      _alignment
    );
  }
  get_alignment() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_alignment,
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
  set_break_flags(_flags) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_break_flags,
      this._owner,
      _flags
    );
  }
  get_break_flags() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_break_flags,
      this._owner,
			Variant.INT,
      
    );
  }
  set_justification_flags(_flags) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_justification_flags,
      this._owner,
      _flags
    );
  }
  get_justification_flags() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_justification_flags,
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
			Variant.Type.STRING
    ,
      
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
  get_non_wrapped_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_non_wrapped_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  get_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  get_rid() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rid,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  get_line_rid(_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_rid,
      this._owner,
			Variant.Type.RID
    ,
      _line
    );
  }
  get_dropcap_rid() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_dropcap_rid,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  get_line_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_max_lines_visible(_max_lines_visible) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_lines_visible,
      this._owner,
      _max_lines_visible
    );
  }
  get_max_lines_visible() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_lines_visible,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_line_objects(_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_objects,
      this._owner,
			Variant.Type.ARRAY
    ,
      _line
    );
  }
  get_line_object_rect(_line, _key) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_object_rect,
      this._owner,
			Variant.Type.RECT2
    ,
      _line, _key
    );
  }
  get_line_size(_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _line
    );
  }
  get_line_range(_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_range,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      _line
    );
  }
  get_line_ascent(_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_ascent,
      this._owner,
			Variant.Type.FLOAT,
      _line
    );
  }
  get_line_descent(_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_descent,
      this._owner,
			Variant.Type.FLOAT,
      _line
    );
  }
  get_line_width(_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_width,
      this._owner,
			Variant.Type.FLOAT,
      _line
    );
  }
  get_line_underline_position(_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_underline_position,
      this._owner,
			Variant.Type.FLOAT,
      _line
    );
  }
  get_line_underline_thickness(_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_underline_thickness,
      this._owner,
			Variant.Type.FLOAT,
      _line
    );
  }
  get_dropcap_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_dropcap_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  get_dropcap_lines() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_dropcap_lines,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  draw(_canvas, _pos, _color, _dc_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw,
      this._owner,
      _canvas, _pos, _color, _dc_color
    );
  }
  draw_outline(_canvas, _pos, _outline_size, _color, _dc_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_outline,
      this._owner,
      _canvas, _pos, _outline_size, _color, _dc_color
    );
  }
  draw_line(_canvas, _pos, _line, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_line,
      this._owner,
      _canvas, _pos, _line, _color
    );
  }
  draw_line_outline(_canvas, _pos, _line, _outline_size, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_line_outline,
      this._owner,
      _canvas, _pos, _line, _outline_size, _color
    );
  }
  draw_dropcap(_canvas, _pos, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_dropcap,
      this._owner,
      _canvas, _pos, _color
    );
  }
  draw_dropcap_outline(_canvas, _pos, _outline_size, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_dropcap_outline,
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
}