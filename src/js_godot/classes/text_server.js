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
import { RID } from 'src/js_godot/variant/rid'
import { Transform2D } from 'src/js_godot/variant/transform2d'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { RefCounted } from 'src/js_godot/classesref_counted'
import { Dictionary } from 'src/js_godot/variant/dictionary'
class _MethodBindings {
    method_has_feature;
    method_get_name;
    method_get_features;
    method_load_support_data;
    method_get_support_data_filename;
    method_get_support_data_info;
    method_save_support_data;
    method_is_locale_right_to_left;
    method_name_to_tag;
    method_tag_to_name;
    method_has;
    method_free_rid;
    method_create_font;
    method_create_font_linked_variation;
    method_font_set_data;
    method_font_set_face_index;
    method_font_get_face_index;
    method_font_get_face_count;
    method_font_set_style;
    method_font_get_style;
    method_font_set_name;
    method_font_get_name;
    method_font_get_ot_name_strings;
    method_font_set_style_name;
    method_font_get_style_name;
    method_font_set_weight;
    method_font_get_weight;
    method_font_set_stretch;
    method_font_get_stretch;
    method_font_set_antialiasing;
    method_font_get_antialiasing;
    method_font_set_disable_embedded_bitmaps;
    method_font_get_disable_embedded_bitmaps;
    method_font_set_generate_mipmaps;
    method_font_get_generate_mipmaps;
    method_font_set_multichannel_signed_distance_field;
    method_font_is_multichannel_signed_distance_field;
    method_font_set_msdf_pixel_range;
    method_font_get_msdf_pixel_range;
    method_font_set_msdf_size;
    method_font_get_msdf_size;
    method_font_set_fixed_size;
    method_font_get_fixed_size;
    method_font_set_fixed_size_scale_mode;
    method_font_get_fixed_size_scale_mode;
    method_font_set_allow_system_fallback;
    method_font_is_allow_system_fallback;
    method_font_set_force_autohinter;
    method_font_is_force_autohinter;
    method_font_set_hinting;
    method_font_get_hinting;
    method_font_set_subpixel_positioning;
    method_font_get_subpixel_positioning;
    method_font_set_embolden;
    method_font_get_embolden;
    method_font_set_spacing;
    method_font_get_spacing;
    method_font_set_baseline_offset;
    method_font_get_baseline_offset;
    method_font_set_transform;
    method_font_get_transform;
    method_font_set_variation_coordinates;
    method_font_get_variation_coordinates;
    method_font_set_oversampling;
    method_font_get_oversampling;
    method_font_get_size_cache_list;
    method_font_clear_size_cache;
    method_font_remove_size_cache;
    method_font_set_ascent;
    method_font_get_ascent;
    method_font_set_descent;
    method_font_get_descent;
    method_font_set_underline_position;
    method_font_get_underline_position;
    method_font_set_underline_thickness;
    method_font_get_underline_thickness;
    method_font_set_scale;
    method_font_get_scale;
    method_font_get_texture_count;
    method_font_clear_textures;
    method_font_remove_texture;
    method_font_set_texture_image;
    method_font_get_texture_image;
    method_font_set_texture_offsets;
    method_font_get_texture_offsets;
    method_font_get_glyph_list;
    method_font_clear_glyphs;
    method_font_remove_glyph;
    method_font_get_glyph_advance;
    method_font_set_glyph_advance;
    method_font_get_glyph_offset;
    method_font_set_glyph_offset;
    method_font_get_glyph_size;
    method_font_set_glyph_size;
    method_font_get_glyph_uv_rect;
    method_font_set_glyph_uv_rect;
    method_font_get_glyph_texture_idx;
    method_font_set_glyph_texture_idx;
    method_font_get_glyph_texture_rid;
    method_font_get_glyph_texture_size;
    method_font_get_glyph_contours;
    method_font_get_kerning_list;
    method_font_clear_kerning_map;
    method_font_remove_kerning;
    method_font_set_kerning;
    method_font_get_kerning;
    method_font_get_glyph_index;
    method_font_get_char_from_glyph_index;
    method_font_has_char;
    method_font_get_supported_chars;
    method_font_render_range;
    method_font_render_glyph;
    method_font_draw_glyph;
    method_font_draw_glyph_outline;
    method_font_is_language_supported;
    method_font_set_language_support_override;
    method_font_get_language_support_override;
    method_font_remove_language_support_override;
    method_font_get_language_support_overrides;
    method_font_is_script_supported;
    method_font_set_script_support_override;
    method_font_get_script_support_override;
    method_font_remove_script_support_override;
    method_font_get_script_support_overrides;
    method_font_set_opentype_feature_overrides;
    method_font_get_opentype_feature_overrides;
    method_font_supported_feature_list;
    method_font_supported_variation_list;
    method_font_get_global_oversampling;
    method_font_set_global_oversampling;
    method_get_hex_code_box_size;
    method_draw_hex_code_box;
    method_create_shaped_text;
    method_shaped_text_clear;
    method_shaped_text_set_direction;
    method_shaped_text_get_direction;
    method_shaped_text_get_inferred_direction;
    method_shaped_text_set_bidi_override;
    method_shaped_text_set_custom_punctuation;
    method_shaped_text_get_custom_punctuation;
    method_shaped_text_set_custom_ellipsis;
    method_shaped_text_get_custom_ellipsis;
    method_shaped_text_set_orientation;
    method_shaped_text_get_orientation;
    method_shaped_text_set_preserve_invalid;
    method_shaped_text_get_preserve_invalid;
    method_shaped_text_set_preserve_control;
    method_shaped_text_get_preserve_control;
    method_shaped_text_set_spacing;
    method_shaped_text_get_spacing;
    method_shaped_text_add_string;
    method_shaped_text_add_object;
    method_shaped_text_resize_object;
    method_shaped_get_span_count;
    method_shaped_get_span_meta;
    method_shaped_set_span_update_font;
    method_shaped_text_substr;
    method_shaped_text_get_parent;
    method_shaped_text_fit_to_width;
    method_shaped_text_tab_align;
    method_shaped_text_shape;
    method_shaped_text_is_ready;
    method_shaped_text_has_visible_chars;
    method_shaped_text_get_glyphs;
    method_shaped_text_sort_logical;
    method_shaped_text_get_glyph_count;
    method_shaped_text_get_range;
    method_shaped_text_get_line_breaks_adv;
    method_shaped_text_get_line_breaks;
    method_shaped_text_get_word_breaks;
    method_shaped_text_get_trim_pos;
    method_shaped_text_get_ellipsis_pos;
    method_shaped_text_get_ellipsis_glyphs;
    method_shaped_text_get_ellipsis_glyph_count;
    method_shaped_text_overrun_trim_to_width;
    method_shaped_text_get_objects;
    method_shaped_text_get_object_rect;
    method_shaped_text_get_object_range;
    method_shaped_text_get_object_glyph;
    method_shaped_text_get_size;
    method_shaped_text_get_ascent;
    method_shaped_text_get_descent;
    method_shaped_text_get_width;
    method_shaped_text_get_underline_position;
    method_shaped_text_get_underline_thickness;
    method_shaped_text_get_carets;
    method_shaped_text_get_selection;
    method_shaped_text_hit_test_grapheme;
    method_shaped_text_hit_test_position;
    method_shaped_text_get_grapheme_bounds;
    method_shaped_text_next_grapheme_pos;
    method_shaped_text_prev_grapheme_pos;
    method_shaped_text_get_character_breaks;
    method_shaped_text_next_character_pos;
    method_shaped_text_prev_character_pos;
    method_shaped_text_closest_character_pos;
    method_shaped_text_draw;
    method_shaped_text_draw_outline;
    method_shaped_text_get_dominant_direction_in_range;
    method_format_number;
    method_parse_number;
    method_percent_sign;
    method_string_get_word_breaks;
    method_string_get_character_breaks;
    method_is_confusable;
    method_spoof_check;
    method_strip_diacritics;
    method_is_valid_identifier;
    method_is_valid_letter;
    method_string_to_upper;
    method_string_to_lower;
    method_string_to_title;
    method_parse_structured_text;
}


export class TextServer extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TextServer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("has_feature");
      this._bindings.method_has_feature = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3967367083
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("get_name");
      this._bindings.method_get_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("get_features");
      this._bindings.method_get_features = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("load_support_data");
      this._bindings.method_load_support_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2323990056
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("get_support_data_filename");
      this._bindings.method_get_support_data_filename = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("get_support_data_info");
      this._bindings.method_get_support_data_info = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("save_support_data");
      this._bindings.method_save_support_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3927539163
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("is_locale_right_to_left");
      this._bindings.method_is_locale_right_to_left = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3927539163
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("name_to_tag");
      this._bindings.method_name_to_tag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1321353865
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("tag_to_name");
      this._bindings.method_tag_to_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("has");
      this._bindings.method_has = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3521089500
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("free_rid");
      this._bindings.method_free_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("create_font");
      this._bindings.method_create_font = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("create_font_linked_variation");
      this._bindings.method_create_font_linked_variation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        41030802
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_data");
      this._bindings.method_font_set_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1355495400
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_face_index");
      this._bindings.method_font_set_face_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_face_index");
      this._bindings.method_font_get_face_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_face_count");
      this._bindings.method_font_get_face_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_style");
      this._bindings.method_font_set_style = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        898466325
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_style");
      this._bindings.method_font_get_style = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3082502592
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_name");
      this._bindings.method_font_set_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2726140452
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_name");
      this._bindings.method_font_get_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        642473191
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_ot_name_strings");
      this._bindings.method_font_get_ot_name_strings = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1882737106
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_style_name");
      this._bindings.method_font_set_style_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2726140452
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_style_name");
      this._bindings.method_font_get_style_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        642473191
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_weight");
      this._bindings.method_font_set_weight = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_weight");
      this._bindings.method_font_get_weight = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_stretch");
      this._bindings.method_font_set_stretch = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_stretch");
      this._bindings.method_font_get_stretch = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_antialiasing");
      this._bindings.method_font_set_antialiasing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        958337235
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_antialiasing");
      this._bindings.method_font_get_antialiasing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3389420495
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_disable_embedded_bitmaps");
      this._bindings.method_font_set_disable_embedded_bitmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1265174801
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_disable_embedded_bitmaps");
      this._bindings.method_font_get_disable_embedded_bitmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4155700596
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_generate_mipmaps");
      this._bindings.method_font_set_generate_mipmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1265174801
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_generate_mipmaps");
      this._bindings.method_font_get_generate_mipmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4155700596
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_multichannel_signed_distance_field");
      this._bindings.method_font_set_multichannel_signed_distance_field = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1265174801
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_is_multichannel_signed_distance_field");
      this._bindings.method_font_is_multichannel_signed_distance_field = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4155700596
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_msdf_pixel_range");
      this._bindings.method_font_set_msdf_pixel_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_msdf_pixel_range");
      this._bindings.method_font_get_msdf_pixel_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_msdf_size");
      this._bindings.method_font_set_msdf_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_msdf_size");
      this._bindings.method_font_get_msdf_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_fixed_size");
      this._bindings.method_font_set_fixed_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_fixed_size");
      this._bindings.method_font_get_fixed_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_fixed_size_scale_mode");
      this._bindings.method_font_set_fixed_size_scale_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1029390307
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_fixed_size_scale_mode");
      this._bindings.method_font_get_fixed_size_scale_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4113120379
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_allow_system_fallback");
      this._bindings.method_font_set_allow_system_fallback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1265174801
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_is_allow_system_fallback");
      this._bindings.method_font_is_allow_system_fallback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4155700596
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_force_autohinter");
      this._bindings.method_font_set_force_autohinter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1265174801
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_is_force_autohinter");
      this._bindings.method_font_is_force_autohinter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4155700596
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_hinting");
      this._bindings.method_font_set_hinting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1520010864
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_hinting");
      this._bindings.method_font_get_hinting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3971592737
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_subpixel_positioning");
      this._bindings.method_font_set_subpixel_positioning = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3830459669
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_subpixel_positioning");
      this._bindings.method_font_get_subpixel_positioning = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2752233671
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_embolden");
      this._bindings.method_font_set_embolden = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1794382983
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_embolden");
      this._bindings.method_font_get_embolden = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        866169185
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_spacing");
      this._bindings.method_font_set_spacing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1307259930
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_spacing");
      this._bindings.method_font_get_spacing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1213653558
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_baseline_offset");
      this._bindings.method_font_set_baseline_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1794382983
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_baseline_offset");
      this._bindings.method_font_get_baseline_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        866169185
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_transform");
      this._bindings.method_font_set_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1246044741
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_transform");
      this._bindings.method_font_get_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        213527486
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_variation_coordinates");
      this._bindings.method_font_set_variation_coordinates = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1217542888
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_variation_coordinates");
      this._bindings.method_font_get_variation_coordinates = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1882737106
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_oversampling");
      this._bindings.method_font_set_oversampling = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1794382983
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_oversampling");
      this._bindings.method_font_get_oversampling = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        866169185
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_size_cache_list");
      this._bindings.method_font_get_size_cache_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2684255073
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_clear_size_cache");
      this._bindings.method_font_clear_size_cache = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_remove_size_cache");
      this._bindings.method_font_remove_size_cache = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2450610377
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_ascent");
      this._bindings.method_font_set_ascent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1892459533
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_ascent");
      this._bindings.method_font_get_ascent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        755457166
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_descent");
      this._bindings.method_font_set_descent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1892459533
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_descent");
      this._bindings.method_font_get_descent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        755457166
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_underline_position");
      this._bindings.method_font_set_underline_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1892459533
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_underline_position");
      this._bindings.method_font_get_underline_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        755457166
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_underline_thickness");
      this._bindings.method_font_set_underline_thickness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1892459533
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_underline_thickness");
      this._bindings.method_font_get_underline_thickness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        755457166
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_scale");
      this._bindings.method_font_set_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1892459533
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_scale");
      this._bindings.method_font_get_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        755457166
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_texture_count");
      this._bindings.method_font_get_texture_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1311001310
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_clear_textures");
      this._bindings.method_font_clear_textures = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2450610377
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_remove_texture");
      this._bindings.method_font_remove_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3810512262
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_texture_image");
      this._bindings.method_font_set_texture_image = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2354485091
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_texture_image");
      this._bindings.method_font_get_texture_image = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2451761155
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_texture_offsets");
      this._bindings.method_font_set_texture_offsets = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3005398047
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_texture_offsets");
      this._bindings.method_font_get_texture_offsets = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3420028887
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_glyph_list");
      this._bindings.method_font_get_glyph_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        46086620
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_clear_glyphs");
      this._bindings.method_font_clear_glyphs = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2450610377
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_remove_glyph");
      this._bindings.method_font_remove_glyph = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3810512262
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_glyph_advance");
      this._bindings.method_font_get_glyph_advance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2555689501
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_glyph_advance");
      this._bindings.method_font_set_glyph_advance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3219397315
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_glyph_offset");
      this._bindings.method_font_get_glyph_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        513728628
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_glyph_offset");
      this._bindings.method_font_set_glyph_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1812632090
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_glyph_size");
      this._bindings.method_font_get_glyph_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        513728628
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_glyph_size");
      this._bindings.method_font_set_glyph_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1812632090
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_glyph_uv_rect");
      this._bindings.method_font_get_glyph_uv_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2274268786
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_glyph_uv_rect");
      this._bindings.method_font_set_glyph_uv_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1973324081
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_glyph_texture_idx");
      this._bindings.method_font_get_glyph_texture_idx = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4292800474
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_glyph_texture_idx");
      this._bindings.method_font_set_glyph_texture_idx = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4254580980
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_glyph_texture_rid");
      this._bindings.method_font_get_glyph_texture_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1451696141
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_glyph_texture_size");
      this._bindings.method_font_get_glyph_texture_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        513728628
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_glyph_contours");
      this._bindings.method_font_get_glyph_contours = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2903964473
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_kerning_list");
      this._bindings.method_font_get_kerning_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1778388067
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_clear_kerning_map");
      this._bindings.method_font_clear_kerning_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_remove_kerning");
      this._bindings.method_font_remove_kerning = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2141860016
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_kerning");
      this._bindings.method_font_set_kerning = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3630965883
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_kerning");
      this._bindings.method_font_get_kerning = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1019980169
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_glyph_index");
      this._bindings.method_font_get_glyph_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1765635060
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_char_from_glyph_index");
      this._bindings.method_font_get_char_from_glyph_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2156738276
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_has_char");
      this._bindings.method_font_has_char = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3120086654
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_supported_chars");
      this._bindings.method_font_get_supported_chars = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        642473191
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_render_range");
      this._bindings.method_font_render_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4254580980
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_render_glyph");
      this._bindings.method_font_render_glyph = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3810512262
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_draw_glyph");
      this._bindings.method_font_draw_glyph = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1339057948
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_draw_glyph_outline");
      this._bindings.method_font_draw_glyph_outline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2626165733
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_is_language_supported");
      this._bindings.method_font_is_language_supported = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3199320846
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_language_support_override");
      this._bindings.method_font_set_language_support_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2313957094
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_language_support_override");
      this._bindings.method_font_get_language_support_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2829184646
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_remove_language_support_override");
      this._bindings.method_font_remove_language_support_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2726140452
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_language_support_overrides");
      this._bindings.method_font_get_language_support_overrides = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2801473409
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_is_script_supported");
      this._bindings.method_font_is_script_supported = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3199320846
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_script_support_override");
      this._bindings.method_font_set_script_support_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2313957094
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_script_support_override");
      this._bindings.method_font_get_script_support_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2829184646
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_remove_script_support_override");
      this._bindings.method_font_remove_script_support_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2726140452
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_script_support_overrides");
      this._bindings.method_font_get_script_support_overrides = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2801473409
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_opentype_feature_overrides");
      this._bindings.method_font_set_opentype_feature_overrides = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1217542888
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_opentype_feature_overrides");
      this._bindings.method_font_get_opentype_feature_overrides = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1882737106
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_supported_feature_list");
      this._bindings.method_font_supported_feature_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1882737106
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_supported_variation_list");
      this._bindings.method_font_supported_variation_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1882737106
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_get_global_oversampling");
      this._bindings.method_font_get_global_oversampling = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("font_set_global_oversampling");
      this._bindings.method_font_set_global_oversampling = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("get_hex_code_box_size");
      this._bindings.method_get_hex_code_box_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3016396712
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("draw_hex_code_box");
      this._bindings.method_draw_hex_code_box = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602046441
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("create_shaped_text");
      this._bindings.method_create_shaped_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1231398698
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_clear");
      this._bindings.method_shaped_text_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_set_direction");
      this._bindings.method_shaped_text_set_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1551430183
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_direction");
      this._bindings.method_shaped_text_get_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3065904362
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_inferred_direction");
      this._bindings.method_shaped_text_get_inferred_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3065904362
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_set_bidi_override");
      this._bindings.method_shaped_text_set_bidi_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        684822712
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_set_custom_punctuation");
      this._bindings.method_shaped_text_set_custom_punctuation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2726140452
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_custom_punctuation");
      this._bindings.method_shaped_text_get_custom_punctuation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        642473191
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_set_custom_ellipsis");
      this._bindings.method_shaped_text_set_custom_ellipsis = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_custom_ellipsis");
      this._bindings.method_shaped_text_get_custom_ellipsis = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_set_orientation");
      this._bindings.method_shaped_text_set_orientation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3019609126
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_orientation");
      this._bindings.method_shaped_text_get_orientation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3142708106
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_set_preserve_invalid");
      this._bindings.method_shaped_text_set_preserve_invalid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1265174801
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_preserve_invalid");
      this._bindings.method_shaped_text_get_preserve_invalid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4155700596
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_set_preserve_control");
      this._bindings.method_shaped_text_set_preserve_control = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1265174801
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_preserve_control");
      this._bindings.method_shaped_text_get_preserve_control = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4155700596
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_set_spacing");
      this._bindings.method_shaped_text_set_spacing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1307259930
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_spacing");
      this._bindings.method_shaped_text_get_spacing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1213653558
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_add_string");
      this._bindings.method_shaped_text_add_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        623473029
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_add_object");
      this._bindings.method_shaped_text_add_object = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3664424789
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_resize_object");
      this._bindings.method_shaped_text_resize_object = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        790361552
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_get_span_count");
      this._bindings.method_shaped_get_span_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_get_span_meta");
      this._bindings.method_shaped_get_span_meta = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4069510997
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_set_span_update_font");
      this._bindings.method_shaped_set_span_update_font = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2022725822
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_substr");
      this._bindings.method_shaped_text_substr = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1937682086
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_parent");
      this._bindings.method_shaped_text_get_parent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3814569979
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_fit_to_width");
      this._bindings.method_shaped_text_fit_to_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        530670926
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_tab_align");
      this._bindings.method_shaped_text_tab_align = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1283669550
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_shape");
      this._bindings.method_shaped_text_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3521089500
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_is_ready");
      this._bindings.method_shaped_text_is_ready = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4155700596
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_has_visible_chars");
      this._bindings.method_shaped_text_has_visible_chars = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4155700596
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_glyphs");
      this._bindings.method_shaped_text_get_glyphs = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2684255073
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_sort_logical");
      this._bindings.method_shaped_text_sort_logical = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2670461153
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_glyph_count");
      this._bindings.method_shaped_text_get_glyph_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_range");
      this._bindings.method_shaped_text_get_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        733700038
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_line_breaks_adv");
      this._bindings.method_shaped_text_get_line_breaks_adv = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2376991424
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_line_breaks");
      this._bindings.method_shaped_text_get_line_breaks = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2651359741
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_word_breaks");
      this._bindings.method_shaped_text_get_word_breaks = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4099476853
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_trim_pos");
      this._bindings.method_shaped_text_get_trim_pos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_ellipsis_pos");
      this._bindings.method_shaped_text_get_ellipsis_pos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_ellipsis_glyphs");
      this._bindings.method_shaped_text_get_ellipsis_glyphs = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2684255073
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_ellipsis_glyph_count");
      this._bindings.method_shaped_text_get_ellipsis_glyph_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_overrun_trim_to_width");
      this._bindings.method_shaped_text_overrun_trim_to_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2723146520
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_objects");
      this._bindings.method_shaped_text_get_objects = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2684255073
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_object_rect");
      this._bindings.method_shaped_text_get_object_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        447978354
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_object_range");
      this._bindings.method_shaped_text_get_object_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2524675647
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_object_glyph");
      this._bindings.method_shaped_text_get_object_glyph = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1260085030
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_size");
      this._bindings.method_shaped_text_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2440833711
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_ascent");
      this._bindings.method_shaped_text_get_ascent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        866169185
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_descent");
      this._bindings.method_shaped_text_get_descent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        866169185
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_width");
      this._bindings.method_shaped_text_get_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        866169185
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_underline_position");
      this._bindings.method_shaped_text_get_underline_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        866169185
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_underline_thickness");
      this._bindings.method_shaped_text_get_underline_thickness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        866169185
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_carets");
      this._bindings.method_shaped_text_get_carets = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1574219346
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_selection");
      this._bindings.method_shaped_text_get_selection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3714187733
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_hit_test_grapheme");
      this._bindings.method_shaped_text_hit_test_grapheme = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3149310417
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_hit_test_position");
      this._bindings.method_shaped_text_hit_test_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3149310417
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_grapheme_bounds");
      this._bindings.method_shaped_text_get_grapheme_bounds = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2546185844
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_next_grapheme_pos");
      this._bindings.method_shaped_text_next_grapheme_pos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1120910005
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_prev_grapheme_pos");
      this._bindings.method_shaped_text_prev_grapheme_pos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1120910005
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_character_breaks");
      this._bindings.method_shaped_text_get_character_breaks = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        788230395
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_next_character_pos");
      this._bindings.method_shaped_text_next_character_pos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1120910005
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_prev_character_pos");
      this._bindings.method_shaped_text_prev_character_pos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1120910005
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_closest_character_pos");
      this._bindings.method_shaped_text_closest_character_pos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1120910005
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_draw");
      this._bindings.method_shaped_text_draw = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        880389142
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_draw_outline");
      this._bindings.method_shaped_text_draw_outline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2559184194
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("shaped_text_get_dominant_direction_in_range");
      this._bindings.method_shaped_text_get_dominant_direction_in_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3326907668
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("format_number");
      this._bindings.method_format_number = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2664628024
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("parse_number");
      this._bindings.method_parse_number = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2664628024
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("percent_sign");
      this._bindings.method_percent_sign = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        993269549
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("string_get_word_breaks");
      this._bindings.method_string_get_word_breaks = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        581857818
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("string_get_character_breaks");
      this._bindings.method_string_get_character_breaks = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2333794773
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("is_confusable");
      this._bindings.method_is_confusable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1433197768
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("spoof_check");
      this._bindings.method_spoof_check = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3927539163
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("strip_diacritics");
      this._bindings.method_strip_diacritics = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3135753539
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("is_valid_identifier");
      this._bindings.method_is_valid_identifier = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3927539163
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("is_valid_letter");
      this._bindings.method_is_valid_letter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("string_to_upper");
      this._bindings.method_string_to_upper = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2664628024
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("string_to_lower");
      this._bindings.method_string_to_lower = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2664628024
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("string_to_title");
      this._bindings.method_string_to_title = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2664628024
      );
    }
    {
      let classname = new StringName("TextServer");
      let methodname = new StringName("parse_structured_text");
      this._bindings.method_parse_structured_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3310685015
      );
    }
  }
  has_feature(_feature) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_feature,
      this._owner,
			Variant.Type.BOOL,
      _feature
    );
  }
  get_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  get_features() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_features,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  load_support_data(_filename) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load_support_data,
      this._owner,
			Variant.Type.BOOL,
      _filename
    );
  }
  get_support_data_filename() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_support_data_filename,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  get_support_data_info() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_support_data_info,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  save_support_data(_filename) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_save_support_data,
      this._owner,
			Variant.Type.BOOL,
      _filename
    );
  }
  is_locale_right_to_left(_locale) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_locale_right_to_left,
      this._owner,
			Variant.Type.BOOL,
      _locale
    );
  }
  name_to_tag(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_name_to_tag,
      this._owner,
			Variant.Type.INT,
      _name
    );
  }
  tag_to_name(_tag) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_tag_to_name,
      this._owner,
			Variant.Type.STRING
    ,
      _tag
    );
  }
  has(_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has,
      this._owner,
			Variant.Type.BOOL,
      _rid
    );
  }
  free_rid(_rid) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_free_rid,
      this._owner,
      _rid
    );
  }
  create_font() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_font,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  create_font_linked_variation(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_font_linked_variation,
      this._owner,
			Variant.Type.RID
    ,
      _font_rid
    );
  }
  font_set_data(_font_rid, _data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_data,
      this._owner,
      _font_rid, _data
    );
  }
  font_set_face_index(_font_rid, _face_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_face_index,
      this._owner,
      _font_rid, _face_index
    );
  }
  font_get_face_index(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_face_index,
      this._owner,
			Variant.Type.INT,
      _font_rid
    );
  }
  font_get_face_count(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_face_count,
      this._owner,
			Variant.Type.INT,
      _font_rid
    );
  }
  font_set_style(_font_rid, _style) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_style,
      this._owner,
      _font_rid, _style
    );
  }
  font_get_style(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_style,
      this._owner,
			Variant.INT,
      _font_rid
    );
  }
  font_set_name(_font_rid, _name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_name,
      this._owner,
      _font_rid, _name
    );
  }
  font_get_name(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_name,
      this._owner,
			Variant.Type.STRING
    ,
      _font_rid
    );
  }
  font_get_ot_name_strings(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_ot_name_strings,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _font_rid
    );
  }
  font_set_style_name(_font_rid, _name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_style_name,
      this._owner,
      _font_rid, _name
    );
  }
  font_get_style_name(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_style_name,
      this._owner,
			Variant.Type.STRING
    ,
      _font_rid
    );
  }
  font_set_weight(_font_rid, _weight) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_weight,
      this._owner,
      _font_rid, _weight
    );
  }
  font_get_weight(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_weight,
      this._owner,
			Variant.Type.INT,
      _font_rid
    );
  }
  font_set_stretch(_font_rid, _weight) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_stretch,
      this._owner,
      _font_rid, _weight
    );
  }
  font_get_stretch(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_stretch,
      this._owner,
			Variant.Type.INT,
      _font_rid
    );
  }
  font_set_antialiasing(_font_rid, _antialiasing) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_antialiasing,
      this._owner,
      _font_rid, _antialiasing
    );
  }
  font_get_antialiasing(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_antialiasing,
      this._owner,
			Variant.INT,
      _font_rid
    );
  }
  font_set_disable_embedded_bitmaps(_font_rid, _disable_embedded_bitmaps) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_disable_embedded_bitmaps,
      this._owner,
      _font_rid, _disable_embedded_bitmaps
    );
  }
  font_get_disable_embedded_bitmaps(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_disable_embedded_bitmaps,
      this._owner,
			Variant.Type.BOOL,
      _font_rid
    );
  }
  font_set_generate_mipmaps(_font_rid, _generate_mipmaps) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_generate_mipmaps,
      this._owner,
      _font_rid, _generate_mipmaps
    );
  }
  font_get_generate_mipmaps(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_generate_mipmaps,
      this._owner,
			Variant.Type.BOOL,
      _font_rid
    );
  }
  font_set_multichannel_signed_distance_field(_font_rid, _msdf) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_multichannel_signed_distance_field,
      this._owner,
      _font_rid, _msdf
    );
  }
  font_is_multichannel_signed_distance_field(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_is_multichannel_signed_distance_field,
      this._owner,
			Variant.Type.BOOL,
      _font_rid
    );
  }
  font_set_msdf_pixel_range(_font_rid, _msdf_pixel_range) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_msdf_pixel_range,
      this._owner,
      _font_rid, _msdf_pixel_range
    );
  }
  font_get_msdf_pixel_range(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_msdf_pixel_range,
      this._owner,
			Variant.Type.INT,
      _font_rid
    );
  }
  font_set_msdf_size(_font_rid, _msdf_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_msdf_size,
      this._owner,
      _font_rid, _msdf_size
    );
  }
  font_get_msdf_size(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_msdf_size,
      this._owner,
			Variant.Type.INT,
      _font_rid
    );
  }
  font_set_fixed_size(_font_rid, _fixed_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_fixed_size,
      this._owner,
      _font_rid, _fixed_size
    );
  }
  font_get_fixed_size(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_fixed_size,
      this._owner,
			Variant.Type.INT,
      _font_rid
    );
  }
  font_set_fixed_size_scale_mode(_font_rid, _fixed_size_scale_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_fixed_size_scale_mode,
      this._owner,
      _font_rid, _fixed_size_scale_mode
    );
  }
  font_get_fixed_size_scale_mode(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_fixed_size_scale_mode,
      this._owner,
			Variant.INT,
      _font_rid
    );
  }
  font_set_allow_system_fallback(_font_rid, _allow_system_fallback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_allow_system_fallback,
      this._owner,
      _font_rid, _allow_system_fallback
    );
  }
  font_is_allow_system_fallback(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_is_allow_system_fallback,
      this._owner,
			Variant.Type.BOOL,
      _font_rid
    );
  }
  font_set_force_autohinter(_font_rid, _force_autohinter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_force_autohinter,
      this._owner,
      _font_rid, _force_autohinter
    );
  }
  font_is_force_autohinter(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_is_force_autohinter,
      this._owner,
			Variant.Type.BOOL,
      _font_rid
    );
  }
  font_set_hinting(_font_rid, _hinting) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_hinting,
      this._owner,
      _font_rid, _hinting
    );
  }
  font_get_hinting(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_hinting,
      this._owner,
			Variant.INT,
      _font_rid
    );
  }
  font_set_subpixel_positioning(_font_rid, _subpixel_positioning) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_subpixel_positioning,
      this._owner,
      _font_rid, _subpixel_positioning
    );
  }
  font_get_subpixel_positioning(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_subpixel_positioning,
      this._owner,
			Variant.INT,
      _font_rid
    );
  }
  font_set_embolden(_font_rid, _strength) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_embolden,
      this._owner,
      _font_rid, _strength
    );
  }
  font_get_embolden(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_embolden,
      this._owner,
			Variant.Type.FLOAT,
      _font_rid
    );
  }
  font_set_spacing(_font_rid, _spacing, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_spacing,
      this._owner,
      _font_rid, _spacing, _value
    );
  }
  font_get_spacing(_font_rid, _spacing) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_spacing,
      this._owner,
			Variant.Type.INT,
      _font_rid, _spacing
    );
  }
  font_set_baseline_offset(_font_rid, _baseline_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_baseline_offset,
      this._owner,
      _font_rid, _baseline_offset
    );
  }
  font_get_baseline_offset(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_baseline_offset,
      this._owner,
			Variant.Type.FLOAT,
      _font_rid
    );
  }
  font_set_transform(_font_rid, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_transform,
      this._owner,
      _font_rid, _transform
    );
  }
  font_get_transform(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_transform,
      this._owner,
			Variant.Type.TRANSFORM2D
    ,
      _font_rid
    );
  }
  font_set_variation_coordinates(_font_rid, _variation_coordinates) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_variation_coordinates,
      this._owner,
      _font_rid, _variation_coordinates
    );
  }
  font_get_variation_coordinates(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_variation_coordinates,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _font_rid
    );
  }
  font_set_oversampling(_font_rid, _oversampling) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_oversampling,
      this._owner,
      _font_rid, _oversampling
    );
  }
  font_get_oversampling(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_oversampling,
      this._owner,
			Variant.Type.FLOAT,
      _font_rid
    );
  }
  font_get_size_cache_list(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_size_cache_list,
      this._owner,
			Variant.INT,
      _font_rid
    );
  }
  font_clear_size_cache(_font_rid) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_clear_size_cache,
      this._owner,
      _font_rid
    );
  }
  font_remove_size_cache(_font_rid, _size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_remove_size_cache,
      this._owner,
      _font_rid, _size
    );
  }
  font_set_ascent(_font_rid, _size, _ascent) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_ascent,
      this._owner,
      _font_rid, _size, _ascent
    );
  }
  font_get_ascent(_font_rid, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_ascent,
      this._owner,
			Variant.Type.FLOAT,
      _font_rid, _size
    );
  }
  font_set_descent(_font_rid, _size, _descent) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_descent,
      this._owner,
      _font_rid, _size, _descent
    );
  }
  font_get_descent(_font_rid, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_descent,
      this._owner,
			Variant.Type.FLOAT,
      _font_rid, _size
    );
  }
  font_set_underline_position(_font_rid, _size, _underline_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_underline_position,
      this._owner,
      _font_rid, _size, _underline_position
    );
  }
  font_get_underline_position(_font_rid, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_underline_position,
      this._owner,
			Variant.Type.FLOAT,
      _font_rid, _size
    );
  }
  font_set_underline_thickness(_font_rid, _size, _underline_thickness) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_underline_thickness,
      this._owner,
      _font_rid, _size, _underline_thickness
    );
  }
  font_get_underline_thickness(_font_rid, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_underline_thickness,
      this._owner,
			Variant.Type.FLOAT,
      _font_rid, _size
    );
  }
  font_set_scale(_font_rid, _size, _scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_scale,
      this._owner,
      _font_rid, _size, _scale
    );
  }
  font_get_scale(_font_rid, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_scale,
      this._owner,
			Variant.Type.FLOAT,
      _font_rid, _size
    );
  }
  font_get_texture_count(_font_rid, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_texture_count,
      this._owner,
			Variant.Type.INT,
      _font_rid, _size
    );
  }
  font_clear_textures(_font_rid, _size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_clear_textures,
      this._owner,
      _font_rid, _size
    );
  }
  font_remove_texture(_font_rid, _size, _texture_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_remove_texture,
      this._owner,
      _font_rid, _size, _texture_index
    );
  }
  font_set_texture_image(_font_rid, _size, _texture_index, _image) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_texture_image,
      this._owner,
      _font_rid, _size, _texture_index, _image
    );
  }
  font_get_texture_image(_font_rid, _size, _texture_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_texture_image,
      this._owner,
			Variant.INT,
      _font_rid, _size, _texture_index
    );
  }
  font_set_texture_offsets(_font_rid, _size, _texture_index, _offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_texture_offsets,
      this._owner,
      _font_rid, _size, _texture_index, _offset
    );
  }
  font_get_texture_offsets(_font_rid, _size, _texture_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_texture_offsets,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _font_rid, _size, _texture_index
    );
  }
  font_get_glyph_list(_font_rid, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_glyph_list,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _font_rid, _size
    );
  }
  font_clear_glyphs(_font_rid, _size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_clear_glyphs,
      this._owner,
      _font_rid, _size
    );
  }
  font_remove_glyph(_font_rid, _size, _glyph) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_remove_glyph,
      this._owner,
      _font_rid, _size, _glyph
    );
  }
  font_get_glyph_advance(_font_rid, _size, _glyph) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_glyph_advance,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _font_rid, _size, _glyph
    );
  }
  font_set_glyph_advance(_font_rid, _size, _glyph, _advance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_glyph_advance,
      this._owner,
      _font_rid, _size, _glyph, _advance
    );
  }
  font_get_glyph_offset(_font_rid, _size, _glyph) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_glyph_offset,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _font_rid, _size, _glyph
    );
  }
  font_set_glyph_offset(_font_rid, _size, _glyph, _offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_glyph_offset,
      this._owner,
      _font_rid, _size, _glyph, _offset
    );
  }
  font_get_glyph_size(_font_rid, _size, _glyph) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_glyph_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _font_rid, _size, _glyph
    );
  }
  font_set_glyph_size(_font_rid, _size, _glyph, _gl_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_glyph_size,
      this._owner,
      _font_rid, _size, _glyph, _gl_size
    );
  }
  font_get_glyph_uv_rect(_font_rid, _size, _glyph) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_glyph_uv_rect,
      this._owner,
			Variant.Type.RECT2
    ,
      _font_rid, _size, _glyph
    );
  }
  font_set_glyph_uv_rect(_font_rid, _size, _glyph, _uv_rect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_glyph_uv_rect,
      this._owner,
      _font_rid, _size, _glyph, _uv_rect
    );
  }
  font_get_glyph_texture_idx(_font_rid, _size, _glyph) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_glyph_texture_idx,
      this._owner,
			Variant.Type.INT,
      _font_rid, _size, _glyph
    );
  }
  font_set_glyph_texture_idx(_font_rid, _size, _glyph, _texture_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_glyph_texture_idx,
      this._owner,
      _font_rid, _size, _glyph, _texture_idx
    );
  }
  font_get_glyph_texture_rid(_font_rid, _size, _glyph) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_glyph_texture_rid,
      this._owner,
			Variant.Type.RID
    ,
      _font_rid, _size, _glyph
    );
  }
  font_get_glyph_texture_size(_font_rid, _size, _glyph) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_glyph_texture_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _font_rid, _size, _glyph
    );
  }
  font_get_glyph_contours(_font, _size, _index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_glyph_contours,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _font, _size, _index
    );
  }
  font_get_kerning_list(_font_rid, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_kerning_list,
      this._owner,
			Variant.INT,
      _font_rid, _size
    );
  }
  font_clear_kerning_map(_font_rid, _size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_clear_kerning_map,
      this._owner,
      _font_rid, _size
    );
  }
  font_remove_kerning(_font_rid, _size, _glyph_pair) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_remove_kerning,
      this._owner,
      _font_rid, _size, _glyph_pair
    );
  }
  font_set_kerning(_font_rid, _size, _glyph_pair, _kerning) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_kerning,
      this._owner,
      _font_rid, _size, _glyph_pair, _kerning
    );
  }
  font_get_kerning(_font_rid, _size, _glyph_pair) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_kerning,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _font_rid, _size, _glyph_pair
    );
  }
  font_get_glyph_index(_font_rid, _size, _char, _variation_selector) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_glyph_index,
      this._owner,
			Variant.Type.INT,
      _font_rid, _size, _char, _variation_selector
    );
  }
  font_get_char_from_glyph_index(_font_rid, _size, _glyph_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_char_from_glyph_index,
      this._owner,
			Variant.Type.INT,
      _font_rid, _size, _glyph_index
    );
  }
  font_has_char(_font_rid, _char) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_has_char,
      this._owner,
			Variant.Type.BOOL,
      _font_rid, _char
    );
  }
  font_get_supported_chars(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_supported_chars,
      this._owner,
			Variant.Type.STRING
    ,
      _font_rid
    );
  }
  font_render_range(_font_rid, _size, _start, _end) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_render_range,
      this._owner,
      _font_rid, _size, _start, _end
    );
  }
  font_render_glyph(_font_rid, _size, _index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_render_glyph,
      this._owner,
      _font_rid, _size, _index
    );
  }
  font_draw_glyph(_font_rid, _canvas, _size, _pos, _index, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_draw_glyph,
      this._owner,
      _font_rid, _canvas, _size, _pos, _index, _color
    );
  }
  font_draw_glyph_outline(_font_rid, _canvas, _size, _outline_size, _pos, _index, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_draw_glyph_outline,
      this._owner,
      _font_rid, _canvas, _size, _outline_size, _pos, _index, _color
    );
  }
  font_is_language_supported(_font_rid, _language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_is_language_supported,
      this._owner,
			Variant.Type.BOOL,
      _font_rid, _language
    );
  }
  font_set_language_support_override(_font_rid, _language, _supported) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_language_support_override,
      this._owner,
      _font_rid, _language, _supported
    );
  }
  font_get_language_support_override(_font_rid, _language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_language_support_override,
      this._owner,
			Variant.Type.BOOL,
      _font_rid, _language
    );
  }
  font_remove_language_support_override(_font_rid, _language) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_remove_language_support_override,
      this._owner,
      _font_rid, _language
    );
  }
  font_get_language_support_overrides(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_language_support_overrides,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      _font_rid
    );
  }
  font_is_script_supported(_font_rid, _script) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_is_script_supported,
      this._owner,
			Variant.Type.BOOL,
      _font_rid, _script
    );
  }
  font_set_script_support_override(_font_rid, _script, _supported) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_script_support_override,
      this._owner,
      _font_rid, _script, _supported
    );
  }
  font_get_script_support_override(_font_rid, _script) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_script_support_override,
      this._owner,
			Variant.Type.BOOL,
      _font_rid, _script
    );
  }
  font_remove_script_support_override(_font_rid, _script) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_remove_script_support_override,
      this._owner,
      _font_rid, _script
    );
  }
  font_get_script_support_overrides(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_script_support_overrides,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      _font_rid
    );
  }
  font_set_opentype_feature_overrides(_font_rid, _overrides) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_opentype_feature_overrides,
      this._owner,
      _font_rid, _overrides
    );
  }
  font_get_opentype_feature_overrides(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_opentype_feature_overrides,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _font_rid
    );
  }
  font_supported_feature_list(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_supported_feature_list,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _font_rid
    );
  }
  font_supported_variation_list(_font_rid) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_supported_variation_list,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _font_rid
    );
  }
  font_get_global_oversampling() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_font_get_global_oversampling,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  font_set_global_oversampling(_oversampling) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_font_set_global_oversampling,
      this._owner,
      _oversampling
    );
  }
  get_hex_code_box_size(_size, _index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hex_code_box_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _size, _index
    );
  }
  draw_hex_code_box(_canvas, _size, _pos, _index, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_hex_code_box,
      this._owner,
      _canvas, _size, _pos, _index, _color
    );
  }
  create_shaped_text(_direction, _orientation) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_shaped_text,
      this._owner,
			Variant.Type.RID
    ,
      _direction, _orientation
    );
  }
  shaped_text_clear(_rid) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shaped_text_clear,
      this._owner,
      _rid
    );
  }
  shaped_text_set_direction(_shaped, _direction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shaped_text_set_direction,
      this._owner,
      _shaped, _direction
    );
  }
  shaped_text_get_direction(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_direction,
      this._owner,
			Variant.INT,
      _shaped
    );
  }
  shaped_text_get_inferred_direction(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_inferred_direction,
      this._owner,
			Variant.INT,
      _shaped
    );
  }
  shaped_text_set_bidi_override(_shaped, _override) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shaped_text_set_bidi_override,
      this._owner,
      _shaped, _override
    );
  }
  shaped_text_set_custom_punctuation(_shaped, _punct) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shaped_text_set_custom_punctuation,
      this._owner,
      _shaped, _punct
    );
  }
  shaped_text_get_custom_punctuation(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_custom_punctuation,
      this._owner,
			Variant.Type.STRING
    ,
      _shaped
    );
  }
  shaped_text_set_custom_ellipsis(_shaped, _char) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shaped_text_set_custom_ellipsis,
      this._owner,
      _shaped, _char
    );
  }
  shaped_text_get_custom_ellipsis(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_custom_ellipsis,
      this._owner,
			Variant.Type.INT,
      _shaped
    );
  }
  shaped_text_set_orientation(_shaped, _orientation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shaped_text_set_orientation,
      this._owner,
      _shaped, _orientation
    );
  }
  shaped_text_get_orientation(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_orientation,
      this._owner,
			Variant.INT,
      _shaped
    );
  }
  shaped_text_set_preserve_invalid(_shaped, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shaped_text_set_preserve_invalid,
      this._owner,
      _shaped, _enabled
    );
  }
  shaped_text_get_preserve_invalid(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_preserve_invalid,
      this._owner,
			Variant.Type.BOOL,
      _shaped
    );
  }
  shaped_text_set_preserve_control(_shaped, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shaped_text_set_preserve_control,
      this._owner,
      _shaped, _enabled
    );
  }
  shaped_text_get_preserve_control(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_preserve_control,
      this._owner,
			Variant.Type.BOOL,
      _shaped
    );
  }
  shaped_text_set_spacing(_shaped, _spacing, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shaped_text_set_spacing,
      this._owner,
      _shaped, _spacing, _value
    );
  }
  shaped_text_get_spacing(_shaped, _spacing) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_spacing,
      this._owner,
			Variant.Type.INT,
      _shaped, _spacing
    );
  }
  shaped_text_add_string(_shaped, _text, _fonts, _size, _opentype_features, _language, _meta) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_add_string,
      this._owner,
			Variant.Type.BOOL,
      _shaped, _text, _fonts, _size, _opentype_features, _language, _meta
    );
  }
  shaped_text_add_object(_shaped, _key, _size, _inline_align, _length, _baseline) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_add_object,
      this._owner,
			Variant.Type.BOOL,
      _shaped, _key, _size, _inline_align, _length, _baseline
    );
  }
  shaped_text_resize_object(_shaped, _key, _size, _inline_align, _baseline) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_resize_object,
      this._owner,
			Variant.Type.BOOL,
      _shaped, _key, _size, _inline_align, _baseline
    );
  }
  shaped_get_span_count(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_get_span_count,
      this._owner,
			Variant.Type.INT,
      _shaped
    );
  }
  shaped_get_span_meta(_shaped, _index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_get_span_meta,
      this._owner,
			Variant.Type.VARIANT
    ,
      _shaped, _index
    );
  }
  shaped_set_span_update_font(_shaped, _index, _fonts, _size, _opentype_features) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shaped_set_span_update_font,
      this._owner,
      _shaped, _index, _fonts, _size, _opentype_features
    );
  }
  shaped_text_substr(_shaped, _start, _length) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_substr,
      this._owner,
			Variant.Type.RID
    ,
      _shaped, _start, _length
    );
  }
  shaped_text_get_parent(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_parent,
      this._owner,
			Variant.Type.RID
    ,
      _shaped
    );
  }
  shaped_text_fit_to_width(_shaped, _width, _justification_flags) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_fit_to_width,
      this._owner,
			Variant.Type.FLOAT,
      _shaped, _width, _justification_flags
    );
  }
  shaped_text_tab_align(_shaped, _tab_stops) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_tab_align,
      this._owner,
			Variant.Type.FLOAT,
      _shaped, _tab_stops
    );
  }
  shaped_text_shape(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_shape,
      this._owner,
			Variant.Type.BOOL,
      _shaped
    );
  }
  shaped_text_is_ready(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_is_ready,
      this._owner,
			Variant.Type.BOOL,
      _shaped
    );
  }
  shaped_text_has_visible_chars(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_has_visible_chars,
      this._owner,
			Variant.Type.BOOL,
      _shaped
    );
  }
  shaped_text_get_glyphs(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_glyphs,
      this._owner,
			Variant.INT,
      _shaped
    );
  }
  shaped_text_sort_logical(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_sort_logical,
      this._owner,
			Variant.INT,
      _shaped
    );
  }
  shaped_text_get_glyph_count(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_glyph_count,
      this._owner,
			Variant.Type.INT,
      _shaped
    );
  }
  shaped_text_get_range(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_range,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      _shaped
    );
  }
  shaped_text_get_line_breaks_adv(_shaped, _width, _start, _once, _break_flags) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_line_breaks_adv,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _shaped, _width, _start, _once, _break_flags
    );
  }
  shaped_text_get_line_breaks(_shaped, _width, _start, _break_flags) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_line_breaks,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _shaped, _width, _start, _break_flags
    );
  }
  shaped_text_get_word_breaks(_shaped, _grapheme_flags, _skip_grapheme_flags) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_word_breaks,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _shaped, _grapheme_flags, _skip_grapheme_flags
    );
  }
  shaped_text_get_trim_pos(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_trim_pos,
      this._owner,
			Variant.Type.INT,
      _shaped
    );
  }
  shaped_text_get_ellipsis_pos(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_ellipsis_pos,
      this._owner,
			Variant.Type.INT,
      _shaped
    );
  }
  shaped_text_get_ellipsis_glyphs(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_ellipsis_glyphs,
      this._owner,
			Variant.INT,
      _shaped
    );
  }
  shaped_text_get_ellipsis_glyph_count(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_ellipsis_glyph_count,
      this._owner,
			Variant.Type.INT,
      _shaped
    );
  }
  shaped_text_overrun_trim_to_width(_shaped, _width, _overrun_trim_flags) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shaped_text_overrun_trim_to_width,
      this._owner,
      _shaped, _width, _overrun_trim_flags
    );
  }
  shaped_text_get_objects(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_objects,
      this._owner,
			Variant.Type.ARRAY
    ,
      _shaped
    );
  }
  shaped_text_get_object_rect(_shaped, _key) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_object_rect,
      this._owner,
			Variant.Type.RECT2
    ,
      _shaped, _key
    );
  }
  shaped_text_get_object_range(_shaped, _key) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_object_range,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      _shaped, _key
    );
  }
  shaped_text_get_object_glyph(_shaped, _key) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_object_glyph,
      this._owner,
			Variant.Type.INT,
      _shaped, _key
    );
  }
  shaped_text_get_size(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _shaped
    );
  }
  shaped_text_get_ascent(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_ascent,
      this._owner,
			Variant.Type.FLOAT,
      _shaped
    );
  }
  shaped_text_get_descent(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_descent,
      this._owner,
			Variant.Type.FLOAT,
      _shaped
    );
  }
  shaped_text_get_width(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_width,
      this._owner,
			Variant.Type.FLOAT,
      _shaped
    );
  }
  shaped_text_get_underline_position(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_underline_position,
      this._owner,
			Variant.Type.FLOAT,
      _shaped
    );
  }
  shaped_text_get_underline_thickness(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_underline_thickness,
      this._owner,
			Variant.Type.FLOAT,
      _shaped
    );
  }
  shaped_text_get_carets(_shaped, _position) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_carets,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _shaped, _position
    );
  }
  shaped_text_get_selection(_shaped, _start, _end) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_selection,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      _shaped, _start, _end
    );
  }
  shaped_text_hit_test_grapheme(_shaped, _coords) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_hit_test_grapheme,
      this._owner,
			Variant.Type.INT,
      _shaped, _coords
    );
  }
  shaped_text_hit_test_position(_shaped, _coords) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_hit_test_position,
      this._owner,
			Variant.Type.INT,
      _shaped, _coords
    );
  }
  shaped_text_get_grapheme_bounds(_shaped, _pos) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_grapheme_bounds,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _shaped, _pos
    );
  }
  shaped_text_next_grapheme_pos(_shaped, _pos) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_next_grapheme_pos,
      this._owner,
			Variant.Type.INT,
      _shaped, _pos
    );
  }
  shaped_text_prev_grapheme_pos(_shaped, _pos) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_prev_grapheme_pos,
      this._owner,
			Variant.Type.INT,
      _shaped, _pos
    );
  }
  shaped_text_get_character_breaks(_shaped) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_character_breaks,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _shaped
    );
  }
  shaped_text_next_character_pos(_shaped, _pos) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_next_character_pos,
      this._owner,
			Variant.Type.INT,
      _shaped, _pos
    );
  }
  shaped_text_prev_character_pos(_shaped, _pos) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_prev_character_pos,
      this._owner,
			Variant.Type.INT,
      _shaped, _pos
    );
  }
  shaped_text_closest_character_pos(_shaped, _pos) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_closest_character_pos,
      this._owner,
			Variant.Type.INT,
      _shaped, _pos
    );
  }
  shaped_text_draw(_shaped, _canvas, _pos, _clip_l, _clip_r, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shaped_text_draw,
      this._owner,
      _shaped, _canvas, _pos, _clip_l, _clip_r, _color
    );
  }
  shaped_text_draw_outline(_shaped, _canvas, _pos, _clip_l, _clip_r, _outline_size, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shaped_text_draw_outline,
      this._owner,
      _shaped, _canvas, _pos, _clip_l, _clip_r, _outline_size, _color
    );
  }
  shaped_text_get_dominant_direction_in_range(_shaped, _start, _end) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shaped_text_get_dominant_direction_in_range,
      this._owner,
			Variant.INT,
      _shaped, _start, _end
    );
  }
  format_number(_number, _language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_format_number,
      this._owner,
			Variant.Type.STRING
    ,
      _number, _language
    );
  }
  parse_number(_number, _language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_parse_number,
      this._owner,
			Variant.Type.STRING
    ,
      _number, _language
    );
  }
  percent_sign(_language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_percent_sign,
      this._owner,
			Variant.Type.STRING
    ,
      _language
    );
  }
  string_get_word_breaks(_string, _language, _chars_per_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_string_get_word_breaks,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _string, _language, _chars_per_line
    );
  }
  string_get_character_breaks(_string, _language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_string_get_character_breaks,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _string, _language
    );
  }
  is_confusable(_string, _dict) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_confusable,
      this._owner,
			Variant.Type.INT,
      _string, _dict
    );
  }
  spoof_check(_string) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_spoof_check,
      this._owner,
			Variant.Type.BOOL,
      _string
    );
  }
  strip_diacritics(_string) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_strip_diacritics,
      this._owner,
			Variant.Type.STRING
    ,
      _string
    );
  }
  is_valid_identifier(_string) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_valid_identifier,
      this._owner,
			Variant.Type.BOOL,
      _string
    );
  }
  is_valid_letter(_unicode) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_valid_letter,
      this._owner,
			Variant.Type.BOOL,
      _unicode
    );
  }
  string_to_upper(_string, _language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_string_to_upper,
      this._owner,
			Variant.Type.STRING
    ,
      _string, _language
    );
  }
  string_to_lower(_string, _language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_string_to_lower,
      this._owner,
			Variant.Type.STRING
    ,
      _string, _language
    );
  }
  string_to_title(_string, _language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_string_to_title,
      this._owner,
			Variant.Type.STRING
    ,
      _string, _language
    );
  }
  parse_structured_text(_parser_type, _args, _text) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_parse_structured_text,
      this._owner,
			Variant.INT,
      _parser_type, _args, _text
    );
  }
  static FontAntialiasing = {
    FONT_ANTIALIASING_NONE: 0,
    FONT_ANTIALIASING_GRAY: 1,
    FONT_ANTIALIASING_LCD: 2,
  }
  static FontLCDSubpixelLayout = {
    FONT_LCD_SUBPIXEL_LAYOUT_NONE: 0,
    FONT_LCD_SUBPIXEL_LAYOUT_HRGB: 1,
    FONT_LCD_SUBPIXEL_LAYOUT_HBGR: 2,
    FONT_LCD_SUBPIXEL_LAYOUT_VRGB: 3,
    FONT_LCD_SUBPIXEL_LAYOUT_VBGR: 4,
    FONT_LCD_SUBPIXEL_LAYOUT_MAX: 5,
  }
  static Direction = {
    DIRECTION_AUTO: 0,
    DIRECTION_LTR: 1,
    DIRECTION_RTL: 2,
    DIRECTION_INHERITED: 3,
  }
  static Orientation = {
    ORIENTATION_HORIZONTAL: 0,
    ORIENTATION_VERTICAL: 1,
  }
  static JustificationFlag = {
    JUSTIFICATION_NONE: 0,
    JUSTIFICATION_KASHIDA: 1,
    JUSTIFICATION_WORD_BOUND: 2,
    JUSTIFICATION_TRIM_EDGE_SPACES: 4,
    JUSTIFICATION_AFTER_LAST_TAB: 8,
    JUSTIFICATION_CONSTRAIN_ELLIPSIS: 16,
    JUSTIFICATION_SKIP_LAST_LINE: 32,
    JUSTIFICATION_SKIP_LAST_LINE_WITH_VISIBLE_CHARS: 64,
    JUSTIFICATION_DO_NOT_SKIP_SINGLE_LINE: 128,
  }
  static AutowrapMode = {
    AUTOWRAP_OFF: 0,
    AUTOWRAP_ARBITRARY: 1,
    AUTOWRAP_WORD: 2,
    AUTOWRAP_WORD_SMART: 3,
  }
  static LineBreakFlag = {
    BREAK_NONE: 0,
    BREAK_MANDATORY: 1,
    BREAK_WORD_BOUND: 2,
    BREAK_GRAPHEME_BOUND: 4,
    BREAK_ADAPTIVE: 8,
    BREAK_TRIM_EDGE_SPACES: 16,
    BREAK_TRIM_INDENT: 32,
  }
  static VisibleCharactersBehavior = {
    VC_CHARS_BEFORE_SHAPING: 0,
    VC_CHARS_AFTER_SHAPING: 1,
    VC_GLYPHS_AUTO: 2,
    VC_GLYPHS_LTR: 3,
    VC_GLYPHS_RTL: 4,
  }
  static OverrunBehavior = {
    OVERRUN_NO_TRIMMING: 0,
    OVERRUN_TRIM_CHAR: 1,
    OVERRUN_TRIM_WORD: 2,
    OVERRUN_TRIM_ELLIPSIS: 3,
    OVERRUN_TRIM_WORD_ELLIPSIS: 4,
  }
  static TextOverrunFlag = {
    OVERRUN_NO_TRIM: 0,
    OVERRUN_TRIM: 1,
    OVERRUN_TRIM_WORD_ONLY: 2,
    OVERRUN_ADD_ELLIPSIS: 4,
    OVERRUN_ENFORCE_ELLIPSIS: 8,
    OVERRUN_JUSTIFICATION_AWARE: 16,
  }
  static GraphemeFlag = {
    GRAPHEME_IS_VALID: 1,
    GRAPHEME_IS_RTL: 2,
    GRAPHEME_IS_VIRTUAL: 4,
    GRAPHEME_IS_SPACE: 8,
    GRAPHEME_IS_BREAK_HARD: 16,
    GRAPHEME_IS_BREAK_SOFT: 32,
    GRAPHEME_IS_TAB: 64,
    GRAPHEME_IS_ELONGATION: 128,
    GRAPHEME_IS_PUNCTUATION: 256,
    GRAPHEME_IS_UNDERSCORE: 512,
    GRAPHEME_IS_CONNECTED: 1024,
    GRAPHEME_IS_SAFE_TO_INSERT_TATWEEL: 2048,
    GRAPHEME_IS_EMBEDDED_OBJECT: 4096,
    GRAPHEME_IS_SOFT_HYPHEN: 8192,
  }
  static Hinting = {
    HINTING_NONE: 0,
    HINTING_LIGHT: 1,
    HINTING_NORMAL: 2,
  }
  static SubpixelPositioning = {
    SUBPIXEL_POSITIONING_DISABLED: 0,
    SUBPIXEL_POSITIONING_AUTO: 1,
    SUBPIXEL_POSITIONING_ONE_HALF: 2,
    SUBPIXEL_POSITIONING_ONE_QUARTER: 3,
    SUBPIXEL_POSITIONING_ONE_HALF_MAX_SIZE: 20,
    SUBPIXEL_POSITIONING_ONE_QUARTER_MAX_SIZE: 16,
  }
  static Feature = {
    FEATURE_SIMPLE_LAYOUT: 1,
    FEATURE_BIDI_LAYOUT: 2,
    FEATURE_VERTICAL_LAYOUT: 4,
    FEATURE_SHAPING: 8,
    FEATURE_KASHIDA_JUSTIFICATION: 16,
    FEATURE_BREAK_ITERATORS: 32,
    FEATURE_FONT_BITMAP: 64,
    FEATURE_FONT_DYNAMIC: 128,
    FEATURE_FONT_MSDF: 256,
    FEATURE_FONT_SYSTEM: 512,
    FEATURE_FONT_VARIABLE: 1024,
    FEATURE_CONTEXT_SENSITIVE_CASE_CONVERSION: 2048,
    FEATURE_USE_SUPPORT_DATA: 4096,
    FEATURE_UNICODE_IDENTIFIERS: 8192,
    FEATURE_UNICODE_SECURITY: 16384,
  }
  static ContourPointTag = {
    CONTOUR_CURVE_TAG_ON: 1,
    CONTOUR_CURVE_TAG_OFF_CONIC: 0,
    CONTOUR_CURVE_TAG_OFF_CUBIC: 2,
  }
  static SpacingType = {
    SPACING_GLYPH: 0,
    SPACING_SPACE: 1,
    SPACING_TOP: 2,
    SPACING_BOTTOM: 3,
    SPACING_MAX: 4,
  }
  static FontStyle = {
    FONT_BOLD: 1,
    FONT_ITALIC: 2,
    FONT_FIXED_WIDTH: 4,
  }
  static StructuredTextParser = {
    STRUCTURED_TEXT_DEFAULT: 0,
    STRUCTURED_TEXT_URI: 1,
    STRUCTURED_TEXT_FILE: 2,
    STRUCTURED_TEXT_EMAIL: 3,
    STRUCTURED_TEXT_LIST: 4,
    STRUCTURED_TEXT_GDSCRIPT: 5,
    STRUCTURED_TEXT_CUSTOM: 6,
  }
  static FixedSizeScaleMode = {
    FIXED_SIZE_SCALE_DISABLE: 0,
    FIXED_SIZE_SCALE_INTEGER_ONLY: 1,
    FIXED_SIZE_SCALE_ENABLED: 2,
  }
}