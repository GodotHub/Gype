
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/font_variation.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void font_variation_class_finalizer(JSRuntime *rt, JSValue val) {
	FontVariation *font_variation = static_cast<FontVariation *>(JS_GetOpaque(val, FontVariation::__class_id));
	if (font_variation)
		FontVariation::free(nullptr, font_variation);
}

static JSClassDef font_variation_class_def = {
	"FontVariation",
	.finalizer = font_variation_class_finalizer
};

static JSValue font_variation_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	FontVariation *font_variation_class;
	JSValue obj = JS_NewObjectClass(ctx, FontVariation::__class_id);
	if (JS_IsException(obj))
		return obj;
	font_variation_class = memnew(FontVariation);
	if (!font_variation_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, font_variation_class);
	return obj;
}
static JSValue font_variation_class_set_base_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FontVariation::set_base_font, FontVariation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_variation_class_get_base_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontVariation::get_base_font, FontVariation::__class_id, ctx, this_val, argv);
};
static JSValue font_variation_class_set_variation_opentype(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FontVariation::set_variation_opentype, FontVariation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_variation_class_get_variation_opentype(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontVariation::get_variation_opentype, FontVariation::__class_id, ctx, this_val, argv);
};
static JSValue font_variation_class_set_variation_embolden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FontVariation::set_variation_embolden, FontVariation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_variation_class_get_variation_embolden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontVariation::get_variation_embolden, FontVariation::__class_id, ctx, this_val, argv);
};
static JSValue font_variation_class_set_variation_face_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FontVariation::set_variation_face_index, FontVariation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_variation_class_get_variation_face_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontVariation::get_variation_face_index, FontVariation::__class_id, ctx, this_val, argv);
};
static JSValue font_variation_class_set_variation_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FontVariation::set_variation_transform, FontVariation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_variation_class_get_variation_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontVariation::get_variation_transform, FontVariation::__class_id, ctx, this_val, argv);
};
static JSValue font_variation_class_set_opentype_features(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FontVariation::set_opentype_features, FontVariation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_variation_class_set_spacing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FontVariation::set_spacing, FontVariation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_variation_class_set_baseline_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FontVariation::set_baseline_offset, FontVariation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue font_variation_class_get_baseline_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FontVariation::get_baseline_offset, FontVariation::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry font_variation_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_base_font", 1, &font_variation_class_set_base_font),
	JS_CFUNC_DEF("get_base_font", 0, &font_variation_class_get_base_font),
	JS_CFUNC_DEF("set_variation_opentype", 1, &font_variation_class_set_variation_opentype),
	JS_CFUNC_DEF("get_variation_opentype", 0, &font_variation_class_get_variation_opentype),
	JS_CFUNC_DEF("set_variation_embolden", 1, &font_variation_class_set_variation_embolden),
	JS_CFUNC_DEF("get_variation_embolden", 0, &font_variation_class_get_variation_embolden),
	JS_CFUNC_DEF("set_variation_face_index", 1, &font_variation_class_set_variation_face_index),
	JS_CFUNC_DEF("get_variation_face_index", 0, &font_variation_class_get_variation_face_index),
	JS_CFUNC_DEF("set_variation_transform", 1, &font_variation_class_set_variation_transform),
	JS_CFUNC_DEF("get_variation_transform", 0, &font_variation_class_get_variation_transform),
	JS_CFUNC_DEF("set_opentype_features", 1, &font_variation_class_set_opentype_features),
	JS_CFUNC_DEF("set_spacing", 2, &font_variation_class_set_spacing),
	JS_CFUNC_DEF("set_baseline_offset", 1, &font_variation_class_set_baseline_offset),
	JS_CFUNC_DEF("get_baseline_offset", 0, &font_variation_class_get_baseline_offset),
};

static int js_font_variation_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&FontVariation::__class_id);
	classes["FontVariation"] = FontVariation::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), FontVariation::__class_id, &font_variation_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Font::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FontVariation::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, font_variation_class_proto_funcs, _countof(font_variation_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, font_variation_class_constructor, "FontVariation", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "FontVariation", ctor);

	return 0;
}

JSModuleDef *_js_init_font_variation_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_font_variation_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "FontVariation");
	return m;
}

JSModuleDef *js_init_font_variation_module(JSContext *ctx) {
	return _js_init_font_variation_module(ctx, "godot/classes/font_variation");
}

void register_font_variation() {
	js_init_font_variation_module(ctx);
}