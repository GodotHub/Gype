import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GeometryInstance3D } from '@js_godot/classes/geometry_instance3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_horizontal_alignment;
  method_get_horizontal_alignment;
  method_set_vertical_alignment;
  method_get_vertical_alignment;
  method_set_modulate;
  method_get_modulate;
  method_set_outline_modulate;
  method_get_outline_modulate;
  method_set_text;
  method_get_text;
  method_set_text_direction;
  method_get_text_direction;
  method_set_language;
  method_get_language;
  method_set_structured_text_bidi_override;
  method_get_structured_text_bidi_override;
  method_set_structured_text_bidi_override_options;
  method_get_structured_text_bidi_override_options;
  method_set_uppercase;
  method_is_uppercase;
  method_set_render_priority;
  method_get_render_priority;
  method_set_outline_render_priority;
  method_get_outline_render_priority;
  method_set_font;
  method_get_font;
  method_set_font_size;
  method_get_font_size;
  method_set_outline_size;
  method_get_outline_size;
  method_set_line_spacing;
  method_get_line_spacing;
  method_set_autowrap_mode;
  method_get_autowrap_mode;
  method_set_justification_flags;
  method_get_justification_flags;
  method_set_width;
  method_get_width;
  method_set_pixel_size;
  method_get_pixel_size;
  method_set_offset;
  method_get_offset;
  method_set_draw_flag;
  method_get_draw_flag;
  method_set_billboard_mode;
  method_get_billboard_mode;
  method_set_alpha_cut_mode;
  method_get_alpha_cut_mode;
  method_set_alpha_scissor_threshold;
  method_get_alpha_scissor_threshold;
  method_set_alpha_hash_scale;
  method_get_alpha_hash_scale;
  method_set_alpha_antialiasing;
  method_get_alpha_antialiasing;
  method_set_alpha_antialiasing_edge;
  method_get_alpha_antialiasing_edge;
  method_set_texture_filter;
  method_get_texture_filter;
  method_generate_triangle_mesh;
}
export class Label3D extends GeometryInstance3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Label3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_horizontal_alignment() {
    if (!this.#_bindings.method_set_horizontal_alignment) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_horizontal_alignment");
      this.#_bindings.method_set_horizontal_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2312603777
      );
    }
  }
  static init_method_get_horizontal_alignment() {
    if (!this.#_bindings.method_get_horizontal_alignment) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_horizontal_alignment");
      this.#_bindings.method_get_horizontal_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        341400642
      );
    }
  }
  static init_method_set_vertical_alignment() {
    if (!this.#_bindings.method_set_vertical_alignment) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_vertical_alignment");
      this.#_bindings.method_set_vertical_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1796458609
      );
    }
  }
  static init_method_get_vertical_alignment() {
    if (!this.#_bindings.method_get_vertical_alignment) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_vertical_alignment");
      this.#_bindings.method_get_vertical_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3274884059
      );
    }
  }
  static init_method_set_modulate() {
    if (!this.#_bindings.method_set_modulate) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_modulate");
      this.#_bindings.method_set_modulate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_modulate() {
    if (!this.#_bindings.method_get_modulate) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_modulate");
      this.#_bindings.method_get_modulate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_outline_modulate() {
    if (!this.#_bindings.method_set_outline_modulate) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_outline_modulate");
      this.#_bindings.method_set_outline_modulate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_outline_modulate() {
    if (!this.#_bindings.method_get_outline_modulate) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_outline_modulate");
      this.#_bindings.method_get_outline_modulate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_text() {
    if (!this.#_bindings.method_set_text) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_text");
      this.#_bindings.method_set_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_text() {
    if (!this.#_bindings.method_get_text) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_text");
      this.#_bindings.method_get_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_text_direction() {
    if (!this.#_bindings.method_set_text_direction) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_text_direction");
      this.#_bindings.method_set_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1418190634
      );
    }
  }
  static init_method_get_text_direction() {
    if (!this.#_bindings.method_get_text_direction) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_text_direction");
      this.#_bindings.method_get_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2516697328
      );
    }
  }
  static init_method_set_language() {
    if (!this.#_bindings.method_set_language) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_language");
      this.#_bindings.method_set_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_language() {
    if (!this.#_bindings.method_get_language) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_language");
      this.#_bindings.method_get_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_structured_text_bidi_override() {
    if (!this.#_bindings.method_set_structured_text_bidi_override) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_structured_text_bidi_override");
      this.#_bindings.method_set_structured_text_bidi_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        55961453
      );
    }
  }
  static init_method_get_structured_text_bidi_override() {
    if (!this.#_bindings.method_get_structured_text_bidi_override) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_structured_text_bidi_override");
      this.#_bindings.method_get_structured_text_bidi_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3385126229
      );
    }
  }
  static init_method_set_structured_text_bidi_override_options() {
    if (!this.#_bindings.method_set_structured_text_bidi_override_options) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_structured_text_bidi_override_options");
      this.#_bindings.method_set_structured_text_bidi_override_options = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_structured_text_bidi_override_options() {
    if (!this.#_bindings.method_get_structured_text_bidi_override_options) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_structured_text_bidi_override_options");
      this.#_bindings.method_get_structured_text_bidi_override_options = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_set_uppercase() {
    if (!this.#_bindings.method_set_uppercase) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_uppercase");
      this.#_bindings.method_set_uppercase = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_uppercase() {
    if (!this.#_bindings.method_is_uppercase) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("is_uppercase");
      this.#_bindings.method_is_uppercase = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_render_priority() {
    if (!this.#_bindings.method_set_render_priority) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_render_priority");
      this.#_bindings.method_set_render_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_render_priority() {
    if (!this.#_bindings.method_get_render_priority) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_render_priority");
      this.#_bindings.method_get_render_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_outline_render_priority() {
    if (!this.#_bindings.method_set_outline_render_priority) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_outline_render_priority");
      this.#_bindings.method_set_outline_render_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_outline_render_priority() {
    if (!this.#_bindings.method_get_outline_render_priority) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_outline_render_priority");
      this.#_bindings.method_get_outline_render_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_font() {
    if (!this.#_bindings.method_set_font) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_font");
      this.#_bindings.method_set_font = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1262170328
      );
    }
  }
  static init_method_get_font() {
    if (!this.#_bindings.method_get_font) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_font");
      this.#_bindings.method_get_font = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3229501585
      );
    }
  }
  static init_method_set_font_size() {
    if (!this.#_bindings.method_set_font_size) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_font_size");
      this.#_bindings.method_set_font_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_font_size() {
    if (!this.#_bindings.method_get_font_size) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_font_size");
      this.#_bindings.method_get_font_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_outline_size() {
    if (!this.#_bindings.method_set_outline_size) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_outline_size");
      this.#_bindings.method_set_outline_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_outline_size() {
    if (!this.#_bindings.method_get_outline_size) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_outline_size");
      this.#_bindings.method_get_outline_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_line_spacing() {
    if (!this.#_bindings.method_set_line_spacing) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_line_spacing");
      this.#_bindings.method_set_line_spacing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_line_spacing() {
    if (!this.#_bindings.method_get_line_spacing) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_line_spacing");
      this.#_bindings.method_get_line_spacing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_autowrap_mode() {
    if (!this.#_bindings.method_set_autowrap_mode) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_autowrap_mode");
      this.#_bindings.method_set_autowrap_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3289138044
      );
    }
  }
  static init_method_get_autowrap_mode() {
    if (!this.#_bindings.method_get_autowrap_mode) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_autowrap_mode");
      this.#_bindings.method_get_autowrap_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1549071663
      );
    }
  }
  static init_method_set_justification_flags() {
    if (!this.#_bindings.method_set_justification_flags) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_justification_flags");
      this.#_bindings.method_set_justification_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2877345813
      );
    }
  }
  static init_method_get_justification_flags() {
    if (!this.#_bindings.method_get_justification_flags) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_justification_flags");
      this.#_bindings.method_get_justification_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1583363614
      );
    }
  }
  static init_method_set_width() {
    if (!this.#_bindings.method_set_width) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_width");
      this.#_bindings.method_set_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_width() {
    if (!this.#_bindings.method_get_width) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_width");
      this.#_bindings.method_get_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_pixel_size() {
    if (!this.#_bindings.method_set_pixel_size) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_pixel_size");
      this.#_bindings.method_set_pixel_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_pixel_size() {
    if (!this.#_bindings.method_get_pixel_size) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_pixel_size");
      this.#_bindings.method_get_pixel_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_offset() {
    if (!this.#_bindings.method_set_offset) {
      let classname = new StringName("Label3D");
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
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_offset");
      this.#_bindings.method_get_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_draw_flag() {
    if (!this.#_bindings.method_set_draw_flag) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_draw_flag");
      this.#_bindings.method_set_draw_flag = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1285833066
      );
    }
  }
  static init_method_get_draw_flag() {
    if (!this.#_bindings.method_get_draw_flag) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_draw_flag");
      this.#_bindings.method_get_draw_flag = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        259226453
      );
    }
  }
  static init_method_set_billboard_mode() {
    if (!this.#_bindings.method_set_billboard_mode) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_billboard_mode");
      this.#_bindings.method_set_billboard_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4202036497
      );
    }
  }
  static init_method_get_billboard_mode() {
    if (!this.#_bindings.method_get_billboard_mode) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_billboard_mode");
      this.#_bindings.method_get_billboard_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1283840139
      );
    }
  }
  static init_method_set_alpha_cut_mode() {
    if (!this.#_bindings.method_set_alpha_cut_mode) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_alpha_cut_mode");
      this.#_bindings.method_set_alpha_cut_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2549142916
      );
    }
  }
  static init_method_get_alpha_cut_mode() {
    if (!this.#_bindings.method_get_alpha_cut_mode) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_alpha_cut_mode");
      this.#_bindings.method_get_alpha_cut_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        219468601
      );
    }
  }
  static init_method_set_alpha_scissor_threshold() {
    if (!this.#_bindings.method_set_alpha_scissor_threshold) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_alpha_scissor_threshold");
      this.#_bindings.method_set_alpha_scissor_threshold = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_alpha_scissor_threshold() {
    if (!this.#_bindings.method_get_alpha_scissor_threshold) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_alpha_scissor_threshold");
      this.#_bindings.method_get_alpha_scissor_threshold = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_alpha_hash_scale() {
    if (!this.#_bindings.method_set_alpha_hash_scale) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_alpha_hash_scale");
      this.#_bindings.method_set_alpha_hash_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_alpha_hash_scale() {
    if (!this.#_bindings.method_get_alpha_hash_scale) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_alpha_hash_scale");
      this.#_bindings.method_get_alpha_hash_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_alpha_antialiasing() {
    if (!this.#_bindings.method_set_alpha_antialiasing) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_alpha_antialiasing");
      this.#_bindings.method_set_alpha_antialiasing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3212649852
      );
    }
  }
  static init_method_get_alpha_antialiasing() {
    if (!this.#_bindings.method_get_alpha_antialiasing) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_alpha_antialiasing");
      this.#_bindings.method_get_alpha_antialiasing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2889939400
      );
    }
  }
  static init_method_set_alpha_antialiasing_edge() {
    if (!this.#_bindings.method_set_alpha_antialiasing_edge) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_alpha_antialiasing_edge");
      this.#_bindings.method_set_alpha_antialiasing_edge = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_alpha_antialiasing_edge() {
    if (!this.#_bindings.method_get_alpha_antialiasing_edge) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_alpha_antialiasing_edge");
      this.#_bindings.method_get_alpha_antialiasing_edge = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_texture_filter() {
    if (!this.#_bindings.method_set_texture_filter) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("set_texture_filter");
      this.#_bindings.method_set_texture_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        22904437
      );
    }
  }
  static init_method_get_texture_filter() {
    if (!this.#_bindings.method_get_texture_filter) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("get_texture_filter");
      this.#_bindings.method_get_texture_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3289213076
      );
    }
  }
  static init_method_generate_triangle_mesh() {
    if (!this.#_bindings.method_generate_triangle_mesh) {
      let classname = new StringName("Label3D");
      let methodname = new StringName("generate_triangle_mesh");
      this.#_bindings.method_generate_triangle_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3476533166
      );
    }
  }

  
  
  set_horizontal_alignment(_alignment) {
    Label3D.init_method_set_horizontal_alignment();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_horizontal_alignment,
      this._owner,
      _alignment
    );
    
  }
  get_horizontal_alignment() {
    Label3D.init_method_get_horizontal_alignment();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_horizontal_alignment,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_vertical_alignment(_alignment) {
    Label3D.init_method_set_vertical_alignment();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_vertical_alignment,
      this._owner,
      _alignment
    );
    
  }
  get_vertical_alignment() {
    Label3D.init_method_get_vertical_alignment();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_vertical_alignment,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_modulate(_modulate) {
    Label3D.init_method_set_modulate();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_modulate,
      this._owner,
      _modulate
    );
    
  }
  get_modulate() {
    Label3D.init_method_get_modulate();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_modulate,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_outline_modulate(_modulate) {
    Label3D.init_method_set_outline_modulate();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_outline_modulate,
      this._owner,
      _modulate
    );
    
  }
  get_outline_modulate() {
    Label3D.init_method_get_outline_modulate();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_outline_modulate,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_text(_text) {
    Label3D.init_method_set_text();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_text,
      this._owner,
      _text
    );
    
  }
  get_text() {
    Label3D.init_method_get_text();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_text_direction(_direction) {
    Label3D.init_method_set_text_direction();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_text_direction,
      this._owner,
      _direction
    );
    
  }
  get_text_direction() {
    Label3D.init_method_get_text_direction();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_text_direction,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_language(_language) {
    Label3D.init_method_set_language();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_language,
      this._owner,
      _language
    );
    
  }
  get_language() {
    Label3D.init_method_get_language();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_language,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_structured_text_bidi_override(_parser) {
    Label3D.init_method_set_structured_text_bidi_override();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_structured_text_bidi_override,
      this._owner,
      _parser
    );
    
  }
  get_structured_text_bidi_override() {
    Label3D.init_method_get_structured_text_bidi_override();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_structured_text_bidi_override,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_structured_text_bidi_override_options(_args) {
    Label3D.init_method_set_structured_text_bidi_override_options();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_structured_text_bidi_override_options,
      this._owner,
      _args
    );
    
  }
  get_structured_text_bidi_override_options() {
    Label3D.init_method_get_structured_text_bidi_override_options();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_structured_text_bidi_override_options,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  set_uppercase(_enable) {
    Label3D.init_method_set_uppercase();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_uppercase,
      this._owner,
      _enable
    );
    
  }
  is_uppercase() {
    Label3D.init_method_is_uppercase();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_is_uppercase,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_render_priority(_priority) {
    Label3D.init_method_set_render_priority();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_render_priority,
      this._owner,
      _priority
    );
    
  }
  get_render_priority() {
    Label3D.init_method_get_render_priority();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_render_priority,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_outline_render_priority(_priority) {
    Label3D.init_method_set_outline_render_priority();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_outline_render_priority,
      this._owner,
      _priority
    );
    
  }
  get_outline_render_priority() {
    Label3D.init_method_get_outline_render_priority();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_outline_render_priority,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_font(_font) {
    Label3D.init_method_set_font();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_font,
      this._owner,
      _font
    );
    
  }
  get_font() {
    Label3D.init_method_get_font();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_font,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_font_size(_size) {
    Label3D.init_method_set_font_size();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_font_size,
      this._owner,
      _size
    );
    
  }
  get_font_size() {
    Label3D.init_method_get_font_size();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_font_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_outline_size(_outline_size) {
    Label3D.init_method_set_outline_size();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_outline_size,
      this._owner,
      _outline_size
    );
    
  }
  get_outline_size() {
    Label3D.init_method_get_outline_size();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_outline_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_line_spacing(_line_spacing) {
    Label3D.init_method_set_line_spacing();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_line_spacing,
      this._owner,
      _line_spacing
    );
    
  }
  get_line_spacing() {
    Label3D.init_method_get_line_spacing();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_line_spacing,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_autowrap_mode(_autowrap_mode) {
    Label3D.init_method_set_autowrap_mode();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_autowrap_mode,
      this._owner,
      _autowrap_mode
    );
    
  }
  get_autowrap_mode() {
    Label3D.init_method_get_autowrap_mode();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_autowrap_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_justification_flags(_justification_flags) {
    Label3D.init_method_set_justification_flags();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_justification_flags,
      this._owner,
      _justification_flags
    );
    
  }
  get_justification_flags() {
    Label3D.init_method_get_justification_flags();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_justification_flags,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_width(_width) {
    Label3D.init_method_set_width();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_width,
      this._owner,
      _width
    );
    
  }
  get_width() {
    Label3D.init_method_get_width();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_width,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_pixel_size(_pixel_size) {
    Label3D.init_method_set_pixel_size();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_pixel_size,
      this._owner,
      _pixel_size
    );
    
  }
  get_pixel_size() {
    Label3D.init_method_get_pixel_size();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_pixel_size,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_offset(_offset) {
    Label3D.init_method_set_offset();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_offset,
      this._owner,
      _offset
    );
    
  }
  get_offset() {
    Label3D.init_method_get_offset();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_draw_flag(_flag, _enabled) {
    Label3D.init_method_set_draw_flag();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_draw_flag,
      this._owner,
      _flag, _enabled
    );
    
  }
  get_draw_flag(_flag) {
    Label3D.init_method_get_draw_flag();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_draw_flag,
      this._owner,
			Variant.Type.BOOL,
    
      _flag
    );
    
  }
  set_billboard_mode(_mode) {
    Label3D.init_method_set_billboard_mode();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_billboard_mode,
      this._owner,
      _mode
    );
    
  }
  get_billboard_mode() {
    Label3D.init_method_get_billboard_mode();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_billboard_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_alpha_cut_mode(_mode) {
    Label3D.init_method_set_alpha_cut_mode();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_alpha_cut_mode,
      this._owner,
      _mode
    );
    
  }
  get_alpha_cut_mode() {
    Label3D.init_method_get_alpha_cut_mode();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_alpha_cut_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_alpha_scissor_threshold(_threshold) {
    Label3D.init_method_set_alpha_scissor_threshold();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_alpha_scissor_threshold,
      this._owner,
      _threshold
    );
    
  }
  get_alpha_scissor_threshold() {
    Label3D.init_method_get_alpha_scissor_threshold();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_alpha_scissor_threshold,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_alpha_hash_scale(_threshold) {
    Label3D.init_method_set_alpha_hash_scale();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_alpha_hash_scale,
      this._owner,
      _threshold
    );
    
  }
  get_alpha_hash_scale() {
    Label3D.init_method_get_alpha_hash_scale();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_alpha_hash_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_alpha_antialiasing(_alpha_aa) {
    Label3D.init_method_set_alpha_antialiasing();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_alpha_antialiasing,
      this._owner,
      _alpha_aa
    );
    
  }
  get_alpha_antialiasing() {
    Label3D.init_method_get_alpha_antialiasing();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_alpha_antialiasing,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_alpha_antialiasing_edge(_edge) {
    Label3D.init_method_set_alpha_antialiasing_edge();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_alpha_antialiasing_edge,
      this._owner,
      _edge
    );
    
  }
  get_alpha_antialiasing_edge() {
    Label3D.init_method_get_alpha_antialiasing_edge();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_alpha_antialiasing_edge,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_texture_filter(_mode) {
    Label3D.init_method_set_texture_filter();
    return _call_native_mb_no_ret(
      Label3D.#_bindings.method_set_texture_filter,
      this._owner,
      _mode
    );
    
  }
  get_texture_filter() {
    Label3D.init_method_get_texture_filter();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_get_texture_filter,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  generate_triangle_mesh() {
    Label3D.init_method_generate_triangle_mesh();
    return _call_native_mb_ret(
      Label3D.#_bindings.method_generate_triangle_mesh,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get pixel_size () {
  return this.get_pixel_size();
}
set pixel_size (new_value) {
  this.set_pixel_size(new_value);
}
get offset () {
  return this.get_offset();
}
set offset (new_value) {
  this.set_offset(new_value);
}
get billboard () {
  return this.get_billboard_mode();
}
set billboard (new_value) {
  this.set_billboard_mode(new_value);
}
get shaded () {
  return this.get_draw_flag();
}
set shaded (new_value) {
  this.set_draw_flag(new_value);
}
get double_sided () {
  return this.get_draw_flag();
}
set double_sided (new_value) {
  this.set_draw_flag(new_value);
}
get no_depth_test () {
  return this.get_draw_flag();
}
set no_depth_test (new_value) {
  this.set_draw_flag(new_value);
}
get fixed_size () {
  return this.get_draw_flag();
}
set fixed_size (new_value) {
  this.set_draw_flag(new_value);
}
get alpha_cut () {
  return this.get_alpha_cut_mode();
}
set alpha_cut (new_value) {
  this.set_alpha_cut_mode(new_value);
}
get alpha_scissor_threshold () {
  return this.get_alpha_scissor_threshold();
}
set alpha_scissor_threshold (new_value) {
  this.set_alpha_scissor_threshold(new_value);
}
get alpha_hash_scale () {
  return this.get_alpha_hash_scale();
}
set alpha_hash_scale (new_value) {
  this.set_alpha_hash_scale(new_value);
}
get alpha_antialiasing_mode () {
  return this.get_alpha_antialiasing();
}
set alpha_antialiasing_mode (new_value) {
  this.set_alpha_antialiasing(new_value);
}
get alpha_antialiasing_edge () {
  return this.get_alpha_antialiasing_edge();
}
set alpha_antialiasing_edge (new_value) {
  this.set_alpha_antialiasing_edge(new_value);
}
get texture_filter () {
  return this.get_texture_filter();
}
set texture_filter (new_value) {
  this.set_texture_filter(new_value);
}
get render_priority () {
  return this.get_render_priority();
}
set render_priority (new_value) {
  this.set_render_priority(new_value);
}
get outline_render_priority () {
  return this.get_outline_render_priority();
}
set outline_render_priority (new_value) {
  this.set_outline_render_priority(new_value);
}
get modulate () {
  return this.get_modulate();
}
set modulate (new_value) {
  this.set_modulate(new_value);
}
get outline_modulate () {
  return this.get_outline_modulate();
}
set outline_modulate (new_value) {
  this.set_outline_modulate(new_value);
}
get text () {
  return this.get_text();
}
set text (new_value) {
  this.set_text(new_value);
}
get font () {
  return this.get_font();
}
set font (new_value) {
  this.set_font(new_value);
}
get font_size () {
  return this.get_font_size();
}
set font_size (new_value) {
  this.set_font_size(new_value);
}
get outline_size () {
  return this.get_outline_size();
}
set outline_size (new_value) {
  this.set_outline_size(new_value);
}
get horizontal_alignment () {
  return this.get_horizontal_alignment();
}
set horizontal_alignment (new_value) {
  this.set_horizontal_alignment(new_value);
}
get vertical_alignment () {
  return this.get_vertical_alignment();
}
set vertical_alignment (new_value) {
  this.set_vertical_alignment(new_value);
}
get uppercase () {
  return this.is_uppercase();
}
set uppercase (new_value) {
  this.set_uppercase(new_value);
}
get line_spacing () {
  return this.get_line_spacing();
}
set line_spacing (new_value) {
  this.set_line_spacing(new_value);
}
get autowrap_mode () {
  return this.get_autowrap_mode();
}
set autowrap_mode (new_value) {
  this.set_autowrap_mode(new_value);
}
get justification_flags () {
  return this.get_justification_flags();
}
set justification_flags (new_value) {
  this.set_justification_flags(new_value);
}
get width () {
  return this.get_width();
}
set width (new_value) {
  this.set_width(new_value);
}
get text_direction () {
  return this.get_text_direction();
}
set text_direction (new_value) {
  this.set_text_direction(new_value);
}
get language () {
  return this.get_language();
}
set language (new_value) {
  this.set_language(new_value);
}
get structured_text_bidi_override () {
  return this.get_structured_text_bidi_override();
}
set structured_text_bidi_override (new_value) {
  this.set_structured_text_bidi_override(new_value);
}
get structured_text_bidi_override_options () {
  return this.get_structured_text_bidi_override_options();
}
set structured_text_bidi_override_options (new_value) {
  this.set_structured_text_bidi_override_options(new_value);
}

  static DrawFlags = {
    FLAG_SHADED: 0,
    FLAG_DOUBLE_SIDED: 1,
    FLAG_DISABLE_DEPTH_TEST: 2,
    FLAG_FIXED_SIZE: 3,
    FLAG_MAX: 4,
  }
  static AlphaCutMode = {
    ALPHA_CUT_DISABLED: 0,
    ALPHA_CUT_DISCARD: 1,
    ALPHA_CUT_OPAQUE_PREPASS: 2,
    ALPHA_CUT_HASH: 3,
  }
}