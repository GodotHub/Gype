
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/variant/vector3i.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TextServer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TextServer>("TextServer")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<bool (TextServer::*)(TextServer::Feature) const>(&TextServer::has_feature)>((new std::string("has_feature"))->c_str())
			.fun<static_cast<String (TextServer::*)() const>(&TextServer::get_name)>((new std::string("get_name"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)() const>(&TextServer::get_features)>((new std::string("get_features"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const String &)>(&TextServer::load_support_data)>((new std::string("load_support_data"))->c_str())
			.fun<static_cast<String (TextServer::*)() const>(&TextServer::get_support_data_filename)>((new std::string("get_support_data_filename"))->c_str())
			.fun<static_cast<String (TextServer::*)() const>(&TextServer::get_support_data_info)>((new std::string("get_support_data_info"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const String &) const>(&TextServer::save_support_data)>((new std::string("save_support_data"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const String &) const>(&TextServer::is_locale_right_to_left)>((new std::string("is_locale_right_to_left"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const String &) const>(&TextServer::name_to_tag)>((new std::string("name_to_tag"))->c_str())
			.fun<static_cast<String (TextServer::*)(int64_t) const>(&TextServer::tag_to_name)>((new std::string("tag_to_name"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const RID &)>(&TextServer::has)>((new std::string("has"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &)>(&TextServer::free_rid)>((new std::string("free_rid"))->c_str())
			.fun<static_cast<RID (TextServer::*)()>(&TextServer::create_font)>((new std::string("create_font"))->c_str())
			.fun<static_cast<RID (TextServer::*)(const RID &)>(&TextServer::create_font_linked_variation)>((new std::string("create_font_linked_variation"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const PackedByteArray &)>(&TextServer::font_set_data)>((new std::string("font_set_data"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, int64_t)>(&TextServer::font_set_face_index)>((new std::string("font_set_face_index"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &) const>(&TextServer::font_get_face_index)>((new std::string("font_get_face_index"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &) const>(&TextServer::font_get_face_count)>((new std::string("font_get_face_count"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, BitField<TextServer::FontStyle>)>(&TextServer::font_set_style)>((new std::string("font_set_style"))->c_str())
			.fun<static_cast<BitField<TextServer::FontStyle> (TextServer::*)(const RID &) const>(&TextServer::font_get_style)>((new std::string("font_get_style"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const String &)>(&TextServer::font_set_name)>((new std::string("font_set_name"))->c_str())
			.fun<static_cast<String (TextServer::*)(const RID &) const>(&TextServer::font_get_name)>((new std::string("font_get_name"))->c_str())
			.fun<static_cast<Dictionary (TextServer::*)(const RID &) const>(&TextServer::font_get_ot_name_strings)>((new std::string("font_get_ot_name_strings"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const String &)>(&TextServer::font_set_style_name)>((new std::string("font_set_style_name"))->c_str())
			.fun<static_cast<String (TextServer::*)(const RID &) const>(&TextServer::font_get_style_name)>((new std::string("font_get_style_name"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, int64_t)>(&TextServer::font_set_weight)>((new std::string("font_set_weight"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &) const>(&TextServer::font_get_weight)>((new std::string("font_get_weight"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, int64_t)>(&TextServer::font_set_stretch)>((new std::string("font_set_stretch"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &) const>(&TextServer::font_get_stretch)>((new std::string("font_get_stretch"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, TextServer::FontAntialiasing)>(&TextServer::font_set_antialiasing)>((new std::string("font_set_antialiasing"))->c_str())
			.fun<static_cast<TextServer::FontAntialiasing (TextServer::*)(const RID &) const>(&TextServer::font_get_antialiasing)>((new std::string("font_get_antialiasing"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, bool)>(&TextServer::font_set_disable_embedded_bitmaps)>((new std::string("font_set_disable_embedded_bitmaps"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const RID &) const>(&TextServer::font_get_disable_embedded_bitmaps)>((new std::string("font_get_disable_embedded_bitmaps"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, bool)>(&TextServer::font_set_generate_mipmaps)>((new std::string("font_set_generate_mipmaps"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const RID &) const>(&TextServer::font_get_generate_mipmaps)>((new std::string("font_get_generate_mipmaps"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, bool)>(&TextServer::font_set_multichannel_signed_distance_field)>((new std::string("font_set_multichannel_signed_distance_field"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const RID &) const>(&TextServer::font_is_multichannel_signed_distance_field)>((new std::string("font_is_multichannel_signed_distance_field"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, int64_t)>(&TextServer::font_set_msdf_pixel_range)>((new std::string("font_set_msdf_pixel_range"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &) const>(&TextServer::font_get_msdf_pixel_range)>((new std::string("font_get_msdf_pixel_range"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, int64_t)>(&TextServer::font_set_msdf_size)>((new std::string("font_set_msdf_size"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &) const>(&TextServer::font_get_msdf_size)>((new std::string("font_get_msdf_size"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, int64_t)>(&TextServer::font_set_fixed_size)>((new std::string("font_set_fixed_size"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &) const>(&TextServer::font_get_fixed_size)>((new std::string("font_get_fixed_size"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, TextServer::FixedSizeScaleMode)>(&TextServer::font_set_fixed_size_scale_mode)>((new std::string("font_set_fixed_size_scale_mode"))->c_str())
			.fun<static_cast<TextServer::FixedSizeScaleMode (TextServer::*)(const RID &) const>(&TextServer::font_get_fixed_size_scale_mode)>((new std::string("font_get_fixed_size_scale_mode"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, bool)>(&TextServer::font_set_allow_system_fallback)>((new std::string("font_set_allow_system_fallback"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const RID &) const>(&TextServer::font_is_allow_system_fallback)>((new std::string("font_is_allow_system_fallback"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, bool)>(&TextServer::font_set_force_autohinter)>((new std::string("font_set_force_autohinter"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const RID &) const>(&TextServer::font_is_force_autohinter)>((new std::string("font_is_force_autohinter"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, TextServer::Hinting)>(&TextServer::font_set_hinting)>((new std::string("font_set_hinting"))->c_str())
			.fun<static_cast<TextServer::Hinting (TextServer::*)(const RID &) const>(&TextServer::font_get_hinting)>((new std::string("font_get_hinting"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, TextServer::SubpixelPositioning)>(&TextServer::font_set_subpixel_positioning)>((new std::string("font_set_subpixel_positioning"))->c_str())
			.fun<static_cast<TextServer::SubpixelPositioning (TextServer::*)(const RID &) const>(&TextServer::font_get_subpixel_positioning)>((new std::string("font_get_subpixel_positioning"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, double)>(&TextServer::font_set_embolden)>((new std::string("font_set_embolden"))->c_str())
			.fun<static_cast<double (TextServer::*)(const RID &) const>(&TextServer::font_get_embolden)>((new std::string("font_get_embolden"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, TextServer::SpacingType, int64_t)>(&TextServer::font_set_spacing)>((new std::string("font_set_spacing"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &, TextServer::SpacingType) const>(&TextServer::font_get_spacing)>((new std::string("font_get_spacing"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, double)>(&TextServer::font_set_baseline_offset)>((new std::string("font_set_baseline_offset"))->c_str())
			.fun<static_cast<double (TextServer::*)(const RID &) const>(&TextServer::font_get_baseline_offset)>((new std::string("font_get_baseline_offset"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const Transform2D &)>(&TextServer::font_set_transform)>((new std::string("font_set_transform"))->c_str())
			.fun<static_cast<Transform2D (TextServer::*)(const RID &) const>(&TextServer::font_get_transform)>((new std::string("font_get_transform"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const Dictionary &)>(&TextServer::font_set_variation_coordinates)>((new std::string("font_set_variation_coordinates"))->c_str())
			.fun<static_cast<Dictionary (TextServer::*)(const RID &) const>(&TextServer::font_get_variation_coordinates)>((new std::string("font_get_variation_coordinates"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, double)>(&TextServer::font_set_oversampling)>((new std::string("font_set_oversampling"))->c_str())
			.fun<static_cast<double (TextServer::*)(const RID &) const>(&TextServer::font_get_oversampling)>((new std::string("font_get_oversampling"))->c_str())
			.fun<static_cast<TypedArray<Vector2i> (TextServer::*)(const RID &) const>(&TextServer::font_get_size_cache_list)>((new std::string("font_get_size_cache_list"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &)>(&TextServer::font_clear_size_cache)>((new std::string("font_clear_size_cache"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const Vector2i &)>(&TextServer::font_remove_size_cache)>((new std::string("font_remove_size_cache"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, int64_t, double)>(&TextServer::font_set_ascent)>((new std::string("font_set_ascent"))->c_str())
			.fun<static_cast<double (TextServer::*)(const RID &, int64_t) const>(&TextServer::font_get_ascent)>((new std::string("font_get_ascent"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, int64_t, double)>(&TextServer::font_set_descent)>((new std::string("font_set_descent"))->c_str())
			.fun<static_cast<double (TextServer::*)(const RID &, int64_t) const>(&TextServer::font_get_descent)>((new std::string("font_get_descent"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, int64_t, double)>(&TextServer::font_set_underline_position)>((new std::string("font_set_underline_position"))->c_str())
			.fun<static_cast<double (TextServer::*)(const RID &, int64_t) const>(&TextServer::font_get_underline_position)>((new std::string("font_get_underline_position"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, int64_t, double)>(&TextServer::font_set_underline_thickness)>((new std::string("font_set_underline_thickness"))->c_str())
			.fun<static_cast<double (TextServer::*)(const RID &, int64_t) const>(&TextServer::font_get_underline_thickness)>((new std::string("font_get_underline_thickness"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, int64_t, double)>(&TextServer::font_set_scale)>((new std::string("font_set_scale"))->c_str())
			.fun<static_cast<double (TextServer::*)(const RID &, int64_t) const>(&TextServer::font_get_scale)>((new std::string("font_get_scale"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &, const Vector2i &) const>(&TextServer::font_get_texture_count)>((new std::string("font_get_texture_count"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const Vector2i &)>(&TextServer::font_clear_textures)>((new std::string("font_clear_textures"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const Vector2i &, int64_t)>(&TextServer::font_remove_texture)>((new std::string("font_remove_texture"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const Vector2i &, int64_t, const Ref<Image> &)>(&TextServer::font_set_texture_image)>((new std::string("font_set_texture_image"))->c_str())
			.fun<static_cast<Ref<Image> (TextServer::*)(const RID &, const Vector2i &, int64_t) const>(&TextServer::font_get_texture_image)>((new std::string("font_get_texture_image"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const Vector2i &, int64_t, const PackedInt32Array &)>(&TextServer::font_set_texture_offsets)>((new std::string("font_set_texture_offsets"))->c_str())
			.fun<static_cast<PackedInt32Array (TextServer::*)(const RID &, const Vector2i &, int64_t) const>(&TextServer::font_get_texture_offsets)>((new std::string("font_get_texture_offsets"))->c_str())
			.fun<static_cast<PackedInt32Array (TextServer::*)(const RID &, const Vector2i &) const>(&TextServer::font_get_glyph_list)>((new std::string("font_get_glyph_list"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const Vector2i &)>(&TextServer::font_clear_glyphs)>((new std::string("font_clear_glyphs"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const Vector2i &, int64_t)>(&TextServer::font_remove_glyph)>((new std::string("font_remove_glyph"))->c_str())
			.fun<static_cast<Vector2 (TextServer::*)(const RID &, int64_t, int64_t) const>(&TextServer::font_get_glyph_advance)>((new std::string("font_get_glyph_advance"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, int64_t, int64_t, const Vector2 &)>(&TextServer::font_set_glyph_advance)>((new std::string("font_set_glyph_advance"))->c_str())
			.fun<static_cast<Vector2 (TextServer::*)(const RID &, const Vector2i &, int64_t) const>(&TextServer::font_get_glyph_offset)>((new std::string("font_get_glyph_offset"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const Vector2i &, int64_t, const Vector2 &)>(&TextServer::font_set_glyph_offset)>((new std::string("font_set_glyph_offset"))->c_str())
			.fun<static_cast<Vector2 (TextServer::*)(const RID &, const Vector2i &, int64_t) const>(&TextServer::font_get_glyph_size)>((new std::string("font_get_glyph_size"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const Vector2i &, int64_t, const Vector2 &)>(&TextServer::font_set_glyph_size)>((new std::string("font_set_glyph_size"))->c_str())
			.fun<static_cast<Rect2 (TextServer::*)(const RID &, const Vector2i &, int64_t) const>(&TextServer::font_get_glyph_uv_rect)>((new std::string("font_get_glyph_uv_rect"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const Vector2i &, int64_t, const Rect2 &)>(&TextServer::font_set_glyph_uv_rect)>((new std::string("font_set_glyph_uv_rect"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &, const Vector2i &, int64_t) const>(&TextServer::font_get_glyph_texture_idx)>((new std::string("font_get_glyph_texture_idx"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const Vector2i &, int64_t, int64_t)>(&TextServer::font_set_glyph_texture_idx)>((new std::string("font_set_glyph_texture_idx"))->c_str())
			.fun<static_cast<RID (TextServer::*)(const RID &, const Vector2i &, int64_t) const>(&TextServer::font_get_glyph_texture_rid)>((new std::string("font_get_glyph_texture_rid"))->c_str())
			.fun<static_cast<Vector2 (TextServer::*)(const RID &, const Vector2i &, int64_t) const>(&TextServer::font_get_glyph_texture_size)>((new std::string("font_get_glyph_texture_size"))->c_str())
			.fun<static_cast<Dictionary (TextServer::*)(const RID &, int64_t, int64_t) const>(&TextServer::font_get_glyph_contours)>((new std::string("font_get_glyph_contours"))->c_str())
			.fun<static_cast<TypedArray<Vector2i> (TextServer::*)(const RID &, int64_t) const>(&TextServer::font_get_kerning_list)>((new std::string("font_get_kerning_list"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, int64_t)>(&TextServer::font_clear_kerning_map)>((new std::string("font_clear_kerning_map"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, int64_t, const Vector2i &)>(&TextServer::font_remove_kerning)>((new std::string("font_remove_kerning"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, int64_t, const Vector2i &, const Vector2 &)>(&TextServer::font_set_kerning)>((new std::string("font_set_kerning"))->c_str())
			.fun<static_cast<Vector2 (TextServer::*)(const RID &, int64_t, const Vector2i &) const>(&TextServer::font_get_kerning)>((new std::string("font_get_kerning"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &, int64_t, int64_t, int64_t) const>(&TextServer::font_get_glyph_index)>((new std::string("font_get_glyph_index"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &, int64_t, int64_t) const>(&TextServer::font_get_char_from_glyph_index)>((new std::string("font_get_char_from_glyph_index"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const RID &, int64_t) const>(&TextServer::font_has_char)>((new std::string("font_has_char"))->c_str())
			.fun<static_cast<String (TextServer::*)(const RID &) const>(&TextServer::font_get_supported_chars)>((new std::string("font_get_supported_chars"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const Vector2i &, int64_t, int64_t)>(&TextServer::font_render_range)>((new std::string("font_render_range"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const Vector2i &, int64_t)>(&TextServer::font_render_glyph)>((new std::string("font_render_glyph"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const RID &, int64_t, const Vector2 &, int64_t, const Color &) const>(&TextServer::font_draw_glyph)>((new std::string("font_draw_glyph"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const RID &, int64_t, int64_t, const Vector2 &, int64_t, const Color &) const>(&TextServer::font_draw_glyph_outline)>((new std::string("font_draw_glyph_outline"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const RID &, const String &) const>(&TextServer::font_is_language_supported)>((new std::string("font_is_language_supported"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const String &, bool)>(&TextServer::font_set_language_support_override)>((new std::string("font_set_language_support_override"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const RID &, const String &)>(&TextServer::font_get_language_support_override)>((new std::string("font_get_language_support_override"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const String &)>(&TextServer::font_remove_language_support_override)>((new std::string("font_remove_language_support_override"))->c_str())
			.fun<static_cast<PackedStringArray (TextServer::*)(const RID &)>(&TextServer::font_get_language_support_overrides)>((new std::string("font_get_language_support_overrides"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const RID &, const String &) const>(&TextServer::font_is_script_supported)>((new std::string("font_is_script_supported"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const String &, bool)>(&TextServer::font_set_script_support_override)>((new std::string("font_set_script_support_override"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const RID &, const String &)>(&TextServer::font_get_script_support_override)>((new std::string("font_get_script_support_override"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const String &)>(&TextServer::font_remove_script_support_override)>((new std::string("font_remove_script_support_override"))->c_str())
			.fun<static_cast<PackedStringArray (TextServer::*)(const RID &)>(&TextServer::font_get_script_support_overrides)>((new std::string("font_get_script_support_overrides"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const Dictionary &)>(&TextServer::font_set_opentype_feature_overrides)>((new std::string("font_set_opentype_feature_overrides"))->c_str())
			.fun<static_cast<Dictionary (TextServer::*)(const RID &) const>(&TextServer::font_get_opentype_feature_overrides)>((new std::string("font_get_opentype_feature_overrides"))->c_str())
			.fun<static_cast<Dictionary (TextServer::*)(const RID &) const>(&TextServer::font_supported_feature_list)>((new std::string("font_supported_feature_list"))->c_str())
			.fun<static_cast<Dictionary (TextServer::*)(const RID &) const>(&TextServer::font_supported_variation_list)>((new std::string("font_supported_variation_list"))->c_str())
			.fun<static_cast<double (TextServer::*)() const>(&TextServer::font_get_global_oversampling)>((new std::string("font_get_global_oversampling"))->c_str())
			.fun<static_cast<void (TextServer::*)(double)>(&TextServer::font_set_global_oversampling)>((new std::string("font_set_global_oversampling"))->c_str())
			.fun<static_cast<Vector2 (TextServer::*)(int64_t, int64_t) const>(&TextServer::get_hex_code_box_size)>((new std::string("get_hex_code_box_size"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, int64_t, const Vector2 &, int64_t, const Color &) const>(&TextServer::draw_hex_code_box)>((new std::string("draw_hex_code_box"))->c_str())
			.fun<static_cast<RID (TextServer::*)(TextServer::Direction, TextServer::Orientation)>(&TextServer::create_shaped_text)>((new std::string("create_shaped_text"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &)>(&TextServer::shaped_text_clear)>((new std::string("shaped_text_clear"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, TextServer::Direction)>(&TextServer::shaped_text_set_direction)>((new std::string("shaped_text_set_direction"))->c_str())
			.fun<static_cast<TextServer::Direction (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_direction)>((new std::string("shaped_text_get_direction"))->c_str())
			.fun<static_cast<TextServer::Direction (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_inferred_direction)>((new std::string("shaped_text_get_inferred_direction"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const Array &)>(&TextServer::shaped_text_set_bidi_override)>((new std::string("shaped_text_set_bidi_override"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const String &)>(&TextServer::shaped_text_set_custom_punctuation)>((new std::string("shaped_text_set_custom_punctuation"))->c_str())
			.fun<static_cast<String (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_custom_punctuation)>((new std::string("shaped_text_get_custom_punctuation"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, int64_t)>(&TextServer::shaped_text_set_custom_ellipsis)>((new std::string("shaped_text_set_custom_ellipsis"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_custom_ellipsis)>((new std::string("shaped_text_get_custom_ellipsis"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, TextServer::Orientation)>(&TextServer::shaped_text_set_orientation)>((new std::string("shaped_text_set_orientation"))->c_str())
			.fun<static_cast<TextServer::Orientation (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_orientation)>((new std::string("shaped_text_get_orientation"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, bool)>(&TextServer::shaped_text_set_preserve_invalid)>((new std::string("shaped_text_set_preserve_invalid"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_preserve_invalid)>((new std::string("shaped_text_get_preserve_invalid"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, bool)>(&TextServer::shaped_text_set_preserve_control)>((new std::string("shaped_text_set_preserve_control"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_preserve_control)>((new std::string("shaped_text_get_preserve_control"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, TextServer::SpacingType, int64_t)>(&TextServer::shaped_text_set_spacing)>((new std::string("shaped_text_set_spacing"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &, TextServer::SpacingType) const>(&TextServer::shaped_text_get_spacing)>((new std::string("shaped_text_get_spacing"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const RID &, const String &, const TypedArray<RID> &, int64_t, const Dictionary &, const String &, const Variant &)>(&TextServer::shaped_text_add_string)>((new std::string("shaped_text_add_string"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const RID &, const Variant &, const Vector2 &, InlineAlignment, int64_t, double)>(&TextServer::shaped_text_add_object)>((new std::string("shaped_text_add_object"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const RID &, const Variant &, const Vector2 &, InlineAlignment, double)>(&TextServer::shaped_text_resize_object)>((new std::string("shaped_text_resize_object"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &) const>(&TextServer::shaped_get_span_count)>((new std::string("shaped_get_span_count"))->c_str())
			.fun<static_cast<Variant (TextServer::*)(const RID &, int64_t) const>(&TextServer::shaped_get_span_meta)>((new std::string("shaped_get_span_meta"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, int64_t, const TypedArray<RID> &, int64_t, const Dictionary &)>(&TextServer::shaped_set_span_update_font)>((new std::string("shaped_set_span_update_font"))->c_str())
			.fun<static_cast<RID (TextServer::*)(const RID &, int64_t, int64_t) const>(&TextServer::shaped_text_substr)>((new std::string("shaped_text_substr"))->c_str())
			.fun<static_cast<RID (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_parent)>((new std::string("shaped_text_get_parent"))->c_str())
			.fun<static_cast<double (TextServer::*)(const RID &, double, BitField<TextServer::JustificationFlag>)>(&TextServer::shaped_text_fit_to_width)>((new std::string("shaped_text_fit_to_width"))->c_str())
			.fun<static_cast<double (TextServer::*)(const RID &, const PackedFloat32Array &)>(&TextServer::shaped_text_tab_align)>((new std::string("shaped_text_tab_align"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const RID &)>(&TextServer::shaped_text_shape)>((new std::string("shaped_text_shape"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const RID &) const>(&TextServer::shaped_text_is_ready)>((new std::string("shaped_text_is_ready"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const RID &) const>(&TextServer::shaped_text_has_visible_chars)>((new std::string("shaped_text_has_visible_chars"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_glyphs)>((new std::string("shaped_text_get_glyphs"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (TextServer::*)(const RID &)>(&TextServer::shaped_text_sort_logical)>((new std::string("shaped_text_sort_logical"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_glyph_count)>((new std::string("shaped_text_get_glyph_count"))->c_str())
			.fun<static_cast<Vector2i (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_range)>((new std::string("shaped_text_get_range"))->c_str())
			.fun<static_cast<PackedInt32Array (TextServer::*)(const RID &, const PackedFloat32Array &, int64_t, bool, BitField<TextServer::LineBreakFlag>) const>(&TextServer::shaped_text_get_line_breaks_adv)>((new std::string("shaped_text_get_line_breaks_adv"))->c_str())
			.fun<static_cast<PackedInt32Array (TextServer::*)(const RID &, double, int64_t, BitField<TextServer::LineBreakFlag>) const>(&TextServer::shaped_text_get_line_breaks)>((new std::string("shaped_text_get_line_breaks"))->c_str())
			.fun<static_cast<PackedInt32Array (TextServer::*)(const RID &, BitField<TextServer::GraphemeFlag>, BitField<TextServer::GraphemeFlag>) const>(&TextServer::shaped_text_get_word_breaks)>((new std::string("shaped_text_get_word_breaks"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_trim_pos)>((new std::string("shaped_text_get_trim_pos"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_ellipsis_pos)>((new std::string("shaped_text_get_ellipsis_pos"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_ellipsis_glyphs)>((new std::string("shaped_text_get_ellipsis_glyphs"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_ellipsis_glyph_count)>((new std::string("shaped_text_get_ellipsis_glyph_count"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, double, BitField<TextServer::TextOverrunFlag>)>(&TextServer::shaped_text_overrun_trim_to_width)>((new std::string("shaped_text_overrun_trim_to_width"))->c_str())
			.fun<static_cast<Array (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_objects)>((new std::string("shaped_text_get_objects"))->c_str())
			.fun<static_cast<Rect2 (TextServer::*)(const RID &, const Variant &) const>(&TextServer::shaped_text_get_object_rect)>((new std::string("shaped_text_get_object_rect"))->c_str())
			.fun<static_cast<Vector2i (TextServer::*)(const RID &, const Variant &) const>(&TextServer::shaped_text_get_object_range)>((new std::string("shaped_text_get_object_range"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &, const Variant &) const>(&TextServer::shaped_text_get_object_glyph)>((new std::string("shaped_text_get_object_glyph"))->c_str())
			.fun<static_cast<Vector2 (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_size)>((new std::string("shaped_text_get_size"))->c_str())
			.fun<static_cast<double (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_ascent)>((new std::string("shaped_text_get_ascent"))->c_str())
			.fun<static_cast<double (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_descent)>((new std::string("shaped_text_get_descent"))->c_str())
			.fun<static_cast<double (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_width)>((new std::string("shaped_text_get_width"))->c_str())
			.fun<static_cast<double (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_underline_position)>((new std::string("shaped_text_get_underline_position"))->c_str())
			.fun<static_cast<double (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_underline_thickness)>((new std::string("shaped_text_get_underline_thickness"))->c_str())
			.fun<static_cast<Dictionary (TextServer::*)(const RID &, int64_t) const>(&TextServer::shaped_text_get_carets)>((new std::string("shaped_text_get_carets"))->c_str())
			.fun<static_cast<PackedVector2Array (TextServer::*)(const RID &, int64_t, int64_t) const>(&TextServer::shaped_text_get_selection)>((new std::string("shaped_text_get_selection"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &, double) const>(&TextServer::shaped_text_hit_test_grapheme)>((new std::string("shaped_text_hit_test_grapheme"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &, double) const>(&TextServer::shaped_text_hit_test_position)>((new std::string("shaped_text_hit_test_position"))->c_str())
			.fun<static_cast<Vector2 (TextServer::*)(const RID &, int64_t) const>(&TextServer::shaped_text_get_grapheme_bounds)>((new std::string("shaped_text_get_grapheme_bounds"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &, int64_t) const>(&TextServer::shaped_text_next_grapheme_pos)>((new std::string("shaped_text_next_grapheme_pos"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &, int64_t) const>(&TextServer::shaped_text_prev_grapheme_pos)>((new std::string("shaped_text_prev_grapheme_pos"))->c_str())
			.fun<static_cast<PackedInt32Array (TextServer::*)(const RID &) const>(&TextServer::shaped_text_get_character_breaks)>((new std::string("shaped_text_get_character_breaks"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &, int64_t) const>(&TextServer::shaped_text_next_character_pos)>((new std::string("shaped_text_next_character_pos"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &, int64_t) const>(&TextServer::shaped_text_prev_character_pos)>((new std::string("shaped_text_prev_character_pos"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const RID &, int64_t) const>(&TextServer::shaped_text_closest_character_pos)>((new std::string("shaped_text_closest_character_pos"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const RID &, const Vector2 &, double, double, const Color &) const>(&TextServer::shaped_text_draw)>((new std::string("shaped_text_draw"))->c_str())
			.fun<static_cast<void (TextServer::*)(const RID &, const RID &, const Vector2 &, double, double, int64_t, const Color &) const>(&TextServer::shaped_text_draw_outline)>((new std::string("shaped_text_draw_outline"))->c_str())
			.fun<static_cast<TextServer::Direction (TextServer::*)(const RID &, int64_t, int64_t) const>(&TextServer::shaped_text_get_dominant_direction_in_range)>((new std::string("shaped_text_get_dominant_direction_in_range"))->c_str())
			.fun<static_cast<String (TextServer::*)(const String &, const String &) const>(&TextServer::format_number)>((new std::string("format_number"))->c_str())
			.fun<static_cast<String (TextServer::*)(const String &, const String &) const>(&TextServer::parse_number)>((new std::string("parse_number"))->c_str())
			.fun<static_cast<String (TextServer::*)(const String &) const>(&TextServer::percent_sign)>((new std::string("percent_sign"))->c_str())
			.fun<static_cast<PackedInt32Array (TextServer::*)(const String &, const String &, int64_t) const>(&TextServer::string_get_word_breaks)>((new std::string("string_get_word_breaks"))->c_str())
			.fun<static_cast<PackedInt32Array (TextServer::*)(const String &, const String &) const>(&TextServer::string_get_character_breaks)>((new std::string("string_get_character_breaks"))->c_str())
			.fun<static_cast<int64_t (TextServer::*)(const String &, const PackedStringArray &) const>(&TextServer::is_confusable)>((new std::string("is_confusable"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const String &) const>(&TextServer::spoof_check)>((new std::string("spoof_check"))->c_str())
			.fun<static_cast<String (TextServer::*)(const String &) const>(&TextServer::strip_diacritics)>((new std::string("strip_diacritics"))->c_str())
			.fun<static_cast<bool (TextServer::*)(const String &) const>(&TextServer::is_valid_identifier)>((new std::string("is_valid_identifier"))->c_str())
			.fun<static_cast<bool (TextServer::*)(int64_t) const>(&TextServer::is_valid_letter)>((new std::string("is_valid_letter"))->c_str())
			.fun<static_cast<String (TextServer::*)(const String &, const String &) const>(&TextServer::string_to_upper)>((new std::string("string_to_upper"))->c_str())
			.fun<static_cast<String (TextServer::*)(const String &, const String &) const>(&TextServer::string_to_lower)>((new std::string("string_to_lower"))->c_str())
			.fun<static_cast<String (TextServer::*)(const String &, const String &) const>(&TextServer::string_to_title)>((new std::string("string_to_title"))->c_str())
			.fun<static_cast<TypedArray<Vector3i> (TextServer::*)(TextServer::StructuredTextParser, const Array &, const String &) const>(&TextServer::parse_structured_text)>((new std::string("parse_structured_text"))->c_str());
	qjs::Value _FontAntialiasing = context->newObject();
	_FontAntialiasing[(new std::string("FONT_ANTIALIASING_NONE"))->c_str()] = TextServer::FontAntialiasing::FONT_ANTIALIASING_NONE;
	_FontAntialiasing[(new std::string("FONT_ANTIALIASING_GRAY"))->c_str()] = TextServer::FontAntialiasing::FONT_ANTIALIASING_GRAY;
	_FontAntialiasing[(new std::string("FONT_ANTIALIASING_LCD"))->c_str()] = TextServer::FontAntialiasing::FONT_ANTIALIASING_LCD;
	_module.add("FontAntialiasing", std::move(_FontAntialiasing));
	qjs::Value _FontLCDSubpixelLayout = context->newObject();
	_FontLCDSubpixelLayout[(new std::string("FONT_LCD_SUBPIXEL_LAYOUT_NONE"))->c_str()] = TextServer::FontLCDSubpixelLayout::FONT_LCD_SUBPIXEL_LAYOUT_NONE;
	_FontLCDSubpixelLayout[(new std::string("FONT_LCD_SUBPIXEL_LAYOUT_HRGB"))->c_str()] = TextServer::FontLCDSubpixelLayout::FONT_LCD_SUBPIXEL_LAYOUT_HRGB;
	_FontLCDSubpixelLayout[(new std::string("FONT_LCD_SUBPIXEL_LAYOUT_HBGR"))->c_str()] = TextServer::FontLCDSubpixelLayout::FONT_LCD_SUBPIXEL_LAYOUT_HBGR;
	_FontLCDSubpixelLayout[(new std::string("FONT_LCD_SUBPIXEL_LAYOUT_VRGB"))->c_str()] = TextServer::FontLCDSubpixelLayout::FONT_LCD_SUBPIXEL_LAYOUT_VRGB;
	_FontLCDSubpixelLayout[(new std::string("FONT_LCD_SUBPIXEL_LAYOUT_VBGR"))->c_str()] = TextServer::FontLCDSubpixelLayout::FONT_LCD_SUBPIXEL_LAYOUT_VBGR;
	_FontLCDSubpixelLayout[(new std::string("FONT_LCD_SUBPIXEL_LAYOUT_MAX"))->c_str()] = TextServer::FontLCDSubpixelLayout::FONT_LCD_SUBPIXEL_LAYOUT_MAX;
	_module.add("FontLCDSubpixelLayout", std::move(_FontLCDSubpixelLayout));
	qjs::Value _Direction = context->newObject();
	_Direction[(new std::string("DIRECTION_AUTO"))->c_str()] = TextServer::Direction::DIRECTION_AUTO;
	_Direction[(new std::string("DIRECTION_LTR"))->c_str()] = TextServer::Direction::DIRECTION_LTR;
	_Direction[(new std::string("DIRECTION_RTL"))->c_str()] = TextServer::Direction::DIRECTION_RTL;
	_Direction[(new std::string("DIRECTION_INHERITED"))->c_str()] = TextServer::Direction::DIRECTION_INHERITED;
	_module.add("Direction", std::move(_Direction));
	qjs::Value _Orientation = context->newObject();
	_Orientation[(new std::string("ORIENTATION_HORIZONTAL"))->c_str()] = TextServer::Orientation::ORIENTATION_HORIZONTAL;
	_Orientation[(new std::string("ORIENTATION_VERTICAL"))->c_str()] = TextServer::Orientation::ORIENTATION_VERTICAL;
	_module.add("Orientation", std::move(_Orientation));
	qjs::Value _JustificationFlag = context->newObject();
	_JustificationFlag[(new std::string("JUSTIFICATION_NONE"))->c_str()] = TextServer::JustificationFlag::JUSTIFICATION_NONE;
	_JustificationFlag[(new std::string("JUSTIFICATION_KASHIDA"))->c_str()] = TextServer::JustificationFlag::JUSTIFICATION_KASHIDA;
	_JustificationFlag[(new std::string("JUSTIFICATION_WORD_BOUND"))->c_str()] = TextServer::JustificationFlag::JUSTIFICATION_WORD_BOUND;
	_JustificationFlag[(new std::string("JUSTIFICATION_TRIM_EDGE_SPACES"))->c_str()] = TextServer::JustificationFlag::JUSTIFICATION_TRIM_EDGE_SPACES;
	_JustificationFlag[(new std::string("JUSTIFICATION_AFTER_LAST_TAB"))->c_str()] = TextServer::JustificationFlag::JUSTIFICATION_AFTER_LAST_TAB;
	_JustificationFlag[(new std::string("JUSTIFICATION_CONSTRAIN_ELLIPSIS"))->c_str()] = TextServer::JustificationFlag::JUSTIFICATION_CONSTRAIN_ELLIPSIS;
	_JustificationFlag[(new std::string("JUSTIFICATION_SKIP_LAST_LINE"))->c_str()] = TextServer::JustificationFlag::JUSTIFICATION_SKIP_LAST_LINE;
	_JustificationFlag[(new std::string("JUSTIFICATION_SKIP_LAST_LINE_WITH_VISIBLE_CHARS"))->c_str()] = TextServer::JustificationFlag::JUSTIFICATION_SKIP_LAST_LINE_WITH_VISIBLE_CHARS;
	_JustificationFlag[(new std::string("JUSTIFICATION_DO_NOT_SKIP_SINGLE_LINE"))->c_str()] = TextServer::JustificationFlag::JUSTIFICATION_DO_NOT_SKIP_SINGLE_LINE;
	_module.add("JustificationFlag", std::move(_JustificationFlag));
	qjs::Value _AutowrapMode = context->newObject();
	_AutowrapMode[(new std::string("AUTOWRAP_OFF"))->c_str()] = TextServer::AutowrapMode::AUTOWRAP_OFF;
	_AutowrapMode[(new std::string("AUTOWRAP_ARBITRARY"))->c_str()] = TextServer::AutowrapMode::AUTOWRAP_ARBITRARY;
	_AutowrapMode[(new std::string("AUTOWRAP_WORD"))->c_str()] = TextServer::AutowrapMode::AUTOWRAP_WORD;
	_AutowrapMode[(new std::string("AUTOWRAP_WORD_SMART"))->c_str()] = TextServer::AutowrapMode::AUTOWRAP_WORD_SMART;
	_module.add("AutowrapMode", std::move(_AutowrapMode));
	qjs::Value _LineBreakFlag = context->newObject();
	_LineBreakFlag[(new std::string("BREAK_NONE"))->c_str()] = TextServer::LineBreakFlag::BREAK_NONE;
	_LineBreakFlag[(new std::string("BREAK_MANDATORY"))->c_str()] = TextServer::LineBreakFlag::BREAK_MANDATORY;
	_LineBreakFlag[(new std::string("BREAK_WORD_BOUND"))->c_str()] = TextServer::LineBreakFlag::BREAK_WORD_BOUND;
	_LineBreakFlag[(new std::string("BREAK_GRAPHEME_BOUND"))->c_str()] = TextServer::LineBreakFlag::BREAK_GRAPHEME_BOUND;
	_LineBreakFlag[(new std::string("BREAK_ADAPTIVE"))->c_str()] = TextServer::LineBreakFlag::BREAK_ADAPTIVE;
	_LineBreakFlag[(new std::string("BREAK_TRIM_EDGE_SPACES"))->c_str()] = TextServer::LineBreakFlag::BREAK_TRIM_EDGE_SPACES;
	_LineBreakFlag[(new std::string("BREAK_TRIM_INDENT"))->c_str()] = TextServer::LineBreakFlag::BREAK_TRIM_INDENT;
	_module.add("LineBreakFlag", std::move(_LineBreakFlag));
	qjs::Value _VisibleCharactersBehavior = context->newObject();
	_VisibleCharactersBehavior[(new std::string("VC_CHARS_BEFORE_SHAPING"))->c_str()] = TextServer::VisibleCharactersBehavior::VC_CHARS_BEFORE_SHAPING;
	_VisibleCharactersBehavior[(new std::string("VC_CHARS_AFTER_SHAPING"))->c_str()] = TextServer::VisibleCharactersBehavior::VC_CHARS_AFTER_SHAPING;
	_VisibleCharactersBehavior[(new std::string("VC_GLYPHS_AUTO"))->c_str()] = TextServer::VisibleCharactersBehavior::VC_GLYPHS_AUTO;
	_VisibleCharactersBehavior[(new std::string("VC_GLYPHS_LTR"))->c_str()] = TextServer::VisibleCharactersBehavior::VC_GLYPHS_LTR;
	_VisibleCharactersBehavior[(new std::string("VC_GLYPHS_RTL"))->c_str()] = TextServer::VisibleCharactersBehavior::VC_GLYPHS_RTL;
	_module.add("VisibleCharactersBehavior", std::move(_VisibleCharactersBehavior));
	qjs::Value _OverrunBehavior = context->newObject();
	_OverrunBehavior[(new std::string("OVERRUN_NO_TRIMMING"))->c_str()] = TextServer::OverrunBehavior::OVERRUN_NO_TRIMMING;
	_OverrunBehavior[(new std::string("OVERRUN_TRIM_CHAR"))->c_str()] = TextServer::OverrunBehavior::OVERRUN_TRIM_CHAR;
	_OverrunBehavior[(new std::string("OVERRUN_TRIM_WORD"))->c_str()] = TextServer::OverrunBehavior::OVERRUN_TRIM_WORD;
	_OverrunBehavior[(new std::string("OVERRUN_TRIM_ELLIPSIS"))->c_str()] = TextServer::OverrunBehavior::OVERRUN_TRIM_ELLIPSIS;
	_OverrunBehavior[(new std::string("OVERRUN_TRIM_WORD_ELLIPSIS"))->c_str()] = TextServer::OverrunBehavior::OVERRUN_TRIM_WORD_ELLIPSIS;
	_module.add("OverrunBehavior", std::move(_OverrunBehavior));
	qjs::Value _TextOverrunFlag = context->newObject();
	_TextOverrunFlag[(new std::string("OVERRUN_NO_TRIM"))->c_str()] = TextServer::TextOverrunFlag::OVERRUN_NO_TRIM;
	_TextOverrunFlag[(new std::string("OVERRUN_TRIM"))->c_str()] = TextServer::TextOverrunFlag::OVERRUN_TRIM;
	_TextOverrunFlag[(new std::string("OVERRUN_TRIM_WORD_ONLY"))->c_str()] = TextServer::TextOverrunFlag::OVERRUN_TRIM_WORD_ONLY;
	_TextOverrunFlag[(new std::string("OVERRUN_ADD_ELLIPSIS"))->c_str()] = TextServer::TextOverrunFlag::OVERRUN_ADD_ELLIPSIS;
	_TextOverrunFlag[(new std::string("OVERRUN_ENFORCE_ELLIPSIS"))->c_str()] = TextServer::TextOverrunFlag::OVERRUN_ENFORCE_ELLIPSIS;
	_TextOverrunFlag[(new std::string("OVERRUN_JUSTIFICATION_AWARE"))->c_str()] = TextServer::TextOverrunFlag::OVERRUN_JUSTIFICATION_AWARE;
	_module.add("TextOverrunFlag", std::move(_TextOverrunFlag));
	qjs::Value _GraphemeFlag = context->newObject();
	_GraphemeFlag[(new std::string("GRAPHEME_IS_VALID"))->c_str()] = TextServer::GraphemeFlag::GRAPHEME_IS_VALID;
	_GraphemeFlag[(new std::string("GRAPHEME_IS_RTL"))->c_str()] = TextServer::GraphemeFlag::GRAPHEME_IS_RTL;
	_GraphemeFlag[(new std::string("GRAPHEME_IS_VIRTUAL"))->c_str()] = TextServer::GraphemeFlag::GRAPHEME_IS_VIRTUAL;
	_GraphemeFlag[(new std::string("GRAPHEME_IS_SPACE"))->c_str()] = TextServer::GraphemeFlag::GRAPHEME_IS_SPACE;
	_GraphemeFlag[(new std::string("GRAPHEME_IS_BREAK_HARD"))->c_str()] = TextServer::GraphemeFlag::GRAPHEME_IS_BREAK_HARD;
	_GraphemeFlag[(new std::string("GRAPHEME_IS_BREAK_SOFT"))->c_str()] = TextServer::GraphemeFlag::GRAPHEME_IS_BREAK_SOFT;
	_GraphemeFlag[(new std::string("GRAPHEME_IS_TAB"))->c_str()] = TextServer::GraphemeFlag::GRAPHEME_IS_TAB;
	_GraphemeFlag[(new std::string("GRAPHEME_IS_ELONGATION"))->c_str()] = TextServer::GraphemeFlag::GRAPHEME_IS_ELONGATION;
	_GraphemeFlag[(new std::string("GRAPHEME_IS_PUNCTUATION"))->c_str()] = TextServer::GraphemeFlag::GRAPHEME_IS_PUNCTUATION;
	_GraphemeFlag[(new std::string("GRAPHEME_IS_UNDERSCORE"))->c_str()] = TextServer::GraphemeFlag::GRAPHEME_IS_UNDERSCORE;
	_GraphemeFlag[(new std::string("GRAPHEME_IS_CONNECTED"))->c_str()] = TextServer::GraphemeFlag::GRAPHEME_IS_CONNECTED;
	_GraphemeFlag[(new std::string("GRAPHEME_IS_SAFE_TO_INSERT_TATWEEL"))->c_str()] = TextServer::GraphemeFlag::GRAPHEME_IS_SAFE_TO_INSERT_TATWEEL;
	_GraphemeFlag[(new std::string("GRAPHEME_IS_EMBEDDED_OBJECT"))->c_str()] = TextServer::GraphemeFlag::GRAPHEME_IS_EMBEDDED_OBJECT;
	_GraphemeFlag[(new std::string("GRAPHEME_IS_SOFT_HYPHEN"))->c_str()] = TextServer::GraphemeFlag::GRAPHEME_IS_SOFT_HYPHEN;
	_module.add("GraphemeFlag", std::move(_GraphemeFlag));
	qjs::Value _Hinting = context->newObject();
	_Hinting[(new std::string("HINTING_NONE"))->c_str()] = TextServer::Hinting::HINTING_NONE;
	_Hinting[(new std::string("HINTING_LIGHT"))->c_str()] = TextServer::Hinting::HINTING_LIGHT;
	_Hinting[(new std::string("HINTING_NORMAL"))->c_str()] = TextServer::Hinting::HINTING_NORMAL;
	_module.add("Hinting", std::move(_Hinting));
	qjs::Value _SubpixelPositioning = context->newObject();
	_SubpixelPositioning[(new std::string("SUBPIXEL_POSITIONING_DISABLED"))->c_str()] = TextServer::SubpixelPositioning::SUBPIXEL_POSITIONING_DISABLED;
	_SubpixelPositioning[(new std::string("SUBPIXEL_POSITIONING_AUTO"))->c_str()] = TextServer::SubpixelPositioning::SUBPIXEL_POSITIONING_AUTO;
	_SubpixelPositioning[(new std::string("SUBPIXEL_POSITIONING_ONE_HALF"))->c_str()] = TextServer::SubpixelPositioning::SUBPIXEL_POSITIONING_ONE_HALF;
	_SubpixelPositioning[(new std::string("SUBPIXEL_POSITIONING_ONE_QUARTER"))->c_str()] = TextServer::SubpixelPositioning::SUBPIXEL_POSITIONING_ONE_QUARTER;
	_SubpixelPositioning[(new std::string("SUBPIXEL_POSITIONING_ONE_HALF_MAX_SIZE"))->c_str()] = TextServer::SubpixelPositioning::SUBPIXEL_POSITIONING_ONE_HALF_MAX_SIZE;
	_SubpixelPositioning[(new std::string("SUBPIXEL_POSITIONING_ONE_QUARTER_MAX_SIZE"))->c_str()] = TextServer::SubpixelPositioning::SUBPIXEL_POSITIONING_ONE_QUARTER_MAX_SIZE;
	_module.add("SubpixelPositioning", std::move(_SubpixelPositioning));
	qjs::Value _Feature = context->newObject();
	_Feature[(new std::string("FEATURE_SIMPLE_LAYOUT"))->c_str()] = TextServer::Feature::FEATURE_SIMPLE_LAYOUT;
	_Feature[(new std::string("FEATURE_BIDI_LAYOUT"))->c_str()] = TextServer::Feature::FEATURE_BIDI_LAYOUT;
	_Feature[(new std::string("FEATURE_VERTICAL_LAYOUT"))->c_str()] = TextServer::Feature::FEATURE_VERTICAL_LAYOUT;
	_Feature[(new std::string("FEATURE_SHAPING"))->c_str()] = TextServer::Feature::FEATURE_SHAPING;
	_Feature[(new std::string("FEATURE_KASHIDA_JUSTIFICATION"))->c_str()] = TextServer::Feature::FEATURE_KASHIDA_JUSTIFICATION;
	_Feature[(new std::string("FEATURE_BREAK_ITERATORS"))->c_str()] = TextServer::Feature::FEATURE_BREAK_ITERATORS;
	_Feature[(new std::string("FEATURE_FONT_BITMAP"))->c_str()] = TextServer::Feature::FEATURE_FONT_BITMAP;
	_Feature[(new std::string("FEATURE_FONT_DYNAMIC"))->c_str()] = TextServer::Feature::FEATURE_FONT_DYNAMIC;
	_Feature[(new std::string("FEATURE_FONT_MSDF"))->c_str()] = TextServer::Feature::FEATURE_FONT_MSDF;
	_Feature[(new std::string("FEATURE_FONT_SYSTEM"))->c_str()] = TextServer::Feature::FEATURE_FONT_SYSTEM;
	_Feature[(new std::string("FEATURE_FONT_VARIABLE"))->c_str()] = TextServer::Feature::FEATURE_FONT_VARIABLE;
	_Feature[(new std::string("FEATURE_CONTEXT_SENSITIVE_CASE_CONVERSION"))->c_str()] = TextServer::Feature::FEATURE_CONTEXT_SENSITIVE_CASE_CONVERSION;
	_Feature[(new std::string("FEATURE_USE_SUPPORT_DATA"))->c_str()] = TextServer::Feature::FEATURE_USE_SUPPORT_DATA;
	_Feature[(new std::string("FEATURE_UNICODE_IDENTIFIERS"))->c_str()] = TextServer::Feature::FEATURE_UNICODE_IDENTIFIERS;
	_Feature[(new std::string("FEATURE_UNICODE_SECURITY"))->c_str()] = TextServer::Feature::FEATURE_UNICODE_SECURITY;
	_module.add("Feature", std::move(_Feature));
	qjs::Value _ContourPointTag = context->newObject();
	_ContourPointTag[(new std::string("CONTOUR_CURVE_TAG_ON"))->c_str()] = TextServer::ContourPointTag::CONTOUR_CURVE_TAG_ON;
	_ContourPointTag[(new std::string("CONTOUR_CURVE_TAG_OFF_CONIC"))->c_str()] = TextServer::ContourPointTag::CONTOUR_CURVE_TAG_OFF_CONIC;
	_ContourPointTag[(new std::string("CONTOUR_CURVE_TAG_OFF_CUBIC"))->c_str()] = TextServer::ContourPointTag::CONTOUR_CURVE_TAG_OFF_CUBIC;
	_module.add("ContourPointTag", std::move(_ContourPointTag));
	qjs::Value _SpacingType = context->newObject();
	_SpacingType[(new std::string("SPACING_GLYPH"))->c_str()] = TextServer::SpacingType::SPACING_GLYPH;
	_SpacingType[(new std::string("SPACING_SPACE"))->c_str()] = TextServer::SpacingType::SPACING_SPACE;
	_SpacingType[(new std::string("SPACING_TOP"))->c_str()] = TextServer::SpacingType::SPACING_TOP;
	_SpacingType[(new std::string("SPACING_BOTTOM"))->c_str()] = TextServer::SpacingType::SPACING_BOTTOM;
	_SpacingType[(new std::string("SPACING_MAX"))->c_str()] = TextServer::SpacingType::SPACING_MAX;
	_module.add("SpacingType", std::move(_SpacingType));
	qjs::Value _FontStyle = context->newObject();
	_FontStyle[(new std::string("FONT_BOLD"))->c_str()] = TextServer::FontStyle::FONT_BOLD;
	_FontStyle[(new std::string("FONT_ITALIC"))->c_str()] = TextServer::FontStyle::FONT_ITALIC;
	_FontStyle[(new std::string("FONT_FIXED_WIDTH"))->c_str()] = TextServer::FontStyle::FONT_FIXED_WIDTH;
	_module.add("FontStyle", std::move(_FontStyle));
	qjs::Value _StructuredTextParser = context->newObject();
	_StructuredTextParser[(new std::string("STRUCTURED_TEXT_DEFAULT"))->c_str()] = TextServer::StructuredTextParser::STRUCTURED_TEXT_DEFAULT;
	_StructuredTextParser[(new std::string("STRUCTURED_TEXT_URI"))->c_str()] = TextServer::StructuredTextParser::STRUCTURED_TEXT_URI;
	_StructuredTextParser[(new std::string("STRUCTURED_TEXT_FILE"))->c_str()] = TextServer::StructuredTextParser::STRUCTURED_TEXT_FILE;
	_StructuredTextParser[(new std::string("STRUCTURED_TEXT_EMAIL"))->c_str()] = TextServer::StructuredTextParser::STRUCTURED_TEXT_EMAIL;
	_StructuredTextParser[(new std::string("STRUCTURED_TEXT_LIST"))->c_str()] = TextServer::StructuredTextParser::STRUCTURED_TEXT_LIST;
	_StructuredTextParser[(new std::string("STRUCTURED_TEXT_GDSCRIPT"))->c_str()] = TextServer::StructuredTextParser::STRUCTURED_TEXT_GDSCRIPT;
	_StructuredTextParser[(new std::string("STRUCTURED_TEXT_CUSTOM"))->c_str()] = TextServer::StructuredTextParser::STRUCTURED_TEXT_CUSTOM;
	_module.add("StructuredTextParser", std::move(_StructuredTextParser));
	qjs::Value _FixedSizeScaleMode = context->newObject();
	_FixedSizeScaleMode[(new std::string("FIXED_SIZE_SCALE_DISABLE"))->c_str()] = TextServer::FixedSizeScaleMode::FIXED_SIZE_SCALE_DISABLE;
	_FixedSizeScaleMode[(new std::string("FIXED_SIZE_SCALE_INTEGER_ONLY"))->c_str()] = TextServer::FixedSizeScaleMode::FIXED_SIZE_SCALE_INTEGER_ONLY;
	_FixedSizeScaleMode[(new std::string("FIXED_SIZE_SCALE_ENABLED"))->c_str()] = TextServer::FixedSizeScaleMode::FIXED_SIZE_SCALE_ENABLED;
	_module.add("FixedSizeScaleMode", std::move(_FixedSizeScaleMode));
}