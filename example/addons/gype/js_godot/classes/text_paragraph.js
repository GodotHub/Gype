import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
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
@GodotClass
export class TextParagraph extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TextParagraph");
    } else {
      super(godot_object);
    }
  }
  static init_method_clear() {
    if (!this._bindings.method_clear) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_direction() {
    if (!this._bindings.method_set_direction) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_direction");
      this._bindings.method_set_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1418190634
      );
    }
  }
  static init_method_get_direction() {
    if (!this._bindings.method_get_direction) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_direction");
      this._bindings.method_get_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2516697328
      );
    }
  }
  static init_method_set_custom_punctuation() {
    if (!this._bindings.method_set_custom_punctuation) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_custom_punctuation");
      this._bindings.method_set_custom_punctuation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_custom_punctuation() {
    if (!this._bindings.method_get_custom_punctuation) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_custom_punctuation");
      this._bindings.method_get_custom_punctuation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_orientation() {
    if (!this._bindings.method_set_orientation) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_orientation");
      this._bindings.method_set_orientation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        42823726
      );
    }
  }
  static init_method_get_orientation() {
    if (!this._bindings.method_get_orientation) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_orientation");
      this._bindings.method_get_orientation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        175768116
      );
    }
  }
  static init_method_set_preserve_invalid() {
    if (!this._bindings.method_set_preserve_invalid) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_preserve_invalid");
      this._bindings.method_set_preserve_invalid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_preserve_invalid() {
    if (!this._bindings.method_get_preserve_invalid) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_preserve_invalid");
      this._bindings.method_get_preserve_invalid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_preserve_control() {
    if (!this._bindings.method_set_preserve_control) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_preserve_control");
      this._bindings.method_set_preserve_control = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_preserve_control() {
    if (!this._bindings.method_get_preserve_control) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_preserve_control");
      this._bindings.method_get_preserve_control = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_bidi_override() {
    if (!this._bindings.method_set_bidi_override) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_bidi_override");
      this._bindings.method_set_bidi_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_set_dropcap() {
    if (!this._bindings.method_set_dropcap) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_dropcap");
      this._bindings.method_set_dropcap = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2498990330
      );
    }
  }
  static init_method_clear_dropcap() {
    if (!this._bindings.method_clear_dropcap) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("clear_dropcap");
      this._bindings.method_clear_dropcap = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_add_string() {
    if (!this._bindings.method_add_string) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("add_string");
      this._bindings.method_add_string = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        621426851
      );
    }
  }
  static init_method_add_object() {
    if (!this._bindings.method_add_object) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("add_object");
      this._bindings.method_add_object = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1316529304
      );
    }
  }
  static init_method_resize_object() {
    if (!this._bindings.method_resize_object) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("resize_object");
      this._bindings.method_resize_object = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2095776372
      );
    }
  }
  static init_method_set_alignment() {
    if (!this._bindings.method_set_alignment) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_alignment");
      this._bindings.method_set_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2312603777
      );
    }
  }
  static init_method_get_alignment() {
    if (!this._bindings.method_get_alignment) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_alignment");
      this._bindings.method_get_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        341400642
      );
    }
  }
  static init_method_tab_align() {
    if (!this._bindings.method_tab_align) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("tab_align");
      this._bindings.method_tab_align = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2899603908
      );
    }
  }
  static init_method_set_break_flags() {
    if (!this._bindings.method_set_break_flags) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_break_flags");
      this._bindings.method_set_break_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2809697122
      );
    }
  }
  static init_method_get_break_flags() {
    if (!this._bindings.method_get_break_flags) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_break_flags");
      this._bindings.method_get_break_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2340632602
      );
    }
  }
  static init_method_set_justification_flags() {
    if (!this._bindings.method_set_justification_flags) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_justification_flags");
      this._bindings.method_set_justification_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2877345813
      );
    }
  }
  static init_method_get_justification_flags() {
    if (!this._bindings.method_get_justification_flags) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_justification_flags");
      this._bindings.method_get_justification_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1583363614
      );
    }
  }
  static init_method_set_text_overrun_behavior() {
    if (!this._bindings.method_set_text_overrun_behavior) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_text_overrun_behavior");
      this._bindings.method_set_text_overrun_behavior = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1008890932
      );
    }
  }
  static init_method_get_text_overrun_behavior() {
    if (!this._bindings.method_get_text_overrun_behavior) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_text_overrun_behavior");
      this._bindings.method_get_text_overrun_behavior = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3779142101
      );
    }
  }
  static init_method_set_ellipsis_char() {
    if (!this._bindings.method_set_ellipsis_char) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_ellipsis_char");
      this._bindings.method_set_ellipsis_char = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_ellipsis_char() {
    if (!this._bindings.method_get_ellipsis_char) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_ellipsis_char");
      this._bindings.method_get_ellipsis_char = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_width() {
    if (!this._bindings.method_set_width) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_width");
      this._bindings.method_set_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_width() {
    if (!this._bindings.method_get_width) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_width");
      this._bindings.method_get_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_non_wrapped_size() {
    if (!this._bindings.method_get_non_wrapped_size) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_non_wrapped_size");
      this._bindings.method_get_non_wrapped_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_get_size() {
    if (!this._bindings.method_get_size) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_get_rid() {
    if (!this._bindings.method_get_rid) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_rid");
      this._bindings.method_get_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_get_line_rid() {
    if (!this._bindings.method_get_line_rid) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_rid");
      this._bindings.method_get_line_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        495598643
      );
    }
  }
  static init_method_get_dropcap_rid() {
    if (!this._bindings.method_get_dropcap_rid) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_dropcap_rid");
      this._bindings.method_get_dropcap_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_get_line_count() {
    if (!this._bindings.method_get_line_count) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_count");
      this._bindings.method_get_line_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_max_lines_visible() {
    if (!this._bindings.method_set_max_lines_visible) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("set_max_lines_visible");
      this._bindings.method_set_max_lines_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_max_lines_visible() {
    if (!this._bindings.method_get_max_lines_visible) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_max_lines_visible");
      this._bindings.method_get_max_lines_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_line_objects() {
    if (!this._bindings.method_get_line_objects) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_objects");
      this._bindings.method_get_line_objects = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        663333327
      );
    }
  }
  static init_method_get_line_object_rect() {
    if (!this._bindings.method_get_line_object_rect) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_object_rect");
      this._bindings.method_get_line_object_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        204315017
      );
    }
  }
  static init_method_get_line_size() {
    if (!this._bindings.method_get_line_size) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_size");
      this._bindings.method_get_line_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2299179447
      );
    }
  }
  static init_method_get_line_range() {
    if (!this._bindings.method_get_line_range) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_range");
      this._bindings.method_get_line_range = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        880721226
      );
    }
  }
  static init_method_get_line_ascent() {
    if (!this._bindings.method_get_line_ascent) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_ascent");
      this._bindings.method_get_line_ascent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_get_line_descent() {
    if (!this._bindings.method_get_line_descent) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_descent");
      this._bindings.method_get_line_descent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_get_line_width() {
    if (!this._bindings.method_get_line_width) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_width");
      this._bindings.method_get_line_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_get_line_underline_position() {
    if (!this._bindings.method_get_line_underline_position) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_underline_position");
      this._bindings.method_get_line_underline_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_get_line_underline_thickness() {
    if (!this._bindings.method_get_line_underline_thickness) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_line_underline_thickness");
      this._bindings.method_get_line_underline_thickness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_get_dropcap_size() {
    if (!this._bindings.method_get_dropcap_size) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_dropcap_size");
      this._bindings.method_get_dropcap_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_get_dropcap_lines() {
    if (!this._bindings.method_get_dropcap_lines) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("get_dropcap_lines");
      this._bindings.method_get_dropcap_lines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_draw() {
    if (!this._bindings.method_draw) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("draw");
      this._bindings.method_draw = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1567802413
      );
    }
  }
  static init_method_draw_outline() {
    if (!this._bindings.method_draw_outline) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("draw_outline");
      this._bindings.method_draw_outline = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1893131224
      );
    }
  }
  static init_method_draw_line() {
    if (!this._bindings.method_draw_line) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("draw_line");
      this._bindings.method_draw_line = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1242169894
      );
    }
  }
  static init_method_draw_line_outline() {
    if (!this._bindings.method_draw_line_outline) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("draw_line_outline");
      this._bindings.method_draw_line_outline = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2664926980
      );
    }
  }
  static init_method_draw_dropcap() {
    if (!this._bindings.method_draw_dropcap) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("draw_dropcap");
      this._bindings.method_draw_dropcap = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        856975658
      );
    }
  }
  static init_method_draw_dropcap_outline() {
    if (!this._bindings.method_draw_dropcap_outline) {
      let classname = new StringName("TextParagraph");
      let methodname = new StringName("draw_dropcap_outline");
      this._bindings.method_draw_dropcap_outline = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1343401456
      );
    }
  }
  static init_method_hit_test() {
    if (!this._bindings.method_hit_test) {
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
    TextParagraph.init_method_clear();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_clear,
      this._owner,
      
    );
    
  }
  set_direction(_direction) {
    TextParagraph.init_method_set_direction();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_set_direction,
      this._owner,
      _direction
    );
    
  }
  get_direction() {
    TextParagraph.init_method_get_direction();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_direction,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_custom_punctuation(_custom_punctuation) {
    TextParagraph.init_method_set_custom_punctuation();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_set_custom_punctuation,
      this._owner,
      _custom_punctuation
    );
    
  }
  get_custom_punctuation() {
    TextParagraph.init_method_get_custom_punctuation();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_custom_punctuation,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_orientation(_orientation) {
    TextParagraph.init_method_set_orientation();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_set_orientation,
      this._owner,
      _orientation
    );
    
  }
  get_orientation() {
    TextParagraph.init_method_get_orientation();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_orientation,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_preserve_invalid(_enabled) {
    TextParagraph.init_method_set_preserve_invalid();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_set_preserve_invalid,
      this._owner,
      _enabled
    );
    
  }
  get_preserve_invalid() {
    TextParagraph.init_method_get_preserve_invalid();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_preserve_invalid,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_preserve_control(_enabled) {
    TextParagraph.init_method_set_preserve_control();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_set_preserve_control,
      this._owner,
      _enabled
    );
    
  }
  get_preserve_control() {
    TextParagraph.init_method_get_preserve_control();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_preserve_control,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_bidi_override(_override) {
    TextParagraph.init_method_set_bidi_override();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_set_bidi_override,
      this._owner,
      _override
    );
    
  }
  set_dropcap(_text, _font, _font_size, _dropcap_margins, _language) {
    TextParagraph.init_method_set_dropcap();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_set_dropcap,
      this._owner,
			Variant.Type.BOOL,
    
      _text, _font, _font_size, _dropcap_margins, _language
    );
    
  }
  clear_dropcap() {
    TextParagraph.init_method_clear_dropcap();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_clear_dropcap,
      this._owner,
      
    );
    
  }
  add_string(_text, _font, _font_size, _language, _meta) {
    TextParagraph.init_method_add_string();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_add_string,
      this._owner,
			Variant.Type.BOOL,
    
      _text, _font, _font_size, _language, _meta
    );
    
  }
  add_object(_key, _size, _inline_align, _length, _baseline) {
    TextParagraph.init_method_add_object();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_add_object,
      this._owner,
			Variant.Type.BOOL,
    
      _key, _size, _inline_align, _length, _baseline
    );
    
  }
  resize_object(_key, _size, _inline_align, _baseline) {
    TextParagraph.init_method_resize_object();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_resize_object,
      this._owner,
			Variant.Type.BOOL,
    
      _key, _size, _inline_align, _baseline
    );
    
  }
  set_alignment(_alignment) {
    TextParagraph.init_method_set_alignment();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_set_alignment,
      this._owner,
      _alignment
    );
    
  }
  get_alignment() {
    TextParagraph.init_method_get_alignment();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_alignment,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  tab_align(_tab_stops) {
    TextParagraph.init_method_tab_align();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_tab_align,
      this._owner,
      _tab_stops
    );
    
  }
  set_break_flags(_flags) {
    TextParagraph.init_method_set_break_flags();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_set_break_flags,
      this._owner,
      _flags
    );
    
  }
  get_break_flags() {
    TextParagraph.init_method_get_break_flags();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_break_flags,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_justification_flags(_flags) {
    TextParagraph.init_method_set_justification_flags();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_set_justification_flags,
      this._owner,
      _flags
    );
    
  }
  get_justification_flags() {
    TextParagraph.init_method_get_justification_flags();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_justification_flags,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_text_overrun_behavior(_overrun_behavior) {
    TextParagraph.init_method_set_text_overrun_behavior();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_set_text_overrun_behavior,
      this._owner,
      _overrun_behavior
    );
    
  }
  get_text_overrun_behavior() {
    TextParagraph.init_method_get_text_overrun_behavior();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_text_overrun_behavior,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_ellipsis_char(_char) {
    TextParagraph.init_method_set_ellipsis_char();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_set_ellipsis_char,
      this._owner,
      _char
    );
    
  }
  get_ellipsis_char() {
    TextParagraph.init_method_get_ellipsis_char();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_ellipsis_char,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_width(_width) {
    TextParagraph.init_method_set_width();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_set_width,
      this._owner,
      _width
    );
    
  }
  get_width() {
    TextParagraph.init_method_get_width();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_width,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_non_wrapped_size() {
    TextParagraph.init_method_get_non_wrapped_size();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_non_wrapped_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_size() {
    TextParagraph.init_method_get_size();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_rid() {
    TextParagraph.init_method_get_rid();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  get_line_rid(_line) {
    TextParagraph.init_method_get_line_rid();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_line_rid,
      this._owner,
			Variant.Type.RID,
    
      _line
    );
    
  }
  get_dropcap_rid() {
    TextParagraph.init_method_get_dropcap_rid();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_dropcap_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  get_line_count() {
    TextParagraph.init_method_get_line_count();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_line_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_max_lines_visible(_max_lines_visible) {
    TextParagraph.init_method_set_max_lines_visible();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_set_max_lines_visible,
      this._owner,
      _max_lines_visible
    );
    
  }
  get_max_lines_visible() {
    TextParagraph.init_method_get_max_lines_visible();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_max_lines_visible,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_line_objects(_line) {
    TextParagraph.init_method_get_line_objects();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_line_objects,
      this._owner,
			Variant.Type.ARRAY,
    
      _line
    );
    
  }
  get_line_object_rect(_line, _key) {
    TextParagraph.init_method_get_line_object_rect();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_line_object_rect,
      this._owner,
			Variant.Type.RECT2,
    
      _line, _key
    );
    
  }
  get_line_size(_line) {
    TextParagraph.init_method_get_line_size();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_line_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      _line
    );
    
  }
  get_line_range(_line) {
    TextParagraph.init_method_get_line_range();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_line_range,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _line
    );
    
  }
  get_line_ascent(_line) {
    TextParagraph.init_method_get_line_ascent();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_line_ascent,
      this._owner,
			Variant.Type.FLOAT,
    
      _line
    );
    
  }
  get_line_descent(_line) {
    TextParagraph.init_method_get_line_descent();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_line_descent,
      this._owner,
			Variant.Type.FLOAT,
    
      _line
    );
    
  }
  get_line_width(_line) {
    TextParagraph.init_method_get_line_width();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_line_width,
      this._owner,
			Variant.Type.FLOAT,
    
      _line
    );
    
  }
  get_line_underline_position(_line) {
    TextParagraph.init_method_get_line_underline_position();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_line_underline_position,
      this._owner,
			Variant.Type.FLOAT,
    
      _line
    );
    
  }
  get_line_underline_thickness(_line) {
    TextParagraph.init_method_get_line_underline_thickness();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_line_underline_thickness,
      this._owner,
			Variant.Type.FLOAT,
    
      _line
    );
    
  }
  get_dropcap_size() {
    TextParagraph.init_method_get_dropcap_size();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_dropcap_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_dropcap_lines() {
    TextParagraph.init_method_get_dropcap_lines();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_get_dropcap_lines,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  draw(_canvas, _pos, _color, _dc_color) {
    TextParagraph.init_method_draw();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_draw,
      this._owner,
      _canvas, _pos, _color, _dc_color
    );
    
  }
  draw_outline(_canvas, _pos, _outline_size, _color, _dc_color) {
    TextParagraph.init_method_draw_outline();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_draw_outline,
      this._owner,
      _canvas, _pos, _outline_size, _color, _dc_color
    );
    
  }
  draw_line(_canvas, _pos, _line, _color) {
    TextParagraph.init_method_draw_line();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_draw_line,
      this._owner,
      _canvas, _pos, _line, _color
    );
    
  }
  draw_line_outline(_canvas, _pos, _line, _outline_size, _color) {
    TextParagraph.init_method_draw_line_outline();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_draw_line_outline,
      this._owner,
      _canvas, _pos, _line, _outline_size, _color
    );
    
  }
  draw_dropcap(_canvas, _pos, _color) {
    TextParagraph.init_method_draw_dropcap();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_draw_dropcap,
      this._owner,
      _canvas, _pos, _color
    );
    
  }
  draw_dropcap_outline(_canvas, _pos, _outline_size, _color) {
    TextParagraph.init_method_draw_dropcap_outline();
    return _call_native_mb_no_ret(
      TextParagraph._bindings.method_draw_dropcap_outline,
      this._owner,
      _canvas, _pos, _outline_size, _color
    );
    
  }
  hit_test(_coords) {
    TextParagraph.init_method_hit_test();
    return _call_native_mb_ret(
      TextParagraph._bindings.method_hit_test,
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
get custom_punctuation () {
  return this.get_custom_punctuation();
}
set custom_punctuation (new_value) {
  this.set_custom_punctuation(new_value);
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
get alignment () {
  return this.get_alignment();
}
set alignment (new_value) {
  this.set_alignment(new_value);
}
get break_flags () {
  return this.get_break_flags();
}
set break_flags (new_value) {
  this.set_break_flags(new_value);
}
get justification_flags () {
  return this.get_justification_flags();
}
set justification_flags (new_value) {
  this.set_justification_flags(new_value);
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
get width () {
  return this.get_width();
}
set width (new_value) {
  this.set_width(new_value);
}
get max_lines_visible () {
  return this.get_max_lines_visible();
}
set max_lines_visible (new_value) {
  this.set_max_lines_visible(new_value);
}

}