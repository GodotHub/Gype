
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "utils/func_utils.h"
#include <godot_cpp/variant/color.hpp>

using namespace godot;

static void color_class_finalizer(JSRuntime *rt, JSValue val) {
	Color *color = static_cast<Color *>(JS_GetOpaque(val, Color::__class_id));
	if (color)
		memfree(color);
}

static JSClassDef color_class_def = {
	"Color",
	.finalizer = color_class_finalizer
};

static JSValue color_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Color *color_class;
	JSValue obj = JS_NewObjectClass(ctx, Color::__class_id);
	if (JS_IsException(obj))
		return obj;
	color_class = memnew(Color);
	if (!color_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, color_class);
	return obj;
}
static JSValue color_class_to_argb32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::to_argb32, ctx, this_val, argc, argv);
};
static JSValue color_class_to_abgr32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::to_abgr32, ctx, this_val, argc, argv);
};
static JSValue color_class_to_rgba32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::to_rgba32, ctx, this_val, argc, argv);
};
static JSValue color_class_to_argb64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::to_argb64, ctx, this_val, argc, argv);
};
static JSValue color_class_to_abgr64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::to_abgr64, ctx, this_val, argc, argv);
};
static JSValue color_class_to_rgba64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::to_rgba64, ctx, this_val, argc, argv);
};
static JSValue color_class_to_html(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::to_html, ctx, this_val, argc, argv);
};
static JSValue color_class_clamp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::clamp, ctx, this_val, argc, argv);
};
static JSValue color_class_inverted(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::inverted, ctx, this_val, argc, argv);
};
static JSValue color_class_lerp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::lerp, ctx, this_val, argc, argv);
};
static JSValue color_class_lightened(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::lightened, ctx, this_val, argc, argv);
};
static JSValue color_class_darkened(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::darkened, ctx, this_val, argc, argv);
};
static JSValue color_class_blend(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::blend, ctx, this_val, argc, argv);
};
static JSValue color_class_get_luminance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::get_luminance, ctx, this_val, argc, argv);
};
static JSValue color_class_srgb_to_linear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::srgb_to_linear, ctx, this_val, argc, argv);
};
static JSValue color_class_linear_to_srgb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::linear_to_srgb, ctx, this_val, argc, argv);
};
static JSValue color_class_is_equal_approx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::is_equal_approx, ctx, this_val, argc, argv);
};
static JSValue color_class_hex(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Color::hex, ctx, this_val, argc, argv);
};

static JSValue color_class_hex64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Color::hex64, ctx, this_val, argc, argv);
};

static JSValue color_class_html(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Color::html, ctx, this_val, argc, argv);
};

static JSValue color_class_html_is_valid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Color::html_is_valid, ctx, this_val, argc, argv);
};

static JSValue color_class_from_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Color::from_string, ctx, this_val, argc, argv);
};

static JSValue color_class_from_hsv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Color::from_hsv, ctx, this_val, argc, argv);
};

static JSValue color_class_from_rgbe9995(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Color::from_rgbe9995, ctx, this_val, argc, argv);
};

static const JSCFunctionListEntry color_class_proto_funcs[] = {
	JS_CFUNC_DEF("to_argb32", 0, &color_class_to_argb32),
	JS_CFUNC_DEF("to_abgr32", 0, &color_class_to_abgr32),
	JS_CFUNC_DEF("to_rgba32", 0, &color_class_to_rgba32),
	JS_CFUNC_DEF("to_argb64", 0, &color_class_to_argb64),
	JS_CFUNC_DEF("to_abgr64", 0, &color_class_to_abgr64),
	JS_CFUNC_DEF("to_rgba64", 0, &color_class_to_rgba64),
	JS_CFUNC_DEF("to_html", 1, &color_class_to_html),
	JS_CFUNC_DEF("clamp", 2, &color_class_clamp),
	JS_CFUNC_DEF("inverted", 0, &color_class_inverted),
	JS_CFUNC_DEF("lerp", 2, &color_class_lerp),
	JS_CFUNC_DEF("lightened", 1, &color_class_lightened),
	JS_CFUNC_DEF("darkened", 1, &color_class_darkened),
	JS_CFUNC_DEF("blend", 1, &color_class_blend),
	JS_CFUNC_DEF("get_luminance", 0, &color_class_get_luminance),
	JS_CFUNC_DEF("srgb_to_linear", 0, &color_class_srgb_to_linear),
	JS_CFUNC_DEF("linear_to_srgb", 0, &color_class_linear_to_srgb),
	JS_CFUNC_DEF("is_equal_approx", 1, &color_class_is_equal_approx),
};
static const JSCFunctionListEntry color_class_static_funcs[] = {
	JS_CFUNC_DEF("hex", 1, &color_class_hex),
	JS_CFUNC_DEF("hex64", 1, &color_class_hex64),
	JS_CFUNC_DEF("html", 1, &color_class_html),
	JS_CFUNC_DEF("html_is_valid", 1, &color_class_html_is_valid),
	JS_CFUNC_DEF("from_string", 2, &color_class_from_string),
	JS_CFUNC_DEF("from_hsv", 4, &color_class_from_hsv),
	JS_CFUNC_DEF("from_rgbe9995", 1, &color_class_from_rgbe9995),
};

void define_color_property(JSContext *ctx, JSValue obj) {
}

static int js_color_class_init(JSContext *ctx) {
	JS_NewClassID(&Color::__class_id);
	classes["Color"] = Color::__class_id;
	class_id_list.insert(Color::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Color::__class_id, &color_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Color::__class_id, proto);

	define_color_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, color_class_proto_funcs, _countof(color_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, color_class_constructor, "Color", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetPropertyFunctionList(ctx, ctor, color_class_static_funcs, _countof(color_class_static_funcs));

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "Color", ctor);

	return 0;
}

void js_init_color_module(JSContext *ctx) {
	js_color_class_init(ctx);
}

void register_color() {
	Color::__init_js_class_id();
	js_init_color_module(ctx);
}