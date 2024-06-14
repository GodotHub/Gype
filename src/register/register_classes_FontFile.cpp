
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/font_file.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_FontFile() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<FontFile>("FontFile")
			.constructor<>()
			.base<Font>()
			.property<static_cast<PackedByteArray (FontFile::*)() const>(&FontFile::get_data), static_cast<void (FontFile::*)(const PackedByteArray &)>(&FontFile::set_data)>((new std::string("data"))->c_str())
			.property<static_cast<bool (FontFile::*)() const>(&FontFile::get_generate_mipmaps), static_cast<void (FontFile::*)(bool)>(&FontFile::set_generate_mipmaps)>((new std::string("generate_mipmaps"))->c_str())
			.property<static_cast<bool (FontFile::*)() const>(&FontFile::get_disable_embedded_bitmaps), static_cast<void (FontFile::*)(bool)>(&FontFile::set_disable_embedded_bitmaps)>((new std::string("disable_embedded_bitmaps"))->c_str())
			.property<static_cast<TextServer::FontAntialiasing (FontFile::*)() const>(&FontFile::get_antialiasing), static_cast<void (FontFile::*)(TextServer::FontAntialiasing)>(&FontFile::set_antialiasing)>((new std::string("antialiasing"))->c_str())
			.property<static_cast<void (FontFile::*)(const String &)>(&FontFile::set_font_name)>((new std::string("{'name': 'set_font_name', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 83702148, 'arguments': [{'name': 'name', 'type': 'String'}]}"))->c_str())
			.property<static_cast<void (FontFile::*)(const String &)>(&FontFile::set_font_style_name)>((new std::string("{'name': 'set_font_style_name', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 83702148, 'arguments': [{'name': 'name', 'type': 'String'}]}"))->c_str())
			.property<static_cast<void (FontFile::*)(BitField<TextServer::FontStyle>)>(&FontFile::set_font_style)>((new std::string("{'name': 'set_font_style', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 918070724, 'arguments': [{'name': 'style', 'type': 'bitfield::TextServer.FontStyle'}]}"))->c_str())
			.property<static_cast<void (FontFile::*)(int32_t)>(&FontFile::set_font_weight)>((new std::string("{'name': 'set_font_weight', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'weight', 'type': 'int', 'meta': 'int32_t'}]}"))->c_str())
			.property<static_cast<void (FontFile::*)(int32_t)>(&FontFile::set_font_stretch)>((new std::string("{'name': 'set_font_stretch', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'stretch', 'type': 'int', 'meta': 'int32_t'}]}"))->c_str())
			.property<static_cast<TextServer::SubpixelPositioning (FontFile::*)() const>(&FontFile::get_subpixel_positioning), static_cast<void (FontFile::*)(TextServer::SubpixelPositioning)>(&FontFile::set_subpixel_positioning)>((new std::string("subpixel_positioning"))->c_str())
			.property<static_cast<bool (FontFile::*)() const>(&FontFile::is_multichannel_signed_distance_field), static_cast<void (FontFile::*)(bool)>(&FontFile::set_multichannel_signed_distance_field)>((new std::string("multichannel_signed_distance_field"))->c_str())
			.property<static_cast<int32_t (FontFile::*)() const>(&FontFile::get_msdf_pixel_range), static_cast<void (FontFile::*)(int32_t)>(&FontFile::set_msdf_pixel_range)>((new std::string("msdf_pixel_range"))->c_str())
			.property<static_cast<int32_t (FontFile::*)() const>(&FontFile::get_msdf_size), static_cast<void (FontFile::*)(int32_t)>(&FontFile::set_msdf_size)>((new std::string("msdf_size"))->c_str())
			.property<static_cast<bool (FontFile::*)() const>(&FontFile::is_allow_system_fallback), static_cast<void (FontFile::*)(bool)>(&FontFile::set_allow_system_fallback)>((new std::string("allow_system_fallback"))->c_str())
			.property<static_cast<bool (FontFile::*)() const>(&FontFile::is_force_autohinter), static_cast<void (FontFile::*)(bool)>(&FontFile::set_force_autohinter)>((new std::string("force_autohinter"))->c_str())
			.property<static_cast<TextServer::Hinting (FontFile::*)() const>(&FontFile::get_hinting), static_cast<void (FontFile::*)(TextServer::Hinting)>(&FontFile::set_hinting)>((new std::string("hinting"))->c_str())
			.property<static_cast<double (FontFile::*)() const>(&FontFile::get_oversampling), static_cast<void (FontFile::*)(double)>(&FontFile::set_oversampling)>((new std::string("oversampling"))->c_str())
			.property<static_cast<int32_t (FontFile::*)() const>(&FontFile::get_fixed_size), static_cast<void (FontFile::*)(int32_t)>(&FontFile::set_fixed_size)>((new std::string("fixed_size"))->c_str())
			.property<static_cast<TextServer::FixedSizeScaleMode (FontFile::*)() const>(&FontFile::get_fixed_size_scale_mode), static_cast<void (FontFile::*)(TextServer::FixedSizeScaleMode)>(&FontFile::set_fixed_size_scale_mode)>((new std::string("fixed_size_scale_mode"))->c_str())
			.property<static_cast<Dictionary (FontFile::*)() const>(&FontFile::get_opentype_feature_overrides), static_cast<void (FontFile::*)(const Dictionary &)>(&FontFile::set_opentype_feature_overrides)>((new std::string("opentype_feature_overrides"))->c_str())
			.fun<static_cast<Error (FontFile::*)(const String &)>(&FontFile::load_bitmap_font)>((new std::string("load_bitmap_font"))->c_str())
			.fun<static_cast<Error (FontFile::*)(const String &)>(&FontFile::load_dynamic_font)>((new std::string("load_dynamic_font"))->c_str())
			.fun<static_cast<int32_t (FontFile::*)() const>(&FontFile::get_cache_count)>((new std::string("get_cache_count"))->c_str())
			.fun<static_cast<void (FontFile::*)()>(&FontFile::clear_cache)>((new std::string("clear_cache"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t)>(&FontFile::remove_cache)>((new std::string("remove_cache"))->c_str())
			.fun<static_cast<TypedArray<Vector2i> (FontFile::*)(int32_t) const>(&FontFile::get_size_cache_list)>((new std::string("get_size_cache_list"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t)>(&FontFile::clear_size_cache)>((new std::string("clear_size_cache"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &)>(&FontFile::remove_size_cache)>((new std::string("remove_size_cache"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, const Dictionary &)>(&FontFile::set_variation_coordinates)>((new std::string("set_variation_coordinates"))->c_str())
			.fun<static_cast<Dictionary (FontFile::*)(int32_t) const>(&FontFile::get_variation_coordinates)>((new std::string("get_variation_coordinates"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, double)>(&FontFile::set_embolden)>((new std::string("set_embolden"))->c_str())
			.fun<static_cast<double (FontFile::*)(int32_t) const>(&FontFile::get_embolden)>((new std::string("get_embolden"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, const Transform2D &)>(&FontFile::set_transform)>((new std::string("set_transform"))->c_str())
			.fun<static_cast<Transform2D (FontFile::*)(int32_t) const>(&FontFile::get_transform)>((new std::string("get_transform"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, TextServer::SpacingType, int64_t)>(&FontFile::set_extra_spacing)>((new std::string("set_extra_spacing"))->c_str())
			.fun<static_cast<int64_t (FontFile::*)(int32_t, TextServer::SpacingType) const>(&FontFile::get_extra_spacing)>((new std::string("get_extra_spacing"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, double)>(&FontFile::set_extra_baseline_offset)>((new std::string("set_extra_baseline_offset"))->c_str())
			.fun<static_cast<double (FontFile::*)(int32_t) const>(&FontFile::get_extra_baseline_offset)>((new std::string("get_extra_baseline_offset"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, int64_t)>(&FontFile::set_face_index)>((new std::string("set_face_index"))->c_str())
			.fun<static_cast<int64_t (FontFile::*)(int32_t) const>(&FontFile::get_face_index)>((new std::string("get_face_index"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, int32_t, double)>(&FontFile::set_cache_ascent)>((new std::string("set_cache_ascent"))->c_str())
			.fun<static_cast<double (FontFile::*)(int32_t, int32_t) const>(&FontFile::get_cache_ascent)>((new std::string("get_cache_ascent"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, int32_t, double)>(&FontFile::set_cache_descent)>((new std::string("set_cache_descent"))->c_str())
			.fun<static_cast<double (FontFile::*)(int32_t, int32_t) const>(&FontFile::get_cache_descent)>((new std::string("get_cache_descent"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, int32_t, double)>(&FontFile::set_cache_underline_position)>((new std::string("set_cache_underline_position"))->c_str())
			.fun<static_cast<double (FontFile::*)(int32_t, int32_t) const>(&FontFile::get_cache_underline_position)>((new std::string("get_cache_underline_position"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, int32_t, double)>(&FontFile::set_cache_underline_thickness)>((new std::string("set_cache_underline_thickness"))->c_str())
			.fun<static_cast<double (FontFile::*)(int32_t, int32_t) const>(&FontFile::get_cache_underline_thickness)>((new std::string("get_cache_underline_thickness"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, int32_t, double)>(&FontFile::set_cache_scale)>((new std::string("set_cache_scale"))->c_str())
			.fun<static_cast<double (FontFile::*)(int32_t, int32_t) const>(&FontFile::get_cache_scale)>((new std::string("get_cache_scale"))->c_str())
			.fun<static_cast<int32_t (FontFile::*)(int32_t, const Vector2i &) const>(&FontFile::get_texture_count)>((new std::string("get_texture_count"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &)>(&FontFile::clear_textures)>((new std::string("clear_textures"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int32_t)>(&FontFile::remove_texture)>((new std::string("remove_texture"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int32_t, const Ref<Image> &)>(&FontFile::set_texture_image)>((new std::string("set_texture_image"))->c_str())
			.fun<static_cast<Ref<Image> (FontFile::*)(int32_t, const Vector2i &, int32_t) const>(&FontFile::get_texture_image)>((new std::string("get_texture_image"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int32_t, const PackedInt32Array &)>(&FontFile::set_texture_offsets)>((new std::string("set_texture_offsets"))->c_str())
			.fun<static_cast<PackedInt32Array (FontFile::*)(int32_t, const Vector2i &, int32_t) const>(&FontFile::get_texture_offsets)>((new std::string("get_texture_offsets"))->c_str())
			.fun<static_cast<PackedInt32Array (FontFile::*)(int32_t, const Vector2i &) const>(&FontFile::get_glyph_list)>((new std::string("get_glyph_list"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &)>(&FontFile::clear_glyphs)>((new std::string("clear_glyphs"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int32_t)>(&FontFile::remove_glyph)>((new std::string("remove_glyph"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, int32_t, int32_t, const Vector2 &)>(&FontFile::set_glyph_advance)>((new std::string("set_glyph_advance"))->c_str())
			.fun<static_cast<Vector2 (FontFile::*)(int32_t, int32_t, int32_t) const>(&FontFile::get_glyph_advance)>((new std::string("get_glyph_advance"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int32_t, const Vector2 &)>(&FontFile::set_glyph_offset)>((new std::string("set_glyph_offset"))->c_str())
			.fun<static_cast<Vector2 (FontFile::*)(int32_t, const Vector2i &, int32_t) const>(&FontFile::get_glyph_offset)>((new std::string("get_glyph_offset"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int32_t, const Vector2 &)>(&FontFile::set_glyph_size)>((new std::string("set_glyph_size"))->c_str())
			.fun<static_cast<Vector2 (FontFile::*)(int32_t, const Vector2i &, int32_t) const>(&FontFile::get_glyph_size)>((new std::string("get_glyph_size"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int32_t, const Rect2 &)>(&FontFile::set_glyph_uv_rect)>((new std::string("set_glyph_uv_rect"))->c_str())
			.fun<static_cast<Rect2 (FontFile::*)(int32_t, const Vector2i &, int32_t) const>(&FontFile::get_glyph_uv_rect)>((new std::string("get_glyph_uv_rect"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int32_t, int32_t)>(&FontFile::set_glyph_texture_idx)>((new std::string("set_glyph_texture_idx"))->c_str())
			.fun<static_cast<int32_t (FontFile::*)(int32_t, const Vector2i &, int32_t) const>(&FontFile::get_glyph_texture_idx)>((new std::string("get_glyph_texture_idx"))->c_str())
			.fun<static_cast<TypedArray<Vector2i> (FontFile::*)(int32_t, int32_t) const>(&FontFile::get_kerning_list)>((new std::string("get_kerning_list"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, int32_t)>(&FontFile::clear_kerning_map)>((new std::string("clear_kerning_map"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, int32_t, const Vector2i &)>(&FontFile::remove_kerning)>((new std::string("remove_kerning"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, int32_t, const Vector2i &, const Vector2 &)>(&FontFile::set_kerning)>((new std::string("set_kerning"))->c_str())
			.fun<static_cast<Vector2 (FontFile::*)(int32_t, int32_t, const Vector2i &) const>(&FontFile::get_kerning)>((new std::string("get_kerning"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int64_t, int64_t)>(&FontFile::render_range)>((new std::string("render_range"))->c_str())
			.fun<static_cast<void (FontFile::*)(int32_t, const Vector2i &, int32_t)>(&FontFile::render_glyph)>((new std::string("render_glyph"))->c_str())
			.fun<static_cast<void (FontFile::*)(const String &, bool)>(&FontFile::set_language_support_override)>((new std::string("set_language_support_override"))->c_str())
			.fun<static_cast<bool (FontFile::*)(const String &) const>(&FontFile::get_language_support_override)>((new std::string("get_language_support_override"))->c_str())
			.fun<static_cast<void (FontFile::*)(const String &)>(&FontFile::remove_language_support_override)>((new std::string("remove_language_support_override"))->c_str())
			.fun<static_cast<PackedStringArray (FontFile::*)() const>(&FontFile::get_language_support_overrides)>((new std::string("get_language_support_overrides"))->c_str())
			.fun<static_cast<void (FontFile::*)(const String &, bool)>(&FontFile::set_script_support_override)>((new std::string("set_script_support_override"))->c_str())
			.fun<static_cast<bool (FontFile::*)(const String &) const>(&FontFile::get_script_support_override)>((new std::string("get_script_support_override"))->c_str())
			.fun<static_cast<void (FontFile::*)(const String &)>(&FontFile::remove_script_support_override)>((new std::string("remove_script_support_override"))->c_str())
			.fun<static_cast<PackedStringArray (FontFile::*)() const>(&FontFile::get_script_support_overrides)>((new std::string("get_script_support_overrides"))->c_str())
			.fun<static_cast<int32_t (FontFile::*)(int32_t, int64_t, int64_t) const>(&FontFile::get_glyph_index)>((new std::string("get_glyph_index"))->c_str())
			.fun<static_cast<int64_t (FontFile::*)(int32_t, int32_t) const>(&FontFile::get_char_from_glyph_index)>((new std::string("get_char_from_glyph_index"))->c_str());
}