/**************************************************************************/
/*  text_server_extension.cpp                                             */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#include <godot_cpp/classes/text_server_extension.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>

namespace godot {

bool TextServerExtension::_has_feature(TextServer::Feature feature) const {
	return false;
}

String TextServerExtension::_get_name() const {
	return String();
}

int64_t TextServerExtension::_get_features() const {
	return 0;
}

void TextServerExtension::_free_rid(const RID &rid) {}

bool TextServerExtension::_has(const RID &rid) {
	return false;
}

bool TextServerExtension::_load_support_data(const String &filename) {
	return false;
}

String TextServerExtension::_get_support_data_filename() const {
	return String();
}

String TextServerExtension::_get_support_data_info() const {
	return String();
}

bool TextServerExtension::_save_support_data(const String &filename) const {
	return false;
}

bool TextServerExtension::_is_locale_right_to_left(const String &locale) const {
	return false;
}

int64_t TextServerExtension::_name_to_tag(const String &name) const {
	return 0;
}

String TextServerExtension::_tag_to_name(int64_t tag) const {
	return String();
}

RID TextServerExtension::_create_font() {
	return RID();
}

RID TextServerExtension::_create_font_linked_variation(const RID &font_rid) {
	return RID();
}

void TextServerExtension::_font_set_data(const RID &font_rid, const PackedByteArray &data) {}

void TextServerExtension::_font_set_data_ptr(const RID &font_rid, const uint8_t *data_ptr, int64_t data_size) {}

void TextServerExtension::_font_set_face_index(const RID &font_rid, int64_t face_index) {}

int64_t TextServerExtension::_font_get_face_index(const RID &font_rid) const {
	return 0;
}

int64_t TextServerExtension::_font_get_face_count(const RID &font_rid) const {
	return 0;
}

void TextServerExtension::_font_set_style(const RID &font_rid, BitField<TextServer::FontStyle> style) {}

BitField<TextServer::FontStyle> TextServerExtension::_font_get_style(const RID &font_rid) const {
	return BitField<TextServer::FontStyle>(0);
}

void TextServerExtension::_font_set_name(const RID &font_rid, const String &name) {}

String TextServerExtension::_font_get_name(const RID &font_rid) const {
	return String();
}

Dictionary TextServerExtension::_font_get_ot_name_strings(const RID &font_rid) const {
	return Dictionary();
}

void TextServerExtension::_font_set_style_name(const RID &font_rid, const String &name_style) {}

String TextServerExtension::_font_get_style_name(const RID &font_rid) const {
	return String();
}

void TextServerExtension::_font_set_weight(const RID &font_rid, int64_t weight) {}

int64_t TextServerExtension::_font_get_weight(const RID &font_rid) const {
	return 0;
}

void TextServerExtension::_font_set_stretch(const RID &font_rid, int64_t stretch) {}

int64_t TextServerExtension::_font_get_stretch(const RID &font_rid) const {
	return 0;
}

void TextServerExtension::_font_set_antialiasing(const RID &font_rid, TextServer::FontAntialiasing antialiasing) {}

TextServer::FontAntialiasing TextServerExtension::_font_get_antialiasing(const RID &font_rid) const {
	return TextServer::FontAntialiasing(0);
}

void TextServerExtension::_font_set_disable_embedded_bitmaps(const RID &font_rid, bool disable_embedded_bitmaps) {}

bool TextServerExtension::_font_get_disable_embedded_bitmaps(const RID &font_rid) const {
	return false;
}

void TextServerExtension::_font_set_generate_mipmaps(const RID &font_rid, bool generate_mipmaps) {}

bool TextServerExtension::_font_get_generate_mipmaps(const RID &font_rid) const {
	return false;
}

void TextServerExtension::_font_set_multichannel_signed_distance_field(const RID &font_rid, bool msdf) {}

bool TextServerExtension::_font_is_multichannel_signed_distance_field(const RID &font_rid) const {
	return false;
}

void TextServerExtension::_font_set_msdf_pixel_range(const RID &font_rid, int64_t msdf_pixel_range) {}

int64_t TextServerExtension::_font_get_msdf_pixel_range(const RID &font_rid) const {
	return 0;
}

void TextServerExtension::_font_set_msdf_size(const RID &font_rid, int64_t msdf_size) {}

int64_t TextServerExtension::_font_get_msdf_size(const RID &font_rid) const {
	return 0;
}

void TextServerExtension::_font_set_fixed_size(const RID &font_rid, int64_t fixed_size) {}

int64_t TextServerExtension::_font_get_fixed_size(const RID &font_rid) const {
	return 0;
}

void TextServerExtension::_font_set_fixed_size_scale_mode(const RID &font_rid, TextServer::FixedSizeScaleMode fixed_size_scale_mode) {}

TextServer::FixedSizeScaleMode TextServerExtension::_font_get_fixed_size_scale_mode(const RID &font_rid) const {
	return TextServer::FixedSizeScaleMode(0);
}

void TextServerExtension::_font_set_allow_system_fallback(const RID &font_rid, bool allow_system_fallback) {}

bool TextServerExtension::_font_is_allow_system_fallback(const RID &font_rid) const {
	return false;
}

void TextServerExtension::_font_set_force_autohinter(const RID &font_rid, bool force_autohinter) {}

bool TextServerExtension::_font_is_force_autohinter(const RID &font_rid) const {
	return false;
}

void TextServerExtension::_font_set_hinting(const RID &font_rid, TextServer::Hinting hinting) {}

TextServer::Hinting TextServerExtension::_font_get_hinting(const RID &font_rid) const {
	return TextServer::Hinting(0);
}

void TextServerExtension::_font_set_subpixel_positioning(const RID &font_rid, TextServer::SubpixelPositioning subpixel_positioning) {}

TextServer::SubpixelPositioning TextServerExtension::_font_get_subpixel_positioning(const RID &font_rid) const {
	return TextServer::SubpixelPositioning(0);
}

void TextServerExtension::_font_set_embolden(const RID &font_rid, double strength) {}

double TextServerExtension::_font_get_embolden(const RID &font_rid) const {
	return 0.0;
}

void TextServerExtension::_font_set_spacing(const RID &font_rid, TextServer::SpacingType spacing, int64_t value) {}

int64_t TextServerExtension::_font_get_spacing(const RID &font_rid, TextServer::SpacingType spacing) const {
	return 0;
}

void TextServerExtension::_font_set_baseline_offset(const RID &font_rid, double baseline_offset) {}

double TextServerExtension::_font_get_baseline_offset(const RID &font_rid) const {
	return 0.0;
}

void TextServerExtension::_font_set_transform(const RID &font_rid, const Transform2D &transform) {}

Transform2D TextServerExtension::_font_get_transform(const RID &font_rid) const {
	return Transform2D();
}

void TextServerExtension::_font_set_variation_coordinates(const RID &font_rid, const Dictionary &variation_coordinates) {}

Dictionary TextServerExtension::_font_get_variation_coordinates(const RID &font_rid) const {
	return Dictionary();
}

void TextServerExtension::_font_set_oversampling(const RID &font_rid, double oversampling) {}

double TextServerExtension::_font_get_oversampling(const RID &font_rid) const {
	return 0.0;
}

TypedArray<Vector2i> TextServerExtension::_font_get_size_cache_list(const RID &font_rid) const {
	return TypedArray<Vector2i>();
}

void TextServerExtension::_font_clear_size_cache(const RID &font_rid) {}

void TextServerExtension::_font_remove_size_cache(const RID &font_rid, const Vector2i &size) {}

void TextServerExtension::_font_set_ascent(const RID &font_rid, int64_t size, double ascent) {}

double TextServerExtension::_font_get_ascent(const RID &font_rid, int64_t size) const {
	return 0.0;
}

void TextServerExtension::_font_set_descent(const RID &font_rid, int64_t size, double descent) {}

double TextServerExtension::_font_get_descent(const RID &font_rid, int64_t size) const {
	return 0.0;
}

void TextServerExtension::_font_set_underline_position(const RID &font_rid, int64_t size, double underline_position) {}

double TextServerExtension::_font_get_underline_position(const RID &font_rid, int64_t size) const {
	return 0.0;
}

void TextServerExtension::_font_set_underline_thickness(const RID &font_rid, int64_t size, double underline_thickness) {}

double TextServerExtension::_font_get_underline_thickness(const RID &font_rid, int64_t size) const {
	return 0.0;
}

void TextServerExtension::_font_set_scale(const RID &font_rid, int64_t size, double scale) {}

double TextServerExtension::_font_get_scale(const RID &font_rid, int64_t size) const {
	return 0.0;
}

int64_t TextServerExtension::_font_get_texture_count(const RID &font_rid, const Vector2i &size) const {
	return 0;
}

void TextServerExtension::_font_clear_textures(const RID &font_rid, const Vector2i &size) {}

void TextServerExtension::_font_remove_texture(const RID &font_rid, const Vector2i &size, int64_t texture_index) {}

void TextServerExtension::_font_set_texture_image(const RID &font_rid, const Vector2i &size, int64_t texture_index, const Ref<Image> &image) {}

Ref<Image> TextServerExtension::_font_get_texture_image(const RID &font_rid, const Vector2i &size, int64_t texture_index) const {
	return Ref<Image>();
}

void TextServerExtension::_font_set_texture_offsets(const RID &font_rid, const Vector2i &size, int64_t texture_index, const PackedInt32Array &offset) {}

PackedInt32Array TextServerExtension::_font_get_texture_offsets(const RID &font_rid, const Vector2i &size, int64_t texture_index) const {
	return PackedInt32Array();
}

PackedInt32Array TextServerExtension::_font_get_glyph_list(const RID &font_rid, const Vector2i &size) const {
	return PackedInt32Array();
}

void TextServerExtension::_font_clear_glyphs(const RID &font_rid, const Vector2i &size) {}

void TextServerExtension::_font_remove_glyph(const RID &font_rid, const Vector2i &size, int64_t glyph) {}

Vector2 TextServerExtension::_font_get_glyph_advance(const RID &font_rid, int64_t size, int64_t glyph) const {
	return Vector2();
}

void TextServerExtension::_font_set_glyph_advance(const RID &font_rid, int64_t size, int64_t glyph, const Vector2 &advance) {}

Vector2 TextServerExtension::_font_get_glyph_offset(const RID &font_rid, const Vector2i &size, int64_t glyph) const {
	return Vector2();
}

void TextServerExtension::_font_set_glyph_offset(const RID &font_rid, const Vector2i &size, int64_t glyph, const Vector2 &offset) {}

Vector2 TextServerExtension::_font_get_glyph_size(const RID &font_rid, const Vector2i &size, int64_t glyph) const {
	return Vector2();
}

void TextServerExtension::_font_set_glyph_size(const RID &font_rid, const Vector2i &size, int64_t glyph, const Vector2 &gl_size) {}

Rect2 TextServerExtension::_font_get_glyph_uv_rect(const RID &font_rid, const Vector2i &size, int64_t glyph) const {
	return Rect2();
}

void TextServerExtension::_font_set_glyph_uv_rect(const RID &font_rid, const Vector2i &size, int64_t glyph, const Rect2 &uv_rect) {}

int64_t TextServerExtension::_font_get_glyph_texture_idx(const RID &font_rid, const Vector2i &size, int64_t glyph) const {
	return 0;
}

void TextServerExtension::_font_set_glyph_texture_idx(const RID &font_rid, const Vector2i &size, int64_t glyph, int64_t texture_idx) {}

RID TextServerExtension::_font_get_glyph_texture_rid(const RID &font_rid, const Vector2i &size, int64_t glyph) const {
	return RID();
}

Vector2 TextServerExtension::_font_get_glyph_texture_size(const RID &font_rid, const Vector2i &size, int64_t glyph) const {
	return Vector2();
}

Dictionary TextServerExtension::_font_get_glyph_contours(const RID &font_rid, int64_t size, int64_t index) const {
	return Dictionary();
}

TypedArray<Vector2i> TextServerExtension::_font_get_kerning_list(const RID &font_rid, int64_t size) const {
	return TypedArray<Vector2i>();
}

void TextServerExtension::_font_clear_kerning_map(const RID &font_rid, int64_t size) {}

void TextServerExtension::_font_remove_kerning(const RID &font_rid, int64_t size, const Vector2i &glyph_pair) {}

void TextServerExtension::_font_set_kerning(const RID &font_rid, int64_t size, const Vector2i &glyph_pair, const Vector2 &kerning) {}

Vector2 TextServerExtension::_font_get_kerning(const RID &font_rid, int64_t size, const Vector2i &glyph_pair) const {
	return Vector2();
}

int64_t TextServerExtension::_font_get_glyph_index(const RID &font_rid, int64_t size, int64_t _char, int64_t variation_selector) const {
	return 0;
}

int64_t TextServerExtension::_font_get_char_from_glyph_index(const RID &font_rid, int64_t size, int64_t glyph_index) const {
	return 0;
}

bool TextServerExtension::_font_has_char(const RID &font_rid, int64_t _char) const {
	return false;
}

String TextServerExtension::_font_get_supported_chars(const RID &font_rid) const {
	return String();
}

void TextServerExtension::_font_render_range(const RID &font_rid, const Vector2i &size, int64_t start, int64_t end) {}

void TextServerExtension::_font_render_glyph(const RID &font_rid, const Vector2i &size, int64_t index) {}

void TextServerExtension::_font_draw_glyph(const RID &font_rid, const RID &canvas, int64_t size, const Vector2 &pos, int64_t index, const Color &color) const {}

void TextServerExtension::_font_draw_glyph_outline(const RID &font_rid, const RID &canvas, int64_t size, int64_t outline_size, const Vector2 &pos, int64_t index, const Color &color) const {}

bool TextServerExtension::_font_is_language_supported(const RID &font_rid, const String &language) const {
	return false;
}

void TextServerExtension::_font_set_language_support_override(const RID &font_rid, const String &language, bool supported) {}

bool TextServerExtension::_font_get_language_support_override(const RID &font_rid, const String &language) {
	return false;
}

void TextServerExtension::_font_remove_language_support_override(const RID &font_rid, const String &language) {}

PackedStringArray TextServerExtension::_font_get_language_support_overrides(const RID &font_rid) {
	return PackedStringArray();
}

bool TextServerExtension::_font_is_script_supported(const RID &font_rid, const String &script) const {
	return false;
}

void TextServerExtension::_font_set_script_support_override(const RID &font_rid, const String &script, bool supported) {}

bool TextServerExtension::_font_get_script_support_override(const RID &font_rid, const String &script) {
	return false;
}

void TextServerExtension::_font_remove_script_support_override(const RID &font_rid, const String &script) {}

PackedStringArray TextServerExtension::_font_get_script_support_overrides(const RID &font_rid) {
	return PackedStringArray();
}

void TextServerExtension::_font_set_opentype_feature_overrides(const RID &font_rid, const Dictionary &overrides) {}

Dictionary TextServerExtension::_font_get_opentype_feature_overrides(const RID &font_rid) const {
	return Dictionary();
}

Dictionary TextServerExtension::_font_supported_feature_list(const RID &font_rid) const {
	return Dictionary();
}

Dictionary TextServerExtension::_font_supported_variation_list(const RID &font_rid) const {
	return Dictionary();
}

double TextServerExtension::_font_get_global_oversampling() const {
	return 0.0;
}

void TextServerExtension::_font_set_global_oversampling(double oversampling) {}

Vector2 TextServerExtension::_get_hex_code_box_size(int64_t size, int64_t index) const {
	return Vector2();
}

void TextServerExtension::_draw_hex_code_box(const RID &canvas, int64_t size, const Vector2 &pos, int64_t index, const Color &color) const {}

RID TextServerExtension::_create_shaped_text(TextServer::Direction direction, TextServer::Orientation orientation) {
	return RID();
}

void TextServerExtension::_shaped_text_clear(const RID &shaped) {}

void TextServerExtension::_shaped_text_set_direction(const RID &shaped, TextServer::Direction direction) {}

TextServer::Direction TextServerExtension::_shaped_text_get_direction(const RID &shaped) const {
	return TextServer::Direction(0);
}

TextServer::Direction TextServerExtension::_shaped_text_get_inferred_direction(const RID &shaped) const {
	return TextServer::Direction(0);
}

void TextServerExtension::_shaped_text_set_bidi_override(const RID &shaped, const Array &override) {}

void TextServerExtension::_shaped_text_set_custom_punctuation(const RID &shaped, const String &punct) {}

String TextServerExtension::_shaped_text_get_custom_punctuation(const RID &shaped) const {
	return String();
}

void TextServerExtension::_shaped_text_set_custom_ellipsis(const RID &shaped, int64_t _char) {}

int64_t TextServerExtension::_shaped_text_get_custom_ellipsis(const RID &shaped) const {
	return 0;
}

void TextServerExtension::_shaped_text_set_orientation(const RID &shaped, TextServer::Orientation orientation) {}

TextServer::Orientation TextServerExtension::_shaped_text_get_orientation(const RID &shaped) const {
	return TextServer::Orientation(0);
}

void TextServerExtension::_shaped_text_set_preserve_invalid(const RID &shaped, bool enabled) {}

bool TextServerExtension::_shaped_text_get_preserve_invalid(const RID &shaped) const {
	return false;
}

void TextServerExtension::_shaped_text_set_preserve_control(const RID &shaped, bool enabled) {}

bool TextServerExtension::_shaped_text_get_preserve_control(const RID &shaped) const {
	return false;
}

void TextServerExtension::_shaped_text_set_spacing(const RID &shaped, TextServer::SpacingType spacing, int64_t value) {}

int64_t TextServerExtension::_shaped_text_get_spacing(const RID &shaped, TextServer::SpacingType spacing) const {
	return 0;
}

bool TextServerExtension::_shaped_text_add_string(const RID &shaped, const String &text, const TypedArray<RID> &fonts, int64_t size, const Dictionary &opentype_features, const String &language, const Variant &meta) {
	return false;
}

bool TextServerExtension::_shaped_text_add_object(const RID &shaped, const Variant &key, const Vector2 &size, InlineAlignment inline_align, int64_t length, double baseline) {
	return false;
}

bool TextServerExtension::_shaped_text_resize_object(const RID &shaped, const Variant &key, const Vector2 &size, InlineAlignment inline_align, double baseline) {
	return false;
}

int64_t TextServerExtension::_shaped_get_span_count(const RID &shaped) const {
	return 0;
}

Variant TextServerExtension::_shaped_get_span_meta(const RID &shaped, int64_t index) const {
	return Variant();
}

void TextServerExtension::_shaped_set_span_update_font(const RID &shaped, int64_t index, const TypedArray<RID> &fonts, int64_t size, const Dictionary &opentype_features) {}

RID TextServerExtension::_shaped_text_substr(const RID &shaped, int64_t start, int64_t length) const {
	return RID();
}

RID TextServerExtension::_shaped_text_get_parent(const RID &shaped) const {
	return RID();
}

double TextServerExtension::_shaped_text_fit_to_width(const RID &shaped, double width, BitField<TextServer::JustificationFlag> justification_flags) {
	return 0.0;
}

double TextServerExtension::_shaped_text_tab_align(const RID &shaped, const PackedFloat32Array &tab_stops) {
	return 0.0;
}

bool TextServerExtension::_shaped_text_shape(const RID &shaped) {
	return false;
}

bool TextServerExtension::_shaped_text_update_breaks(const RID &shaped) {
	return false;
}

bool TextServerExtension::_shaped_text_update_justification_ops(const RID &shaped) {
	return false;
}

bool TextServerExtension::_shaped_text_is_ready(const RID &shaped) const {
	return false;
}

const Glyph *TextServerExtension::_shaped_text_get_glyphs(const RID &shaped) const {
	return nullptr;
}

const Glyph *TextServerExtension::_shaped_text_sort_logical(const RID &shaped) {
	return nullptr;
}

int64_t TextServerExtension::_shaped_text_get_glyph_count(const RID &shaped) const {
	return 0;
}

Vector2i TextServerExtension::_shaped_text_get_range(const RID &shaped) const {
	return Vector2i();
}

PackedInt32Array TextServerExtension::_shaped_text_get_line_breaks_adv(const RID &shaped, const PackedFloat32Array &width, int64_t start, bool once, BitField<TextServer::LineBreakFlag> break_flags) const {
	return PackedInt32Array();
}

PackedInt32Array TextServerExtension::_shaped_text_get_line_breaks(const RID &shaped, double width, int64_t start, BitField<TextServer::LineBreakFlag> break_flags) const {
	return PackedInt32Array();
}

PackedInt32Array TextServerExtension::_shaped_text_get_word_breaks(const RID &shaped, BitField<TextServer::GraphemeFlag> grapheme_flags, BitField<TextServer::GraphemeFlag> skip_grapheme_flags) const {
	return PackedInt32Array();
}

int64_t TextServerExtension::_shaped_text_get_trim_pos(const RID &shaped) const {
	return 0;
}

int64_t TextServerExtension::_shaped_text_get_ellipsis_pos(const RID &shaped) const {
	return 0;
}

int64_t TextServerExtension::_shaped_text_get_ellipsis_glyph_count(const RID &shaped) const {
	return 0;
}

const Glyph *TextServerExtension::_shaped_text_get_ellipsis_glyphs(const RID &shaped) const {
	return nullptr;
}

void TextServerExtension::_shaped_text_overrun_trim_to_width(const RID &shaped, double width, BitField<TextServer::TextOverrunFlag> trim_flags) {}

Array TextServerExtension::_shaped_text_get_objects(const RID &shaped) const {
	return Array();
}

Rect2 TextServerExtension::_shaped_text_get_object_rect(const RID &shaped, const Variant &key) const {
	return Rect2();
}

Vector2i TextServerExtension::_shaped_text_get_object_range(const RID &shaped, const Variant &key) const {
	return Vector2i();
}

int64_t TextServerExtension::_shaped_text_get_object_glyph(const RID &shaped, const Variant &key) const {
	return 0;
}

Vector2 TextServerExtension::_shaped_text_get_size(const RID &shaped) const {
	return Vector2();
}

double TextServerExtension::_shaped_text_get_ascent(const RID &shaped) const {
	return 0.0;
}

double TextServerExtension::_shaped_text_get_descent(const RID &shaped) const {
	return 0.0;
}

double TextServerExtension::_shaped_text_get_width(const RID &shaped) const {
	return 0.0;
}

double TextServerExtension::_shaped_text_get_underline_position(const RID &shaped) const {
	return 0.0;
}

double TextServerExtension::_shaped_text_get_underline_thickness(const RID &shaped) const {
	return 0.0;
}

int64_t TextServerExtension::_shaped_text_get_dominant_direction_in_range(const RID &shaped, int64_t start, int64_t end) const {
	return 0;
}

void TextServerExtension::_shaped_text_get_carets(const RID &shaped, int64_t position, CaretInfo *caret) const {}

PackedVector2Array TextServerExtension::_shaped_text_get_selection(const RID &shaped, int64_t start, int64_t end) const {
	return PackedVector2Array();
}

int64_t TextServerExtension::_shaped_text_hit_test_grapheme(const RID &shaped, double coord) const {
	return 0;
}

int64_t TextServerExtension::_shaped_text_hit_test_position(const RID &shaped, double coord) const {
	return 0;
}

void TextServerExtension::_shaped_text_draw(const RID &shaped, const RID &canvas, const Vector2 &pos, double clip_l, double clip_r, const Color &color) const {}

void TextServerExtension::_shaped_text_draw_outline(const RID &shaped, const RID &canvas, const Vector2 &pos, double clip_l, double clip_r, int64_t outline_size, const Color &color) const {}

Vector2 TextServerExtension::_shaped_text_get_grapheme_bounds(const RID &shaped, int64_t pos) const {
	return Vector2();
}

int64_t TextServerExtension::_shaped_text_next_grapheme_pos(const RID &shaped, int64_t pos) const {
	return 0;
}

int64_t TextServerExtension::_shaped_text_prev_grapheme_pos(const RID &shaped, int64_t pos) const {
	return 0;
}

PackedInt32Array TextServerExtension::_shaped_text_get_character_breaks(const RID &shaped) const {
	return PackedInt32Array();
}

int64_t TextServerExtension::_shaped_text_next_character_pos(const RID &shaped, int64_t pos) const {
	return 0;
}

int64_t TextServerExtension::_shaped_text_prev_character_pos(const RID &shaped, int64_t pos) const {
	return 0;
}

int64_t TextServerExtension::_shaped_text_closest_character_pos(const RID &shaped, int64_t pos) const {
	return 0;
}

String TextServerExtension::_format_number(const String &number, const String &language) const {
	return String();
}

String TextServerExtension::_parse_number(const String &number, const String &language) const {
	return String();
}

String TextServerExtension::_percent_sign(const String &language) const {
	return String();
}

String TextServerExtension::_strip_diacritics(const String &string) const {
	return String();
}

bool TextServerExtension::_is_valid_identifier(const String &string) const {
	return false;
}

bool TextServerExtension::_is_valid_letter(int64_t unicode) const {
	return false;
}

PackedInt32Array TextServerExtension::_string_get_word_breaks(const String &string, const String &language, int64_t chars_per_line) const {
	return PackedInt32Array();
}

PackedInt32Array TextServerExtension::_string_get_character_breaks(const String &string, const String &language) const {
	return PackedInt32Array();
}

int64_t TextServerExtension::_is_confusable(const String &string, const PackedStringArray &dict) const {
	return 0;
}

bool TextServerExtension::_spoof_check(const String &string) const {
	return false;
}

String TextServerExtension::_string_to_upper(const String &string, const String &language) const {
	return String();
}

String TextServerExtension::_string_to_lower(const String &string, const String &language) const {
	return String();
}

String TextServerExtension::_string_to_title(const String &string, const String &language) const {
	return String();
}

TypedArray<Vector3i> TextServerExtension::_parse_structured_text(TextServer::StructuredTextParser parser_type, const Array &args, const String &text) const {
	return TypedArray<Vector3i>();
}

void TextServerExtension::_cleanup() {}


} // namespace godot 