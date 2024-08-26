import * as internal from '__internal__';
import { Color } from 'src/js_godot/variant/color'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { GDString } from 'src/js_godot/variant/gd_string'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
import { Vector2i } from 'src/js_godot/variant/vector2i'
import { Rect2 } from 'src/js_godot/variant/rect2'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { Variant } from 'src/js_godot/variant/variant'
import { PackedFloat32Array } from 'src/js_godot/variant/packed_float32_array'
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
import { TextServer } from 'src/js_godot/classestext_server'
import { RID } from 'src/js_godot/variant/rid'
import { Transform2D } from 'src/js_godot/variant/transform2d'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { Dictionary } from 'src/js_godot/variant/dictionary'
class _MethodBindings {
    method__has_feature;
    method__get_name;
    method__get_features;
    method__free_rid;
    method__has;
    method__load_support_data;
    method__get_support_data_filename;
    method__get_support_data_info;
    method__save_support_data;
    method__is_locale_right_to_left;
    method__name_to_tag;
    method__tag_to_name;
    method__create_font;
    method__create_font_linked_variation;
    method__font_set_data;
    method__font_set_data_ptr;
    method__font_set_face_index;
    method__font_get_face_index;
    method__font_get_face_count;
    method__font_set_style;
    method__font_get_style;
    method__font_set_name;
    method__font_get_name;
    method__font_get_ot_name_strings;
    method__font_set_style_name;
    method__font_get_style_name;
    method__font_set_weight;
    method__font_get_weight;
    method__font_set_stretch;
    method__font_get_stretch;
    method__font_set_antialiasing;
    method__font_get_antialiasing;
    method__font_set_disable_embedded_bitmaps;
    method__font_get_disable_embedded_bitmaps;
    method__font_set_generate_mipmaps;
    method__font_get_generate_mipmaps;
    method__font_set_multichannel_signed_distance_field;
    method__font_is_multichannel_signed_distance_field;
    method__font_set_msdf_pixel_range;
    method__font_get_msdf_pixel_range;
    method__font_set_msdf_size;
    method__font_get_msdf_size;
    method__font_set_fixed_size;
    method__font_get_fixed_size;
    method__font_set_fixed_size_scale_mode;
    method__font_get_fixed_size_scale_mode;
    method__font_set_allow_system_fallback;
    method__font_is_allow_system_fallback;
    method__font_set_force_autohinter;
    method__font_is_force_autohinter;
    method__font_set_hinting;
    method__font_get_hinting;
    method__font_set_subpixel_positioning;
    method__font_get_subpixel_positioning;
    method__font_set_embolden;
    method__font_get_embolden;
    method__font_set_spacing;
    method__font_get_spacing;
    method__font_set_baseline_offset;
    method__font_get_baseline_offset;
    method__font_set_transform;
    method__font_get_transform;
    method__font_set_variation_coordinates;
    method__font_get_variation_coordinates;
    method__font_set_oversampling;
    method__font_get_oversampling;
    method__font_get_size_cache_list;
    method__font_clear_size_cache;
    method__font_remove_size_cache;
    method__font_set_ascent;
    method__font_get_ascent;
    method__font_set_descent;
    method__font_get_descent;
    method__font_set_underline_position;
    method__font_get_underline_position;
    method__font_set_underline_thickness;
    method__font_get_underline_thickness;
    method__font_set_scale;
    method__font_get_scale;
    method__font_get_texture_count;
    method__font_clear_textures;
    method__font_remove_texture;
    method__font_set_texture_image;
    method__font_get_texture_image;
    method__font_set_texture_offsets;
    method__font_get_texture_offsets;
    method__font_get_glyph_list;
    method__font_clear_glyphs;
    method__font_remove_glyph;
    method__font_get_glyph_advance;
    method__font_set_glyph_advance;
    method__font_get_glyph_offset;
    method__font_set_glyph_offset;
    method__font_get_glyph_size;
    method__font_set_glyph_size;
    method__font_get_glyph_uv_rect;
    method__font_set_glyph_uv_rect;
    method__font_get_glyph_texture_idx;
    method__font_set_glyph_texture_idx;
    method__font_get_glyph_texture_rid;
    method__font_get_glyph_texture_size;
    method__font_get_glyph_contours;
    method__font_get_kerning_list;
    method__font_clear_kerning_map;
    method__font_remove_kerning;
    method__font_set_kerning;
    method__font_get_kerning;
    method__font_get_glyph_index;
    method__font_get_char_from_glyph_index;
    method__font_has_char;
    method__font_get_supported_chars;
    method__font_render_range;
    method__font_render_glyph;
    method__font_draw_glyph;
    method__font_draw_glyph_outline;
    method__font_is_language_supported;
    method__font_set_language_support_override;
    method__font_get_language_support_override;
    method__font_remove_language_support_override;
    method__font_get_language_support_overrides;
    method__font_is_script_supported;
    method__font_set_script_support_override;
    method__font_get_script_support_override;
    method__font_remove_script_support_override;
    method__font_get_script_support_overrides;
    method__font_set_opentype_feature_overrides;
    method__font_get_opentype_feature_overrides;
    method__font_supported_feature_list;
    method__font_supported_variation_list;
    method__font_get_global_oversampling;
    method__font_set_global_oversampling;
    method__get_hex_code_box_size;
    method__draw_hex_code_box;
    method__create_shaped_text;
    method__shaped_text_clear;
    method__shaped_text_set_direction;
    method__shaped_text_get_direction;
    method__shaped_text_get_inferred_direction;
    method__shaped_text_set_bidi_override;
    method__shaped_text_set_custom_punctuation;
    method__shaped_text_get_custom_punctuation;
    method__shaped_text_set_custom_ellipsis;
    method__shaped_text_get_custom_ellipsis;
    method__shaped_text_set_orientation;
    method__shaped_text_get_orientation;
    method__shaped_text_set_preserve_invalid;
    method__shaped_text_get_preserve_invalid;
    method__shaped_text_set_preserve_control;
    method__shaped_text_get_preserve_control;
    method__shaped_text_set_spacing;
    method__shaped_text_get_spacing;
    method__shaped_text_add_string;
    method__shaped_text_add_object;
    method__shaped_text_resize_object;
    method__shaped_get_span_count;
    method__shaped_get_span_meta;
    method__shaped_set_span_update_font;
    method__shaped_text_substr;
    method__shaped_text_get_parent;
    method__shaped_text_fit_to_width;
    method__shaped_text_tab_align;
    method__shaped_text_shape;
    method__shaped_text_update_breaks;
    method__shaped_text_update_justification_ops;
    method__shaped_text_is_ready;
    method__shaped_text_get_glyphs;
    method__shaped_text_sort_logical;
    method__shaped_text_get_glyph_count;
    method__shaped_text_get_range;
    method__shaped_text_get_line_breaks_adv;
    method__shaped_text_get_line_breaks;
    method__shaped_text_get_word_breaks;
    method__shaped_text_get_trim_pos;
    method__shaped_text_get_ellipsis_pos;
    method__shaped_text_get_ellipsis_glyph_count;
    method__shaped_text_get_ellipsis_glyphs;
    method__shaped_text_overrun_trim_to_width;
    method__shaped_text_get_objects;
    method__shaped_text_get_object_rect;
    method__shaped_text_get_object_range;
    method__shaped_text_get_object_glyph;
    method__shaped_text_get_size;
    method__shaped_text_get_ascent;
    method__shaped_text_get_descent;
    method__shaped_text_get_width;
    method__shaped_text_get_underline_position;
    method__shaped_text_get_underline_thickness;
    method__shaped_text_get_dominant_direction_in_range;
    method__shaped_text_get_carets;
    method__shaped_text_get_selection;
    method__shaped_text_hit_test_grapheme;
    method__shaped_text_hit_test_position;
    method__shaped_text_draw;
    method__shaped_text_draw_outline;
    method__shaped_text_get_grapheme_bounds;
    method__shaped_text_next_grapheme_pos;
    method__shaped_text_prev_grapheme_pos;
    method__shaped_text_get_character_breaks;
    method__shaped_text_next_character_pos;
    method__shaped_text_prev_character_pos;
    method__shaped_text_closest_character_pos;
    method__format_number;
    method__parse_number;
    method__percent_sign;
    method__strip_diacritics;
    method__is_valid_identifier;
    method__is_valid_letter;
    method__string_get_word_breaks;
    method__string_get_character_breaks;
    method__is_confusable;
    method__spoof_check;
    method__string_to_upper;
    method__string_to_lower;
    method__string_to_title;
    method__parse_structured_text;
    method__cleanup;
}


export class TextServerExtension extends TextServer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TextServerExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_has_feature");
      this._bindings.method__has_feature = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_get_name");
      this._bindings.method__get_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_get_features");
      this._bindings.method__get_features = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_free_rid");
      this._bindings.method__free_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_has");
      this._bindings.method__has = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_load_support_data");
      this._bindings.method__load_support_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_get_support_data_filename");
      this._bindings.method__get_support_data_filename = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_get_support_data_info");
      this._bindings.method__get_support_data_info = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_save_support_data");
      this._bindings.method__save_support_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_is_locale_right_to_left");
      this._bindings.method__is_locale_right_to_left = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_name_to_tag");
      this._bindings.method__name_to_tag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_tag_to_name");
      this._bindings.method__tag_to_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_create_font");
      this._bindings.method__create_font = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_create_font_linked_variation");
      this._bindings.method__create_font_linked_variation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_data");
      this._bindings.method__font_set_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_data_ptr");
      this._bindings.method__font_set_data_ptr = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_face_index");
      this._bindings.method__font_set_face_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_face_index");
      this._bindings.method__font_get_face_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_face_count");
      this._bindings.method__font_get_face_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_style");
      this._bindings.method__font_set_style = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_style");
      this._bindings.method__font_get_style = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_name");
      this._bindings.method__font_set_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_name");
      this._bindings.method__font_get_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_ot_name_strings");
      this._bindings.method__font_get_ot_name_strings = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_style_name");
      this._bindings.method__font_set_style_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_style_name");
      this._bindings.method__font_get_style_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_weight");
      this._bindings.method__font_set_weight = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_weight");
      this._bindings.method__font_get_weight = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_stretch");
      this._bindings.method__font_set_stretch = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_stretch");
      this._bindings.method__font_get_stretch = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_antialiasing");
      this._bindings.method__font_set_antialiasing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_antialiasing");
      this._bindings.method__font_get_antialiasing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_disable_embedded_bitmaps");
      this._bindings.method__font_set_disable_embedded_bitmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_disable_embedded_bitmaps");
      this._bindings.method__font_get_disable_embedded_bitmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_generate_mipmaps");
      this._bindings.method__font_set_generate_mipmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_generate_mipmaps");
      this._bindings.method__font_get_generate_mipmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_multichannel_signed_distance_field");
      this._bindings.method__font_set_multichannel_signed_distance_field = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_is_multichannel_signed_distance_field");
      this._bindings.method__font_is_multichannel_signed_distance_field = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_msdf_pixel_range");
      this._bindings.method__font_set_msdf_pixel_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_msdf_pixel_range");
      this._bindings.method__font_get_msdf_pixel_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_msdf_size");
      this._bindings.method__font_set_msdf_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_msdf_size");
      this._bindings.method__font_get_msdf_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_fixed_size");
      this._bindings.method__font_set_fixed_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_fixed_size");
      this._bindings.method__font_get_fixed_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_fixed_size_scale_mode");
      this._bindings.method__font_set_fixed_size_scale_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_fixed_size_scale_mode");
      this._bindings.method__font_get_fixed_size_scale_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_allow_system_fallback");
      this._bindings.method__font_set_allow_system_fallback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_is_allow_system_fallback");
      this._bindings.method__font_is_allow_system_fallback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_force_autohinter");
      this._bindings.method__font_set_force_autohinter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_is_force_autohinter");
      this._bindings.method__font_is_force_autohinter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_hinting");
      this._bindings.method__font_set_hinting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_hinting");
      this._bindings.method__font_get_hinting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_subpixel_positioning");
      this._bindings.method__font_set_subpixel_positioning = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_subpixel_positioning");
      this._bindings.method__font_get_subpixel_positioning = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_embolden");
      this._bindings.method__font_set_embolden = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_embolden");
      this._bindings.method__font_get_embolden = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_spacing");
      this._bindings.method__font_set_spacing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_spacing");
      this._bindings.method__font_get_spacing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_baseline_offset");
      this._bindings.method__font_set_baseline_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_baseline_offset");
      this._bindings.method__font_get_baseline_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_transform");
      this._bindings.method__font_set_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_transform");
      this._bindings.method__font_get_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_variation_coordinates");
      this._bindings.method__font_set_variation_coordinates = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_variation_coordinates");
      this._bindings.method__font_get_variation_coordinates = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_oversampling");
      this._bindings.method__font_set_oversampling = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_oversampling");
      this._bindings.method__font_get_oversampling = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_size_cache_list");
      this._bindings.method__font_get_size_cache_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_clear_size_cache");
      this._bindings.method__font_clear_size_cache = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_remove_size_cache");
      this._bindings.method__font_remove_size_cache = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_ascent");
      this._bindings.method__font_set_ascent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_ascent");
      this._bindings.method__font_get_ascent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_descent");
      this._bindings.method__font_set_descent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_descent");
      this._bindings.method__font_get_descent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_underline_position");
      this._bindings.method__font_set_underline_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_underline_position");
      this._bindings.method__font_get_underline_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_underline_thickness");
      this._bindings.method__font_set_underline_thickness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_underline_thickness");
      this._bindings.method__font_get_underline_thickness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_scale");
      this._bindings.method__font_set_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_scale");
      this._bindings.method__font_get_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_texture_count");
      this._bindings.method__font_get_texture_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_clear_textures");
      this._bindings.method__font_clear_textures = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_remove_texture");
      this._bindings.method__font_remove_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_texture_image");
      this._bindings.method__font_set_texture_image = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_texture_image");
      this._bindings.method__font_get_texture_image = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_texture_offsets");
      this._bindings.method__font_set_texture_offsets = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_texture_offsets");
      this._bindings.method__font_get_texture_offsets = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_glyph_list");
      this._bindings.method__font_get_glyph_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_clear_glyphs");
      this._bindings.method__font_clear_glyphs = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_remove_glyph");
      this._bindings.method__font_remove_glyph = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_glyph_advance");
      this._bindings.method__font_get_glyph_advance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_glyph_advance");
      this._bindings.method__font_set_glyph_advance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_glyph_offset");
      this._bindings.method__font_get_glyph_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_glyph_offset");
      this._bindings.method__font_set_glyph_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_glyph_size");
      this._bindings.method__font_get_glyph_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_glyph_size");
      this._bindings.method__font_set_glyph_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_glyph_uv_rect");
      this._bindings.method__font_get_glyph_uv_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_glyph_uv_rect");
      this._bindings.method__font_set_glyph_uv_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_glyph_texture_idx");
      this._bindings.method__font_get_glyph_texture_idx = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_glyph_texture_idx");
      this._bindings.method__font_set_glyph_texture_idx = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_glyph_texture_rid");
      this._bindings.method__font_get_glyph_texture_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_glyph_texture_size");
      this._bindings.method__font_get_glyph_texture_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_glyph_contours");
      this._bindings.method__font_get_glyph_contours = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_kerning_list");
      this._bindings.method__font_get_kerning_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_clear_kerning_map");
      this._bindings.method__font_clear_kerning_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_remove_kerning");
      this._bindings.method__font_remove_kerning = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_kerning");
      this._bindings.method__font_set_kerning = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_kerning");
      this._bindings.method__font_get_kerning = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_glyph_index");
      this._bindings.method__font_get_glyph_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_char_from_glyph_index");
      this._bindings.method__font_get_char_from_glyph_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_has_char");
      this._bindings.method__font_has_char = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_supported_chars");
      this._bindings.method__font_get_supported_chars = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_render_range");
      this._bindings.method__font_render_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_render_glyph");
      this._bindings.method__font_render_glyph = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_draw_glyph");
      this._bindings.method__font_draw_glyph = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_draw_glyph_outline");
      this._bindings.method__font_draw_glyph_outline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_is_language_supported");
      this._bindings.method__font_is_language_supported = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_language_support_override");
      this._bindings.method__font_set_language_support_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_language_support_override");
      this._bindings.method__font_get_language_support_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_remove_language_support_override");
      this._bindings.method__font_remove_language_support_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_language_support_overrides");
      this._bindings.method__font_get_language_support_overrides = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_is_script_supported");
      this._bindings.method__font_is_script_supported = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_script_support_override");
      this._bindings.method__font_set_script_support_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_script_support_override");
      this._bindings.method__font_get_script_support_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_remove_script_support_override");
      this._bindings.method__font_remove_script_support_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_script_support_overrides");
      this._bindings.method__font_get_script_support_overrides = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_opentype_feature_overrides");
      this._bindings.method__font_set_opentype_feature_overrides = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_opentype_feature_overrides");
      this._bindings.method__font_get_opentype_feature_overrides = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_supported_feature_list");
      this._bindings.method__font_supported_feature_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_supported_variation_list");
      this._bindings.method__font_supported_variation_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_get_global_oversampling");
      this._bindings.method__font_get_global_oversampling = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_font_set_global_oversampling");
      this._bindings.method__font_set_global_oversampling = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_get_hex_code_box_size");
      this._bindings.method__get_hex_code_box_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_draw_hex_code_box");
      this._bindings.method__draw_hex_code_box = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_create_shaped_text");
      this._bindings.method__create_shaped_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_clear");
      this._bindings.method__shaped_text_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_set_direction");
      this._bindings.method__shaped_text_set_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_direction");
      this._bindings.method__shaped_text_get_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_inferred_direction");
      this._bindings.method__shaped_text_get_inferred_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_set_bidi_override");
      this._bindings.method__shaped_text_set_bidi_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_set_custom_punctuation");
      this._bindings.method__shaped_text_set_custom_punctuation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_custom_punctuation");
      this._bindings.method__shaped_text_get_custom_punctuation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_set_custom_ellipsis");
      this._bindings.method__shaped_text_set_custom_ellipsis = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_custom_ellipsis");
      this._bindings.method__shaped_text_get_custom_ellipsis = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_set_orientation");
      this._bindings.method__shaped_text_set_orientation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_orientation");
      this._bindings.method__shaped_text_get_orientation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_set_preserve_invalid");
      this._bindings.method__shaped_text_set_preserve_invalid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_preserve_invalid");
      this._bindings.method__shaped_text_get_preserve_invalid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_set_preserve_control");
      this._bindings.method__shaped_text_set_preserve_control = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_preserve_control");
      this._bindings.method__shaped_text_get_preserve_control = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_set_spacing");
      this._bindings.method__shaped_text_set_spacing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_spacing");
      this._bindings.method__shaped_text_get_spacing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_add_string");
      this._bindings.method__shaped_text_add_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_add_object");
      this._bindings.method__shaped_text_add_object = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_resize_object");
      this._bindings.method__shaped_text_resize_object = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_get_span_count");
      this._bindings.method__shaped_get_span_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_get_span_meta");
      this._bindings.method__shaped_get_span_meta = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_set_span_update_font");
      this._bindings.method__shaped_set_span_update_font = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_substr");
      this._bindings.method__shaped_text_substr = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_parent");
      this._bindings.method__shaped_text_get_parent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_fit_to_width");
      this._bindings.method__shaped_text_fit_to_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_tab_align");
      this._bindings.method__shaped_text_tab_align = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_shape");
      this._bindings.method__shaped_text_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_update_breaks");
      this._bindings.method__shaped_text_update_breaks = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_update_justification_ops");
      this._bindings.method__shaped_text_update_justification_ops = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_is_ready");
      this._bindings.method__shaped_text_is_ready = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_glyphs");
      this._bindings.method__shaped_text_get_glyphs = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_sort_logical");
      this._bindings.method__shaped_text_sort_logical = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_glyph_count");
      this._bindings.method__shaped_text_get_glyph_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_range");
      this._bindings.method__shaped_text_get_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_line_breaks_adv");
      this._bindings.method__shaped_text_get_line_breaks_adv = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_line_breaks");
      this._bindings.method__shaped_text_get_line_breaks = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_word_breaks");
      this._bindings.method__shaped_text_get_word_breaks = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_trim_pos");
      this._bindings.method__shaped_text_get_trim_pos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_ellipsis_pos");
      this._bindings.method__shaped_text_get_ellipsis_pos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_ellipsis_glyph_count");
      this._bindings.method__shaped_text_get_ellipsis_glyph_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_ellipsis_glyphs");
      this._bindings.method__shaped_text_get_ellipsis_glyphs = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_overrun_trim_to_width");
      this._bindings.method__shaped_text_overrun_trim_to_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_objects");
      this._bindings.method__shaped_text_get_objects = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_object_rect");
      this._bindings.method__shaped_text_get_object_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_object_range");
      this._bindings.method__shaped_text_get_object_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_object_glyph");
      this._bindings.method__shaped_text_get_object_glyph = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_size");
      this._bindings.method__shaped_text_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_ascent");
      this._bindings.method__shaped_text_get_ascent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_descent");
      this._bindings.method__shaped_text_get_descent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_width");
      this._bindings.method__shaped_text_get_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_underline_position");
      this._bindings.method__shaped_text_get_underline_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_underline_thickness");
      this._bindings.method__shaped_text_get_underline_thickness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_dominant_direction_in_range");
      this._bindings.method__shaped_text_get_dominant_direction_in_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_carets");
      this._bindings.method__shaped_text_get_carets = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_selection");
      this._bindings.method__shaped_text_get_selection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_hit_test_grapheme");
      this._bindings.method__shaped_text_hit_test_grapheme = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_hit_test_position");
      this._bindings.method__shaped_text_hit_test_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_draw");
      this._bindings.method__shaped_text_draw = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_draw_outline");
      this._bindings.method__shaped_text_draw_outline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_grapheme_bounds");
      this._bindings.method__shaped_text_get_grapheme_bounds = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_next_grapheme_pos");
      this._bindings.method__shaped_text_next_grapheme_pos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_prev_grapheme_pos");
      this._bindings.method__shaped_text_prev_grapheme_pos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_get_character_breaks");
      this._bindings.method__shaped_text_get_character_breaks = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_next_character_pos");
      this._bindings.method__shaped_text_next_character_pos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_prev_character_pos");
      this._bindings.method__shaped_text_prev_character_pos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_shaped_text_closest_character_pos");
      this._bindings.method__shaped_text_closest_character_pos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_format_number");
      this._bindings.method__format_number = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_parse_number");
      this._bindings.method__parse_number = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_percent_sign");
      this._bindings.method__percent_sign = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_strip_diacritics");
      this._bindings.method__strip_diacritics = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_is_valid_identifier");
      this._bindings.method__is_valid_identifier = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_is_valid_letter");
      this._bindings.method__is_valid_letter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_string_get_word_breaks");
      this._bindings.method__string_get_word_breaks = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_string_get_character_breaks");
      this._bindings.method__string_get_character_breaks = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_is_confusable");
      this._bindings.method__is_confusable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_spoof_check");
      this._bindings.method__spoof_check = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_string_to_upper");
      this._bindings.method__string_to_upper = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_string_to_lower");
      this._bindings.method__string_to_lower = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_string_to_title");
      this._bindings.method__string_to_title = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_parse_structured_text");
      this._bindings.method__parse_structured_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("TextServerExtension");
      let methodname = new StringName("_cleanup");
      this._bindings.method__cleanup = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _has_feature(_feature) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__has_feature,
      this._owner,
			Variant.Type.BOOL,
      _feature
    );
  }
  _get_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _get_features() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_features,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _free_rid(_rid) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__free_rid,
      this._owner,
      _rid
    );
  }
  _has(_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__has,
      this._owner,
			Variant.Type.BOOL,
      _rid
    );
  }
  _load_support_data(_filename) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__load_support_data,
      this._owner,
			Variant.Type.BOOL,
      _filename
    );
  }
  _get_support_data_filename() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_support_data_filename,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _get_support_data_info() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_support_data_info,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _save_support_data(_filename) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__save_support_data,
      this._owner,
			Variant.Type.BOOL,
      _filename
    );
  }
  _is_locale_right_to_left(_locale) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_locale_right_to_left,
      this._owner,
			Variant.Type.BOOL,
      _locale
    );
  }
  _name_to_tag(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__name_to_tag,
      this._owner,
			Variant.Type.INT,
      _name
    );
  }
  _tag_to_name(_tag) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__tag_to_name,
      this._owner,
			Variant.Type.STRING
    ,
      _tag
    );
  }
  _create_font() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__create_font,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  _create_font_linked_variation(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__create_font_linked_variation,
      this._owner,
			Variant.Type.RID
    ,
      _font_rid
    );
  }
  _font_set_data(_font_rid, _data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_data,
      this._owner,
      _font_rid, _data
    );
  }
  _font_set_data_ptr(_font_rid, _data_ptr, _data_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_data_ptr,
      this._owner,
      _font_rid, _data_ptr, _data_size
    );
  }
  _font_set_face_index(_font_rid, _face_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_face_index,
      this._owner,
      _font_rid, _face_index
    );
  }
  _font_get_face_index(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_face_index,
      this._owner,
			Variant.Type.INT,
      _font_rid
    );
  }
  _font_get_face_count(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_face_count,
      this._owner,
			Variant.Type.INT,
      _font_rid
    );
  }
  _font_set_style(_font_rid, _style) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_style,
      this._owner,
      _font_rid, _style
    );
  }
  _font_get_style(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_style,
      this._owner,
			Variant.INT,
      _font_rid
    );
  }
  _font_set_name(_font_rid, _name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_name,
      this._owner,
      _font_rid, _name
    );
  }
  _font_get_name(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_name,
      this._owner,
			Variant.Type.STRING
    ,
      _font_rid
    );
  }
  _font_get_ot_name_strings(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_ot_name_strings,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _font_rid
    );
  }
  _font_set_style_name(_font_rid, _name_style) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_style_name,
      this._owner,
      _font_rid, _name_style
    );
  }
  _font_get_style_name(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_style_name,
      this._owner,
			Variant.Type.STRING
    ,
      _font_rid
    );
  }
  _font_set_weight(_font_rid, _weight) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_weight,
      this._owner,
      _font_rid, _weight
    );
  }
  _font_get_weight(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_weight,
      this._owner,
			Variant.Type.INT,
      _font_rid
    );
  }
  _font_set_stretch(_font_rid, _stretch) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_stretch,
      this._owner,
      _font_rid, _stretch
    );
  }
  _font_get_stretch(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_stretch,
      this._owner,
			Variant.Type.INT,
      _font_rid
    );
  }
  _font_set_antialiasing(_font_rid, _antialiasing) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_antialiasing,
      this._owner,
      _font_rid, _antialiasing
    );
  }
  _font_get_antialiasing(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_antialiasing,
      this._owner,
			Variant.INT,
      _font_rid
    );
  }
  _font_set_disable_embedded_bitmaps(_font_rid, _disable_embedded_bitmaps) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_disable_embedded_bitmaps,
      this._owner,
      _font_rid, _disable_embedded_bitmaps
    );
  }
  _font_get_disable_embedded_bitmaps(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_disable_embedded_bitmaps,
      this._owner,
			Variant.Type.BOOL,
      _font_rid
    );
  }
  _font_set_generate_mipmaps(_font_rid, _generate_mipmaps) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_generate_mipmaps,
      this._owner,
      _font_rid, _generate_mipmaps
    );
  }
  _font_get_generate_mipmaps(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_generate_mipmaps,
      this._owner,
			Variant.Type.BOOL,
      _font_rid
    );
  }
  _font_set_multichannel_signed_distance_field(_font_rid, _msdf) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_multichannel_signed_distance_field,
      this._owner,
      _font_rid, _msdf
    );
  }
  _font_is_multichannel_signed_distance_field(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_is_multichannel_signed_distance_field,
      this._owner,
			Variant.Type.BOOL,
      _font_rid
    );
  }
  _font_set_msdf_pixel_range(_font_rid, _msdf_pixel_range) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_msdf_pixel_range,
      this._owner,
      _font_rid, _msdf_pixel_range
    );
  }
  _font_get_msdf_pixel_range(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_msdf_pixel_range,
      this._owner,
			Variant.Type.INT,
      _font_rid
    );
  }
  _font_set_msdf_size(_font_rid, _msdf_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_msdf_size,
      this._owner,
      _font_rid, _msdf_size
    );
  }
  _font_get_msdf_size(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_msdf_size,
      this._owner,
			Variant.Type.INT,
      _font_rid
    );
  }
  _font_set_fixed_size(_font_rid, _fixed_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_fixed_size,
      this._owner,
      _font_rid, _fixed_size
    );
  }
  _font_get_fixed_size(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_fixed_size,
      this._owner,
			Variant.Type.INT,
      _font_rid
    );
  }
  _font_set_fixed_size_scale_mode(_font_rid, _fixed_size_scale_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_fixed_size_scale_mode,
      this._owner,
      _font_rid, _fixed_size_scale_mode
    );
  }
  _font_get_fixed_size_scale_mode(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_fixed_size_scale_mode,
      this._owner,
			Variant.INT,
      _font_rid
    );
  }
  _font_set_allow_system_fallback(_font_rid, _allow_system_fallback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_allow_system_fallback,
      this._owner,
      _font_rid, _allow_system_fallback
    );
  }
  _font_is_allow_system_fallback(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_is_allow_system_fallback,
      this._owner,
			Variant.Type.BOOL,
      _font_rid
    );
  }
  _font_set_force_autohinter(_font_rid, _force_autohinter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_force_autohinter,
      this._owner,
      _font_rid, _force_autohinter
    );
  }
  _font_is_force_autohinter(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_is_force_autohinter,
      this._owner,
			Variant.Type.BOOL,
      _font_rid
    );
  }
  _font_set_hinting(_font_rid, _hinting) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_hinting,
      this._owner,
      _font_rid, _hinting
    );
  }
  _font_get_hinting(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_hinting,
      this._owner,
			Variant.INT,
      _font_rid
    );
  }
  _font_set_subpixel_positioning(_font_rid, _subpixel_positioning) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_subpixel_positioning,
      this._owner,
      _font_rid, _subpixel_positioning
    );
  }
  _font_get_subpixel_positioning(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_subpixel_positioning,
      this._owner,
			Variant.INT,
      _font_rid
    );
  }
  _font_set_embolden(_font_rid, _strength) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_embolden,
      this._owner,
      _font_rid, _strength
    );
  }
  _font_get_embolden(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_embolden,
      this._owner,
			Variant.Type.FLOAT,
      _font_rid
    );
  }
  _font_set_spacing(_font_rid, _spacing, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_spacing,
      this._owner,
      _font_rid, _spacing, _value
    );
  }
  _font_get_spacing(_font_rid, _spacing) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_spacing,
      this._owner,
			Variant.Type.INT,
      _font_rid, _spacing
    );
  }
  _font_set_baseline_offset(_font_rid, _baseline_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_baseline_offset,
      this._owner,
      _font_rid, _baseline_offset
    );
  }
  _font_get_baseline_offset(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_baseline_offset,
      this._owner,
			Variant.Type.FLOAT,
      _font_rid
    );
  }
  _font_set_transform(_font_rid, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_transform,
      this._owner,
      _font_rid, _transform
    );
  }
  _font_get_transform(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_transform,
      this._owner,
			Variant.Type.TRANSFORM2D
    ,
      _font_rid
    );
  }
  _font_set_variation_coordinates(_font_rid, _variation_coordinates) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_variation_coordinates,
      this._owner,
      _font_rid, _variation_coordinates
    );
  }
  _font_get_variation_coordinates(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_variation_coordinates,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _font_rid
    );
  }
  _font_set_oversampling(_font_rid, _oversampling) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_oversampling,
      this._owner,
      _font_rid, _oversampling
    );
  }
  _font_get_oversampling(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_oversampling,
      this._owner,
			Variant.Type.FLOAT,
      _font_rid
    );
  }
  _font_get_size_cache_list(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_size_cache_list,
      this._owner,
			Variant.INT,
      _font_rid
    );
  }
  _font_clear_size_cache(_font_rid) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_clear_size_cache,
      this._owner,
      _font_rid
    );
  }
  _font_remove_size_cache(_font_rid, _size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_remove_size_cache,
      this._owner,
      _font_rid, _size
    );
  }
  _font_set_ascent(_font_rid, _size, _ascent) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_ascent,
      this._owner,
      _font_rid, _size, _ascent
    );
  }
  _font_get_ascent(_font_rid, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_ascent,
      this._owner,
			Variant.Type.FLOAT,
      _font_rid, _size
    );
  }
  _font_set_descent(_font_rid, _size, _descent) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_descent,
      this._owner,
      _font_rid, _size, _descent
    );
  }
  _font_get_descent(_font_rid, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_descent,
      this._owner,
			Variant.Type.FLOAT,
      _font_rid, _size
    );
  }
  _font_set_underline_position(_font_rid, _size, _underline_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_underline_position,
      this._owner,
      _font_rid, _size, _underline_position
    );
  }
  _font_get_underline_position(_font_rid, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_underline_position,
      this._owner,
			Variant.Type.FLOAT,
      _font_rid, _size
    );
  }
  _font_set_underline_thickness(_font_rid, _size, _underline_thickness) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_underline_thickness,
      this._owner,
      _font_rid, _size, _underline_thickness
    );
  }
  _font_get_underline_thickness(_font_rid, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_underline_thickness,
      this._owner,
			Variant.Type.FLOAT,
      _font_rid, _size
    );
  }
  _font_set_scale(_font_rid, _size, _scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_scale,
      this._owner,
      _font_rid, _size, _scale
    );
  }
  _font_get_scale(_font_rid, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_scale,
      this._owner,
			Variant.Type.FLOAT,
      _font_rid, _size
    );
  }
  _font_get_texture_count(_font_rid, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_texture_count,
      this._owner,
			Variant.Type.INT,
      _font_rid, _size
    );
  }
  _font_clear_textures(_font_rid, _size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_clear_textures,
      this._owner,
      _font_rid, _size
    );
  }
  _font_remove_texture(_font_rid, _size, _texture_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_remove_texture,
      this._owner,
      _font_rid, _size, _texture_index
    );
  }
  _font_set_texture_image(_font_rid, _size, _texture_index, _image) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_texture_image,
      this._owner,
      _font_rid, _size, _texture_index, _image
    );
  }
  _font_get_texture_image(_font_rid, _size, _texture_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_texture_image,
      this._owner,
			Variant.INT,
      _font_rid, _size, _texture_index
    );
  }
  _font_set_texture_offsets(_font_rid, _size, _texture_index, _offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_texture_offsets,
      this._owner,
      _font_rid, _size, _texture_index, _offset
    );
  }
  _font_get_texture_offsets(_font_rid, _size, _texture_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_texture_offsets,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _font_rid, _size, _texture_index
    );
  }
  _font_get_glyph_list(_font_rid, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_glyph_list,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _font_rid, _size
    );
  }
  _font_clear_glyphs(_font_rid, _size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_clear_glyphs,
      this._owner,
      _font_rid, _size
    );
  }
  _font_remove_glyph(_font_rid, _size, _glyph) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_remove_glyph,
      this._owner,
      _font_rid, _size, _glyph
    );
  }
  _font_get_glyph_advance(_font_rid, _size, _glyph) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_glyph_advance,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _font_rid, _size, _glyph
    );
  }
  _font_set_glyph_advance(_font_rid, _size, _glyph, _advance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_glyph_advance,
      this._owner,
      _font_rid, _size, _glyph, _advance
    );
  }
  _font_get_glyph_offset(_font_rid, _size, _glyph) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_glyph_offset,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _font_rid, _size, _glyph
    );
  }
  _font_set_glyph_offset(_font_rid, _size, _glyph, _offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_glyph_offset,
      this._owner,
      _font_rid, _size, _glyph, _offset
    );
  }
  _font_get_glyph_size(_font_rid, _size, _glyph) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_glyph_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _font_rid, _size, _glyph
    );
  }
  _font_set_glyph_size(_font_rid, _size, _glyph, _gl_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_glyph_size,
      this._owner,
      _font_rid, _size, _glyph, _gl_size
    );
  }
  _font_get_glyph_uv_rect(_font_rid, _size, _glyph) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_glyph_uv_rect,
      this._owner,
			Variant.Type.RECT2
    ,
      _font_rid, _size, _glyph
    );
  }
  _font_set_glyph_uv_rect(_font_rid, _size, _glyph, _uv_rect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_glyph_uv_rect,
      this._owner,
      _font_rid, _size, _glyph, _uv_rect
    );
  }
  _font_get_glyph_texture_idx(_font_rid, _size, _glyph) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_glyph_texture_idx,
      this._owner,
			Variant.Type.INT,
      _font_rid, _size, _glyph
    );
  }
  _font_set_glyph_texture_idx(_font_rid, _size, _glyph, _texture_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_glyph_texture_idx,
      this._owner,
      _font_rid, _size, _glyph, _texture_idx
    );
  }
  _font_get_glyph_texture_rid(_font_rid, _size, _glyph) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_glyph_texture_rid,
      this._owner,
			Variant.Type.RID
    ,
      _font_rid, _size, _glyph
    );
  }
  _font_get_glyph_texture_size(_font_rid, _size, _glyph) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_glyph_texture_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _font_rid, _size, _glyph
    );
  }
  _font_get_glyph_contours(_font_rid, _size, _index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_glyph_contours,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _font_rid, _size, _index
    );
  }
  _font_get_kerning_list(_font_rid, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_kerning_list,
      this._owner,
			Variant.INT,
      _font_rid, _size
    );
  }
  _font_clear_kerning_map(_font_rid, _size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_clear_kerning_map,
      this._owner,
      _font_rid, _size
    );
  }
  _font_remove_kerning(_font_rid, _size, _glyph_pair) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_remove_kerning,
      this._owner,
      _font_rid, _size, _glyph_pair
    );
  }
  _font_set_kerning(_font_rid, _size, _glyph_pair, _kerning) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_kerning,
      this._owner,
      _font_rid, _size, _glyph_pair, _kerning
    );
  }
  _font_get_kerning(_font_rid, _size, _glyph_pair) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_kerning,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _font_rid, _size, _glyph_pair
    );
  }
  _font_get_glyph_index(_font_rid, _size, _char, _variation_selector) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_glyph_index,
      this._owner,
			Variant.Type.INT,
      _font_rid, _size, _char, _variation_selector
    );
  }
  _font_get_char_from_glyph_index(_font_rid, _size, _glyph_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_char_from_glyph_index,
      this._owner,
			Variant.Type.INT,
      _font_rid, _size, _glyph_index
    );
  }
  _font_has_char(_font_rid, _char) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_has_char,
      this._owner,
			Variant.Type.BOOL,
      _font_rid, _char
    );
  }
  _font_get_supported_chars(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_supported_chars,
      this._owner,
			Variant.Type.STRING
    ,
      _font_rid
    );
  }
  _font_render_range(_font_rid, _size, _start, _end) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_render_range,
      this._owner,
      _font_rid, _size, _start, _end
    );
  }
  _font_render_glyph(_font_rid, _size, _index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_render_glyph,
      this._owner,
      _font_rid, _size, _index
    );
  }
  _font_draw_glyph(_font_rid, _canvas, _size, _pos, _index, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_draw_glyph,
      this._owner,
      _font_rid, _canvas, _size, _pos, _index, _color
    );
  }
  _font_draw_glyph_outline(_font_rid, _canvas, _size, _outline_size, _pos, _index, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_draw_glyph_outline,
      this._owner,
      _font_rid, _canvas, _size, _outline_size, _pos, _index, _color
    );
  }
  _font_is_language_supported(_font_rid, _language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_is_language_supported,
      this._owner,
			Variant.Type.BOOL,
      _font_rid, _language
    );
  }
  _font_set_language_support_override(_font_rid, _language, _supported) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_language_support_override,
      this._owner,
      _font_rid, _language, _supported
    );
  }
  _font_get_language_support_override(_font_rid, _language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_language_support_override,
      this._owner,
			Variant.Type.BOOL,
      _font_rid, _language
    );
  }
  _font_remove_language_support_override(_font_rid, _language) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_remove_language_support_override,
      this._owner,
      _font_rid, _language
    );
  }
  _font_get_language_support_overrides(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_language_support_overrides,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      _font_rid
    );
  }
  _font_is_script_supported(_font_rid, _script) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_is_script_supported,
      this._owner,
			Variant.Type.BOOL,
      _font_rid, _script
    );
  }
  _font_set_script_support_override(_font_rid, _script, _supported) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_script_support_override,
      this._owner,
      _font_rid, _script, _supported
    );
  }
  _font_get_script_support_override(_font_rid, _script) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_script_support_override,
      this._owner,
			Variant.Type.BOOL,
      _font_rid, _script
    );
  }
  _font_remove_script_support_override(_font_rid, _script) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_remove_script_support_override,
      this._owner,
      _font_rid, _script
    );
  }
  _font_get_script_support_overrides(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_script_support_overrides,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      _font_rid
    );
  }
  _font_set_opentype_feature_overrides(_font_rid, _overrides) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_opentype_feature_overrides,
      this._owner,
      _font_rid, _overrides
    );
  }
  _font_get_opentype_feature_overrides(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_opentype_feature_overrides,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _font_rid
    );
  }
  _font_supported_feature_list(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_supported_feature_list,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _font_rid
    );
  }
  _font_supported_variation_list(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_supported_variation_list,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _font_rid
    );
  }
  _font_get_global_oversampling() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__font_get_global_oversampling,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  _font_set_global_oversampling(_oversampling) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__font_set_global_oversampling,
      this._owner,
      _oversampling
    );
  }
  _get_hex_code_box_size(_size, _index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_hex_code_box_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _size, _index
    );
  }
  _draw_hex_code_box(_canvas, _size, _pos, _index, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__draw_hex_code_box,
      this._owner,
      _canvas, _size, _pos, _index, _color
    );
  }
  _create_shaped_text(_direction, _orientation) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__create_shaped_text,
      this._owner,
			Variant.Type.RID
    ,
      _direction, _orientation
    );
  }
  _shaped_text_clear(_shaped) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__shaped_text_clear,
      this._owner,
      _shaped
    );
  }
  _shaped_text_set_direction(_shaped, _direction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__shaped_text_set_direction,
      this._owner,
      _shaped, _direction
    );
  }
  _shaped_text_get_direction(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_direction,
      this._owner,
			Variant.INT,
      _shaped
    );
  }
  _shaped_text_get_inferred_direction(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_inferred_direction,
      this._owner,
			Variant.INT,
      _shaped
    );
  }
  _shaped_text_set_bidi_override(_shaped, _override) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__shaped_text_set_bidi_override,
      this._owner,
      _shaped, _override
    );
  }
  _shaped_text_set_custom_punctuation(_shaped, _punct) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__shaped_text_set_custom_punctuation,
      this._owner,
      _shaped, _punct
    );
  }
  _shaped_text_get_custom_punctuation(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_custom_punctuation,
      this._owner,
			Variant.Type.STRING
    ,
      _shaped
    );
  }
  _shaped_text_set_custom_ellipsis(_shaped, _char) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__shaped_text_set_custom_ellipsis,
      this._owner,
      _shaped, _char
    );
  }
  _shaped_text_get_custom_ellipsis(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_custom_ellipsis,
      this._owner,
			Variant.Type.INT,
      _shaped
    );
  }
  _shaped_text_set_orientation(_shaped, _orientation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__shaped_text_set_orientation,
      this._owner,
      _shaped, _orientation
    );
  }
  _shaped_text_get_orientation(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_orientation,
      this._owner,
			Variant.INT,
      _shaped
    );
  }
  _shaped_text_set_preserve_invalid(_shaped, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__shaped_text_set_preserve_invalid,
      this._owner,
      _shaped, _enabled
    );
  }
  _shaped_text_get_preserve_invalid(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_preserve_invalid,
      this._owner,
			Variant.Type.BOOL,
      _shaped
    );
  }
  _shaped_text_set_preserve_control(_shaped, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__shaped_text_set_preserve_control,
      this._owner,
      _shaped, _enabled
    );
  }
  _shaped_text_get_preserve_control(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_preserve_control,
      this._owner,
			Variant.Type.BOOL,
      _shaped
    );
  }
  _shaped_text_set_spacing(_shaped, _spacing, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__shaped_text_set_spacing,
      this._owner,
      _shaped, _spacing, _value
    );
  }
  _shaped_text_get_spacing(_shaped, _spacing) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_spacing,
      this._owner,
			Variant.Type.INT,
      _shaped, _spacing
    );
  }
  _shaped_text_add_string(_shaped, _text, _fonts, _size, _opentype_features, _language, _meta) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_add_string,
      this._owner,
			Variant.Type.BOOL,
      _shaped, _text, _fonts, _size, _opentype_features, _language, _meta
    );
  }
  _shaped_text_add_object(_shaped, _key, _size, _inline_align, _length, _baseline) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_add_object,
      this._owner,
			Variant.Type.BOOL,
      _shaped, _key, _size, _inline_align, _length, _baseline
    );
  }
  _shaped_text_resize_object(_shaped, _key, _size, _inline_align, _baseline) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_resize_object,
      this._owner,
			Variant.Type.BOOL,
      _shaped, _key, _size, _inline_align, _baseline
    );
  }
  _shaped_get_span_count(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_get_span_count,
      this._owner,
			Variant.Type.INT,
      _shaped
    );
  }
  _shaped_get_span_meta(_shaped, _index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_get_span_meta,
      this._owner,
			Variant.Type.VARIANT
    ,
      _shaped, _index
    );
  }
  _shaped_set_span_update_font(_shaped, _index, _fonts, _size, _opentype_features) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__shaped_set_span_update_font,
      this._owner,
      _shaped, _index, _fonts, _size, _opentype_features
    );
  }
  _shaped_text_substr(_shaped, _start, _length) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_substr,
      this._owner,
			Variant.Type.RID
    ,
      _shaped, _start, _length
    );
  }
  _shaped_text_get_parent(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_parent,
      this._owner,
			Variant.Type.RID
    ,
      _shaped
    );
  }
  _shaped_text_fit_to_width(_shaped, _width, _justification_flags) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_fit_to_width,
      this._owner,
			Variant.Type.FLOAT,
      _shaped, _width, _justification_flags
    );
  }
  _shaped_text_tab_align(_shaped, _tab_stops) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_tab_align,
      this._owner,
			Variant.Type.FLOAT,
      _shaped, _tab_stops
    );
  }
  _shaped_text_shape(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_shape,
      this._owner,
			Variant.Type.BOOL,
      _shaped
    );
  }
  _shaped_text_update_breaks(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_update_breaks,
      this._owner,
			Variant.Type.BOOL,
      _shaped
    );
  }
  _shaped_text_update_justification_ops(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_update_justification_ops,
      this._owner,
			Variant.Type.BOOL,
      _shaped
    );
  }
  _shaped_text_is_ready(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_is_ready,
      this._owner,
			Variant.Type.BOOL,
      _shaped
    );
  }
  _shaped_text_get_glyphs(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_glyphs,
      this._owner,
			Variant.INT,
      _shaped
    );
  }
  _shaped_text_sort_logical(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_sort_logical,
      this._owner,
			Variant.INT,
      _shaped
    );
  }
  _shaped_text_get_glyph_count(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_glyph_count,
      this._owner,
			Variant.Type.INT,
      _shaped
    );
  }
  _shaped_text_get_range(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_range,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      _shaped
    );
  }
  _shaped_text_get_line_breaks_adv(_shaped, _width, _start, _once, _break_flags) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_line_breaks_adv,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _shaped, _width, _start, _once, _break_flags
    );
  }
  _shaped_text_get_line_breaks(_shaped, _width, _start, _break_flags) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_line_breaks,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _shaped, _width, _start, _break_flags
    );
  }
  _shaped_text_get_word_breaks(_shaped, _grapheme_flags, _skip_grapheme_flags) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_word_breaks,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _shaped, _grapheme_flags, _skip_grapheme_flags
    );
  }
  _shaped_text_get_trim_pos(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_trim_pos,
      this._owner,
			Variant.Type.INT,
      _shaped
    );
  }
  _shaped_text_get_ellipsis_pos(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_ellipsis_pos,
      this._owner,
			Variant.Type.INT,
      _shaped
    );
  }
  _shaped_text_get_ellipsis_glyph_count(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_ellipsis_glyph_count,
      this._owner,
			Variant.Type.INT,
      _shaped
    );
  }
  _shaped_text_get_ellipsis_glyphs(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_ellipsis_glyphs,
      this._owner,
			Variant.INT,
      _shaped
    );
  }
  _shaped_text_overrun_trim_to_width(_shaped, _width, _trim_flags) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__shaped_text_overrun_trim_to_width,
      this._owner,
      _shaped, _width, _trim_flags
    );
  }
  _shaped_text_get_objects(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_objects,
      this._owner,
			Variant.Type.ARRAY
    ,
      _shaped
    );
  }
  _shaped_text_get_object_rect(_shaped, _key) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_object_rect,
      this._owner,
			Variant.Type.RECT2
    ,
      _shaped, _key
    );
  }
  _shaped_text_get_object_range(_shaped, _key) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_object_range,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      _shaped, _key
    );
  }
  _shaped_text_get_object_glyph(_shaped, _key) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_object_glyph,
      this._owner,
			Variant.Type.INT,
      _shaped, _key
    );
  }
  _shaped_text_get_size(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _shaped
    );
  }
  _shaped_text_get_ascent(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_ascent,
      this._owner,
			Variant.Type.FLOAT,
      _shaped
    );
  }
  _shaped_text_get_descent(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_descent,
      this._owner,
			Variant.Type.FLOAT,
      _shaped
    );
  }
  _shaped_text_get_width(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_width,
      this._owner,
			Variant.Type.FLOAT,
      _shaped
    );
  }
  _shaped_text_get_underline_position(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_underline_position,
      this._owner,
			Variant.Type.FLOAT,
      _shaped
    );
  }
  _shaped_text_get_underline_thickness(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_underline_thickness,
      this._owner,
			Variant.Type.FLOAT,
      _shaped
    );
  }
  _shaped_text_get_dominant_direction_in_range(_shaped, _start, _end) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_dominant_direction_in_range,
      this._owner,
			Variant.Type.INT,
      _shaped, _start, _end
    );
  }
  _shaped_text_get_carets(_shaped, _position, _caret) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__shaped_text_get_carets,
      this._owner,
      _shaped, _position, _caret
    );
  }
  _shaped_text_get_selection(_shaped, _start, _end) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_selection,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      _shaped, _start, _end
    );
  }
  _shaped_text_hit_test_grapheme(_shaped, _coord) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_hit_test_grapheme,
      this._owner,
			Variant.Type.INT,
      _shaped, _coord
    );
  }
  _shaped_text_hit_test_position(_shaped, _coord) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_hit_test_position,
      this._owner,
			Variant.Type.INT,
      _shaped, _coord
    );
  }
  _shaped_text_draw(_shaped, _canvas, _pos, _clip_l, _clip_r, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__shaped_text_draw,
      this._owner,
      _shaped, _canvas, _pos, _clip_l, _clip_r, _color
    );
  }
  _shaped_text_draw_outline(_shaped, _canvas, _pos, _clip_l, _clip_r, _outline_size, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__shaped_text_draw_outline,
      this._owner,
      _shaped, _canvas, _pos, _clip_l, _clip_r, _outline_size, _color
    );
  }
  _shaped_text_get_grapheme_bounds(_shaped, _pos) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_grapheme_bounds,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _shaped, _pos
    );
  }
  _shaped_text_next_grapheme_pos(_shaped, _pos) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_next_grapheme_pos,
      this._owner,
			Variant.Type.INT,
      _shaped, _pos
    );
  }
  _shaped_text_prev_grapheme_pos(_shaped, _pos) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_prev_grapheme_pos,
      this._owner,
			Variant.Type.INT,
      _shaped, _pos
    );
  }
  _shaped_text_get_character_breaks(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_get_character_breaks,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _shaped
    );
  }
  _shaped_text_next_character_pos(_shaped, _pos) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_next_character_pos,
      this._owner,
			Variant.Type.INT,
      _shaped, _pos
    );
  }
  _shaped_text_prev_character_pos(_shaped, _pos) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_prev_character_pos,
      this._owner,
			Variant.Type.INT,
      _shaped, _pos
    );
  }
  _shaped_text_closest_character_pos(_shaped, _pos) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shaped_text_closest_character_pos,
      this._owner,
			Variant.Type.INT,
      _shaped, _pos
    );
  }
  _format_number(_number, _language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__format_number,
      this._owner,
			Variant.Type.STRING
    ,
      _number, _language
    );
  }
  _parse_number(_number, _language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__parse_number,
      this._owner,
			Variant.Type.STRING
    ,
      _number, _language
    );
  }
  _percent_sign(_language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__percent_sign,
      this._owner,
			Variant.Type.STRING
    ,
      _language
    );
  }
  _strip_diacritics(_string) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__strip_diacritics,
      this._owner,
			Variant.Type.STRING
    ,
      _string
    );
  }
  _is_valid_identifier(_string) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_valid_identifier,
      this._owner,
			Variant.Type.BOOL,
      _string
    );
  }
  _is_valid_letter(_unicode) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_valid_letter,
      this._owner,
			Variant.Type.BOOL,
      _unicode
    );
  }
  _string_get_word_breaks(_string, _language, _chars_per_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__string_get_word_breaks,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _string, _language, _chars_per_line
    );
  }
  _string_get_character_breaks(_string, _language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__string_get_character_breaks,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _string, _language
    );
  }
  _is_confusable(_string, _dict) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_confusable,
      this._owner,
			Variant.Type.INT,
      _string, _dict
    );
  }
  _spoof_check(_string) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__spoof_check,
      this._owner,
			Variant.Type.BOOL,
      _string
    );
  }
  _string_to_upper(_string, _language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__string_to_upper,
      this._owner,
			Variant.Type.STRING
    ,
      _string, _language
    );
  }
  _string_to_lower(_string, _language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__string_to_lower,
      this._owner,
			Variant.Type.STRING
    ,
      _string, _language
    );
  }
  _string_to_title(_string, _language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__string_to_title,
      this._owner,
			Variant.Type.STRING
    ,
      _string, _language
    );
  }
  _parse_structured_text(_parser_type, _args, _text) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__parse_structured_text,
      this._owner,
			Variant.INT,
      _parser_type, _args, _text
    );
  }
  _cleanup() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__cleanup,
      this._owner,
      
    );
  }
}