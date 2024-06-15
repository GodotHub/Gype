#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/variant/vector3i.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TextServer() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<TextServer>("TextServer")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<bool(TextServer::*)(TextServer::Feature)const>(&TextServer::has_feature)>("has_feature")
            .fun<static_cast<String(TextServer::*)()const>(&TextServer::get_name)>("get_name")
            .fun<static_cast<int64_t(TextServer::*)()const>(&TextServer::get_features)>("get_features")
            .fun<static_cast<bool(TextServer::*)(const String &)>(&TextServer::load_support_data)>("load_support_data")
            .fun<static_cast<String(TextServer::*)()const>(&TextServer::get_support_data_filename)>("get_support_data_filename")
            .fun<static_cast<String(TextServer::*)()const>(&TextServer::get_support_data_info)>("get_support_data_info")
            .fun<static_cast<bool(TextServer::*)(const String &)const>(&TextServer::save_support_data)>("save_support_data")
            .fun<static_cast<bool(TextServer::*)(const String &)const>(&TextServer::is_locale_right_to_left)>("is_locale_right_to_left")
            .fun<static_cast<int64_t(TextServer::*)(const String &)const>(&TextServer::name_to_tag)>("name_to_tag")
            .fun<static_cast<String(TextServer::*)(int64_t)const>(&TextServer::tag_to_name)>("tag_to_name")
            .fun<static_cast<bool(TextServer::*)(const RID &)>(&TextServer::has)>("has")
            .fun<static_cast<void(TextServer::*)(const RID &)>(&TextServer::free_rid)>("free_rid")
            .fun<static_cast<RID(TextServer::*)()>(&TextServer::create_font)>("create_font")
            .fun<static_cast<RID(TextServer::*)(const RID &)>(&TextServer::create_font_linked_variation)>("create_font_linked_variation")
            .fun<static_cast<void(TextServer::*)(const RID &,const PackedByteArray &)>(&TextServer::font_set_data)>("font_set_data")
            .fun<static_cast<void(TextServer::*)(const RID &,int64_t)>(&TextServer::font_set_face_index)>("font_set_face_index")
            .fun<static_cast<int64_t(TextServer::*)(const RID &)const>(&TextServer::font_get_face_index)>("font_get_face_index")
            .fun<static_cast<int64_t(TextServer::*)(const RID &)const>(&TextServer::font_get_face_count)>("font_get_face_count")
            .fun<static_cast<void(TextServer::*)(const RID &,BitField<TextServer::FontStyle>)>(&TextServer::font_set_style)>("font_set_style")
            .fun<static_cast<BitField<TextServer::FontStyle>(TextServer::*)(const RID &)const>(&TextServer::font_get_style)>("font_get_style")
            .fun<static_cast<void(TextServer::*)(const RID &,const String &)>(&TextServer::font_set_name)>("font_set_name")
            .fun<static_cast<String(TextServer::*)(const RID &)const>(&TextServer::font_get_name)>("font_get_name")
            .fun<static_cast<Dictionary(TextServer::*)(const RID &)const>(&TextServer::font_get_ot_name_strings)>("font_get_ot_name_strings")
            .fun<static_cast<void(TextServer::*)(const RID &,const String &)>(&TextServer::font_set_style_name)>("font_set_style_name")
            .fun<static_cast<String(TextServer::*)(const RID &)const>(&TextServer::font_get_style_name)>("font_get_style_name")
            .fun<static_cast<void(TextServer::*)(const RID &,int64_t)>(&TextServer::font_set_weight)>("font_set_weight")
            .fun<static_cast<int64_t(TextServer::*)(const RID &)const>(&TextServer::font_get_weight)>("font_get_weight")
            .fun<static_cast<void(TextServer::*)(const RID &,int64_t)>(&TextServer::font_set_stretch)>("font_set_stretch")
            .fun<static_cast<int64_t(TextServer::*)(const RID &)const>(&TextServer::font_get_stretch)>("font_get_stretch")
            .fun<static_cast<void(TextServer::*)(const RID &,TextServer::FontAntialiasing)>(&TextServer::font_set_antialiasing)>("font_set_antialiasing")
            .fun<static_cast<TextServer::FontAntialiasing(TextServer::*)(const RID &)const>(&TextServer::font_get_antialiasing)>("font_get_antialiasing")
            .fun<static_cast<void(TextServer::*)(const RID &,bool)>(&TextServer::font_set_disable_embedded_bitmaps)>("font_set_disable_embedded_bitmaps")
            .fun<static_cast<bool(TextServer::*)(const RID &)const>(&TextServer::font_get_disable_embedded_bitmaps)>("font_get_disable_embedded_bitmaps")
            .fun<static_cast<void(TextServer::*)(const RID &,bool)>(&TextServer::font_set_generate_mipmaps)>("font_set_generate_mipmaps")
            .fun<static_cast<bool(TextServer::*)(const RID &)const>(&TextServer::font_get_generate_mipmaps)>("font_get_generate_mipmaps")
            .fun<static_cast<void(TextServer::*)(const RID &,bool)>(&TextServer::font_set_multichannel_signed_distance_field)>("font_set_multichannel_signed_distance_field")
            .fun<static_cast<bool(TextServer::*)(const RID &)const>(&TextServer::font_is_multichannel_signed_distance_field)>("font_is_multichannel_signed_distance_field")
            .fun<static_cast<void(TextServer::*)(const RID &,int64_t)>(&TextServer::font_set_msdf_pixel_range)>("font_set_msdf_pixel_range")
            .fun<static_cast<int64_t(TextServer::*)(const RID &)const>(&TextServer::font_get_msdf_pixel_range)>("font_get_msdf_pixel_range")
            .fun<static_cast<void(TextServer::*)(const RID &,int64_t)>(&TextServer::font_set_msdf_size)>("font_set_msdf_size")
            .fun<static_cast<int64_t(TextServer::*)(const RID &)const>(&TextServer::font_get_msdf_size)>("font_get_msdf_size")
            .fun<static_cast<void(TextServer::*)(const RID &,int64_t)>(&TextServer::font_set_fixed_size)>("font_set_fixed_size")
            .fun<static_cast<int64_t(TextServer::*)(const RID &)const>(&TextServer::font_get_fixed_size)>("font_get_fixed_size")
            .fun<static_cast<void(TextServer::*)(const RID &,TextServer::FixedSizeScaleMode)>(&TextServer::font_set_fixed_size_scale_mode)>("font_set_fixed_size_scale_mode")
            .fun<static_cast<TextServer::FixedSizeScaleMode(TextServer::*)(const RID &)const>(&TextServer::font_get_fixed_size_scale_mode)>("font_get_fixed_size_scale_mode")
            .fun<static_cast<void(TextServer::*)(const RID &,bool)>(&TextServer::font_set_allow_system_fallback)>("font_set_allow_system_fallback")
            .fun<static_cast<bool(TextServer::*)(const RID &)const>(&TextServer::font_is_allow_system_fallback)>("font_is_allow_system_fallback")
            .fun<static_cast<void(TextServer::*)(const RID &,bool)>(&TextServer::font_set_force_autohinter)>("font_set_force_autohinter")
            .fun<static_cast<bool(TextServer::*)(const RID &)const>(&TextServer::font_is_force_autohinter)>("font_is_force_autohinter")
            .fun<static_cast<void(TextServer::*)(const RID &,TextServer::Hinting)>(&TextServer::font_set_hinting)>("font_set_hinting")
            .fun<static_cast<TextServer::Hinting(TextServer::*)(const RID &)const>(&TextServer::font_get_hinting)>("font_get_hinting")
            .fun<static_cast<void(TextServer::*)(const RID &,TextServer::SubpixelPositioning)>(&TextServer::font_set_subpixel_positioning)>("font_set_subpixel_positioning")
            .fun<static_cast<TextServer::SubpixelPositioning(TextServer::*)(const RID &)const>(&TextServer::font_get_subpixel_positioning)>("font_get_subpixel_positioning")
            .fun<static_cast<void(TextServer::*)(const RID &,double)>(&TextServer::font_set_embolden)>("font_set_embolden")
            .fun<static_cast<double(TextServer::*)(const RID &)const>(&TextServer::font_get_embolden)>("font_get_embolden")
            .fun<static_cast<void(TextServer::*)(const RID &,TextServer::SpacingType,int64_t)>(&TextServer::font_set_spacing)>("font_set_spacing")
            .fun<static_cast<int64_t(TextServer::*)(const RID &,TextServer::SpacingType)const>(&TextServer::font_get_spacing)>("font_get_spacing")
            .fun<static_cast<void(TextServer::*)(const RID &,double)>(&TextServer::font_set_baseline_offset)>("font_set_baseline_offset")
            .fun<static_cast<double(TextServer::*)(const RID &)const>(&TextServer::font_get_baseline_offset)>("font_get_baseline_offset")
            .fun<static_cast<void(TextServer::*)(const RID &,const Transform2D &)>(&TextServer::font_set_transform)>("font_set_transform")
            .fun<static_cast<Transform2D(TextServer::*)(const RID &)const>(&TextServer::font_get_transform)>("font_get_transform")
            .fun<static_cast<void(TextServer::*)(const RID &,const Dictionary &)>(&TextServer::font_set_variation_coordinates)>("font_set_variation_coordinates")
            .fun<static_cast<Dictionary(TextServer::*)(const RID &)const>(&TextServer::font_get_variation_coordinates)>("font_get_variation_coordinates")
            .fun<static_cast<void(TextServer::*)(const RID &,double)>(&TextServer::font_set_oversampling)>("font_set_oversampling")
            .fun<static_cast<double(TextServer::*)(const RID &)const>(&TextServer::font_get_oversampling)>("font_get_oversampling")
            .fun<static_cast<TypedArray<Vector2i>(TextServer::*)(const RID &)const>(&TextServer::font_get_size_cache_list)>("font_get_size_cache_list")
            .fun<static_cast<void(TextServer::*)(const RID &)>(&TextServer::font_clear_size_cache)>("font_clear_size_cache")
            .fun<static_cast<void(TextServer::*)(const RID &,const Vector2i &)>(&TextServer::font_remove_size_cache)>("font_remove_size_cache")
            .fun<static_cast<void(TextServer::*)(const RID &,int64_t,double)>(&TextServer::font_set_ascent)>("font_set_ascent")
            .fun<static_cast<double(TextServer::*)(const RID &,int64_t)const>(&TextServer::font_get_ascent)>("font_get_ascent")
            .fun<static_cast<void(TextServer::*)(const RID &,int64_t,double)>(&TextServer::font_set_descent)>("font_set_descent")
            .fun<static_cast<double(TextServer::*)(const RID &,int64_t)const>(&TextServer::font_get_descent)>("font_get_descent")
            .fun<static_cast<void(TextServer::*)(const RID &,int64_t,double)>(&TextServer::font_set_underline_position)>("font_set_underline_position")
            .fun<static_cast<double(TextServer::*)(const RID &,int64_t)const>(&TextServer::font_get_underline_position)>("font_get_underline_position")
            .fun<static_cast<void(TextServer::*)(const RID &,int64_t,double)>(&TextServer::font_set_underline_thickness)>("font_set_underline_thickness")
            .fun<static_cast<double(TextServer::*)(const RID &,int64_t)const>(&TextServer::font_get_underline_thickness)>("font_get_underline_thickness")
            .fun<static_cast<void(TextServer::*)(const RID &,int64_t,double)>(&TextServer::font_set_scale)>("font_set_scale")
            .fun<static_cast<double(TextServer::*)(const RID &,int64_t)const>(&TextServer::font_get_scale)>("font_get_scale")
            .fun<static_cast<int64_t(TextServer::*)(const RID &,const Vector2i &)const>(&TextServer::font_get_texture_count)>("font_get_texture_count")
            .fun<static_cast<void(TextServer::*)(const RID &,const Vector2i &)>(&TextServer::font_clear_textures)>("font_clear_textures")
            .fun<static_cast<void(TextServer::*)(const RID &,const Vector2i &,int64_t)>(&TextServer::font_remove_texture)>("font_remove_texture")
            .fun<static_cast<void(TextServer::*)(const RID &,const Vector2i &,int64_t,const Ref<Image> &)>(&TextServer::font_set_texture_image)>("font_set_texture_image")
            .fun<static_cast<Ref<Image>(TextServer::*)(const RID &,const Vector2i &,int64_t)const>(&TextServer::font_get_texture_image)>("font_get_texture_image")
            .fun<static_cast<void(TextServer::*)(const RID &,const Vector2i &,int64_t,const PackedInt32Array &)>(&TextServer::font_set_texture_offsets)>("font_set_texture_offsets")
            .fun<static_cast<PackedInt32Array(TextServer::*)(const RID &,const Vector2i &,int64_t)const>(&TextServer::font_get_texture_offsets)>("font_get_texture_offsets")
            .fun<static_cast<PackedInt32Array(TextServer::*)(const RID &,const Vector2i &)const>(&TextServer::font_get_glyph_list)>("font_get_glyph_list")
            .fun<static_cast<void(TextServer::*)(const RID &,const Vector2i &)>(&TextServer::font_clear_glyphs)>("font_clear_glyphs")
            .fun<static_cast<void(TextServer::*)(const RID &,const Vector2i &,int64_t)>(&TextServer::font_remove_glyph)>("font_remove_glyph")
            .fun<static_cast<Vector2(TextServer::*)(const RID &,int64_t,int64_t)const>(&TextServer::font_get_glyph_advance)>("font_get_glyph_advance")
            .fun<static_cast<void(TextServer::*)(const RID &,int64_t,int64_t,const Vector2 &)>(&TextServer::font_set_glyph_advance)>("font_set_glyph_advance")
            .fun<static_cast<Vector2(TextServer::*)(const RID &,const Vector2i &,int64_t)const>(&TextServer::font_get_glyph_offset)>("font_get_glyph_offset")
            .fun<static_cast<void(TextServer::*)(const RID &,const Vector2i &,int64_t,const Vector2 &)>(&TextServer::font_set_glyph_offset)>("font_set_glyph_offset")
            .fun<static_cast<Vector2(TextServer::*)(const RID &,const Vector2i &,int64_t)const>(&TextServer::font_get_glyph_size)>("font_get_glyph_size")
            .fun<static_cast<void(TextServer::*)(const RID &,const Vector2i &,int64_t,const Vector2 &)>(&TextServer::font_set_glyph_size)>("font_set_glyph_size")
            .fun<static_cast<Rect2(TextServer::*)(const RID &,const Vector2i &,int64_t)const>(&TextServer::font_get_glyph_uv_rect)>("font_get_glyph_uv_rect")
            .fun<static_cast<void(TextServer::*)(const RID &,const Vector2i &,int64_t,const Rect2 &)>(&TextServer::font_set_glyph_uv_rect)>("font_set_glyph_uv_rect")
            .fun<static_cast<int64_t(TextServer::*)(const RID &,const Vector2i &,int64_t)const>(&TextServer::font_get_glyph_texture_idx)>("font_get_glyph_texture_idx")
            .fun<static_cast<void(TextServer::*)(const RID &,const Vector2i &,int64_t,int64_t)>(&TextServer::font_set_glyph_texture_idx)>("font_set_glyph_texture_idx")
            .fun<static_cast<RID(TextServer::*)(const RID &,const Vector2i &,int64_t)const>(&TextServer::font_get_glyph_texture_rid)>("font_get_glyph_texture_rid")
            .fun<static_cast<Vector2(TextServer::*)(const RID &,const Vector2i &,int64_t)const>(&TextServer::font_get_glyph_texture_size)>("font_get_glyph_texture_size")
            .fun<static_cast<Dictionary(TextServer::*)(const RID &,int64_t,int64_t)const>(&TextServer::font_get_glyph_contours)>("font_get_glyph_contours")
            .fun<static_cast<TypedArray<Vector2i>(TextServer::*)(const RID &,int64_t)const>(&TextServer::font_get_kerning_list)>("font_get_kerning_list")
            .fun<static_cast<void(TextServer::*)(const RID &,int64_t)>(&TextServer::font_clear_kerning_map)>("font_clear_kerning_map")
            .fun<static_cast<void(TextServer::*)(const RID &,int64_t,const Vector2i &)>(&TextServer::font_remove_kerning)>("font_remove_kerning")
            .fun<static_cast<void(TextServer::*)(const RID &,int64_t,const Vector2i &,const Vector2 &)>(&TextServer::font_set_kerning)>("font_set_kerning")
            .fun<static_cast<Vector2(TextServer::*)(const RID &,int64_t,const Vector2i &)const>(&TextServer::font_get_kerning)>("font_get_kerning")
            .fun<static_cast<int64_t(TextServer::*)(const RID &,int64_t,int64_t,int64_t)const>(&TextServer::font_get_glyph_index)>("font_get_glyph_index")
            .fun<static_cast<int64_t(TextServer::*)(const RID &,int64_t,int64_t)const>(&TextServer::font_get_char_from_glyph_index)>("font_get_char_from_glyph_index")
            .fun<static_cast<bool(TextServer::*)(const RID &,int64_t)const>(&TextServer::font_has_char)>("font_has_char")
            .fun<static_cast<String(TextServer::*)(const RID &)const>(&TextServer::font_get_supported_chars)>("font_get_supported_chars")
            .fun<static_cast<void(TextServer::*)(const RID &,const Vector2i &,int64_t,int64_t)>(&TextServer::font_render_range)>("font_render_range")
            .fun<static_cast<void(TextServer::*)(const RID &,const Vector2i &,int64_t)>(&TextServer::font_render_glyph)>("font_render_glyph")
            .fun<static_cast<void(TextServer::*)(const RID &,const RID &,int64_t,const Vector2 &,int64_t,const Color &)const>(&TextServer::font_draw_glyph)>("font_draw_glyph")
            .fun<static_cast<void(TextServer::*)(const RID &,const RID &,int64_t,int64_t,const Vector2 &,int64_t,const Color &)const>(&TextServer::font_draw_glyph_outline)>("font_draw_glyph_outline")
            .fun<static_cast<bool(TextServer::*)(const RID &,const String &)const>(&TextServer::font_is_language_supported)>("font_is_language_supported")
            .fun<static_cast<void(TextServer::*)(const RID &,const String &,bool)>(&TextServer::font_set_language_support_override)>("font_set_language_support_override")
            .fun<static_cast<bool(TextServer::*)(const RID &,const String &)>(&TextServer::font_get_language_support_override)>("font_get_language_support_override")
            .fun<static_cast<void(TextServer::*)(const RID &,const String &)>(&TextServer::font_remove_language_support_override)>("font_remove_language_support_override")
            .fun<static_cast<PackedStringArray(TextServer::*)(const RID &)>(&TextServer::font_get_language_support_overrides)>("font_get_language_support_overrides")
            .fun<static_cast<bool(TextServer::*)(const RID &,const String &)const>(&TextServer::font_is_script_supported)>("font_is_script_supported")
            .fun<static_cast<void(TextServer::*)(const RID &,const String &,bool)>(&TextServer::font_set_script_support_override)>("font_set_script_support_override")
            .fun<static_cast<bool(TextServer::*)(const RID &,const String &)>(&TextServer::font_get_script_support_override)>("font_get_script_support_override")
            .fun<static_cast<void(TextServer::*)(const RID &,const String &)>(&TextServer::font_remove_script_support_override)>("font_remove_script_support_override")
            .fun<static_cast<PackedStringArray(TextServer::*)(const RID &)>(&TextServer::font_get_script_support_overrides)>("font_get_script_support_overrides")
            .fun<static_cast<void(TextServer::*)(const RID &,const Dictionary &)>(&TextServer::font_set_opentype_feature_overrides)>("font_set_opentype_feature_overrides")
            .fun<static_cast<Dictionary(TextServer::*)(const RID &)const>(&TextServer::font_get_opentype_feature_overrides)>("font_get_opentype_feature_overrides")
            .fun<static_cast<Dictionary(TextServer::*)(const RID &)const>(&TextServer::font_supported_feature_list)>("font_supported_feature_list")
            .fun<static_cast<Dictionary(TextServer::*)(const RID &)const>(&TextServer::font_supported_variation_list)>("font_supported_variation_list")
            .fun<static_cast<double(TextServer::*)()const>(&TextServer::font_get_global_oversampling)>("font_get_global_oversampling")
            .fun<static_cast<void(TextServer::*)(double)>(&TextServer::font_set_global_oversampling)>("font_set_global_oversampling")
            .fun<static_cast<Vector2(TextServer::*)(int64_t,int64_t)const>(&TextServer::get_hex_code_box_size)>("get_hex_code_box_size")
            .fun<static_cast<void(TextServer::*)(const RID &,int64_t,const Vector2 &,int64_t,const Color &)const>(&TextServer::draw_hex_code_box)>("draw_hex_code_box")
            .fun<static_cast<RID(TextServer::*)(TextServer::Direction,TextServer::Orientation)>(&TextServer::create_shaped_text)>("create_shaped_text")
            .fun<static_cast<void(TextServer::*)(const RID &)>(&TextServer::shaped_text_clear)>("shaped_text_clear")
            .fun<static_cast<void(TextServer::*)(const RID &,TextServer::Direction)>(&TextServer::shaped_text_set_direction)>("shaped_text_set_direction")
            .fun<static_cast<TextServer::Direction(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_direction)>("shaped_text_get_direction")
            .fun<static_cast<TextServer::Direction(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_inferred_direction)>("shaped_text_get_inferred_direction")
            .fun<static_cast<void(TextServer::*)(const RID &,const Array &)>(&TextServer::shaped_text_set_bidi_override)>("shaped_text_set_bidi_override")
            .fun<static_cast<void(TextServer::*)(const RID &,const String &)>(&TextServer::shaped_text_set_custom_punctuation)>("shaped_text_set_custom_punctuation")
            .fun<static_cast<String(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_custom_punctuation)>("shaped_text_get_custom_punctuation")
            .fun<static_cast<void(TextServer::*)(const RID &,int64_t)>(&TextServer::shaped_text_set_custom_ellipsis)>("shaped_text_set_custom_ellipsis")
            .fun<static_cast<int64_t(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_custom_ellipsis)>("shaped_text_get_custom_ellipsis")
            .fun<static_cast<void(TextServer::*)(const RID &,TextServer::Orientation)>(&TextServer::shaped_text_set_orientation)>("shaped_text_set_orientation")
            .fun<static_cast<TextServer::Orientation(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_orientation)>("shaped_text_get_orientation")
            .fun<static_cast<void(TextServer::*)(const RID &,bool)>(&TextServer::shaped_text_set_preserve_invalid)>("shaped_text_set_preserve_invalid")
            .fun<static_cast<bool(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_preserve_invalid)>("shaped_text_get_preserve_invalid")
            .fun<static_cast<void(TextServer::*)(const RID &,bool)>(&TextServer::shaped_text_set_preserve_control)>("shaped_text_set_preserve_control")
            .fun<static_cast<bool(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_preserve_control)>("shaped_text_get_preserve_control")
            .fun<static_cast<void(TextServer::*)(const RID &,TextServer::SpacingType,int64_t)>(&TextServer::shaped_text_set_spacing)>("shaped_text_set_spacing")
            .fun<static_cast<int64_t(TextServer::*)(const RID &,TextServer::SpacingType)const>(&TextServer::shaped_text_get_spacing)>("shaped_text_get_spacing")
            .fun<static_cast<bool(TextServer::*)(const RID &,const String &,const TypedArray<RID> &,int64_t,const Dictionary &,const String &,const Variant &)>(&TextServer::shaped_text_add_string)>("shaped_text_add_string")
            .fun<static_cast<bool(TextServer::*)(const RID &,const Variant &,const Vector2 &,InlineAlignment,int64_t,double)>(&TextServer::shaped_text_add_object)>("shaped_text_add_object")
            .fun<static_cast<bool(TextServer::*)(const RID &,const Variant &,const Vector2 &,InlineAlignment,double)>(&TextServer::shaped_text_resize_object)>("shaped_text_resize_object")
            .fun<static_cast<int64_t(TextServer::*)(const RID &)const>(&TextServer::shaped_get_span_count)>("shaped_get_span_count")
            .fun<static_cast<Variant(TextServer::*)(const RID &,int64_t)const>(&TextServer::shaped_get_span_meta)>("shaped_get_span_meta")
            .fun<static_cast<void(TextServer::*)(const RID &,int64_t,const TypedArray<RID> &,int64_t,const Dictionary &)>(&TextServer::shaped_set_span_update_font)>("shaped_set_span_update_font")
            .fun<static_cast<RID(TextServer::*)(const RID &,int64_t,int64_t)const>(&TextServer::shaped_text_substr)>("shaped_text_substr")
            .fun<static_cast<RID(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_parent)>("shaped_text_get_parent")
            .fun<static_cast<double(TextServer::*)(const RID &,double,BitField<TextServer::JustificationFlag>)>(&TextServer::shaped_text_fit_to_width)>("shaped_text_fit_to_width")
            .fun<static_cast<double(TextServer::*)(const RID &,const PackedFloat32Array &)>(&TextServer::shaped_text_tab_align)>("shaped_text_tab_align")
            .fun<static_cast<bool(TextServer::*)(const RID &)>(&TextServer::shaped_text_shape)>("shaped_text_shape")
            .fun<static_cast<bool(TextServer::*)(const RID &)const>(&TextServer::shaped_text_is_ready)>("shaped_text_is_ready")
            .fun<static_cast<bool(TextServer::*)(const RID &)const>(&TextServer::shaped_text_has_visible_chars)>("shaped_text_has_visible_chars")
            .fun<static_cast<TypedArray<Dictionary>(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_glyphs)>("shaped_text_get_glyphs")
            .fun<static_cast<TypedArray<Dictionary>(TextServer::*)(const RID &)>(&TextServer::shaped_text_sort_logical)>("shaped_text_sort_logical")
            .fun<static_cast<int64_t(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_glyph_count)>("shaped_text_get_glyph_count")
            .fun<static_cast<Vector2i(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_range)>("shaped_text_get_range")
            .fun<static_cast<PackedInt32Array(TextServer::*)(const RID &,const PackedFloat32Array &,int64_t,bool,BitField<TextServer::LineBreakFlag>)const>(&TextServer::shaped_text_get_line_breaks_adv)>("shaped_text_get_line_breaks_adv")
            .fun<static_cast<PackedInt32Array(TextServer::*)(const RID &,double,int64_t,BitField<TextServer::LineBreakFlag>)const>(&TextServer::shaped_text_get_line_breaks)>("shaped_text_get_line_breaks")
            .fun<static_cast<PackedInt32Array(TextServer::*)(const RID &,BitField<TextServer::GraphemeFlag>,BitField<TextServer::GraphemeFlag>)const>(&TextServer::shaped_text_get_word_breaks)>("shaped_text_get_word_breaks")
            .fun<static_cast<int64_t(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_trim_pos)>("shaped_text_get_trim_pos")
            .fun<static_cast<int64_t(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_ellipsis_pos)>("shaped_text_get_ellipsis_pos")
            .fun<static_cast<TypedArray<Dictionary>(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_ellipsis_glyphs)>("shaped_text_get_ellipsis_glyphs")
            .fun<static_cast<int64_t(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_ellipsis_glyph_count)>("shaped_text_get_ellipsis_glyph_count")
            .fun<static_cast<void(TextServer::*)(const RID &,double,BitField<TextServer::TextOverrunFlag>)>(&TextServer::shaped_text_overrun_trim_to_width)>("shaped_text_overrun_trim_to_width")
            .fun<static_cast<Array(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_objects)>("shaped_text_get_objects")
            .fun<static_cast<Rect2(TextServer::*)(const RID &,const Variant &)const>(&TextServer::shaped_text_get_object_rect)>("shaped_text_get_object_rect")
            .fun<static_cast<Vector2i(TextServer::*)(const RID &,const Variant &)const>(&TextServer::shaped_text_get_object_range)>("shaped_text_get_object_range")
            .fun<static_cast<int64_t(TextServer::*)(const RID &,const Variant &)const>(&TextServer::shaped_text_get_object_glyph)>("shaped_text_get_object_glyph")
            .fun<static_cast<Vector2(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_size)>("shaped_text_get_size")
            .fun<static_cast<double(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_ascent)>("shaped_text_get_ascent")
            .fun<static_cast<double(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_descent)>("shaped_text_get_descent")
            .fun<static_cast<double(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_width)>("shaped_text_get_width")
            .fun<static_cast<double(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_underline_position)>("shaped_text_get_underline_position")
            .fun<static_cast<double(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_underline_thickness)>("shaped_text_get_underline_thickness")
            .fun<static_cast<Dictionary(TextServer::*)(const RID &,int64_t)const>(&TextServer::shaped_text_get_carets)>("shaped_text_get_carets")
            .fun<static_cast<PackedVector2Array(TextServer::*)(const RID &,int64_t,int64_t)const>(&TextServer::shaped_text_get_selection)>("shaped_text_get_selection")
            .fun<static_cast<int64_t(TextServer::*)(const RID &,double)const>(&TextServer::shaped_text_hit_test_grapheme)>("shaped_text_hit_test_grapheme")
            .fun<static_cast<int64_t(TextServer::*)(const RID &,double)const>(&TextServer::shaped_text_hit_test_position)>("shaped_text_hit_test_position")
            .fun<static_cast<Vector2(TextServer::*)(const RID &,int64_t)const>(&TextServer::shaped_text_get_grapheme_bounds)>("shaped_text_get_grapheme_bounds")
            .fun<static_cast<int64_t(TextServer::*)(const RID &,int64_t)const>(&TextServer::shaped_text_next_grapheme_pos)>("shaped_text_next_grapheme_pos")
            .fun<static_cast<int64_t(TextServer::*)(const RID &,int64_t)const>(&TextServer::shaped_text_prev_grapheme_pos)>("shaped_text_prev_grapheme_pos")
            .fun<static_cast<PackedInt32Array(TextServer::*)(const RID &)const>(&TextServer::shaped_text_get_character_breaks)>("shaped_text_get_character_breaks")
            .fun<static_cast<int64_t(TextServer::*)(const RID &,int64_t)const>(&TextServer::shaped_text_next_character_pos)>("shaped_text_next_character_pos")
            .fun<static_cast<int64_t(TextServer::*)(const RID &,int64_t)const>(&TextServer::shaped_text_prev_character_pos)>("shaped_text_prev_character_pos")
            .fun<static_cast<int64_t(TextServer::*)(const RID &,int64_t)const>(&TextServer::shaped_text_closest_character_pos)>("shaped_text_closest_character_pos")
            .fun<static_cast<void(TextServer::*)(const RID &,const RID &,const Vector2 &,double,double,const Color &)const>(&TextServer::shaped_text_draw)>("shaped_text_draw")
            .fun<static_cast<void(TextServer::*)(const RID &,const RID &,const Vector2 &,double,double,int64_t,const Color &)const>(&TextServer::shaped_text_draw_outline)>("shaped_text_draw_outline")
            .fun<static_cast<TextServer::Direction(TextServer::*)(const RID &,int64_t,int64_t)const>(&TextServer::shaped_text_get_dominant_direction_in_range)>("shaped_text_get_dominant_direction_in_range")
            .fun<static_cast<String(TextServer::*)(const String &,const String &)const>(&TextServer::format_number)>("format_number")
            .fun<static_cast<String(TextServer::*)(const String &,const String &)const>(&TextServer::parse_number)>("parse_number")
            .fun<static_cast<String(TextServer::*)(const String &)const>(&TextServer::percent_sign)>("percent_sign")
            .fun<static_cast<PackedInt32Array(TextServer::*)(const String &,const String &,int64_t)const>(&TextServer::string_get_word_breaks)>("string_get_word_breaks")
            .fun<static_cast<PackedInt32Array(TextServer::*)(const String &,const String &)const>(&TextServer::string_get_character_breaks)>("string_get_character_breaks")
            .fun<static_cast<int64_t(TextServer::*)(const String &,const PackedStringArray &)const>(&TextServer::is_confusable)>("is_confusable")
            .fun<static_cast<bool(TextServer::*)(const String &)const>(&TextServer::spoof_check)>("spoof_check")
            .fun<static_cast<String(TextServer::*)(const String &)const>(&TextServer::strip_diacritics)>("strip_diacritics")
            .fun<static_cast<bool(TextServer::*)(const String &)const>(&TextServer::is_valid_identifier)>("is_valid_identifier")
            .fun<static_cast<bool(TextServer::*)(int64_t)const>(&TextServer::is_valid_letter)>("is_valid_letter")
            .fun<static_cast<String(TextServer::*)(const String &,const String &)const>(&TextServer::string_to_upper)>("string_to_upper")
            .fun<static_cast<String(TextServer::*)(const String &,const String &)const>(&TextServer::string_to_lower)>("string_to_lower")
            .fun<static_cast<String(TextServer::*)(const String &,const String &)const>(&TextServer::string_to_title)>("string_to_title")
            .fun<static_cast<TypedArray<Vector3i>(TextServer::*)(TextServer::StructuredTextParser,const Array &,const String &)const>(&TextServer::parse_structured_text)>("parse_structured_text")
;    qjs::Value _FontAntialiasing = context->newObject();
    _FontAntialiasing["FONT_ANTIALIASING_NONE"] = TextServer::FontAntialiasing::FONT_ANTIALIASING_NONE;
    _FontAntialiasing["FONT_ANTIALIASING_GRAY"] = TextServer::FontAntialiasing::FONT_ANTIALIASING_GRAY;
    _FontAntialiasing["FONT_ANTIALIASING_LCD"] = TextServer::FontAntialiasing::FONT_ANTIALIASING_LCD;
    _module.add("FontAntialiasing", std::move(_FontAntialiasing));
    qjs::Value _FontLCDSubpixelLayout = context->newObject();
    _FontLCDSubpixelLayout["FONT_LCD_SUBPIXEL_LAYOUT_NONE"] = TextServer::FontLCDSubpixelLayout::FONT_LCD_SUBPIXEL_LAYOUT_NONE;
    _FontLCDSubpixelLayout["FONT_LCD_SUBPIXEL_LAYOUT_HRGB"] = TextServer::FontLCDSubpixelLayout::FONT_LCD_SUBPIXEL_LAYOUT_HRGB;
    _FontLCDSubpixelLayout["FONT_LCD_SUBPIXEL_LAYOUT_HBGR"] = TextServer::FontLCDSubpixelLayout::FONT_LCD_SUBPIXEL_LAYOUT_HBGR;
    _FontLCDSubpixelLayout["FONT_LCD_SUBPIXEL_LAYOUT_VRGB"] = TextServer::FontLCDSubpixelLayout::FONT_LCD_SUBPIXEL_LAYOUT_VRGB;
    _FontLCDSubpixelLayout["FONT_LCD_SUBPIXEL_LAYOUT_VBGR"] = TextServer::FontLCDSubpixelLayout::FONT_LCD_SUBPIXEL_LAYOUT_VBGR;
    _FontLCDSubpixelLayout["FONT_LCD_SUBPIXEL_LAYOUT_MAX"] = TextServer::FontLCDSubpixelLayout::FONT_LCD_SUBPIXEL_LAYOUT_MAX;
    _module.add("FontLCDSubpixelLayout", std::move(_FontLCDSubpixelLayout));
    qjs::Value _Direction = context->newObject();
    _Direction["DIRECTION_AUTO"] = TextServer::Direction::DIRECTION_AUTO;
    _Direction["DIRECTION_LTR"] = TextServer::Direction::DIRECTION_LTR;
    _Direction["DIRECTION_RTL"] = TextServer::Direction::DIRECTION_RTL;
    _Direction["DIRECTION_INHERITED"] = TextServer::Direction::DIRECTION_INHERITED;
    _module.add("Direction", std::move(_Direction));
    qjs::Value _Orientation = context->newObject();
    _Orientation["ORIENTATION_HORIZONTAL"] = TextServer::Orientation::ORIENTATION_HORIZONTAL;
    _Orientation["ORIENTATION_VERTICAL"] = TextServer::Orientation::ORIENTATION_VERTICAL;
    _module.add("Orientation", std::move(_Orientation));
    qjs::Value _JustificationFlag = context->newObject();
    _JustificationFlag["JUSTIFICATION_NONE"] = TextServer::JustificationFlag::JUSTIFICATION_NONE;
    _JustificationFlag["JUSTIFICATION_KASHIDA"] = TextServer::JustificationFlag::JUSTIFICATION_KASHIDA;
    _JustificationFlag["JUSTIFICATION_WORD_BOUND"] = TextServer::JustificationFlag::JUSTIFICATION_WORD_BOUND;
    _JustificationFlag["JUSTIFICATION_TRIM_EDGE_SPACES"] = TextServer::JustificationFlag::JUSTIFICATION_TRIM_EDGE_SPACES;
    _JustificationFlag["JUSTIFICATION_AFTER_LAST_TAB"] = TextServer::JustificationFlag::JUSTIFICATION_AFTER_LAST_TAB;
    _JustificationFlag["JUSTIFICATION_CONSTRAIN_ELLIPSIS"] = TextServer::JustificationFlag::JUSTIFICATION_CONSTRAIN_ELLIPSIS;
    _JustificationFlag["JUSTIFICATION_SKIP_LAST_LINE"] = TextServer::JustificationFlag::JUSTIFICATION_SKIP_LAST_LINE;
    _JustificationFlag["JUSTIFICATION_SKIP_LAST_LINE_WITH_VISIBLE_CHARS"] = TextServer::JustificationFlag::JUSTIFICATION_SKIP_LAST_LINE_WITH_VISIBLE_CHARS;
    _JustificationFlag["JUSTIFICATION_DO_NOT_SKIP_SINGLE_LINE"] = TextServer::JustificationFlag::JUSTIFICATION_DO_NOT_SKIP_SINGLE_LINE;
    _module.add("JustificationFlag", std::move(_JustificationFlag));
    qjs::Value _AutowrapMode = context->newObject();
    _AutowrapMode["AUTOWRAP_OFF"] = TextServer::AutowrapMode::AUTOWRAP_OFF;
    _AutowrapMode["AUTOWRAP_ARBITRARY"] = TextServer::AutowrapMode::AUTOWRAP_ARBITRARY;
    _AutowrapMode["AUTOWRAP_WORD"] = TextServer::AutowrapMode::AUTOWRAP_WORD;
    _AutowrapMode["AUTOWRAP_WORD_SMART"] = TextServer::AutowrapMode::AUTOWRAP_WORD_SMART;
    _module.add("AutowrapMode", std::move(_AutowrapMode));
    qjs::Value _LineBreakFlag = context->newObject();
    _LineBreakFlag["BREAK_NONE"] = TextServer::LineBreakFlag::BREAK_NONE;
    _LineBreakFlag["BREAK_MANDATORY"] = TextServer::LineBreakFlag::BREAK_MANDATORY;
    _LineBreakFlag["BREAK_WORD_BOUND"] = TextServer::LineBreakFlag::BREAK_WORD_BOUND;
    _LineBreakFlag["BREAK_GRAPHEME_BOUND"] = TextServer::LineBreakFlag::BREAK_GRAPHEME_BOUND;
    _LineBreakFlag["BREAK_ADAPTIVE"] = TextServer::LineBreakFlag::BREAK_ADAPTIVE;
    _LineBreakFlag["BREAK_TRIM_EDGE_SPACES"] = TextServer::LineBreakFlag::BREAK_TRIM_EDGE_SPACES;
    _LineBreakFlag["BREAK_TRIM_INDENT"] = TextServer::LineBreakFlag::BREAK_TRIM_INDENT;
    _module.add("LineBreakFlag", std::move(_LineBreakFlag));
    qjs::Value _VisibleCharactersBehavior = context->newObject();
    _VisibleCharactersBehavior["VC_CHARS_BEFORE_SHAPING"] = TextServer::VisibleCharactersBehavior::VC_CHARS_BEFORE_SHAPING;
    _VisibleCharactersBehavior["VC_CHARS_AFTER_SHAPING"] = TextServer::VisibleCharactersBehavior::VC_CHARS_AFTER_SHAPING;
    _VisibleCharactersBehavior["VC_GLYPHS_AUTO"] = TextServer::VisibleCharactersBehavior::VC_GLYPHS_AUTO;
    _VisibleCharactersBehavior["VC_GLYPHS_LTR"] = TextServer::VisibleCharactersBehavior::VC_GLYPHS_LTR;
    _VisibleCharactersBehavior["VC_GLYPHS_RTL"] = TextServer::VisibleCharactersBehavior::VC_GLYPHS_RTL;
    _module.add("VisibleCharactersBehavior", std::move(_VisibleCharactersBehavior));
    qjs::Value _OverrunBehavior = context->newObject();
    _OverrunBehavior["OVERRUN_NO_TRIMMING"] = TextServer::OverrunBehavior::OVERRUN_NO_TRIMMING;
    _OverrunBehavior["OVERRUN_TRIM_CHAR"] = TextServer::OverrunBehavior::OVERRUN_TRIM_CHAR;
    _OverrunBehavior["OVERRUN_TRIM_WORD"] = TextServer::OverrunBehavior::OVERRUN_TRIM_WORD;
    _OverrunBehavior["OVERRUN_TRIM_ELLIPSIS"] = TextServer::OverrunBehavior::OVERRUN_TRIM_ELLIPSIS;
    _OverrunBehavior["OVERRUN_TRIM_WORD_ELLIPSIS"] = TextServer::OverrunBehavior::OVERRUN_TRIM_WORD_ELLIPSIS;
    _module.add("OverrunBehavior", std::move(_OverrunBehavior));
    qjs::Value _TextOverrunFlag = context->newObject();
    _TextOverrunFlag["OVERRUN_NO_TRIM"] = TextServer::TextOverrunFlag::OVERRUN_NO_TRIM;
    _TextOverrunFlag["OVERRUN_TRIM"] = TextServer::TextOverrunFlag::OVERRUN_TRIM;
    _TextOverrunFlag["OVERRUN_TRIM_WORD_ONLY"] = TextServer::TextOverrunFlag::OVERRUN_TRIM_WORD_ONLY;
    _TextOverrunFlag["OVERRUN_ADD_ELLIPSIS"] = TextServer::TextOverrunFlag::OVERRUN_ADD_ELLIPSIS;
    _TextOverrunFlag["OVERRUN_ENFORCE_ELLIPSIS"] = TextServer::TextOverrunFlag::OVERRUN_ENFORCE_ELLIPSIS;
    _TextOverrunFlag["OVERRUN_JUSTIFICATION_AWARE"] = TextServer::TextOverrunFlag::OVERRUN_JUSTIFICATION_AWARE;
    _module.add("TextOverrunFlag", std::move(_TextOverrunFlag));
    qjs::Value _GraphemeFlag = context->newObject();
    _GraphemeFlag["GRAPHEME_IS_VALID"] = TextServer::GraphemeFlag::GRAPHEME_IS_VALID;
    _GraphemeFlag["GRAPHEME_IS_RTL"] = TextServer::GraphemeFlag::GRAPHEME_IS_RTL;
    _GraphemeFlag["GRAPHEME_IS_VIRTUAL"] = TextServer::GraphemeFlag::GRAPHEME_IS_VIRTUAL;
    _GraphemeFlag["GRAPHEME_IS_SPACE"] = TextServer::GraphemeFlag::GRAPHEME_IS_SPACE;
    _GraphemeFlag["GRAPHEME_IS_BREAK_HARD"] = TextServer::GraphemeFlag::GRAPHEME_IS_BREAK_HARD;
    _GraphemeFlag["GRAPHEME_IS_BREAK_SOFT"] = TextServer::GraphemeFlag::GRAPHEME_IS_BREAK_SOFT;
    _GraphemeFlag["GRAPHEME_IS_TAB"] = TextServer::GraphemeFlag::GRAPHEME_IS_TAB;
    _GraphemeFlag["GRAPHEME_IS_ELONGATION"] = TextServer::GraphemeFlag::GRAPHEME_IS_ELONGATION;
    _GraphemeFlag["GRAPHEME_IS_PUNCTUATION"] = TextServer::GraphemeFlag::GRAPHEME_IS_PUNCTUATION;
    _GraphemeFlag["GRAPHEME_IS_UNDERSCORE"] = TextServer::GraphemeFlag::GRAPHEME_IS_UNDERSCORE;
    _GraphemeFlag["GRAPHEME_IS_CONNECTED"] = TextServer::GraphemeFlag::GRAPHEME_IS_CONNECTED;
    _GraphemeFlag["GRAPHEME_IS_SAFE_TO_INSERT_TATWEEL"] = TextServer::GraphemeFlag::GRAPHEME_IS_SAFE_TO_INSERT_TATWEEL;
    _GraphemeFlag["GRAPHEME_IS_EMBEDDED_OBJECT"] = TextServer::GraphemeFlag::GRAPHEME_IS_EMBEDDED_OBJECT;
    _GraphemeFlag["GRAPHEME_IS_SOFT_HYPHEN"] = TextServer::GraphemeFlag::GRAPHEME_IS_SOFT_HYPHEN;
    _module.add("GraphemeFlag", std::move(_GraphemeFlag));
    qjs::Value _Hinting = context->newObject();
    _Hinting["HINTING_NONE"] = TextServer::Hinting::HINTING_NONE;
    _Hinting["HINTING_LIGHT"] = TextServer::Hinting::HINTING_LIGHT;
    _Hinting["HINTING_NORMAL"] = TextServer::Hinting::HINTING_NORMAL;
    _module.add("Hinting", std::move(_Hinting));
    qjs::Value _SubpixelPositioning = context->newObject();
    _SubpixelPositioning["SUBPIXEL_POSITIONING_DISABLED"] = TextServer::SubpixelPositioning::SUBPIXEL_POSITIONING_DISABLED;
    _SubpixelPositioning["SUBPIXEL_POSITIONING_AUTO"] = TextServer::SubpixelPositioning::SUBPIXEL_POSITIONING_AUTO;
    _SubpixelPositioning["SUBPIXEL_POSITIONING_ONE_HALF"] = TextServer::SubpixelPositioning::SUBPIXEL_POSITIONING_ONE_HALF;
    _SubpixelPositioning["SUBPIXEL_POSITIONING_ONE_QUARTER"] = TextServer::SubpixelPositioning::SUBPIXEL_POSITIONING_ONE_QUARTER;
    _SubpixelPositioning["SUBPIXEL_POSITIONING_ONE_HALF_MAX_SIZE"] = TextServer::SubpixelPositioning::SUBPIXEL_POSITIONING_ONE_HALF_MAX_SIZE;
    _SubpixelPositioning["SUBPIXEL_POSITIONING_ONE_QUARTER_MAX_SIZE"] = TextServer::SubpixelPositioning::SUBPIXEL_POSITIONING_ONE_QUARTER_MAX_SIZE;
    _module.add("SubpixelPositioning", std::move(_SubpixelPositioning));
    qjs::Value _Feature = context->newObject();
    _Feature["FEATURE_SIMPLE_LAYOUT"] = TextServer::Feature::FEATURE_SIMPLE_LAYOUT;
    _Feature["FEATURE_BIDI_LAYOUT"] = TextServer::Feature::FEATURE_BIDI_LAYOUT;
    _Feature["FEATURE_VERTICAL_LAYOUT"] = TextServer::Feature::FEATURE_VERTICAL_LAYOUT;
    _Feature["FEATURE_SHAPING"] = TextServer::Feature::FEATURE_SHAPING;
    _Feature["FEATURE_KASHIDA_JUSTIFICATION"] = TextServer::Feature::FEATURE_KASHIDA_JUSTIFICATION;
    _Feature["FEATURE_BREAK_ITERATORS"] = TextServer::Feature::FEATURE_BREAK_ITERATORS;
    _Feature["FEATURE_FONT_BITMAP"] = TextServer::Feature::FEATURE_FONT_BITMAP;
    _Feature["FEATURE_FONT_DYNAMIC"] = TextServer::Feature::FEATURE_FONT_DYNAMIC;
    _Feature["FEATURE_FONT_MSDF"] = TextServer::Feature::FEATURE_FONT_MSDF;
    _Feature["FEATURE_FONT_SYSTEM"] = TextServer::Feature::FEATURE_FONT_SYSTEM;
    _Feature["FEATURE_FONT_VARIABLE"] = TextServer::Feature::FEATURE_FONT_VARIABLE;
    _Feature["FEATURE_CONTEXT_SENSITIVE_CASE_CONVERSION"] = TextServer::Feature::FEATURE_CONTEXT_SENSITIVE_CASE_CONVERSION;
    _Feature["FEATURE_USE_SUPPORT_DATA"] = TextServer::Feature::FEATURE_USE_SUPPORT_DATA;
    _Feature["FEATURE_UNICODE_IDENTIFIERS"] = TextServer::Feature::FEATURE_UNICODE_IDENTIFIERS;
    _Feature["FEATURE_UNICODE_SECURITY"] = TextServer::Feature::FEATURE_UNICODE_SECURITY;
    _module.add("Feature", std::move(_Feature));
    qjs::Value _ContourPointTag = context->newObject();
    _ContourPointTag["CONTOUR_CURVE_TAG_ON"] = TextServer::ContourPointTag::CONTOUR_CURVE_TAG_ON;
    _ContourPointTag["CONTOUR_CURVE_TAG_OFF_CONIC"] = TextServer::ContourPointTag::CONTOUR_CURVE_TAG_OFF_CONIC;
    _ContourPointTag["CONTOUR_CURVE_TAG_OFF_CUBIC"] = TextServer::ContourPointTag::CONTOUR_CURVE_TAG_OFF_CUBIC;
    _module.add("ContourPointTag", std::move(_ContourPointTag));
    qjs::Value _SpacingType = context->newObject();
    _SpacingType["SPACING_GLYPH"] = TextServer::SpacingType::SPACING_GLYPH;
    _SpacingType["SPACING_SPACE"] = TextServer::SpacingType::SPACING_SPACE;
    _SpacingType["SPACING_TOP"] = TextServer::SpacingType::SPACING_TOP;
    _SpacingType["SPACING_BOTTOM"] = TextServer::SpacingType::SPACING_BOTTOM;
    _SpacingType["SPACING_MAX"] = TextServer::SpacingType::SPACING_MAX;
    _module.add("SpacingType", std::move(_SpacingType));
    qjs::Value _FontStyle = context->newObject();
    _FontStyle["FONT_BOLD"] = TextServer::FontStyle::FONT_BOLD;
    _FontStyle["FONT_ITALIC"] = TextServer::FontStyle::FONT_ITALIC;
    _FontStyle["FONT_FIXED_WIDTH"] = TextServer::FontStyle::FONT_FIXED_WIDTH;
    _module.add("FontStyle", std::move(_FontStyle));
    qjs::Value _StructuredTextParser = context->newObject();
    _StructuredTextParser["STRUCTURED_TEXT_DEFAULT"] = TextServer::StructuredTextParser::STRUCTURED_TEXT_DEFAULT;
    _StructuredTextParser["STRUCTURED_TEXT_URI"] = TextServer::StructuredTextParser::STRUCTURED_TEXT_URI;
    _StructuredTextParser["STRUCTURED_TEXT_FILE"] = TextServer::StructuredTextParser::STRUCTURED_TEXT_FILE;
    _StructuredTextParser["STRUCTURED_TEXT_EMAIL"] = TextServer::StructuredTextParser::STRUCTURED_TEXT_EMAIL;
    _StructuredTextParser["STRUCTURED_TEXT_LIST"] = TextServer::StructuredTextParser::STRUCTURED_TEXT_LIST;
    _StructuredTextParser["STRUCTURED_TEXT_GDSCRIPT"] = TextServer::StructuredTextParser::STRUCTURED_TEXT_GDSCRIPT;
    _StructuredTextParser["STRUCTURED_TEXT_CUSTOM"] = TextServer::StructuredTextParser::STRUCTURED_TEXT_CUSTOM;
    _module.add("StructuredTextParser", std::move(_StructuredTextParser));
    qjs::Value _FixedSizeScaleMode = context->newObject();
    _FixedSizeScaleMode["FIXED_SIZE_SCALE_DISABLE"] = TextServer::FixedSizeScaleMode::FIXED_SIZE_SCALE_DISABLE;
    _FixedSizeScaleMode["FIXED_SIZE_SCALE_INTEGER_ONLY"] = TextServer::FixedSizeScaleMode::FIXED_SIZE_SCALE_INTEGER_ONLY;
    _FixedSizeScaleMode["FIXED_SIZE_SCALE_ENABLED"] = TextServer::FixedSizeScaleMode::FIXED_SIZE_SCALE_ENABLED;
    _module.add("FixedSizeScaleMode", std::move(_FixedSizeScaleMode));
}