/**************************************************************************/
/*  font_file.hpp                                                         */
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

#ifndef GODOT_CPP_FONT_FILE_HPP
#define GODOT_CPP_FONT_FILE_HPP

#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Image;
class String;

class FontFile : public Font {
	GDEXTENSION_CLASS(FontFile, Font)

public:

	Error load_bitmap_font(const String &path);
	Error load_dynamic_font(const String &path);
	void set_data(const PackedByteArray &data);
	PackedByteArray get_data() const;
	void set_font_name(const String &name);
	void set_font_style_name(const String &name);
	void set_font_style(BitField<TextServer::FontStyle> style);
	void set_font_weight(int32_t weight);
	void set_font_stretch(int32_t stretch);
	void set_antialiasing(TextServer::FontAntialiasing antialiasing);
	TextServer::FontAntialiasing get_antialiasing() const;
	void set_disable_embedded_bitmaps(bool disable_embedded_bitmaps);
	bool get_disable_embedded_bitmaps() const;
	void set_generate_mipmaps(bool generate_mipmaps);
	bool get_generate_mipmaps() const;
	void set_multichannel_signed_distance_field(bool msdf);
	bool is_multichannel_signed_distance_field() const;
	void set_msdf_pixel_range(int32_t msdf_pixel_range);
	int32_t get_msdf_pixel_range() const;
	void set_msdf_size(int32_t msdf_size);
	int32_t get_msdf_size() const;
	void set_fixed_size(int32_t fixed_size);
	int32_t get_fixed_size() const;
	void set_fixed_size_scale_mode(TextServer::FixedSizeScaleMode fixed_size_scale_mode);
	TextServer::FixedSizeScaleMode get_fixed_size_scale_mode() const;
	void set_allow_system_fallback(bool allow_system_fallback);
	bool is_allow_system_fallback() const;
	void set_force_autohinter(bool force_autohinter);
	bool is_force_autohinter() const;
	void set_hinting(TextServer::Hinting hinting);
	TextServer::Hinting get_hinting() const;
	void set_subpixel_positioning(TextServer::SubpixelPositioning subpixel_positioning);
	TextServer::SubpixelPositioning get_subpixel_positioning() const;
	void set_oversampling(double oversampling);
	double get_oversampling() const;
	int32_t get_cache_count() const;
	void clear_cache();
	void remove_cache(int32_t cache_index);
	TypedArray<Vector2i> get_size_cache_list(int32_t cache_index) const;
	void clear_size_cache(int32_t cache_index);
	void remove_size_cache(int32_t cache_index, const Vector2i &size);
	void set_variation_coordinates(int32_t cache_index, const Dictionary &variation_coordinates);
	Dictionary get_variation_coordinates(int32_t cache_index) const;
	void set_embolden(int32_t cache_index, double strength);
	double get_embolden(int32_t cache_index) const;
	void set_transform(int32_t cache_index, const Transform2D &transform);
	Transform2D get_transform(int32_t cache_index) const;
	void set_extra_spacing(int32_t cache_index, TextServer::SpacingType spacing, int64_t value);
	int64_t get_extra_spacing(int32_t cache_index, TextServer::SpacingType spacing) const;
	void set_extra_baseline_offset(int32_t cache_index, double baseline_offset);
	double get_extra_baseline_offset(int32_t cache_index) const;
	void set_face_index(int32_t cache_index, int64_t face_index);
	int64_t get_face_index(int32_t cache_index) const;
	void set_cache_ascent(int32_t cache_index, int32_t size, double ascent);
	double get_cache_ascent(int32_t cache_index, int32_t size) const;
	void set_cache_descent(int32_t cache_index, int32_t size, double descent);
	double get_cache_descent(int32_t cache_index, int32_t size) const;
	void set_cache_underline_position(int32_t cache_index, int32_t size, double underline_position);
	double get_cache_underline_position(int32_t cache_index, int32_t size) const;
	void set_cache_underline_thickness(int32_t cache_index, int32_t size, double underline_thickness);
	double get_cache_underline_thickness(int32_t cache_index, int32_t size) const;
	void set_cache_scale(int32_t cache_index, int32_t size, double scale);
	double get_cache_scale(int32_t cache_index, int32_t size) const;
	int32_t get_texture_count(int32_t cache_index, const Vector2i &size) const;
	void clear_textures(int32_t cache_index, const Vector2i &size);
	void remove_texture(int32_t cache_index, const Vector2i &size, int32_t texture_index);
	void set_texture_image(int32_t cache_index, const Vector2i &size, int32_t texture_index, const Ref<Image> &image);
	Ref<Image> get_texture_image(int32_t cache_index, const Vector2i &size, int32_t texture_index) const;
	void set_texture_offsets(int32_t cache_index, const Vector2i &size, int32_t texture_index, const PackedInt32Array &offset);
	PackedInt32Array get_texture_offsets(int32_t cache_index, const Vector2i &size, int32_t texture_index) const;
	PackedInt32Array get_glyph_list(int32_t cache_index, const Vector2i &size) const;
	void clear_glyphs(int32_t cache_index, const Vector2i &size);
	void remove_glyph(int32_t cache_index, const Vector2i &size, int32_t glyph);
	void set_glyph_advance(int32_t cache_index, int32_t size, int32_t glyph, const Vector2 &advance);
	Vector2 get_glyph_advance(int32_t cache_index, int32_t size, int32_t glyph) const;
	void set_glyph_offset(int32_t cache_index, const Vector2i &size, int32_t glyph, const Vector2 &offset);
	Vector2 get_glyph_offset(int32_t cache_index, const Vector2i &size, int32_t glyph) const;
	void set_glyph_size(int32_t cache_index, const Vector2i &size, int32_t glyph, const Vector2 &gl_size);
	Vector2 get_glyph_size(int32_t cache_index, const Vector2i &size, int32_t glyph) const;
	void set_glyph_uv_rect(int32_t cache_index, const Vector2i &size, int32_t glyph, const Rect2 &uv_rect);
	Rect2 get_glyph_uv_rect(int32_t cache_index, const Vector2i &size, int32_t glyph) const;
	void set_glyph_texture_idx(int32_t cache_index, const Vector2i &size, int32_t glyph, int32_t texture_idx);
	int32_t get_glyph_texture_idx(int32_t cache_index, const Vector2i &size, int32_t glyph) const;
	TypedArray<Vector2i> get_kerning_list(int32_t cache_index, int32_t size) const;
	void clear_kerning_map(int32_t cache_index, int32_t size);
	void remove_kerning(int32_t cache_index, int32_t size, const Vector2i &glyph_pair);
	void set_kerning(int32_t cache_index, int32_t size, const Vector2i &glyph_pair, const Vector2 &kerning);
	Vector2 get_kerning(int32_t cache_index, int32_t size, const Vector2i &glyph_pair) const;
	void render_range(int32_t cache_index, const Vector2i &size, int64_t start, int64_t end);
	void render_glyph(int32_t cache_index, const Vector2i &size, int32_t index);
	void set_language_support_override(const String &language, bool supported);
	bool get_language_support_override(const String &language) const;
	void remove_language_support_override(const String &language);
	PackedStringArray get_language_support_overrides() const;
	void set_script_support_override(const String &script, bool supported);
	bool get_script_support_override(const String &script) const;
	void remove_script_support_override(const String &script);
	PackedStringArray get_script_support_overrides() const;
	void set_opentype_feature_overrides(const Dictionary &overrides);
	Dictionary get_opentype_feature_overrides() const;
	int32_t get_glyph_index(int32_t size, int64_t _char, int64_t variation_selector) const;
	int64_t get_char_from_glyph_index(int32_t size, int32_t glyph_index) const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Font::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_FONT_FILE_HPP