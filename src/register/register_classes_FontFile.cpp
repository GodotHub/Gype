#include <godot_cpp/classes/font_file.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_FontFile() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<FontFile>("FontFile")
            .constructor<>()
            .base<Font>()
            .property<static_cast<PackedByteArray(FontFile::*)()const>(&FontFile::get_data),static_cast<void(FontFile::*)(const PackedByteArray &)>(&FontFile::set_data)>("data")
            .property<static_cast<bool(FontFile::*)()const>(&FontFile::get_generate_mipmaps),static_cast<void(FontFile::*)(bool)>(&FontFile::set_generate_mipmaps)>("generate_mipmaps")
            .property<static_cast<bool(FontFile::*)()const>(&FontFile::get_disable_embedded_bitmaps),static_cast<void(FontFile::*)(bool)>(&FontFile::set_disable_embedded_bitmaps)>("disable_embedded_bitmaps")
            .property<static_cast<TextServer::FontAntialiasing(FontFile::*)()const>(&FontFile::get_antialiasing),static_cast<void(FontFile::*)(TextServer::FontAntialiasing)>(&FontFile::set_antialiasing)>("antialiasing")
            .property<static_cast<void(FontFile::*)(const String &)>(&FontFile::set_font_name)>("{'name': 'set_font_name', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 83702148, 'arguments': [{'name': 'name', 'type': 'String'}]}")
            .property<static_cast<void(FontFile::*)(const String &)>(&FontFile::set_font_style_name)>("{'name': 'set_font_style_name', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 83702148, 'arguments': [{'name': 'name', 'type': 'String'}]}")
            .property<static_cast<void(FontFile::*)(BitField<TextServer::FontStyle>)>(&FontFile::set_font_style)>("{'name': 'set_font_style', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 918070724, 'arguments': [{'name': 'style', 'type': 'bitfield::TextServer.FontStyle'}]}")
            .property<static_cast<void(FontFile::*)(int32_t)>(&FontFile::set_font_weight)>("{'name': 'set_font_weight', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'weight', 'type': 'int', 'meta': 'int32_t'}]}")
            .property<static_cast<void(FontFile::*)(int32_t)>(&FontFile::set_font_stretch)>("{'name': 'set_font_stretch', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'stretch', 'type': 'int', 'meta': 'int32_t'}]}")
            .property<static_cast<TextServer::SubpixelPositioning(FontFile::*)()const>(&FontFile::get_subpixel_positioning),static_cast<void(FontFile::*)(TextServer::SubpixelPositioning)>(&FontFile::set_subpixel_positioning)>("subpixel_positioning")
            .property<static_cast<bool(FontFile::*)()const>(&FontFile::is_multichannel_signed_distance_field),static_cast<void(FontFile::*)(bool)>(&FontFile::set_multichannel_signed_distance_field)>("multichannel_signed_distance_field")
            .property<static_cast<int32_t(FontFile::*)()const>(&FontFile::get_msdf_pixel_range),static_cast<void(FontFile::*)(int32_t)>(&FontFile::set_msdf_pixel_range)>("msdf_pixel_range")
            .property<static_cast<int32_t(FontFile::*)()const>(&FontFile::get_msdf_size),static_cast<void(FontFile::*)(int32_t)>(&FontFile::set_msdf_size)>("msdf_size")
            .property<static_cast<bool(FontFile::*)()const>(&FontFile::is_allow_system_fallback),static_cast<void(FontFile::*)(bool)>(&FontFile::set_allow_system_fallback)>("allow_system_fallback")
            .property<static_cast<bool(FontFile::*)()const>(&FontFile::is_force_autohinter),static_cast<void(FontFile::*)(bool)>(&FontFile::set_force_autohinter)>("force_autohinter")
            .property<static_cast<TextServer::Hinting(FontFile::*)()const>(&FontFile::get_hinting),static_cast<void(FontFile::*)(TextServer::Hinting)>(&FontFile::set_hinting)>("hinting")
            .property<static_cast<double(FontFile::*)()const>(&FontFile::get_oversampling),static_cast<void(FontFile::*)(double)>(&FontFile::set_oversampling)>("oversampling")
            .property<static_cast<int32_t(FontFile::*)()const>(&FontFile::get_fixed_size),static_cast<void(FontFile::*)(int32_t)>(&FontFile::set_fixed_size)>("fixed_size")
            .property<static_cast<TextServer::FixedSizeScaleMode(FontFile::*)()const>(&FontFile::get_fixed_size_scale_mode),static_cast<void(FontFile::*)(TextServer::FixedSizeScaleMode)>(&FontFile::set_fixed_size_scale_mode)>("fixed_size_scale_mode")
            .property<static_cast<Dictionary(FontFile::*)()const>(&FontFile::get_opentype_feature_overrides),static_cast<void(FontFile::*)(const Dictionary &)>(&FontFile::set_opentype_feature_overrides)>("opentype_feature_overrides")
            .fun<static_cast<Error(FontFile::*)(const String &)>(&FontFile::load_bitmap_font)>("load_bitmap_font")
            .fun<static_cast<Error(FontFile::*)(const String &)>(&FontFile::load_dynamic_font)>("load_dynamic_font")
            .fun<static_cast<int32_t(FontFile::*)()const>(&FontFile::get_cache_count)>("get_cache_count")
            .fun<static_cast<void(FontFile::*)()>(&FontFile::clear_cache)>("clear_cache")
            .fun<static_cast<void(FontFile::*)(int32_t)>(&FontFile::remove_cache)>("remove_cache")
            .fun<static_cast<TypedArray<Vector2i>(FontFile::*)(int32_t)const>(&FontFile::get_size_cache_list)>("get_size_cache_list")
            .fun<static_cast<void(FontFile::*)(int32_t)>(&FontFile::clear_size_cache)>("clear_size_cache")
            .fun<static_cast<void(FontFile::*)(int32_t,const Vector2i &)>(&FontFile::remove_size_cache)>("remove_size_cache")
            .fun<static_cast<void(FontFile::*)(int32_t,const Dictionary &)>(&FontFile::set_variation_coordinates)>("set_variation_coordinates")
            .fun<static_cast<Dictionary(FontFile::*)(int32_t)const>(&FontFile::get_variation_coordinates)>("get_variation_coordinates")
            .fun<static_cast<void(FontFile::*)(int32_t,double)>(&FontFile::set_embolden)>("set_embolden")
            .fun<static_cast<double(FontFile::*)(int32_t)const>(&FontFile::get_embolden)>("get_embolden")
            .fun<static_cast<void(FontFile::*)(int32_t,const Transform2D &)>(&FontFile::set_transform)>("set_transform")
            .fun<static_cast<Transform2D(FontFile::*)(int32_t)const>(&FontFile::get_transform)>("get_transform")
            .fun<static_cast<void(FontFile::*)(int32_t,TextServer::SpacingType,int64_t)>(&FontFile::set_extra_spacing)>("set_extra_spacing")
            .fun<static_cast<int64_t(FontFile::*)(int32_t,TextServer::SpacingType)const>(&FontFile::get_extra_spacing)>("get_extra_spacing")
            .fun<static_cast<void(FontFile::*)(int32_t,double)>(&FontFile::set_extra_baseline_offset)>("set_extra_baseline_offset")
            .fun<static_cast<double(FontFile::*)(int32_t)const>(&FontFile::get_extra_baseline_offset)>("get_extra_baseline_offset")
            .fun<static_cast<void(FontFile::*)(int32_t,int64_t)>(&FontFile::set_face_index)>("set_face_index")
            .fun<static_cast<int64_t(FontFile::*)(int32_t)const>(&FontFile::get_face_index)>("get_face_index")
            .fun<static_cast<void(FontFile::*)(int32_t,int32_t,double)>(&FontFile::set_cache_ascent)>("set_cache_ascent")
            .fun<static_cast<double(FontFile::*)(int32_t,int32_t)const>(&FontFile::get_cache_ascent)>("get_cache_ascent")
            .fun<static_cast<void(FontFile::*)(int32_t,int32_t,double)>(&FontFile::set_cache_descent)>("set_cache_descent")
            .fun<static_cast<double(FontFile::*)(int32_t,int32_t)const>(&FontFile::get_cache_descent)>("get_cache_descent")
            .fun<static_cast<void(FontFile::*)(int32_t,int32_t,double)>(&FontFile::set_cache_underline_position)>("set_cache_underline_position")
            .fun<static_cast<double(FontFile::*)(int32_t,int32_t)const>(&FontFile::get_cache_underline_position)>("get_cache_underline_position")
            .fun<static_cast<void(FontFile::*)(int32_t,int32_t,double)>(&FontFile::set_cache_underline_thickness)>("set_cache_underline_thickness")
            .fun<static_cast<double(FontFile::*)(int32_t,int32_t)const>(&FontFile::get_cache_underline_thickness)>("get_cache_underline_thickness")
            .fun<static_cast<void(FontFile::*)(int32_t,int32_t,double)>(&FontFile::set_cache_scale)>("set_cache_scale")
            .fun<static_cast<double(FontFile::*)(int32_t,int32_t)const>(&FontFile::get_cache_scale)>("get_cache_scale")
            .fun<static_cast<int32_t(FontFile::*)(int32_t,const Vector2i &)const>(&FontFile::get_texture_count)>("get_texture_count")
            .fun<static_cast<void(FontFile::*)(int32_t,const Vector2i &)>(&FontFile::clear_textures)>("clear_textures")
            .fun<static_cast<void(FontFile::*)(int32_t,const Vector2i &,int32_t)>(&FontFile::remove_texture)>("remove_texture")
            .fun<static_cast<void(FontFile::*)(int32_t,const Vector2i &,int32_t,const Ref<Image> &)>(&FontFile::set_texture_image)>("set_texture_image")
            .fun<static_cast<Ref<Image>(FontFile::*)(int32_t,const Vector2i &,int32_t)const>(&FontFile::get_texture_image)>("get_texture_image")
            .fun<static_cast<void(FontFile::*)(int32_t,const Vector2i &,int32_t,const PackedInt32Array &)>(&FontFile::set_texture_offsets)>("set_texture_offsets")
            .fun<static_cast<PackedInt32Array(FontFile::*)(int32_t,const Vector2i &,int32_t)const>(&FontFile::get_texture_offsets)>("get_texture_offsets")
            .fun<static_cast<PackedInt32Array(FontFile::*)(int32_t,const Vector2i &)const>(&FontFile::get_glyph_list)>("get_glyph_list")
            .fun<static_cast<void(FontFile::*)(int32_t,const Vector2i &)>(&FontFile::clear_glyphs)>("clear_glyphs")
            .fun<static_cast<void(FontFile::*)(int32_t,const Vector2i &,int32_t)>(&FontFile::remove_glyph)>("remove_glyph")
            .fun<static_cast<void(FontFile::*)(int32_t,int32_t,int32_t,const Vector2 &)>(&FontFile::set_glyph_advance)>("set_glyph_advance")
            .fun<static_cast<Vector2(FontFile::*)(int32_t,int32_t,int32_t)const>(&FontFile::get_glyph_advance)>("get_glyph_advance")
            .fun<static_cast<void(FontFile::*)(int32_t,const Vector2i &,int32_t,const Vector2 &)>(&FontFile::set_glyph_offset)>("set_glyph_offset")
            .fun<static_cast<Vector2(FontFile::*)(int32_t,const Vector2i &,int32_t)const>(&FontFile::get_glyph_offset)>("get_glyph_offset")
            .fun<static_cast<void(FontFile::*)(int32_t,const Vector2i &,int32_t,const Vector2 &)>(&FontFile::set_glyph_size)>("set_glyph_size")
            .fun<static_cast<Vector2(FontFile::*)(int32_t,const Vector2i &,int32_t)const>(&FontFile::get_glyph_size)>("get_glyph_size")
            .fun<static_cast<void(FontFile::*)(int32_t,const Vector2i &,int32_t,const Rect2 &)>(&FontFile::set_glyph_uv_rect)>("set_glyph_uv_rect")
            .fun<static_cast<Rect2(FontFile::*)(int32_t,const Vector2i &,int32_t)const>(&FontFile::get_glyph_uv_rect)>("get_glyph_uv_rect")
            .fun<static_cast<void(FontFile::*)(int32_t,const Vector2i &,int32_t,int32_t)>(&FontFile::set_glyph_texture_idx)>("set_glyph_texture_idx")
            .fun<static_cast<int32_t(FontFile::*)(int32_t,const Vector2i &,int32_t)const>(&FontFile::get_glyph_texture_idx)>("get_glyph_texture_idx")
            .fun<static_cast<TypedArray<Vector2i>(FontFile::*)(int32_t,int32_t)const>(&FontFile::get_kerning_list)>("get_kerning_list")
            .fun<static_cast<void(FontFile::*)(int32_t,int32_t)>(&FontFile::clear_kerning_map)>("clear_kerning_map")
            .fun<static_cast<void(FontFile::*)(int32_t,int32_t,const Vector2i &)>(&FontFile::remove_kerning)>("remove_kerning")
            .fun<static_cast<void(FontFile::*)(int32_t,int32_t,const Vector2i &,const Vector2 &)>(&FontFile::set_kerning)>("set_kerning")
            .fun<static_cast<Vector2(FontFile::*)(int32_t,int32_t,const Vector2i &)const>(&FontFile::get_kerning)>("get_kerning")
            .fun<static_cast<void(FontFile::*)(int32_t,const Vector2i &,int64_t,int64_t)>(&FontFile::render_range)>("render_range")
            .fun<static_cast<void(FontFile::*)(int32_t,const Vector2i &,int32_t)>(&FontFile::render_glyph)>("render_glyph")
            .fun<static_cast<void(FontFile::*)(const String &,bool)>(&FontFile::set_language_support_override)>("set_language_support_override")
            .fun<static_cast<bool(FontFile::*)(const String &)const>(&FontFile::get_language_support_override)>("get_language_support_override")
            .fun<static_cast<void(FontFile::*)(const String &)>(&FontFile::remove_language_support_override)>("remove_language_support_override")
            .fun<static_cast<PackedStringArray(FontFile::*)()const>(&FontFile::get_language_support_overrides)>("get_language_support_overrides")
            .fun<static_cast<void(FontFile::*)(const String &,bool)>(&FontFile::set_script_support_override)>("set_script_support_override")
            .fun<static_cast<bool(FontFile::*)(const String &)const>(&FontFile::get_script_support_override)>("get_script_support_override")
            .fun<static_cast<void(FontFile::*)(const String &)>(&FontFile::remove_script_support_override)>("remove_script_support_override")
            .fun<static_cast<PackedStringArray(FontFile::*)()const>(&FontFile::get_script_support_overrides)>("get_script_support_overrides")
            .fun<static_cast<int32_t(FontFile::*)(int32_t,int64_t,int64_t)const>(&FontFile::get_glyph_index)>("get_glyph_index")
            .fun<static_cast<int64_t(FontFile::*)(int32_t,int32_t)const>(&FontFile::get_char_from_glyph_index)>("get_char_from_glyph_index")
;}