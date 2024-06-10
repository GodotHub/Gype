/**************************************************************************/
/*  text_server.hpp                                                       */
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

#ifndef GODOT_CPP_TEXT_SERVER_HPP
#define GODOT_CPP_TEXT_SERVER_HPP

#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/variant/vector3i.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Image;
class PackedByteArray;
class PackedFloat32Array;

class TextServer : public RefCounted {
	GDEXTENSION_CLASS(TextServer, RefCounted)

public:

	enum FontAntialiasing {
		FONT_ANTIALIASING_NONE = 0,
		FONT_ANTIALIASING_GRAY = 1,
		FONT_ANTIALIASING_LCD = 2,
	};

	enum FontLCDSubpixelLayout {
		FONT_LCD_SUBPIXEL_LAYOUT_NONE = 0,
		FONT_LCD_SUBPIXEL_LAYOUT_HRGB = 1,
		FONT_LCD_SUBPIXEL_LAYOUT_HBGR = 2,
		FONT_LCD_SUBPIXEL_LAYOUT_VRGB = 3,
		FONT_LCD_SUBPIXEL_LAYOUT_VBGR = 4,
		FONT_LCD_SUBPIXEL_LAYOUT_MAX = 5,
	};

	enum Direction {
		DIRECTION_AUTO = 0,
		DIRECTION_LTR = 1,
		DIRECTION_RTL = 2,
		DIRECTION_INHERITED = 3,
	};

	enum Orientation {
		ORIENTATION_HORIZONTAL = 0,
		ORIENTATION_VERTICAL = 1,
	};

	enum JustificationFlag : uint64_t {
		JUSTIFICATION_NONE = 0,
		JUSTIFICATION_KASHIDA = 1,
		JUSTIFICATION_WORD_BOUND = 2,
		JUSTIFICATION_TRIM_EDGE_SPACES = 4,
		JUSTIFICATION_AFTER_LAST_TAB = 8,
		JUSTIFICATION_CONSTRAIN_ELLIPSIS = 16,
		JUSTIFICATION_SKIP_LAST_LINE = 32,
		JUSTIFICATION_SKIP_LAST_LINE_WITH_VISIBLE_CHARS = 64,
		JUSTIFICATION_DO_NOT_SKIP_SINGLE_LINE = 128,
	};

	enum AutowrapMode {
		AUTOWRAP_OFF = 0,
		AUTOWRAP_ARBITRARY = 1,
		AUTOWRAP_WORD = 2,
		AUTOWRAP_WORD_SMART = 3,
	};

	enum LineBreakFlag : uint64_t {
		BREAK_NONE = 0,
		BREAK_MANDATORY = 1,
		BREAK_WORD_BOUND = 2,
		BREAK_GRAPHEME_BOUND = 4,
		BREAK_ADAPTIVE = 8,
		BREAK_TRIM_EDGE_SPACES = 16,
		BREAK_TRIM_INDENT = 32,
	};

	enum VisibleCharactersBehavior {
		VC_CHARS_BEFORE_SHAPING = 0,
		VC_CHARS_AFTER_SHAPING = 1,
		VC_GLYPHS_AUTO = 2,
		VC_GLYPHS_LTR = 3,
		VC_GLYPHS_RTL = 4,
	};

	enum OverrunBehavior {
		OVERRUN_NO_TRIMMING = 0,
		OVERRUN_TRIM_CHAR = 1,
		OVERRUN_TRIM_WORD = 2,
		OVERRUN_TRIM_ELLIPSIS = 3,
		OVERRUN_TRIM_WORD_ELLIPSIS = 4,
	};

	enum TextOverrunFlag : uint64_t {
		OVERRUN_NO_TRIM = 0,
		OVERRUN_TRIM = 1,
		OVERRUN_TRIM_WORD_ONLY = 2,
		OVERRUN_ADD_ELLIPSIS = 4,
		OVERRUN_ENFORCE_ELLIPSIS = 8,
		OVERRUN_JUSTIFICATION_AWARE = 16,
	};

	enum GraphemeFlag : uint64_t {
		GRAPHEME_IS_VALID = 1,
		GRAPHEME_IS_RTL = 2,
		GRAPHEME_IS_VIRTUAL = 4,
		GRAPHEME_IS_SPACE = 8,
		GRAPHEME_IS_BREAK_HARD = 16,
		GRAPHEME_IS_BREAK_SOFT = 32,
		GRAPHEME_IS_TAB = 64,
		GRAPHEME_IS_ELONGATION = 128,
		GRAPHEME_IS_PUNCTUATION = 256,
		GRAPHEME_IS_UNDERSCORE = 512,
		GRAPHEME_IS_CONNECTED = 1024,
		GRAPHEME_IS_SAFE_TO_INSERT_TATWEEL = 2048,
		GRAPHEME_IS_EMBEDDED_OBJECT = 4096,
		GRAPHEME_IS_SOFT_HYPHEN = 8192,
	};

	enum Hinting {
		HINTING_NONE = 0,
		HINTING_LIGHT = 1,
		HINTING_NORMAL = 2,
	};

	enum SubpixelPositioning {
		SUBPIXEL_POSITIONING_DISABLED = 0,
		SUBPIXEL_POSITIONING_AUTO = 1,
		SUBPIXEL_POSITIONING_ONE_HALF = 2,
		SUBPIXEL_POSITIONING_ONE_QUARTER = 3,
		SUBPIXEL_POSITIONING_ONE_HALF_MAX_SIZE = 20,
		SUBPIXEL_POSITIONING_ONE_QUARTER_MAX_SIZE = 16,
	};

	enum Feature {
		FEATURE_SIMPLE_LAYOUT = 1,
		FEATURE_BIDI_LAYOUT = 2,
		FEATURE_VERTICAL_LAYOUT = 4,
		FEATURE_SHAPING = 8,
		FEATURE_KASHIDA_JUSTIFICATION = 16,
		FEATURE_BREAK_ITERATORS = 32,
		FEATURE_FONT_BITMAP = 64,
		FEATURE_FONT_DYNAMIC = 128,
		FEATURE_FONT_MSDF = 256,
		FEATURE_FONT_SYSTEM = 512,
		FEATURE_FONT_VARIABLE = 1024,
		FEATURE_CONTEXT_SENSITIVE_CASE_CONVERSION = 2048,
		FEATURE_USE_SUPPORT_DATA = 4096,
		FEATURE_UNICODE_IDENTIFIERS = 8192,
		FEATURE_UNICODE_SECURITY = 16384,
	};

	enum ContourPointTag {
		CONTOUR_CURVE_TAG_ON = 1,
		CONTOUR_CURVE_TAG_OFF_CONIC = 0,
		CONTOUR_CURVE_TAG_OFF_CUBIC = 2,
	};

	enum SpacingType {
		SPACING_GLYPH = 0,
		SPACING_SPACE = 1,
		SPACING_TOP = 2,
		SPACING_BOTTOM = 3,
		SPACING_MAX = 4,
	};

	enum FontStyle : uint64_t {
		FONT_BOLD = 1,
		FONT_ITALIC = 2,
		FONT_FIXED_WIDTH = 4,
	};

	enum StructuredTextParser {
		STRUCTURED_TEXT_DEFAULT = 0,
		STRUCTURED_TEXT_URI = 1,
		STRUCTURED_TEXT_FILE = 2,
		STRUCTURED_TEXT_EMAIL = 3,
		STRUCTURED_TEXT_LIST = 4,
		STRUCTURED_TEXT_GDSCRIPT = 5,
		STRUCTURED_TEXT_CUSTOM = 6,
	};

	enum FixedSizeScaleMode {
		FIXED_SIZE_SCALE_DISABLE = 0,
		FIXED_SIZE_SCALE_INTEGER_ONLY = 1,
		FIXED_SIZE_SCALE_ENABLED = 2,
	};

	bool has_feature(TextServer::Feature feature) const;
	String get_name() const;
	int64_t get_features() const;
	bool load_support_data(const String &filename);
	String get_support_data_filename() const;
	String get_support_data_info() const;
	bool save_support_data(const String &filename) const;
	bool is_locale_right_to_left(const String &locale) const;
	int64_t name_to_tag(const String &name) const;
	String tag_to_name(int64_t tag) const;
	bool has(const RID &rid);
	void free_rid(const RID &rid);
	RID create_font();
	RID create_font_linked_variation(const RID &font_rid);
	void font_set_data(const RID &font_rid, const PackedByteArray &data);
	void font_set_face_index(const RID &font_rid, int64_t face_index);
	int64_t font_get_face_index(const RID &font_rid) const;
	int64_t font_get_face_count(const RID &font_rid) const;
	void font_set_style(const RID &font_rid, BitField<TextServer::FontStyle> style);
	BitField<TextServer::FontStyle> font_get_style(const RID &font_rid) const;
	void font_set_name(const RID &font_rid, const String &name);
	String font_get_name(const RID &font_rid) const;
	Dictionary font_get_ot_name_strings(const RID &font_rid) const;
	void font_set_style_name(const RID &font_rid, const String &name);
	String font_get_style_name(const RID &font_rid) const;
	void font_set_weight(const RID &font_rid, int64_t weight);
	int64_t font_get_weight(const RID &font_rid) const;
	void font_set_stretch(const RID &font_rid, int64_t weight);
	int64_t font_get_stretch(const RID &font_rid) const;
	void font_set_antialiasing(const RID &font_rid, TextServer::FontAntialiasing antialiasing);
	TextServer::FontAntialiasing font_get_antialiasing(const RID &font_rid) const;
	void font_set_disable_embedded_bitmaps(const RID &font_rid, bool disable_embedded_bitmaps);
	bool font_get_disable_embedded_bitmaps(const RID &font_rid) const;
	void font_set_generate_mipmaps(const RID &font_rid, bool generate_mipmaps);
	bool font_get_generate_mipmaps(const RID &font_rid) const;
	void font_set_multichannel_signed_distance_field(const RID &font_rid, bool msdf);
	bool font_is_multichannel_signed_distance_field(const RID &font_rid) const;
	void font_set_msdf_pixel_range(const RID &font_rid, int64_t msdf_pixel_range);
	int64_t font_get_msdf_pixel_range(const RID &font_rid) const;
	void font_set_msdf_size(const RID &font_rid, int64_t msdf_size);
	int64_t font_get_msdf_size(const RID &font_rid) const;
	void font_set_fixed_size(const RID &font_rid, int64_t fixed_size);
	int64_t font_get_fixed_size(const RID &font_rid) const;
	void font_set_fixed_size_scale_mode(const RID &font_rid, TextServer::FixedSizeScaleMode fixed_size_scale_mode);
	TextServer::FixedSizeScaleMode font_get_fixed_size_scale_mode(const RID &font_rid) const;
	void font_set_allow_system_fallback(const RID &font_rid, bool allow_system_fallback);
	bool font_is_allow_system_fallback(const RID &font_rid) const;
	void font_set_force_autohinter(const RID &font_rid, bool force_autohinter);
	bool font_is_force_autohinter(const RID &font_rid) const;
	void font_set_hinting(const RID &font_rid, TextServer::Hinting hinting);
	TextServer::Hinting font_get_hinting(const RID &font_rid) const;
	void font_set_subpixel_positioning(const RID &font_rid, TextServer::SubpixelPositioning subpixel_positioning);
	TextServer::SubpixelPositioning font_get_subpixel_positioning(const RID &font_rid) const;
	void font_set_embolden(const RID &font_rid, double strength);
	double font_get_embolden(const RID &font_rid) const;
	void font_set_spacing(const RID &font_rid, TextServer::SpacingType spacing, int64_t value);
	int64_t font_get_spacing(const RID &font_rid, TextServer::SpacingType spacing) const;
	void font_set_baseline_offset(const RID &font_rid, double baseline_offset);
	double font_get_baseline_offset(const RID &font_rid) const;
	void font_set_transform(const RID &font_rid, const Transform2D &transform);
	Transform2D font_get_transform(const RID &font_rid) const;
	void font_set_variation_coordinates(const RID &font_rid, const Dictionary &variation_coordinates);
	Dictionary font_get_variation_coordinates(const RID &font_rid) const;
	void font_set_oversampling(const RID &font_rid, double oversampling);
	double font_get_oversampling(const RID &font_rid) const;
	TypedArray<Vector2i> font_get_size_cache_list(const RID &font_rid) const;
	void font_clear_size_cache(const RID &font_rid);
	void font_remove_size_cache(const RID &font_rid, const Vector2i &size);
	void font_set_ascent(const RID &font_rid, int64_t size, double ascent);
	double font_get_ascent(const RID &font_rid, int64_t size) const;
	void font_set_descent(const RID &font_rid, int64_t size, double descent);
	double font_get_descent(const RID &font_rid, int64_t size) const;
	void font_set_underline_position(const RID &font_rid, int64_t size, double underline_position);
	double font_get_underline_position(const RID &font_rid, int64_t size) const;
	void font_set_underline_thickness(const RID &font_rid, int64_t size, double underline_thickness);
	double font_get_underline_thickness(const RID &font_rid, int64_t size) const;
	void font_set_scale(const RID &font_rid, int64_t size, double scale);
	double font_get_scale(const RID &font_rid, int64_t size) const;
	int64_t font_get_texture_count(const RID &font_rid, const Vector2i &size) const;
	void font_clear_textures(const RID &font_rid, const Vector2i &size);
	void font_remove_texture(const RID &font_rid, const Vector2i &size, int64_t texture_index);
	void font_set_texture_image(const RID &font_rid, const Vector2i &size, int64_t texture_index, const Ref<Image> &image);
	Ref<Image> font_get_texture_image(const RID &font_rid, const Vector2i &size, int64_t texture_index) const;
	void font_set_texture_offsets(const RID &font_rid, const Vector2i &size, int64_t texture_index, const PackedInt32Array &offset);
	PackedInt32Array font_get_texture_offsets(const RID &font_rid, const Vector2i &size, int64_t texture_index) const;
	PackedInt32Array font_get_glyph_list(const RID &font_rid, const Vector2i &size) const;
	void font_clear_glyphs(const RID &font_rid, const Vector2i &size);
	void font_remove_glyph(const RID &font_rid, const Vector2i &size, int64_t glyph);
	Vector2 font_get_glyph_advance(const RID &font_rid, int64_t size, int64_t glyph) const;
	void font_set_glyph_advance(const RID &font_rid, int64_t size, int64_t glyph, const Vector2 &advance);
	Vector2 font_get_glyph_offset(const RID &font_rid, const Vector2i &size, int64_t glyph) const;
	void font_set_glyph_offset(const RID &font_rid, const Vector2i &size, int64_t glyph, const Vector2 &offset);
	Vector2 font_get_glyph_size(const RID &font_rid, const Vector2i &size, int64_t glyph) const;
	void font_set_glyph_size(const RID &font_rid, const Vector2i &size, int64_t glyph, const Vector2 &gl_size);
	Rect2 font_get_glyph_uv_rect(const RID &font_rid, const Vector2i &size, int64_t glyph) const;
	void font_set_glyph_uv_rect(const RID &font_rid, const Vector2i &size, int64_t glyph, const Rect2 &uv_rect);
	int64_t font_get_glyph_texture_idx(const RID &font_rid, const Vector2i &size, int64_t glyph) const;
	void font_set_glyph_texture_idx(const RID &font_rid, const Vector2i &size, int64_t glyph, int64_t texture_idx);
	RID font_get_glyph_texture_rid(const RID &font_rid, const Vector2i &size, int64_t glyph) const;
	Vector2 font_get_glyph_texture_size(const RID &font_rid, const Vector2i &size, int64_t glyph) const;
	Dictionary font_get_glyph_contours(const RID &font, int64_t size, int64_t index) const;
	TypedArray<Vector2i> font_get_kerning_list(const RID &font_rid, int64_t size) const;
	void font_clear_kerning_map(const RID &font_rid, int64_t size);
	void font_remove_kerning(const RID &font_rid, int64_t size, const Vector2i &glyph_pair);
	void font_set_kerning(const RID &font_rid, int64_t size, const Vector2i &glyph_pair, const Vector2 &kerning);
	Vector2 font_get_kerning(const RID &font_rid, int64_t size, const Vector2i &glyph_pair) const;
	int64_t font_get_glyph_index(const RID &font_rid, int64_t size, int64_t _char, int64_t variation_selector) const;
	int64_t font_get_char_from_glyph_index(const RID &font_rid, int64_t size, int64_t glyph_index) const;
	bool font_has_char(const RID &font_rid, int64_t _char) const;
	String font_get_supported_chars(const RID &font_rid) const;
	void font_render_range(const RID &font_rid, const Vector2i &size, int64_t start, int64_t end);
	void font_render_glyph(const RID &font_rid, const Vector2i &size, int64_t index);
	void font_draw_glyph(const RID &font_rid, const RID &canvas, int64_t size, const Vector2 &pos, int64_t index, const Color &color = Color(1, 1, 1, 1)) const;
	void font_draw_glyph_outline(const RID &font_rid, const RID &canvas, int64_t size, int64_t outline_size, const Vector2 &pos, int64_t index, const Color &color = Color(1, 1, 1, 1)) const;
	bool font_is_language_supported(const RID &font_rid, const String &language) const;
	void font_set_language_support_override(const RID &font_rid, const String &language, bool supported);
	bool font_get_language_support_override(const RID &font_rid, const String &language);
	void font_remove_language_support_override(const RID &font_rid, const String &language);
	PackedStringArray font_get_language_support_overrides(const RID &font_rid);
	bool font_is_script_supported(const RID &font_rid, const String &script) const;
	void font_set_script_support_override(const RID &font_rid, const String &script, bool supported);
	bool font_get_script_support_override(const RID &font_rid, const String &script);
	void font_remove_script_support_override(const RID &font_rid, const String &script);
	PackedStringArray font_get_script_support_overrides(const RID &font_rid);
	void font_set_opentype_feature_overrides(const RID &font_rid, const Dictionary &overrides);
	Dictionary font_get_opentype_feature_overrides(const RID &font_rid) const;
	Dictionary font_supported_feature_list(const RID &font_rid) const;
	Dictionary font_supported_variation_list(const RID &font_rid) const;
	double font_get_global_oversampling() const;
	void font_set_global_oversampling(double oversampling);
	Vector2 get_hex_code_box_size(int64_t size, int64_t index) const;
	void draw_hex_code_box(const RID &canvas, int64_t size, const Vector2 &pos, int64_t index, const Color &color) const;
	RID create_shaped_text(TextServer::Direction direction = (TextServer::Direction)0, TextServer::Orientation orientation = (TextServer::Orientation)0);
	void shaped_text_clear(const RID &rid);
	void shaped_text_set_direction(const RID &shaped, TextServer::Direction direction = (TextServer::Direction)0);
	TextServer::Direction shaped_text_get_direction(const RID &shaped) const;
	TextServer::Direction shaped_text_get_inferred_direction(const RID &shaped) const;
	void shaped_text_set_bidi_override(const RID &shaped, const Array &override);
	void shaped_text_set_custom_punctuation(const RID &shaped, const String &punct);
	String shaped_text_get_custom_punctuation(const RID &shaped) const;
	void shaped_text_set_custom_ellipsis(const RID &shaped, int64_t _char);
	int64_t shaped_text_get_custom_ellipsis(const RID &shaped) const;
	void shaped_text_set_orientation(const RID &shaped, TextServer::Orientation orientation = (TextServer::Orientation)0);
	TextServer::Orientation shaped_text_get_orientation(const RID &shaped) const;
	void shaped_text_set_preserve_invalid(const RID &shaped, bool enabled);
	bool shaped_text_get_preserve_invalid(const RID &shaped) const;
	void shaped_text_set_preserve_control(const RID &shaped, bool enabled);
	bool shaped_text_get_preserve_control(const RID &shaped) const;
	void shaped_text_set_spacing(const RID &shaped, TextServer::SpacingType spacing, int64_t value);
	int64_t shaped_text_get_spacing(const RID &shaped, TextServer::SpacingType spacing) const;
	bool shaped_text_add_string(const RID &shaped, const String &text, const TypedArray<RID> &fonts, int64_t size, const Dictionary &opentype_features = Dictionary(), const String &language = String(), const Variant &meta = nullptr);
	bool shaped_text_add_object(const RID &shaped, const Variant &key, const Vector2 &size, InlineAlignment inline_align = (InlineAlignment)5, int64_t length = 1, double baseline = 0.0);
	bool shaped_text_resize_object(const RID &shaped, const Variant &key, const Vector2 &size, InlineAlignment inline_align = (InlineAlignment)5, double baseline = 0.0);
	int64_t shaped_get_span_count(const RID &shaped) const;
	Variant shaped_get_span_meta(const RID &shaped, int64_t index) const;
	void shaped_set_span_update_font(const RID &shaped, int64_t index, const TypedArray<RID> &fonts, int64_t size, const Dictionary &opentype_features = Dictionary());
	RID shaped_text_substr(const RID &shaped, int64_t start, int64_t length) const;
	RID shaped_text_get_parent(const RID &shaped) const;
	double shaped_text_fit_to_width(const RID &shaped, double width, BitField<TextServer::JustificationFlag> justification_flags = (BitField<TextServer::JustificationFlag>)3);
	double shaped_text_tab_align(const RID &shaped, const PackedFloat32Array &tab_stops);
	bool shaped_text_shape(const RID &shaped);
	bool shaped_text_is_ready(const RID &shaped) const;
	bool shaped_text_has_visible_chars(const RID &shaped) const;
	TypedArray<Dictionary> shaped_text_get_glyphs(const RID &shaped) const;
	TypedArray<Dictionary> shaped_text_sort_logical(const RID &shaped);
	int64_t shaped_text_get_glyph_count(const RID &shaped) const;
	Vector2i shaped_text_get_range(const RID &shaped) const;
	PackedInt32Array shaped_text_get_line_breaks_adv(const RID &shaped, const PackedFloat32Array &width, int64_t start = 0, bool once = true, BitField<TextServer::LineBreakFlag> break_flags = (BitField<TextServer::LineBreakFlag>)3) const;
	PackedInt32Array shaped_text_get_line_breaks(const RID &shaped, double width, int64_t start = 0, BitField<TextServer::LineBreakFlag> break_flags = (BitField<TextServer::LineBreakFlag>)3) const;
	PackedInt32Array shaped_text_get_word_breaks(const RID &shaped, BitField<TextServer::GraphemeFlag> grapheme_flags = (BitField<TextServer::GraphemeFlag>)264, BitField<TextServer::GraphemeFlag> skip_grapheme_flags = (BitField<TextServer::GraphemeFlag>)4) const;
	int64_t shaped_text_get_trim_pos(const RID &shaped) const;
	int64_t shaped_text_get_ellipsis_pos(const RID &shaped) const;
	TypedArray<Dictionary> shaped_text_get_ellipsis_glyphs(const RID &shaped) const;
	int64_t shaped_text_get_ellipsis_glyph_count(const RID &shaped) const;
	void shaped_text_overrun_trim_to_width(const RID &shaped, double width = 0, BitField<TextServer::TextOverrunFlag> overrun_trim_flags = (BitField<TextServer::TextOverrunFlag>)0);
	Array shaped_text_get_objects(const RID &shaped) const;
	Rect2 shaped_text_get_object_rect(const RID &shaped, const Variant &key) const;
	Vector2i shaped_text_get_object_range(const RID &shaped, const Variant &key) const;
	int64_t shaped_text_get_object_glyph(const RID &shaped, const Variant &key) const;
	Vector2 shaped_text_get_size(const RID &shaped) const;
	double shaped_text_get_ascent(const RID &shaped) const;
	double shaped_text_get_descent(const RID &shaped) const;
	double shaped_text_get_width(const RID &shaped) const;
	double shaped_text_get_underline_position(const RID &shaped) const;
	double shaped_text_get_underline_thickness(const RID &shaped) const;
	Dictionary shaped_text_get_carets(const RID &shaped, int64_t position) const;
	PackedVector2Array shaped_text_get_selection(const RID &shaped, int64_t start, int64_t end) const;
	int64_t shaped_text_hit_test_grapheme(const RID &shaped, double coords) const;
	int64_t shaped_text_hit_test_position(const RID &shaped, double coords) const;
	Vector2 shaped_text_get_grapheme_bounds(const RID &shaped, int64_t pos) const;
	int64_t shaped_text_next_grapheme_pos(const RID &shaped, int64_t pos) const;
	int64_t shaped_text_prev_grapheme_pos(const RID &shaped, int64_t pos) const;
	PackedInt32Array shaped_text_get_character_breaks(const RID &shaped) const;
	int64_t shaped_text_next_character_pos(const RID &shaped, int64_t pos) const;
	int64_t shaped_text_prev_character_pos(const RID &shaped, int64_t pos) const;
	int64_t shaped_text_closest_character_pos(const RID &shaped, int64_t pos) const;
	void shaped_text_draw(const RID &shaped, const RID &canvas, const Vector2 &pos, double clip_l = -1, double clip_r = -1, const Color &color = Color(1, 1, 1, 1)) const;
	void shaped_text_draw_outline(const RID &shaped, const RID &canvas, const Vector2 &pos, double clip_l = -1, double clip_r = -1, int64_t outline_size = 1, const Color &color = Color(1, 1, 1, 1)) const;
	TextServer::Direction shaped_text_get_dominant_direction_in_range(const RID &shaped, int64_t start, int64_t end) const;
	String format_number(const String &number, const String &language = String()) const;
	String parse_number(const String &number, const String &language = String()) const;
	String percent_sign(const String &language = String()) const;
	PackedInt32Array string_get_word_breaks(const String &string, const String &language = String(), int64_t chars_per_line = 0) const;
	PackedInt32Array string_get_character_breaks(const String &string, const String &language = String()) const;
	int64_t is_confusable(const String &string, const PackedStringArray &dict) const;
	bool spoof_check(const String &string) const;
	String strip_diacritics(const String &string) const;
	bool is_valid_identifier(const String &string) const;
	bool is_valid_letter(int64_t unicode) const;
	String string_to_upper(const String &string, const String &language = String()) const;
	String string_to_lower(const String &string, const String &language = String()) const;
	String string_to_title(const String &string, const String &language = String()) const;
	TypedArray<Vector3i> parse_structured_text(TextServer::StructuredTextParser parser_type, const Array &args, const String &text) const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		RefCounted::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(TextServer::FontAntialiasing);
VARIANT_ENUM_CAST(TextServer::FontLCDSubpixelLayout);
VARIANT_ENUM_CAST(TextServer::Direction);
VARIANT_ENUM_CAST(TextServer::Orientation);
VARIANT_BITFIELD_CAST(TextServer::JustificationFlag);
VARIANT_ENUM_CAST(TextServer::AutowrapMode);
VARIANT_BITFIELD_CAST(TextServer::LineBreakFlag);
VARIANT_ENUM_CAST(TextServer::VisibleCharactersBehavior);
VARIANT_ENUM_CAST(TextServer::OverrunBehavior);
VARIANT_BITFIELD_CAST(TextServer::TextOverrunFlag);
VARIANT_BITFIELD_CAST(TextServer::GraphemeFlag);
VARIANT_ENUM_CAST(TextServer::Hinting);
VARIANT_ENUM_CAST(TextServer::SubpixelPositioning);
VARIANT_ENUM_CAST(TextServer::Feature);
VARIANT_ENUM_CAST(TextServer::ContourPointTag);
VARIANT_ENUM_CAST(TextServer::SpacingType);
VARIANT_BITFIELD_CAST(TextServer::FontStyle);
VARIANT_ENUM_CAST(TextServer::StructuredTextParser);
VARIANT_ENUM_CAST(TextServer::FixedSizeScaleMode);

#endif // ! GODOT_CPP_TEXT_SERVER_HPP