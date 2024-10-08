
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/font_file.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void font_file_class_finalizer(JSRuntime *rt, JSValue val) {
	FontFile *font_file = static_cast<FontFile *>(JS_GetOpaque(val, FontFile::__class_id));
	if (font_file)
		FontFile::free(nullptr, font_file);
}

static JSClassDef font_file_class_def = {
	"FontFile",
	.finalizer = font_file_class_finalizer
};

static JSValue font_file_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	FontFile *font_file_class;
	JSValue obj = JS_NewObjectClass(ctx, FontFile::__class_id);
	if (JS_IsException(obj))
		return obj;
	font_file_class = memnew(FontFile);
	if (!font_file_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, font_file_class);
	return obj;
}
static JSValue font_file_class_load_bitmap_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&FontFile::load_bitmap_font, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_load_dynamic_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&FontFile::load_dynamic_font, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_data, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_data, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_font_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_font_name, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_set_font_style_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_font_style_name, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_set_font_style(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_font_style, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_set_font_weight(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_font_weight, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_set_font_stretch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_font_stretch, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_set_antialiasing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_antialiasing, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_antialiasing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_antialiasing, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_disable_embedded_bitmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_disable_embedded_bitmaps, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_disable_embedded_bitmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_disable_embedded_bitmaps, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_generate_mipmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_generate_mipmaps, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_generate_mipmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_generate_mipmaps, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_multichannel_signed_distance_field(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_multichannel_signed_distance_field, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_is_multichannel_signed_distance_field(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::is_multichannel_signed_distance_field, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_msdf_pixel_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_msdf_pixel_range, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_msdf_pixel_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_msdf_pixel_range, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_msdf_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_msdf_size, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_msdf_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_msdf_size, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_fixed_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_fixed_size, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_fixed_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_fixed_size, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_fixed_size_scale_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_fixed_size_scale_mode, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_fixed_size_scale_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_fixed_size_scale_mode, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_allow_system_fallback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_allow_system_fallback, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_is_allow_system_fallback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::is_allow_system_fallback, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_force_autohinter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_force_autohinter, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_is_force_autohinter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::is_force_autohinter, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_hinting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_hinting, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_hinting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_hinting, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_subpixel_positioning(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_subpixel_positioning, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_subpixel_positioning(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_subpixel_positioning, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_oversampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_oversampling, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_oversampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_oversampling, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_get_cache_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_cache_count, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_clear_cache(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::clear_cache, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_remove_cache(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::remove_cache, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_size_cache_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_size_cache_list, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_clear_size_cache(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::clear_size_cache, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_remove_size_cache(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::remove_size_cache, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_set_variation_coordinates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_variation_coordinates, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_variation_coordinates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_variation_coordinates, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_embolden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_embolden, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_embolden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_embolden, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_transform, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_transform, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_extra_spacing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_extra_spacing, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_extra_spacing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_extra_spacing, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_extra_baseline_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_extra_baseline_offset, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_extra_baseline_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_extra_baseline_offset, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_face_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_face_index, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_face_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_face_index, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_cache_ascent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_cache_ascent, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_cache_ascent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_cache_ascent, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_cache_descent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_cache_descent, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_cache_descent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_cache_descent, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_cache_underline_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_cache_underline_position, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_cache_underline_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_cache_underline_position, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_cache_underline_thickness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_cache_underline_thickness, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_cache_underline_thickness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_cache_underline_thickness, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_cache_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_cache_scale, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_cache_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_cache_scale, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_get_texture_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_texture_count, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_clear_textures(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::clear_textures, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_remove_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::remove_texture, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_set_texture_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_texture_image, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_texture_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_texture_image, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_texture_offsets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_texture_offsets, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_texture_offsets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_texture_offsets, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_get_glyph_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_glyph_list, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_clear_glyphs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::clear_glyphs, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_remove_glyph(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::remove_glyph, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_set_glyph_advance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_glyph_advance, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_glyph_advance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_glyph_advance, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_glyph_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_glyph_offset, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_glyph_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_glyph_offset, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_glyph_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_glyph_size, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_glyph_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_glyph_size, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_glyph_uv_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_glyph_uv_rect, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_glyph_uv_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_glyph_uv_rect, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_glyph_texture_idx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_glyph_texture_idx, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_glyph_texture_idx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_glyph_texture_idx, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_get_kerning_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_kerning_list, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_clear_kerning_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::clear_kerning_map, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_remove_kerning(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::remove_kerning, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_set_kerning(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_kerning, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_kerning(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_kerning, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_render_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::render_range, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_render_glyph(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::render_glyph, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_set_language_support_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_language_support_override, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_language_support_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_language_support_override, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_remove_language_support_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::remove_language_support_override, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_language_support_overrides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_language_support_overrides, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_script_support_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_script_support_override, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_script_support_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_script_support_override, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_remove_script_support_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::remove_script_support_override, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_script_support_overrides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_script_support_overrides, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_set_opentype_feature_overrides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&FontFile::set_opentype_feature_overrides, FontFile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_file_class_get_opentype_feature_overrides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_opentype_feature_overrides, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_get_glyph_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_glyph_index, FontFile::__class_id, ctx, this_val, argv);
};
static JSValue font_file_class_get_char_from_glyph_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontFile::get_char_from_glyph_index, FontFile::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry font_file_class_proto_funcs[] = {
	JS_CFUNC_DEF("load_bitmap_font", 1, &font_file_class_load_bitmap_font),
	JS_CFUNC_DEF("load_dynamic_font", 1, &font_file_class_load_dynamic_font),
	JS_CFUNC_DEF("set_data", 1, &font_file_class_set_data),
	JS_CFUNC_DEF("get_data", 0, &font_file_class_get_data),
	JS_CFUNC_DEF("set_font_name", 1, &font_file_class_set_font_name),
	JS_CFUNC_DEF("set_font_style_name", 1, &font_file_class_set_font_style_name),
	JS_CFUNC_DEF("set_font_style", 1, &font_file_class_set_font_style),
	JS_CFUNC_DEF("set_font_weight", 1, &font_file_class_set_font_weight),
	JS_CFUNC_DEF("set_font_stretch", 1, &font_file_class_set_font_stretch),
	JS_CFUNC_DEF("set_antialiasing", 1, &font_file_class_set_antialiasing),
	JS_CFUNC_DEF("get_antialiasing", 0, &font_file_class_get_antialiasing),
	JS_CFUNC_DEF("set_disable_embedded_bitmaps", 1, &font_file_class_set_disable_embedded_bitmaps),
	JS_CFUNC_DEF("get_disable_embedded_bitmaps", 0, &font_file_class_get_disable_embedded_bitmaps),
	JS_CFUNC_DEF("set_generate_mipmaps", 1, &font_file_class_set_generate_mipmaps),
	JS_CFUNC_DEF("get_generate_mipmaps", 0, &font_file_class_get_generate_mipmaps),
	JS_CFUNC_DEF("set_multichannel_signed_distance_field", 1, &font_file_class_set_multichannel_signed_distance_field),
	JS_CFUNC_DEF("is_multichannel_signed_distance_field", 0, &font_file_class_is_multichannel_signed_distance_field),
	JS_CFUNC_DEF("set_msdf_pixel_range", 1, &font_file_class_set_msdf_pixel_range),
	JS_CFUNC_DEF("get_msdf_pixel_range", 0, &font_file_class_get_msdf_pixel_range),
	JS_CFUNC_DEF("set_msdf_size", 1, &font_file_class_set_msdf_size),
	JS_CFUNC_DEF("get_msdf_size", 0, &font_file_class_get_msdf_size),
	JS_CFUNC_DEF("set_fixed_size", 1, &font_file_class_set_fixed_size),
	JS_CFUNC_DEF("get_fixed_size", 0, &font_file_class_get_fixed_size),
	JS_CFUNC_DEF("set_fixed_size_scale_mode", 1, &font_file_class_set_fixed_size_scale_mode),
	JS_CFUNC_DEF("get_fixed_size_scale_mode", 0, &font_file_class_get_fixed_size_scale_mode),
	JS_CFUNC_DEF("set_allow_system_fallback", 1, &font_file_class_set_allow_system_fallback),
	JS_CFUNC_DEF("is_allow_system_fallback", 0, &font_file_class_is_allow_system_fallback),
	JS_CFUNC_DEF("set_force_autohinter", 1, &font_file_class_set_force_autohinter),
	JS_CFUNC_DEF("is_force_autohinter", 0, &font_file_class_is_force_autohinter),
	JS_CFUNC_DEF("set_hinting", 1, &font_file_class_set_hinting),
	JS_CFUNC_DEF("get_hinting", 0, &font_file_class_get_hinting),
	JS_CFUNC_DEF("set_subpixel_positioning", 1, &font_file_class_set_subpixel_positioning),
	JS_CFUNC_DEF("get_subpixel_positioning", 0, &font_file_class_get_subpixel_positioning),
	JS_CFUNC_DEF("set_oversampling", 1, &font_file_class_set_oversampling),
	JS_CFUNC_DEF("get_oversampling", 0, &font_file_class_get_oversampling),
	JS_CFUNC_DEF("get_cache_count", 0, &font_file_class_get_cache_count),
	JS_CFUNC_DEF("clear_cache", 0, &font_file_class_clear_cache),
	JS_CFUNC_DEF("remove_cache", 1, &font_file_class_remove_cache),
	JS_CFUNC_DEF("get_size_cache_list", 1, &font_file_class_get_size_cache_list),
	JS_CFUNC_DEF("clear_size_cache", 1, &font_file_class_clear_size_cache),
	JS_CFUNC_DEF("remove_size_cache", 2, &font_file_class_remove_size_cache),
	JS_CFUNC_DEF("set_variation_coordinates", 2, &font_file_class_set_variation_coordinates),
	JS_CFUNC_DEF("get_variation_coordinates", 1, &font_file_class_get_variation_coordinates),
	JS_CFUNC_DEF("set_embolden", 2, &font_file_class_set_embolden),
	JS_CFUNC_DEF("get_embolden", 1, &font_file_class_get_embolden),
	JS_CFUNC_DEF("set_transform", 2, &font_file_class_set_transform),
	JS_CFUNC_DEF("get_transform", 1, &font_file_class_get_transform),
	JS_CFUNC_DEF("set_extra_spacing", 3, &font_file_class_set_extra_spacing),
	JS_CFUNC_DEF("get_extra_spacing", 2, &font_file_class_get_extra_spacing),
	JS_CFUNC_DEF("set_extra_baseline_offset", 2, &font_file_class_set_extra_baseline_offset),
	JS_CFUNC_DEF("get_extra_baseline_offset", 1, &font_file_class_get_extra_baseline_offset),
	JS_CFUNC_DEF("set_face_index", 2, &font_file_class_set_face_index),
	JS_CFUNC_DEF("get_face_index", 1, &font_file_class_get_face_index),
	JS_CFUNC_DEF("set_cache_ascent", 3, &font_file_class_set_cache_ascent),
	JS_CFUNC_DEF("get_cache_ascent", 2, &font_file_class_get_cache_ascent),
	JS_CFUNC_DEF("set_cache_descent", 3, &font_file_class_set_cache_descent),
	JS_CFUNC_DEF("get_cache_descent", 2, &font_file_class_get_cache_descent),
	JS_CFUNC_DEF("set_cache_underline_position", 3, &font_file_class_set_cache_underline_position),
	JS_CFUNC_DEF("get_cache_underline_position", 2, &font_file_class_get_cache_underline_position),
	JS_CFUNC_DEF("set_cache_underline_thickness", 3, &font_file_class_set_cache_underline_thickness),
	JS_CFUNC_DEF("get_cache_underline_thickness", 2, &font_file_class_get_cache_underline_thickness),
	JS_CFUNC_DEF("set_cache_scale", 3, &font_file_class_set_cache_scale),
	JS_CFUNC_DEF("get_cache_scale", 2, &font_file_class_get_cache_scale),
	JS_CFUNC_DEF("get_texture_count", 2, &font_file_class_get_texture_count),
	JS_CFUNC_DEF("clear_textures", 2, &font_file_class_clear_textures),
	JS_CFUNC_DEF("remove_texture", 3, &font_file_class_remove_texture),
	JS_CFUNC_DEF("set_texture_image", 4, &font_file_class_set_texture_image),
	JS_CFUNC_DEF("get_texture_image", 3, &font_file_class_get_texture_image),
	JS_CFUNC_DEF("set_texture_offsets", 4, &font_file_class_set_texture_offsets),
	JS_CFUNC_DEF("get_texture_offsets", 3, &font_file_class_get_texture_offsets),
	JS_CFUNC_DEF("get_glyph_list", 2, &font_file_class_get_glyph_list),
	JS_CFUNC_DEF("clear_glyphs", 2, &font_file_class_clear_glyphs),
	JS_CFUNC_DEF("remove_glyph", 3, &font_file_class_remove_glyph),
	JS_CFUNC_DEF("set_glyph_advance", 4, &font_file_class_set_glyph_advance),
	JS_CFUNC_DEF("get_glyph_advance", 3, &font_file_class_get_glyph_advance),
	JS_CFUNC_DEF("set_glyph_offset", 4, &font_file_class_set_glyph_offset),
	JS_CFUNC_DEF("get_glyph_offset", 3, &font_file_class_get_glyph_offset),
	JS_CFUNC_DEF("set_glyph_size", 4, &font_file_class_set_glyph_size),
	JS_CFUNC_DEF("get_glyph_size", 3, &font_file_class_get_glyph_size),
	JS_CFUNC_DEF("set_glyph_uv_rect", 4, &font_file_class_set_glyph_uv_rect),
	JS_CFUNC_DEF("get_glyph_uv_rect", 3, &font_file_class_get_glyph_uv_rect),
	JS_CFUNC_DEF("set_glyph_texture_idx", 4, &font_file_class_set_glyph_texture_idx),
	JS_CFUNC_DEF("get_glyph_texture_idx", 3, &font_file_class_get_glyph_texture_idx),
	JS_CFUNC_DEF("get_kerning_list", 2, &font_file_class_get_kerning_list),
	JS_CFUNC_DEF("clear_kerning_map", 2, &font_file_class_clear_kerning_map),
	JS_CFUNC_DEF("remove_kerning", 3, &font_file_class_remove_kerning),
	JS_CFUNC_DEF("set_kerning", 4, &font_file_class_set_kerning),
	JS_CFUNC_DEF("get_kerning", 3, &font_file_class_get_kerning),
	JS_CFUNC_DEF("render_range", 4, &font_file_class_render_range),
	JS_CFUNC_DEF("render_glyph", 3, &font_file_class_render_glyph),
	JS_CFUNC_DEF("set_language_support_override", 2, &font_file_class_set_language_support_override),
	JS_CFUNC_DEF("get_language_support_override", 1, &font_file_class_get_language_support_override),
	JS_CFUNC_DEF("remove_language_support_override", 1, &font_file_class_remove_language_support_override),
	JS_CFUNC_DEF("get_language_support_overrides", 0, &font_file_class_get_language_support_overrides),
	JS_CFUNC_DEF("set_script_support_override", 2, &font_file_class_set_script_support_override),
	JS_CFUNC_DEF("get_script_support_override", 1, &font_file_class_get_script_support_override),
	JS_CFUNC_DEF("remove_script_support_override", 1, &font_file_class_remove_script_support_override),
	JS_CFUNC_DEF("get_script_support_overrides", 0, &font_file_class_get_script_support_overrides),
	JS_CFUNC_DEF("set_opentype_feature_overrides", 1, &font_file_class_set_opentype_feature_overrides),
	JS_CFUNC_DEF("get_opentype_feature_overrides", 0, &font_file_class_get_opentype_feature_overrides),
	JS_CFUNC_DEF("get_glyph_index", 3, &font_file_class_get_glyph_index),
	JS_CFUNC_DEF("get_char_from_glyph_index", 2, &font_file_class_get_char_from_glyph_index),
};

static int js_font_file_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&FontFile::__class_id);
	classes["FontFile"] = FontFile::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), FontFile::__class_id, &font_file_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Font::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FontFile::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, font_file_class_proto_funcs, _countof(font_file_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, font_file_class_constructor, "FontFile", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "FontFile", ctor);

	return 0;
}

JSModuleDef *_js_init_font_file_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_font_file_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "FontFile");
	return m;
}

JSModuleDef *js_init_font_file_module(JSContext *ctx) {
	return _js_init_font_file_module(ctx, "godot/classes/font_file");
}

void register_font_file() {
	js_init_font_file_module(ctx);
}