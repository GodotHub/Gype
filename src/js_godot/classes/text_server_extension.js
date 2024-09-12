import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { TextServer } from '@js_godot/classes/text_server'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
}
export class TextServerExtension extends TextServer{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("TextServerExtension");
    } else {
      super(godot_object);
    }
  }

  
  
  _has_feature(_feature) {
  }
  _get_name() {
  }
  _get_features() {
  }
  _free_rid(_rid) {
  }
  _has(_rid) {
  }
  _load_support_data(_filename) {
  }
  _get_support_data_filename() {
  }
  _get_support_data_info() {
  }
  _save_support_data(_filename) {
  }
  _is_locale_right_to_left(_locale) {
  }
  _name_to_tag(_name) {
  }
  _tag_to_name(_tag) {
  }
  _create_font() {
  }
  _create_font_linked_variation(_font_rid) {
  }
  _font_set_data(_font_rid, _data) {
  }
  _font_set_data_ptr(_font_rid, _data_ptr, _data_size) {
  }
  _font_set_face_index(_font_rid, _face_index) {
  }
  _font_get_face_index(_font_rid) {
  }
  _font_get_face_count(_font_rid) {
  }
  _font_set_style(_font_rid, _style) {
  }
  _font_get_style(_font_rid) {
  }
  _font_set_name(_font_rid, _name) {
  }
  _font_get_name(_font_rid) {
  }
  _font_get_ot_name_strings(_font_rid) {
  }
  _font_set_style_name(_font_rid, _name_style) {
  }
  _font_get_style_name(_font_rid) {
  }
  _font_set_weight(_font_rid, _weight) {
  }
  _font_get_weight(_font_rid) {
  }
  _font_set_stretch(_font_rid, _stretch) {
  }
  _font_get_stretch(_font_rid) {
  }
  _font_set_antialiasing(_font_rid, _antialiasing) {
  }
  _font_get_antialiasing(_font_rid) {
  }
  _font_set_disable_embedded_bitmaps(_font_rid, _disable_embedded_bitmaps) {
  }
  _font_get_disable_embedded_bitmaps(_font_rid) {
  }
  _font_set_generate_mipmaps(_font_rid, _generate_mipmaps) {
  }
  _font_get_generate_mipmaps(_font_rid) {
  }
  _font_set_multichannel_signed_distance_field(_font_rid, _msdf) {
  }
  _font_is_multichannel_signed_distance_field(_font_rid) {
  }
  _font_set_msdf_pixel_range(_font_rid, _msdf_pixel_range) {
  }
  _font_get_msdf_pixel_range(_font_rid) {
  }
  _font_set_msdf_size(_font_rid, _msdf_size) {
  }
  _font_get_msdf_size(_font_rid) {
  }
  _font_set_fixed_size(_font_rid, _fixed_size) {
  }
  _font_get_fixed_size(_font_rid) {
  }
  _font_set_fixed_size_scale_mode(_font_rid, _fixed_size_scale_mode) {
  }
  _font_get_fixed_size_scale_mode(_font_rid) {
  }
  _font_set_allow_system_fallback(_font_rid, _allow_system_fallback) {
  }
  _font_is_allow_system_fallback(_font_rid) {
  }
  _font_set_force_autohinter(_font_rid, _force_autohinter) {
  }
  _font_is_force_autohinter(_font_rid) {
  }
  _font_set_hinting(_font_rid, _hinting) {
  }
  _font_get_hinting(_font_rid) {
  }
  _font_set_subpixel_positioning(_font_rid, _subpixel_positioning) {
  }
  _font_get_subpixel_positioning(_font_rid) {
  }
  _font_set_embolden(_font_rid, _strength) {
  }
  _font_get_embolden(_font_rid) {
  }
  _font_set_spacing(_font_rid, _spacing, _value) {
  }
  _font_get_spacing(_font_rid, _spacing) {
  }
  _font_set_baseline_offset(_font_rid, _baseline_offset) {
  }
  _font_get_baseline_offset(_font_rid) {
  }
  _font_set_transform(_font_rid, _transform) {
  }
  _font_get_transform(_font_rid) {
  }
  _font_set_variation_coordinates(_font_rid, _variation_coordinates) {
  }
  _font_get_variation_coordinates(_font_rid) {
  }
  _font_set_oversampling(_font_rid, _oversampling) {
  }
  _font_get_oversampling(_font_rid) {
  }
  _font_get_size_cache_list(_font_rid) {
  }
  _font_clear_size_cache(_font_rid) {
  }
  _font_remove_size_cache(_font_rid, _size) {
  }
  _font_set_ascent(_font_rid, _size, _ascent) {
  }
  _font_get_ascent(_font_rid, _size) {
  }
  _font_set_descent(_font_rid, _size, _descent) {
  }
  _font_get_descent(_font_rid, _size) {
  }
  _font_set_underline_position(_font_rid, _size, _underline_position) {
  }
  _font_get_underline_position(_font_rid, _size) {
  }
  _font_set_underline_thickness(_font_rid, _size, _underline_thickness) {
  }
  _font_get_underline_thickness(_font_rid, _size) {
  }
  _font_set_scale(_font_rid, _size, _scale) {
  }
  _font_get_scale(_font_rid, _size) {
  }
  _font_get_texture_count(_font_rid, _size) {
  }
  _font_clear_textures(_font_rid, _size) {
  }
  _font_remove_texture(_font_rid, _size, _texture_index) {
  }
  _font_set_texture_image(_font_rid, _size, _texture_index, _image) {
  }
  _font_get_texture_image(_font_rid, _size, _texture_index) {
  }
  _font_set_texture_offsets(_font_rid, _size, _texture_index, _offset) {
  }
  _font_get_texture_offsets(_font_rid, _size, _texture_index) {
  }
  _font_get_glyph_list(_font_rid, _size) {
  }
  _font_clear_glyphs(_font_rid, _size) {
  }
  _font_remove_glyph(_font_rid, _size, _glyph) {
  }
  _font_get_glyph_advance(_font_rid, _size, _glyph) {
  }
  _font_set_glyph_advance(_font_rid, _size, _glyph, _advance) {
  }
  _font_get_glyph_offset(_font_rid, _size, _glyph) {
  }
  _font_set_glyph_offset(_font_rid, _size, _glyph, _offset) {
  }
  _font_get_glyph_size(_font_rid, _size, _glyph) {
  }
  _font_set_glyph_size(_font_rid, _size, _glyph, _gl_size) {
  }
  _font_get_glyph_uv_rect(_font_rid, _size, _glyph) {
  }
  _font_set_glyph_uv_rect(_font_rid, _size, _glyph, _uv_rect) {
  }
  _font_get_glyph_texture_idx(_font_rid, _size, _glyph) {
  }
  _font_set_glyph_texture_idx(_font_rid, _size, _glyph, _texture_idx) {
  }
  _font_get_glyph_texture_rid(_font_rid, _size, _glyph) {
  }
  _font_get_glyph_texture_size(_font_rid, _size, _glyph) {
  }
  _font_get_glyph_contours(_font_rid, _size, _index) {
  }
  _font_get_kerning_list(_font_rid, _size) {
  }
  _font_clear_kerning_map(_font_rid, _size) {
  }
  _font_remove_kerning(_font_rid, _size, _glyph_pair) {
  }
  _font_set_kerning(_font_rid, _size, _glyph_pair, _kerning) {
  }
  _font_get_kerning(_font_rid, _size, _glyph_pair) {
  }
  _font_get_glyph_index(_font_rid, _size, _char, _variation_selector) {
  }
  _font_get_char_from_glyph_index(_font_rid, _size, _glyph_index) {
  }
  _font_has_char(_font_rid, _char) {
  }
  _font_get_supported_chars(_font_rid) {
  }
  _font_render_range(_font_rid, _size, _start, _end) {
  }
  _font_render_glyph(_font_rid, _size, _index) {
  }
  _font_draw_glyph(_font_rid, _canvas, _size, _pos, _index, _color) {
  }
  _font_draw_glyph_outline(_font_rid, _canvas, _size, _outline_size, _pos, _index, _color) {
  }
  _font_is_language_supported(_font_rid, _language) {
  }
  _font_set_language_support_override(_font_rid, _language, _supported) {
  }
  _font_get_language_support_override(_font_rid, _language) {
  }
  _font_remove_language_support_override(_font_rid, _language) {
  }
  _font_get_language_support_overrides(_font_rid) {
  }
  _font_is_script_supported(_font_rid, _script) {
  }
  _font_set_script_support_override(_font_rid, _script, _supported) {
  }
  _font_get_script_support_override(_font_rid, _script) {
  }
  _font_remove_script_support_override(_font_rid, _script) {
  }
  _font_get_script_support_overrides(_font_rid) {
  }
  _font_set_opentype_feature_overrides(_font_rid, _overrides) {
  }
  _font_get_opentype_feature_overrides(_font_rid) {
  }
  _font_supported_feature_list(_font_rid) {
  }
  _font_supported_variation_list(_font_rid) {
  }
  _font_get_global_oversampling() {
  }
  _font_set_global_oversampling(_oversampling) {
  }
  _get_hex_code_box_size(_size, _index) {
  }
  _draw_hex_code_box(_canvas, _size, _pos, _index, _color) {
  }
  _create_shaped_text(_direction, _orientation) {
  }
  _shaped_text_clear(_shaped) {
  }
  _shaped_text_set_direction(_shaped, _direction) {
  }
  _shaped_text_get_direction(_shaped) {
  }
  _shaped_text_get_inferred_direction(_shaped) {
  }
  _shaped_text_set_bidi_override(_shaped, _override) {
  }
  _shaped_text_set_custom_punctuation(_shaped, _punct) {
  }
  _shaped_text_get_custom_punctuation(_shaped) {
  }
  _shaped_text_set_custom_ellipsis(_shaped, _char) {
  }
  _shaped_text_get_custom_ellipsis(_shaped) {
  }
  _shaped_text_set_orientation(_shaped, _orientation) {
  }
  _shaped_text_get_orientation(_shaped) {
  }
  _shaped_text_set_preserve_invalid(_shaped, _enabled) {
  }
  _shaped_text_get_preserve_invalid(_shaped) {
  }
  _shaped_text_set_preserve_control(_shaped, _enabled) {
  }
  _shaped_text_get_preserve_control(_shaped) {
  }
  _shaped_text_set_spacing(_shaped, _spacing, _value) {
  }
  _shaped_text_get_spacing(_shaped, _spacing) {
  }
  _shaped_text_add_string(_shaped, _text, _fonts, _size, _opentype_features, _language, _meta) {
  }
  _shaped_text_add_object(_shaped, _key, _size, _inline_align, _length, _baseline) {
  }
  _shaped_text_resize_object(_shaped, _key, _size, _inline_align, _baseline) {
  }
  _shaped_get_span_count(_shaped) {
  }
  _shaped_get_span_meta(_shaped, _index) {
  }
  _shaped_set_span_update_font(_shaped, _index, _fonts, _size, _opentype_features) {
  }
  _shaped_text_substr(_shaped, _start, _length) {
  }
  _shaped_text_get_parent(_shaped) {
  }
  _shaped_text_fit_to_width(_shaped, _width, _justification_flags) {
  }
  _shaped_text_tab_align(_shaped, _tab_stops) {
  }
  _shaped_text_shape(_shaped) {
  }
  _shaped_text_update_breaks(_shaped) {
  }
  _shaped_text_update_justification_ops(_shaped) {
  }
  _shaped_text_is_ready(_shaped) {
  }
  _shaped_text_get_glyphs(_shaped) {
  }
  _shaped_text_sort_logical(_shaped) {
  }
  _shaped_text_get_glyph_count(_shaped) {
  }
  _shaped_text_get_range(_shaped) {
  }
  _shaped_text_get_line_breaks_adv(_shaped, _width, _start, _once, _break_flags) {
  }
  _shaped_text_get_line_breaks(_shaped, _width, _start, _break_flags) {
  }
  _shaped_text_get_word_breaks(_shaped, _grapheme_flags, _skip_grapheme_flags) {
  }
  _shaped_text_get_trim_pos(_shaped) {
  }
  _shaped_text_get_ellipsis_pos(_shaped) {
  }
  _shaped_text_get_ellipsis_glyph_count(_shaped) {
  }
  _shaped_text_get_ellipsis_glyphs(_shaped) {
  }
  _shaped_text_overrun_trim_to_width(_shaped, _width, _trim_flags) {
  }
  _shaped_text_get_objects(_shaped) {
  }
  _shaped_text_get_object_rect(_shaped, _key) {
  }
  _shaped_text_get_object_range(_shaped, _key) {
  }
  _shaped_text_get_object_glyph(_shaped, _key) {
  }
  _shaped_text_get_size(_shaped) {
  }
  _shaped_text_get_ascent(_shaped) {
  }
  _shaped_text_get_descent(_shaped) {
  }
  _shaped_text_get_width(_shaped) {
  }
  _shaped_text_get_underline_position(_shaped) {
  }
  _shaped_text_get_underline_thickness(_shaped) {
  }
  _shaped_text_get_dominant_direction_in_range(_shaped, _start, _end) {
  }
  _shaped_text_get_carets(_shaped, _position, _caret) {
  }
  _shaped_text_get_selection(_shaped, _start, _end) {
  }
  _shaped_text_hit_test_grapheme(_shaped, _coord) {
  }
  _shaped_text_hit_test_position(_shaped, _coord) {
  }
  _shaped_text_draw(_shaped, _canvas, _pos, _clip_l, _clip_r, _color) {
  }
  _shaped_text_draw_outline(_shaped, _canvas, _pos, _clip_l, _clip_r, _outline_size, _color) {
  }
  _shaped_text_get_grapheme_bounds(_shaped, _pos) {
  }
  _shaped_text_next_grapheme_pos(_shaped, _pos) {
  }
  _shaped_text_prev_grapheme_pos(_shaped, _pos) {
  }
  _shaped_text_get_character_breaks(_shaped) {
  }
  _shaped_text_next_character_pos(_shaped, _pos) {
  }
  _shaped_text_prev_character_pos(_shaped, _pos) {
  }
  _shaped_text_closest_character_pos(_shaped, _pos) {
  }
  _format_number(_number, _language) {
  }
  _parse_number(_number, _language) {
  }
  _percent_sign(_language) {
  }
  _strip_diacritics(_string) {
  }
  _is_valid_identifier(_string) {
  }
  _is_valid_letter(_unicode) {
  }
  _string_get_word_breaks(_string, _language, _chars_per_line) {
  }
  _string_get_character_breaks(_string, _language) {
  }
  _is_confusable(_string, _dict) {
  }
  _spoof_check(_string) {
  }
  _string_to_upper(_string, _language) {
  }
  _string_to_lower(_string, _language) {
  }
  _string_to_title(_string, _language) {
  }
  _parse_structured_text(_parser_type, _args, _text) {
  }
  _cleanup() {
  }
  

}