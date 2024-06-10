#include <godot_cpp/classes/font_file.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_FontFile() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<FontFile>("FontFile")
			.constructor<>()
			.property<&FontFile::get_data, &FontFile::set_data>("data")
			.property<&FontFile::get_generate_mipmaps, &FontFile::set_generate_mipmaps>("generate_mipmaps")
			.property<&FontFile::get_antialiasing, &FontFile::set_antialiasing>("antialiasing")
			.property<&FontFile::get_font_name, &FontFile::set_font_name>("font_name")
			.property<&FontFile::get_font_style_name, &FontFile::set_font_style_name>("style_name")
			.property<&FontFile::get_font_style, &FontFile::set_font_style>("font_style")
			.property<&FontFile::get_font_weight, &FontFile::set_font_weight>("font_weight")
			.property<&FontFile::get_font_stretch, &FontFile::set_font_stretch>("font_stretch")
			.property<&FontFile::get_subpixel_positioning, &FontFile::set_subpixel_positioning>("subpixel_positioning")
			.property<&FontFile::is_multichannel_signed_distance_field, &FontFile::set_multichannel_signed_distance_field>("multichannel_signed_distance_field")
			.property<&FontFile::get_msdf_pixel_range, &FontFile::set_msdf_pixel_range>("msdf_pixel_range")
			.property<&FontFile::get_msdf_size, &FontFile::set_msdf_size>("msdf_size")
			.property<&FontFile::is_allow_system_fallback, &FontFile::set_allow_system_fallback>("allow_system_fallback")
			.property<&FontFile::is_force_autohinter, &FontFile::set_force_autohinter>("force_autohinter")
			.property<&FontFile::get_hinting, &FontFile::set_hinting>("hinting")
			.property<&FontFile::get_oversampling, &FontFile::set_oversampling>("oversampling")
			.property<&FontFile::get_fixed_size, &FontFile::set_fixed_size>("fixed_size")
			.property<&FontFile::get_fixed_size_scale_mode, &FontFile::set_fixed_size_scale_mode>("fixed_size_scale_mode")
			.property<&FontFile::get_opentype_feature_overrides, &FontFile::set_opentype_feature_overrides>("opentype_feature_overrides")
			.fun<static_cast<Error (FontFile::*)(const String &)>(&FontFile::load_bitmap_font)>("load_bitmap_font")
			.fun<static_cast<Error (FontFile::*)(const String &)>(&FontFile::load_dynamic_font)>("load_dynamic_font")
			.fun<static_cast<int32_t (FontFile::*)() const>(&FontFile::get_cache_count)>("get_cache_count")
			.fun<static_cast<void (FontFile::*)()>(&FontFile::clear_cache)>("clear_cache")
			.fun<static_cast<void (FontFile::*)(int32_t)>(&FontFile::remove_cache)>("remove_cache")
			.fun<static_cast<TypedArray<Vector2i> (FontFile::*)(int32_t) const>(&FontFile::get_size_cache_list)>("get_size_cache_list")
			.fun<static_cast<void (FontFile::*)(int32_t)>(&FontFile::clear_size_cache)>("clear_size_cache")
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &)>(&FontFile::remove_size_cache)>("remove_size_cache")
			.fun<static_cast<void (FontFile::*)(int32_t, const Dictionary &)>(&FontFile::set_variation_coordinates)>("set_variation_coordinates")
			.fun<static_cast<Dictionary (FontFile::*)(int32_t) const>(&FontFile::get_variation_coordinates)>("get_variation_coordinates")
			.fun<static_cast<void (FontFile::*)(int32_t, double)>(&FontFile::set_embolden)>("set_embolden")
			.fun<static_cast<double (FontFile::*)(int32_t) const>(&FontFile::get_embolden)>("get_embolden")
			.fun<static_cast<void (FontFile::*)(int32_t, const Transform2D &)>(&FontFile::set_transform)>("set_transform")
			.fun<static_cast<Transform2D (FontFile::*)(int32_t) const>(&FontFile::get_transform)>("get_transform")
			.fun<static_cast<void (FontFile::*)(int32_t, TextServer::SpacingType, int64_t)>(&FontFile::set_extra_spacing)>("set_extra_spacing")
			.fun<static_cast<int64_t (FontFile::*)(int32_t, TextServer::SpacingType) const>(&FontFile::get_extra_spacing)>("get_extra_spacing")
			.fun<static_cast<void (FontFile::*)(int32_t, int64_t)>(&FontFile::set_face_index)>("set_face_index")
			.fun<static_cast<int64_t (FontFile::*)(int32_t) const>(&FontFile::get_face_index)>("get_face_index")
			.fun<static_cast<void (FontFile::*)(int32_t, int32_t, double)>(&FontFile::set_cache_ascent)>("set_cache_ascent")
			.fun<static_cast<double (FontFile::*)(int32_t, int32_t) const>(&FontFile::get_cache_ascent)>("get_cache_ascent")
			.fun<static_cast<void (FontFile::*)(int32_t, int32_t, double)>(&FontFile::set_cache_descent)>("set_cache_descent")
			.fun<static_cast<double (FontFile::*)(int32_t, int32_t) const>(&FontFile::get_cache_descent)>("get_cache_descent")
			.fun<static_cast<void (FontFile::*)(int32_t, int32_t, double)>(&FontFile::set_cache_underline_position)>("set_cache_underline_position")
			.fun<static_cast<double (FontFile::*)(int32_t, int32_t) const>(&FontFile::get_cache_underline_position)>("get_cache_underline_position")
			.fun<static_cast<void (FontFile::*)(int32_t, int32_t, double)>(&FontFile::set_cache_underline_thickness)>("set_cache_underline_thickness")
			.fun<static_cast<double (FontFile::*)(int32_t, int32_t) const>(&FontFile::get_cache_underline_thickness)>("get_cache_underline_thickness")
			.fun<static_cast<void (FontFile::*)(int32_t, int32_t, double)>(&FontFile::set_cache_scale)>("set_cache_scale")
			.fun<static_cast<double (FontFile::*)(int32_t, int32_t) const>(&FontFile::get_cache_scale)>("get_cache_scale")
			.fun<static_cast<int32_t (FontFile::*)(int32_t, const Vector2i &) const>(&FontFile::get_texture_count)>("get_texture_count")
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &)>(&FontFile::clear_textures)>("clear_textures")
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int32_t)>(&FontFile::remove_texture)>("remove_texture")
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int32_t, const Ref<Image> &)>(&FontFile::set_texture_image)>("set_texture_image")
			.fun<static_cast<Ref<Image> (FontFile::*)(int32_t, const Vector2i &, int32_t) const>(&FontFile::get_texture_image)>("get_texture_image")
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int32_t, const PackedInt32Array &)>(&FontFile::set_texture_offsets)>("set_texture_offsets")
			.fun<static_cast<PackedInt32Array (FontFile::*)(int32_t, const Vector2i &, int32_t) const>(&FontFile::get_texture_offsets)>("get_texture_offsets")
			.fun<static_cast<PackedInt32Array (FontFile::*)(int32_t, const Vector2i &) const>(&FontFile::get_glyph_list)>("get_glyph_list")
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &)>(&FontFile::clear_glyphs)>("clear_glyphs")
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int32_t)>(&FontFile::remove_glyph)>("remove_glyph")
			.fun<static_cast<void (FontFile::*)(int32_t, int32_t, int32_t, const Vector2 &)>(&FontFile::set_glyph_advance)>("set_glyph_advance")
			.fun<static_cast<Vector2 (FontFile::*)(int32_t, int32_t, int32_t) const>(&FontFile::get_glyph_advance)>("get_glyph_advance")
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int32_t, const Vector2 &)>(&FontFile::set_glyph_offset)>("set_glyph_offset")
			.fun<static_cast<Vector2 (FontFile::*)(int32_t, const Vector2i &, int32_t) const>(&FontFile::get_glyph_offset)>("get_glyph_offset")
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int32_t, const Vector2 &)>(&FontFile::set_glyph_size)>("set_glyph_size")
			.fun<static_cast<Vector2 (FontFile::*)(int32_t, const Vector2i &, int32_t) const>(&FontFile::get_glyph_size)>("get_glyph_size")
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int32_t, const Rect2 &)>(&FontFile::set_glyph_uv_rect)>("set_glyph_uv_rect")
			.fun<static_cast<Rect2 (FontFile::*)(int32_t, const Vector2i &, int32_t) const>(&FontFile::get_glyph_uv_rect)>("get_glyph_uv_rect")
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int32_t, int32_t)>(&FontFile::set_glyph_texture_idx)>("set_glyph_texture_idx")
			.fun<static_cast<int32_t (FontFile::*)(int32_t, const Vector2i &, int32_t) const>(&FontFile::get_glyph_texture_idx)>("get_glyph_texture_idx")
			.fun<static_cast<TypedArray<Vector2i> (FontFile::*)(int32_t, int32_t) const>(&FontFile::get_kerning_list)>("get_kerning_list")
			.fun<static_cast<void (FontFile::*)(int32_t, int32_t)>(&FontFile::clear_kerning_map)>("clear_kerning_map")
			.fun<static_cast<void (FontFile::*)(int32_t, int32_t, const Vector2i &)>(&FontFile::remove_kerning)>("remove_kerning")
			.fun<static_cast<void (FontFile::*)(int32_t, int32_t, const Vector2i &, const Vector2 &)>(&FontFile::set_kerning)>("set_kerning")
			.fun<static_cast<Vector2 (FontFile::*)(int32_t, int32_t, const Vector2i &) const>(&FontFile::get_kerning)>("get_kerning")
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int64_t, int64_t)>(&FontFile::render_range)>("render_range")
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int32_t)>(&FontFile::render_glyph)>("render_glyph")
			.fun<static_cast<void (FontFile::*)(const String &, bool)>(&FontFile::set_language_support_override)>("set_language_support_override")
			.fun<static_cast<bool (FontFile::*)(const String &) const>(&FontFile::get_language_support_override)>("get_language_support_override")
			.fun<static_cast<void (FontFile::*)(const String &)>(&FontFile::remove_language_support_override)>("remove_language_support_override")
			.fun<static_cast<PackedStringArray (FontFile::*)() const>(&FontFile::get_language_support_overrides)>("get_language_support_overrides")
			.fun<static_cast<void (FontFile::*)(const String &, bool)>(&FontFile::set_script_support_override)>("set_script_support_override")
			.fun<static_cast<bool (FontFile::*)(const String &) const>(&FontFile::get_script_support_override)>("get_script_support_override")
			.fun<static_cast<void (FontFile::*)(const String &)>(&FontFile::remove_script_support_override)>("remove_script_support_override")
			.fun<static_cast<PackedStringArray (FontFile::*)() const>(&FontFile::get_script_support_overrides)>("get_script_support_overrides")
			.fun<static_cast<int32_t (FontFile::*)(int32_t, int64_t, int64_t) const>(&FontFile::get_glyph_index)>("get_glyph_index")
			.fun<static_cast<int64_t (FontFile::*)(int32_t, int32_t) const>(&FontFile::get_char_from_glyph_index)>("get_char_from_glyph_index");
}