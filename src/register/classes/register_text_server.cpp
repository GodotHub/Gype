
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void text_server_class_finalizer(JSRuntime *rt, JSValue val) {
	TextServer *text_server = static_cast<TextServer *>(JS_GetOpaque(val, TextServer::__class_id));
	if (text_server)
		TextServer::free(nullptr, text_server);
}

static JSClassDef text_server_class_def = {
	"TextServer",
	.finalizer = text_server_class_finalizer
};

static JSValue text_server_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TextServer *text_server_class;
	JSValue obj = JS_NewObjectClass(ctx, TextServer::__class_id);
	if (JS_IsException(obj))
		return obj;
	text_server_class = memnew(TextServer);
	if (!text_server_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, text_server_class);
	return obj;
}
static JSValue text_server_class_has_feature(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::has_feature, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_get_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::get_name, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_get_features(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::get_features, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_load_support_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextServer::load_support_data, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_get_support_data_filename(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::get_support_data_filename, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_get_support_data_info(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::get_support_data_info, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_save_support_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::save_support_data, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_is_locale_right_to_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::is_locale_right_to_left, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_name_to_tag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::name_to_tag, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_tag_to_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::tag_to_name, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_has(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextServer::has, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_free_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::free_rid, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_create_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextServer::create_font, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_create_font_linked_variation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextServer::create_font_linked_variation, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_data, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_set_face_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_face_index, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_face_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_face_index, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_get_face_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_face_count, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_style(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_style, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_style(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_style, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_name, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_name, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_get_ot_name_strings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_ot_name_strings, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_style_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_style_name, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_style_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_style_name, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_weight(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_weight, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_weight(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_weight, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_stretch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_stretch, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_stretch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_stretch, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_antialiasing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_antialiasing, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_antialiasing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_antialiasing, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_disable_embedded_bitmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_disable_embedded_bitmaps, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_disable_embedded_bitmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_disable_embedded_bitmaps, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_generate_mipmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_generate_mipmaps, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_generate_mipmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_generate_mipmaps, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_multichannel_signed_distance_field(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_multichannel_signed_distance_field, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_is_multichannel_signed_distance_field(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_is_multichannel_signed_distance_field, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_msdf_pixel_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_msdf_pixel_range, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_msdf_pixel_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_msdf_pixel_range, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_msdf_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_msdf_size, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_msdf_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_msdf_size, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_fixed_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_fixed_size, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_fixed_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_fixed_size, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_fixed_size_scale_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_fixed_size_scale_mode, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_fixed_size_scale_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_fixed_size_scale_mode, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_allow_system_fallback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_allow_system_fallback, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_is_allow_system_fallback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_is_allow_system_fallback, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_force_autohinter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_force_autohinter, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_is_force_autohinter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_is_force_autohinter, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_hinting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_hinting, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_hinting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_hinting, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_subpixel_positioning(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_subpixel_positioning, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_subpixel_positioning(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_subpixel_positioning, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_embolden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_embolden, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_embolden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_embolden, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_spacing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_spacing, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_spacing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_spacing, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_baseline_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_baseline_offset, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_baseline_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_baseline_offset, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_transform, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_transform, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_variation_coordinates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_variation_coordinates, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_variation_coordinates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_variation_coordinates, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_oversampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_oversampling, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_oversampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_oversampling, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_get_size_cache_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_size_cache_list, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_clear_size_cache(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_clear_size_cache, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_remove_size_cache(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_remove_size_cache, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_set_ascent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_ascent, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_ascent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_ascent, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_descent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_descent, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_descent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_descent, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_underline_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_underline_position, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_underline_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_underline_position, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_underline_thickness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_underline_thickness, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_underline_thickness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_underline_thickness, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_scale, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_scale, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_get_texture_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_texture_count, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_clear_textures(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_clear_textures, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_remove_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_remove_texture, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_set_texture_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_texture_image, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_texture_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_texture_image, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_texture_offsets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_texture_offsets, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_texture_offsets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_texture_offsets, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_get_glyph_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_glyph_list, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_clear_glyphs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_clear_glyphs, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_remove_glyph(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_remove_glyph, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_glyph_advance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_glyph_advance, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_glyph_advance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_glyph_advance, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_glyph_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_glyph_offset, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_glyph_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_glyph_offset, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_glyph_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_glyph_size, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_glyph_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_glyph_size, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_glyph_uv_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_glyph_uv_rect, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_glyph_uv_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_glyph_uv_rect, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_glyph_texture_idx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_glyph_texture_idx, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_glyph_texture_idx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_glyph_texture_idx, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_glyph_texture_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_glyph_texture_rid, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_get_glyph_texture_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_glyph_texture_size, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_get_glyph_contours(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_glyph_contours, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_get_kerning_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_kerning_list, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_clear_kerning_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_clear_kerning_map, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_remove_kerning(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_remove_kerning, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_set_kerning(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_kerning, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_kerning(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_kerning, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_get_glyph_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_glyph_index, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_get_char_from_glyph_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_char_from_glyph_index, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_has_char(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_has_char, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_get_supported_chars(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_supported_chars, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_render_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_render_range, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_render_glyph(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_render_glyph, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_draw_glyph(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&TextServer::font_draw_glyph, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_draw_glyph_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&TextServer::font_draw_glyph_outline, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_is_language_supported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_is_language_supported, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_language_support_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_language_support_override, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_language_support_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextServer::font_get_language_support_override, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_remove_language_support_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_remove_language_support_override, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_language_support_overrides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextServer::font_get_language_support_overrides, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_is_script_supported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_is_script_supported, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_script_support_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_script_support_override, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_script_support_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextServer::font_get_script_support_override, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_remove_script_support_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_remove_script_support_override, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_script_support_overrides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextServer::font_get_script_support_overrides, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_opentype_feature_overrides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_opentype_feature_overrides, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_font_get_opentype_feature_overrides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_opentype_feature_overrides, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_supported_feature_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_supported_feature_list, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_supported_variation_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_supported_variation_list, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_get_global_oversampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::font_get_global_oversampling, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_font_set_global_oversampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::font_set_global_oversampling, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_get_hex_code_box_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::get_hex_code_box_size, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_draw_hex_code_box(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&TextServer::draw_hex_code_box, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_create_shaped_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextServer::create_shaped_text, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::shaped_text_clear, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_shaped_text_set_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::shaped_text_set_direction, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_shaped_text_get_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_direction, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_inferred_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_inferred_direction, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_set_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::shaped_text_set_bidi_override, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_shaped_text_set_custom_punctuation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::shaped_text_set_custom_punctuation, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_shaped_text_get_custom_punctuation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_custom_punctuation, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_set_custom_ellipsis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::shaped_text_set_custom_ellipsis, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_shaped_text_get_custom_ellipsis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_custom_ellipsis, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_set_orientation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::shaped_text_set_orientation, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_shaped_text_get_orientation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_orientation, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_set_preserve_invalid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::shaped_text_set_preserve_invalid, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_shaped_text_get_preserve_invalid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_preserve_invalid, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_set_preserve_control(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::shaped_text_set_preserve_control, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_shaped_text_get_preserve_control(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_preserve_control, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_set_spacing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::shaped_text_set_spacing, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_shaped_text_get_spacing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_spacing, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_add_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextServer::shaped_text_add_string, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_add_object(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextServer::shaped_text_add_object, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_resize_object(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextServer::shaped_text_resize_object, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_get_span_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_get_span_count, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_get_span_meta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_get_span_meta, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_set_span_update_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::shaped_set_span_update_font, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_shaped_text_substr(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_substr, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_parent, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_fit_to_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextServer::shaped_text_fit_to_width, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_tab_align(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextServer::shaped_text_tab_align, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextServer::shaped_text_shape, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_is_ready(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_is_ready, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_has_visible_chars(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_has_visible_chars, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_glyphs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_glyphs, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_sort_logical(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextServer::shaped_text_sort_logical, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_glyph_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_glyph_count, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_range, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_line_breaks_adv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_line_breaks_adv, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_line_breaks(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_line_breaks, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_word_breaks(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_word_breaks, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_trim_pos(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_trim_pos, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_ellipsis_pos(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_ellipsis_pos, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_ellipsis_glyphs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_ellipsis_glyphs, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_ellipsis_glyph_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_ellipsis_glyph_count, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_overrun_trim_to_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServer::shaped_text_overrun_trim_to_width, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_shaped_text_get_objects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_objects, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_object_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_object_rect, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_object_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_object_range, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_object_glyph(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_object_glyph, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_size, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_ascent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_ascent, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_descent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_descent, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_width, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_underline_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_underline_position, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_underline_thickness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_underline_thickness, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_carets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_carets, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_selection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_selection, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_hit_test_grapheme(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_hit_test_grapheme, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_hit_test_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_hit_test_position, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_grapheme_bounds(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_grapheme_bounds, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_next_grapheme_pos(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_next_grapheme_pos, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_prev_grapheme_pos(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_prev_grapheme_pos, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_get_character_breaks(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_character_breaks, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_next_character_pos(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_next_character_pos, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_prev_character_pos(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_prev_character_pos, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_closest_character_pos(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_closest_character_pos, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_shaped_text_draw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&TextServer::shaped_text_draw, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_shaped_text_draw_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&TextServer::shaped_text_draw_outline, TextServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_class_shaped_text_get_dominant_direction_in_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::shaped_text_get_dominant_direction_in_range, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_format_number(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::format_number, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_parse_number(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::parse_number, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_percent_sign(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::percent_sign, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_string_get_word_breaks(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::string_get_word_breaks, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_string_get_character_breaks(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::string_get_character_breaks, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_is_confusable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::is_confusable, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_spoof_check(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::spoof_check, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_strip_diacritics(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::strip_diacritics, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_is_valid_identifier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::is_valid_identifier, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_is_valid_letter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::is_valid_letter, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_string_to_upper(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::string_to_upper, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_string_to_lower(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::string_to_lower, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_string_to_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::string_to_title, TextServer::__class_id, ctx, this_val, argv);
};
static JSValue text_server_class_parse_structured_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServer::parse_structured_text, TextServer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry text_server_class_proto_funcs[] = {
	JS_CFUNC_DEF("has_feature", 1, &text_server_class_has_feature),
	JS_CFUNC_DEF("get_name", 0, &text_server_class_get_name),
	JS_CFUNC_DEF("get_features", 0, &text_server_class_get_features),
	JS_CFUNC_DEF("load_support_data", 1, &text_server_class_load_support_data),
	JS_CFUNC_DEF("get_support_data_filename", 0, &text_server_class_get_support_data_filename),
	JS_CFUNC_DEF("get_support_data_info", 0, &text_server_class_get_support_data_info),
	JS_CFUNC_DEF("save_support_data", 1, &text_server_class_save_support_data),
	JS_CFUNC_DEF("is_locale_right_to_left", 1, &text_server_class_is_locale_right_to_left),
	JS_CFUNC_DEF("name_to_tag", 1, &text_server_class_name_to_tag),
	JS_CFUNC_DEF("tag_to_name", 1, &text_server_class_tag_to_name),
	JS_CFUNC_DEF("has", 1, &text_server_class_has),
	JS_CFUNC_DEF("free_rid", 1, &text_server_class_free_rid),
	JS_CFUNC_DEF("create_font", 0, &text_server_class_create_font),
	JS_CFUNC_DEF("create_font_linked_variation", 1, &text_server_class_create_font_linked_variation),
	JS_CFUNC_DEF("font_set_data", 2, &text_server_class_font_set_data),
	JS_CFUNC_DEF("font_set_face_index", 2, &text_server_class_font_set_face_index),
	JS_CFUNC_DEF("font_get_face_index", 1, &text_server_class_font_get_face_index),
	JS_CFUNC_DEF("font_get_face_count", 1, &text_server_class_font_get_face_count),
	JS_CFUNC_DEF("font_set_style", 2, &text_server_class_font_set_style),
	JS_CFUNC_DEF("font_get_style", 1, &text_server_class_font_get_style),
	JS_CFUNC_DEF("font_set_name", 2, &text_server_class_font_set_name),
	JS_CFUNC_DEF("font_get_name", 1, &text_server_class_font_get_name),
	JS_CFUNC_DEF("font_get_ot_name_strings", 1, &text_server_class_font_get_ot_name_strings),
	JS_CFUNC_DEF("font_set_style_name", 2, &text_server_class_font_set_style_name),
	JS_CFUNC_DEF("font_get_style_name", 1, &text_server_class_font_get_style_name),
	JS_CFUNC_DEF("font_set_weight", 2, &text_server_class_font_set_weight),
	JS_CFUNC_DEF("font_get_weight", 1, &text_server_class_font_get_weight),
	JS_CFUNC_DEF("font_set_stretch", 2, &text_server_class_font_set_stretch),
	JS_CFUNC_DEF("font_get_stretch", 1, &text_server_class_font_get_stretch),
	JS_CFUNC_DEF("font_set_antialiasing", 2, &text_server_class_font_set_antialiasing),
	JS_CFUNC_DEF("font_get_antialiasing", 1, &text_server_class_font_get_antialiasing),
	JS_CFUNC_DEF("font_set_disable_embedded_bitmaps", 2, &text_server_class_font_set_disable_embedded_bitmaps),
	JS_CFUNC_DEF("font_get_disable_embedded_bitmaps", 1, &text_server_class_font_get_disable_embedded_bitmaps),
	JS_CFUNC_DEF("font_set_generate_mipmaps", 2, &text_server_class_font_set_generate_mipmaps),
	JS_CFUNC_DEF("font_get_generate_mipmaps", 1, &text_server_class_font_get_generate_mipmaps),
	JS_CFUNC_DEF("font_set_multichannel_signed_distance_field", 2, &text_server_class_font_set_multichannel_signed_distance_field),
	JS_CFUNC_DEF("font_is_multichannel_signed_distance_field", 1, &text_server_class_font_is_multichannel_signed_distance_field),
	JS_CFUNC_DEF("font_set_msdf_pixel_range", 2, &text_server_class_font_set_msdf_pixel_range),
	JS_CFUNC_DEF("font_get_msdf_pixel_range", 1, &text_server_class_font_get_msdf_pixel_range),
	JS_CFUNC_DEF("font_set_msdf_size", 2, &text_server_class_font_set_msdf_size),
	JS_CFUNC_DEF("font_get_msdf_size", 1, &text_server_class_font_get_msdf_size),
	JS_CFUNC_DEF("font_set_fixed_size", 2, &text_server_class_font_set_fixed_size),
	JS_CFUNC_DEF("font_get_fixed_size", 1, &text_server_class_font_get_fixed_size),
	JS_CFUNC_DEF("font_set_fixed_size_scale_mode", 2, &text_server_class_font_set_fixed_size_scale_mode),
	JS_CFUNC_DEF("font_get_fixed_size_scale_mode", 1, &text_server_class_font_get_fixed_size_scale_mode),
	JS_CFUNC_DEF("font_set_allow_system_fallback", 2, &text_server_class_font_set_allow_system_fallback),
	JS_CFUNC_DEF("font_is_allow_system_fallback", 1, &text_server_class_font_is_allow_system_fallback),
	JS_CFUNC_DEF("font_set_force_autohinter", 2, &text_server_class_font_set_force_autohinter),
	JS_CFUNC_DEF("font_is_force_autohinter", 1, &text_server_class_font_is_force_autohinter),
	JS_CFUNC_DEF("font_set_hinting", 2, &text_server_class_font_set_hinting),
	JS_CFUNC_DEF("font_get_hinting", 1, &text_server_class_font_get_hinting),
	JS_CFUNC_DEF("font_set_subpixel_positioning", 2, &text_server_class_font_set_subpixel_positioning),
	JS_CFUNC_DEF("font_get_subpixel_positioning", 1, &text_server_class_font_get_subpixel_positioning),
	JS_CFUNC_DEF("font_set_embolden", 2, &text_server_class_font_set_embolden),
	JS_CFUNC_DEF("font_get_embolden", 1, &text_server_class_font_get_embolden),
	JS_CFUNC_DEF("font_set_spacing", 3, &text_server_class_font_set_spacing),
	JS_CFUNC_DEF("font_get_spacing", 2, &text_server_class_font_get_spacing),
	JS_CFUNC_DEF("font_set_baseline_offset", 2, &text_server_class_font_set_baseline_offset),
	JS_CFUNC_DEF("font_get_baseline_offset", 1, &text_server_class_font_get_baseline_offset),
	JS_CFUNC_DEF("font_set_transform", 2, &text_server_class_font_set_transform),
	JS_CFUNC_DEF("font_get_transform", 1, &text_server_class_font_get_transform),
	JS_CFUNC_DEF("font_set_variation_coordinates", 2, &text_server_class_font_set_variation_coordinates),
	JS_CFUNC_DEF("font_get_variation_coordinates", 1, &text_server_class_font_get_variation_coordinates),
	JS_CFUNC_DEF("font_set_oversampling", 2, &text_server_class_font_set_oversampling),
	JS_CFUNC_DEF("font_get_oversampling", 1, &text_server_class_font_get_oversampling),
	JS_CFUNC_DEF("font_get_size_cache_list", 1, &text_server_class_font_get_size_cache_list),
	JS_CFUNC_DEF("font_clear_size_cache", 1, &text_server_class_font_clear_size_cache),
	JS_CFUNC_DEF("font_remove_size_cache", 2, &text_server_class_font_remove_size_cache),
	JS_CFUNC_DEF("font_set_ascent", 3, &text_server_class_font_set_ascent),
	JS_CFUNC_DEF("font_get_ascent", 2, &text_server_class_font_get_ascent),
	JS_CFUNC_DEF("font_set_descent", 3, &text_server_class_font_set_descent),
	JS_CFUNC_DEF("font_get_descent", 2, &text_server_class_font_get_descent),
	JS_CFUNC_DEF("font_set_underline_position", 3, &text_server_class_font_set_underline_position),
	JS_CFUNC_DEF("font_get_underline_position", 2, &text_server_class_font_get_underline_position),
	JS_CFUNC_DEF("font_set_underline_thickness", 3, &text_server_class_font_set_underline_thickness),
	JS_CFUNC_DEF("font_get_underline_thickness", 2, &text_server_class_font_get_underline_thickness),
	JS_CFUNC_DEF("font_set_scale", 3, &text_server_class_font_set_scale),
	JS_CFUNC_DEF("font_get_scale", 2, &text_server_class_font_get_scale),
	JS_CFUNC_DEF("font_get_texture_count", 2, &text_server_class_font_get_texture_count),
	JS_CFUNC_DEF("font_clear_textures", 2, &text_server_class_font_clear_textures),
	JS_CFUNC_DEF("font_remove_texture", 3, &text_server_class_font_remove_texture),
	JS_CFUNC_DEF("font_set_texture_image", 4, &text_server_class_font_set_texture_image),
	JS_CFUNC_DEF("font_get_texture_image", 3, &text_server_class_font_get_texture_image),
	JS_CFUNC_DEF("font_set_texture_offsets", 4, &text_server_class_font_set_texture_offsets),
	JS_CFUNC_DEF("font_get_texture_offsets", 3, &text_server_class_font_get_texture_offsets),
	JS_CFUNC_DEF("font_get_glyph_list", 2, &text_server_class_font_get_glyph_list),
	JS_CFUNC_DEF("font_clear_glyphs", 2, &text_server_class_font_clear_glyphs),
	JS_CFUNC_DEF("font_remove_glyph", 3, &text_server_class_font_remove_glyph),
	JS_CFUNC_DEF("font_get_glyph_advance", 3, &text_server_class_font_get_glyph_advance),
	JS_CFUNC_DEF("font_set_glyph_advance", 4, &text_server_class_font_set_glyph_advance),
	JS_CFUNC_DEF("font_get_glyph_offset", 3, &text_server_class_font_get_glyph_offset),
	JS_CFUNC_DEF("font_set_glyph_offset", 4, &text_server_class_font_set_glyph_offset),
	JS_CFUNC_DEF("font_get_glyph_size", 3, &text_server_class_font_get_glyph_size),
	JS_CFUNC_DEF("font_set_glyph_size", 4, &text_server_class_font_set_glyph_size),
	JS_CFUNC_DEF("font_get_glyph_uv_rect", 3, &text_server_class_font_get_glyph_uv_rect),
	JS_CFUNC_DEF("font_set_glyph_uv_rect", 4, &text_server_class_font_set_glyph_uv_rect),
	JS_CFUNC_DEF("font_get_glyph_texture_idx", 3, &text_server_class_font_get_glyph_texture_idx),
	JS_CFUNC_DEF("font_set_glyph_texture_idx", 4, &text_server_class_font_set_glyph_texture_idx),
	JS_CFUNC_DEF("font_get_glyph_texture_rid", 3, &text_server_class_font_get_glyph_texture_rid),
	JS_CFUNC_DEF("font_get_glyph_texture_size", 3, &text_server_class_font_get_glyph_texture_size),
	JS_CFUNC_DEF("font_get_glyph_contours", 3, &text_server_class_font_get_glyph_contours),
	JS_CFUNC_DEF("font_get_kerning_list", 2, &text_server_class_font_get_kerning_list),
	JS_CFUNC_DEF("font_clear_kerning_map", 2, &text_server_class_font_clear_kerning_map),
	JS_CFUNC_DEF("font_remove_kerning", 3, &text_server_class_font_remove_kerning),
	JS_CFUNC_DEF("font_set_kerning", 4, &text_server_class_font_set_kerning),
	JS_CFUNC_DEF("font_get_kerning", 3, &text_server_class_font_get_kerning),
	JS_CFUNC_DEF("font_get_glyph_index", 4, &text_server_class_font_get_glyph_index),
	JS_CFUNC_DEF("font_get_char_from_glyph_index", 3, &text_server_class_font_get_char_from_glyph_index),
	JS_CFUNC_DEF("font_has_char", 2, &text_server_class_font_has_char),
	JS_CFUNC_DEF("font_get_supported_chars", 1, &text_server_class_font_get_supported_chars),
	JS_CFUNC_DEF("font_render_range", 4, &text_server_class_font_render_range),
	JS_CFUNC_DEF("font_render_glyph", 3, &text_server_class_font_render_glyph),
	JS_CFUNC_DEF("font_draw_glyph", 6, &text_server_class_font_draw_glyph),
	JS_CFUNC_DEF("font_draw_glyph_outline", 7, &text_server_class_font_draw_glyph_outline),
	JS_CFUNC_DEF("font_is_language_supported", 2, &text_server_class_font_is_language_supported),
	JS_CFUNC_DEF("font_set_language_support_override", 3, &text_server_class_font_set_language_support_override),
	JS_CFUNC_DEF("font_get_language_support_override", 2, &text_server_class_font_get_language_support_override),
	JS_CFUNC_DEF("font_remove_language_support_override", 2, &text_server_class_font_remove_language_support_override),
	JS_CFUNC_DEF("font_get_language_support_overrides", 1, &text_server_class_font_get_language_support_overrides),
	JS_CFUNC_DEF("font_is_script_supported", 2, &text_server_class_font_is_script_supported),
	JS_CFUNC_DEF("font_set_script_support_override", 3, &text_server_class_font_set_script_support_override),
	JS_CFUNC_DEF("font_get_script_support_override", 2, &text_server_class_font_get_script_support_override),
	JS_CFUNC_DEF("font_remove_script_support_override", 2, &text_server_class_font_remove_script_support_override),
	JS_CFUNC_DEF("font_get_script_support_overrides", 1, &text_server_class_font_get_script_support_overrides),
	JS_CFUNC_DEF("font_set_opentype_feature_overrides", 2, &text_server_class_font_set_opentype_feature_overrides),
	JS_CFUNC_DEF("font_get_opentype_feature_overrides", 1, &text_server_class_font_get_opentype_feature_overrides),
	JS_CFUNC_DEF("font_supported_feature_list", 1, &text_server_class_font_supported_feature_list),
	JS_CFUNC_DEF("font_supported_variation_list", 1, &text_server_class_font_supported_variation_list),
	JS_CFUNC_DEF("font_get_global_oversampling", 0, &text_server_class_font_get_global_oversampling),
	JS_CFUNC_DEF("font_set_global_oversampling", 1, &text_server_class_font_set_global_oversampling),
	JS_CFUNC_DEF("get_hex_code_box_size", 2, &text_server_class_get_hex_code_box_size),
	JS_CFUNC_DEF("draw_hex_code_box", 5, &text_server_class_draw_hex_code_box),
	JS_CFUNC_DEF("create_shaped_text", 2, &text_server_class_create_shaped_text),
	JS_CFUNC_DEF("shaped_text_clear", 1, &text_server_class_shaped_text_clear),
	JS_CFUNC_DEF("shaped_text_set_direction", 2, &text_server_class_shaped_text_set_direction),
	JS_CFUNC_DEF("shaped_text_get_direction", 1, &text_server_class_shaped_text_get_direction),
	JS_CFUNC_DEF("shaped_text_get_inferred_direction", 1, &text_server_class_shaped_text_get_inferred_direction),
	JS_CFUNC_DEF("shaped_text_set_bidi_override", 2, &text_server_class_shaped_text_set_bidi_override),
	JS_CFUNC_DEF("shaped_text_set_custom_punctuation", 2, &text_server_class_shaped_text_set_custom_punctuation),
	JS_CFUNC_DEF("shaped_text_get_custom_punctuation", 1, &text_server_class_shaped_text_get_custom_punctuation),
	JS_CFUNC_DEF("shaped_text_set_custom_ellipsis", 2, &text_server_class_shaped_text_set_custom_ellipsis),
	JS_CFUNC_DEF("shaped_text_get_custom_ellipsis", 1, &text_server_class_shaped_text_get_custom_ellipsis),
	JS_CFUNC_DEF("shaped_text_set_orientation", 2, &text_server_class_shaped_text_set_orientation),
	JS_CFUNC_DEF("shaped_text_get_orientation", 1, &text_server_class_shaped_text_get_orientation),
	JS_CFUNC_DEF("shaped_text_set_preserve_invalid", 2, &text_server_class_shaped_text_set_preserve_invalid),
	JS_CFUNC_DEF("shaped_text_get_preserve_invalid", 1, &text_server_class_shaped_text_get_preserve_invalid),
	JS_CFUNC_DEF("shaped_text_set_preserve_control", 2, &text_server_class_shaped_text_set_preserve_control),
	JS_CFUNC_DEF("shaped_text_get_preserve_control", 1, &text_server_class_shaped_text_get_preserve_control),
	JS_CFUNC_DEF("shaped_text_set_spacing", 3, &text_server_class_shaped_text_set_spacing),
	JS_CFUNC_DEF("shaped_text_get_spacing", 2, &text_server_class_shaped_text_get_spacing),
	JS_CFUNC_DEF("shaped_text_add_string", 7, &text_server_class_shaped_text_add_string),
	JS_CFUNC_DEF("shaped_text_add_object", 6, &text_server_class_shaped_text_add_object),
	JS_CFUNC_DEF("shaped_text_resize_object", 5, &text_server_class_shaped_text_resize_object),
	JS_CFUNC_DEF("shaped_get_span_count", 1, &text_server_class_shaped_get_span_count),
	JS_CFUNC_DEF("shaped_get_span_meta", 2, &text_server_class_shaped_get_span_meta),
	JS_CFUNC_DEF("shaped_set_span_update_font", 5, &text_server_class_shaped_set_span_update_font),
	JS_CFUNC_DEF("shaped_text_substr", 3, &text_server_class_shaped_text_substr),
	JS_CFUNC_DEF("shaped_text_get_parent", 1, &text_server_class_shaped_text_get_parent),
	JS_CFUNC_DEF("shaped_text_fit_to_width", 3, &text_server_class_shaped_text_fit_to_width),
	JS_CFUNC_DEF("shaped_text_tab_align", 2, &text_server_class_shaped_text_tab_align),
	JS_CFUNC_DEF("shaped_text_shape", 1, &text_server_class_shaped_text_shape),
	JS_CFUNC_DEF("shaped_text_is_ready", 1, &text_server_class_shaped_text_is_ready),
	JS_CFUNC_DEF("shaped_text_has_visible_chars", 1, &text_server_class_shaped_text_has_visible_chars),
	JS_CFUNC_DEF("shaped_text_get_glyphs", 1, &text_server_class_shaped_text_get_glyphs),
	JS_CFUNC_DEF("shaped_text_sort_logical", 1, &text_server_class_shaped_text_sort_logical),
	JS_CFUNC_DEF("shaped_text_get_glyph_count", 1, &text_server_class_shaped_text_get_glyph_count),
	JS_CFUNC_DEF("shaped_text_get_range", 1, &text_server_class_shaped_text_get_range),
	JS_CFUNC_DEF("shaped_text_get_line_breaks_adv", 5, &text_server_class_shaped_text_get_line_breaks_adv),
	JS_CFUNC_DEF("shaped_text_get_line_breaks", 4, &text_server_class_shaped_text_get_line_breaks),
	JS_CFUNC_DEF("shaped_text_get_word_breaks", 3, &text_server_class_shaped_text_get_word_breaks),
	JS_CFUNC_DEF("shaped_text_get_trim_pos", 1, &text_server_class_shaped_text_get_trim_pos),
	JS_CFUNC_DEF("shaped_text_get_ellipsis_pos", 1, &text_server_class_shaped_text_get_ellipsis_pos),
	JS_CFUNC_DEF("shaped_text_get_ellipsis_glyphs", 1, &text_server_class_shaped_text_get_ellipsis_glyphs),
	JS_CFUNC_DEF("shaped_text_get_ellipsis_glyph_count", 1, &text_server_class_shaped_text_get_ellipsis_glyph_count),
	JS_CFUNC_DEF("shaped_text_overrun_trim_to_width", 3, &text_server_class_shaped_text_overrun_trim_to_width),
	JS_CFUNC_DEF("shaped_text_get_objects", 1, &text_server_class_shaped_text_get_objects),
	JS_CFUNC_DEF("shaped_text_get_object_rect", 2, &text_server_class_shaped_text_get_object_rect),
	JS_CFUNC_DEF("shaped_text_get_object_range", 2, &text_server_class_shaped_text_get_object_range),
	JS_CFUNC_DEF("shaped_text_get_object_glyph", 2, &text_server_class_shaped_text_get_object_glyph),
	JS_CFUNC_DEF("shaped_text_get_size", 1, &text_server_class_shaped_text_get_size),
	JS_CFUNC_DEF("shaped_text_get_ascent", 1, &text_server_class_shaped_text_get_ascent),
	JS_CFUNC_DEF("shaped_text_get_descent", 1, &text_server_class_shaped_text_get_descent),
	JS_CFUNC_DEF("shaped_text_get_width", 1, &text_server_class_shaped_text_get_width),
	JS_CFUNC_DEF("shaped_text_get_underline_position", 1, &text_server_class_shaped_text_get_underline_position),
	JS_CFUNC_DEF("shaped_text_get_underline_thickness", 1, &text_server_class_shaped_text_get_underline_thickness),
	JS_CFUNC_DEF("shaped_text_get_carets", 2, &text_server_class_shaped_text_get_carets),
	JS_CFUNC_DEF("shaped_text_get_selection", 3, &text_server_class_shaped_text_get_selection),
	JS_CFUNC_DEF("shaped_text_hit_test_grapheme", 2, &text_server_class_shaped_text_hit_test_grapheme),
	JS_CFUNC_DEF("shaped_text_hit_test_position", 2, &text_server_class_shaped_text_hit_test_position),
	JS_CFUNC_DEF("shaped_text_get_grapheme_bounds", 2, &text_server_class_shaped_text_get_grapheme_bounds),
	JS_CFUNC_DEF("shaped_text_next_grapheme_pos", 2, &text_server_class_shaped_text_next_grapheme_pos),
	JS_CFUNC_DEF("shaped_text_prev_grapheme_pos", 2, &text_server_class_shaped_text_prev_grapheme_pos),
	JS_CFUNC_DEF("shaped_text_get_character_breaks", 1, &text_server_class_shaped_text_get_character_breaks),
	JS_CFUNC_DEF("shaped_text_next_character_pos", 2, &text_server_class_shaped_text_next_character_pos),
	JS_CFUNC_DEF("shaped_text_prev_character_pos", 2, &text_server_class_shaped_text_prev_character_pos),
	JS_CFUNC_DEF("shaped_text_closest_character_pos", 2, &text_server_class_shaped_text_closest_character_pos),
	JS_CFUNC_DEF("shaped_text_draw", 6, &text_server_class_shaped_text_draw),
	JS_CFUNC_DEF("shaped_text_draw_outline", 7, &text_server_class_shaped_text_draw_outline),
	JS_CFUNC_DEF("shaped_text_get_dominant_direction_in_range", 3, &text_server_class_shaped_text_get_dominant_direction_in_range),
	JS_CFUNC_DEF("format_number", 2, &text_server_class_format_number),
	JS_CFUNC_DEF("parse_number", 2, &text_server_class_parse_number),
	JS_CFUNC_DEF("percent_sign", 1, &text_server_class_percent_sign),
	JS_CFUNC_DEF("string_get_word_breaks", 3, &text_server_class_string_get_word_breaks),
	JS_CFUNC_DEF("string_get_character_breaks", 2, &text_server_class_string_get_character_breaks),
	JS_CFUNC_DEF("is_confusable", 2, &text_server_class_is_confusable),
	JS_CFUNC_DEF("spoof_check", 1, &text_server_class_spoof_check),
	JS_CFUNC_DEF("strip_diacritics", 1, &text_server_class_strip_diacritics),
	JS_CFUNC_DEF("is_valid_identifier", 1, &text_server_class_is_valid_identifier),
	JS_CFUNC_DEF("is_valid_letter", 1, &text_server_class_is_valid_letter),
	JS_CFUNC_DEF("string_to_upper", 2, &text_server_class_string_to_upper),
	JS_CFUNC_DEF("string_to_lower", 2, &text_server_class_string_to_lower),
	JS_CFUNC_DEF("string_to_title", 2, &text_server_class_string_to_title),
	JS_CFUNC_DEF("parse_structured_text", 3, &text_server_class_parse_structured_text),
};

static int js_text_server_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TextServer::__class_id);
	classes["TextServer"] = TextServer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TextServer::__class_id, &text_server_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextServer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, text_server_class_proto_funcs, _countof(text_server_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, text_server_class_constructor, "TextServer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TextServer", ctor);

	return 0;
}

JSModuleDef *_js_init_text_server_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_text_server_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TextServer");
	return m;
}

JSModuleDef *js_init_text_server_module(JSContext *ctx) {
	return _js_init_text_server_module(ctx, "godot/classes/text_server");
}

void register_text_server() {
	js_init_text_server_module(ctx);
}