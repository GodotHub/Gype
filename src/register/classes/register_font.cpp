
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void font_class_finalizer(JSRuntime *rt, JSValue val) {
	Font *font = static_cast<Font *>(JS_GetOpaque(val, Font::__class_id));
	if (font)
		Font::free(nullptr, font);
}

static JSClassDef font_class_def = {
	"Font",
	.finalizer = font_class_finalizer
};

static JSValue font_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Font *font_class;
	JSValue obj = JS_NewObjectClass(ctx, Font::__class_id);
	if (JS_IsException(obj))
		return obj;
	font_class = memnew(Font);
	if (!font_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, font_class);
	return obj;
}
static JSValue font_class_set_fallbacks(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Font::set_fallbacks, Font::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_class_get_fallbacks(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_fallbacks, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_find_variation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::find_variation, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_get_rids(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_rids, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_height, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_get_ascent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_ascent, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_get_descent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_descent, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_get_underline_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_underline_position, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_get_underline_thickness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_underline_thickness, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_get_font_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_font_name, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_get_font_style_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_font_style_name, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_get_ot_name_strings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_ot_name_strings, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_get_font_style(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_font_style, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_get_font_weight(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_font_weight, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_get_font_stretch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_font_stretch, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_get_spacing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_spacing, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_get_opentype_features(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_opentype_features, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_set_cache_capacity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Font::set_cache_capacity, Font::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_class_get_string_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_string_size, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_get_multiline_string_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_multiline_string_size, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_draw_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_const_method_no_ret(&Font::draw_string, Font::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_class_draw_multiline_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_const_method_no_ret(&Font::draw_multiline_string, Font::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_class_draw_string_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_const_method_no_ret(&Font::draw_string_outline, Font::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_class_draw_multiline_string_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_const_method_no_ret(&Font::draw_multiline_string_outline, Font::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_class_get_char_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_char_size, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_draw_char(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::draw_char, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_draw_char_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::draw_char_outline, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_has_char(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::has_char, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_get_supported_chars(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_supported_chars, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_is_language_supported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::is_language_supported, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_is_script_supported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::is_script_supported, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_get_supported_feature_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_supported_feature_list, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_get_supported_variation_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_supported_variation_list, Font::__class_id, ctx, this_val, argv);
};
static JSValue font_class_get_face_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Font::get_face_count, Font::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry font_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_fallbacks", 1, &font_class_set_fallbacks),
	JS_CFUNC_DEF("get_fallbacks", 0, &font_class_get_fallbacks),
	JS_CFUNC_DEF("find_variation", 9, &font_class_find_variation),
	JS_CFUNC_DEF("get_rids", 0, &font_class_get_rids),
	JS_CFUNC_DEF("get_height", 1, &font_class_get_height),
	JS_CFUNC_DEF("get_ascent", 1, &font_class_get_ascent),
	JS_CFUNC_DEF("get_descent", 1, &font_class_get_descent),
	JS_CFUNC_DEF("get_underline_position", 1, &font_class_get_underline_position),
	JS_CFUNC_DEF("get_underline_thickness", 1, &font_class_get_underline_thickness),
	JS_CFUNC_DEF("get_font_name", 0, &font_class_get_font_name),
	JS_CFUNC_DEF("get_font_style_name", 0, &font_class_get_font_style_name),
	JS_CFUNC_DEF("get_ot_name_strings", 0, &font_class_get_ot_name_strings),
	JS_CFUNC_DEF("get_font_style", 0, &font_class_get_font_style),
	JS_CFUNC_DEF("get_font_weight", 0, &font_class_get_font_weight),
	JS_CFUNC_DEF("get_font_stretch", 0, &font_class_get_font_stretch),
	JS_CFUNC_DEF("get_spacing", 1, &font_class_get_spacing),
	JS_CFUNC_DEF("get_opentype_features", 0, &font_class_get_opentype_features),
	JS_CFUNC_DEF("set_cache_capacity", 2, &font_class_set_cache_capacity),
	JS_CFUNC_DEF("get_string_size", 7, &font_class_get_string_size),
	JS_CFUNC_DEF("get_multiline_string_size", 9, &font_class_get_multiline_string_size),
	JS_CFUNC_DEF("draw_string", 10, &font_class_draw_string),
	JS_CFUNC_DEF("draw_multiline_string", 12, &font_class_draw_multiline_string),
	JS_CFUNC_DEF("draw_string_outline", 11, &font_class_draw_string_outline),
	JS_CFUNC_DEF("draw_multiline_string_outline", 13, &font_class_draw_multiline_string_outline),
	JS_CFUNC_DEF("get_char_size", 2, &font_class_get_char_size),
	JS_CFUNC_DEF("draw_char", 5, &font_class_draw_char),
	JS_CFUNC_DEF("draw_char_outline", 6, &font_class_draw_char_outline),
	JS_CFUNC_DEF("has_char", 1, &font_class_has_char),
	JS_CFUNC_DEF("get_supported_chars", 0, &font_class_get_supported_chars),
	JS_CFUNC_DEF("is_language_supported", 1, &font_class_is_language_supported),
	JS_CFUNC_DEF("is_script_supported", 1, &font_class_is_script_supported),
	JS_CFUNC_DEF("get_supported_feature_list", 0, &font_class_get_supported_feature_list),
	JS_CFUNC_DEF("get_supported_variation_list", 0, &font_class_get_supported_variation_list),
	JS_CFUNC_DEF("get_face_count", 0, &font_class_get_face_count),
};

static int js_font_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Font::__class_id);
	classes["Font"] = Font::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Font::__class_id, &font_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Font::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, font_class_proto_funcs, _countof(font_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, font_class_constructor, "Font", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Font", ctor);

	return 0;
}

JSModuleDef *_js_init_font_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_font_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Font");
	return m;
}

JSModuleDef *js_init_font_module(JSContext *ctx) {
	return _js_init_font_module(ctx, "godot/classes/font");
}

void register_font() {
	js_init_font_module(ctx);
}