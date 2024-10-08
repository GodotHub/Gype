
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/parallax_background.hpp>
#include <godot_cpp/classes/canvas_layer.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void parallax_background_class_finalizer(JSRuntime *rt, JSValue val) {
	ParallaxBackground *parallax_background = static_cast<ParallaxBackground *>(JS_GetOpaque(val, ParallaxBackground::__class_id));
	if (parallax_background)
		ParallaxBackground::free(nullptr, parallax_background);
}

static JSClassDef parallax_background_class_def = {
	"ParallaxBackground",
	.finalizer = parallax_background_class_finalizer
};

static JSValue parallax_background_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ParallaxBackground *parallax_background_class;
	JSValue obj = JS_NewObjectClass(ctx, ParallaxBackground::__class_id);
	if (JS_IsException(obj))
		return obj;
	parallax_background_class = memnew(ParallaxBackground);
	if (!parallax_background_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, parallax_background_class);
	return obj;
}
static JSValue parallax_background_class_set_scroll_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParallaxBackground::set_scroll_offset, ParallaxBackground::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue parallax_background_class_get_scroll_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParallaxBackground::get_scroll_offset, ParallaxBackground::__class_id, ctx, this_val, argv);
};
static JSValue parallax_background_class_set_scroll_base_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParallaxBackground::set_scroll_base_offset, ParallaxBackground::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue parallax_background_class_get_scroll_base_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParallaxBackground::get_scroll_base_offset, ParallaxBackground::__class_id, ctx, this_val, argv);
};
static JSValue parallax_background_class_set_scroll_base_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParallaxBackground::set_scroll_base_scale, ParallaxBackground::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue parallax_background_class_get_scroll_base_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParallaxBackground::get_scroll_base_scale, ParallaxBackground::__class_id, ctx, this_val, argv);
};
static JSValue parallax_background_class_set_limit_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParallaxBackground::set_limit_begin, ParallaxBackground::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue parallax_background_class_get_limit_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParallaxBackground::get_limit_begin, ParallaxBackground::__class_id, ctx, this_val, argv);
};
static JSValue parallax_background_class_set_limit_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParallaxBackground::set_limit_end, ParallaxBackground::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue parallax_background_class_get_limit_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParallaxBackground::get_limit_end, ParallaxBackground::__class_id, ctx, this_val, argv);
};
static JSValue parallax_background_class_set_ignore_camera_zoom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParallaxBackground::set_ignore_camera_zoom, ParallaxBackground::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue parallax_background_class_is_ignore_camera_zoom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ParallaxBackground::is_ignore_camera_zoom, ParallaxBackground::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry parallax_background_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_scroll_offset", 1, &parallax_background_class_set_scroll_offset),
	JS_CFUNC_DEF("get_scroll_offset", 0, &parallax_background_class_get_scroll_offset),
	JS_CFUNC_DEF("set_scroll_base_offset", 1, &parallax_background_class_set_scroll_base_offset),
	JS_CFUNC_DEF("get_scroll_base_offset", 0, &parallax_background_class_get_scroll_base_offset),
	JS_CFUNC_DEF("set_scroll_base_scale", 1, &parallax_background_class_set_scroll_base_scale),
	JS_CFUNC_DEF("get_scroll_base_scale", 0, &parallax_background_class_get_scroll_base_scale),
	JS_CFUNC_DEF("set_limit_begin", 1, &parallax_background_class_set_limit_begin),
	JS_CFUNC_DEF("get_limit_begin", 0, &parallax_background_class_get_limit_begin),
	JS_CFUNC_DEF("set_limit_end", 1, &parallax_background_class_set_limit_end),
	JS_CFUNC_DEF("get_limit_end", 0, &parallax_background_class_get_limit_end),
	JS_CFUNC_DEF("set_ignore_camera_zoom", 1, &parallax_background_class_set_ignore_camera_zoom),
	JS_CFUNC_DEF("is_ignore_camera_zoom", 0, &parallax_background_class_is_ignore_camera_zoom),
};

static int js_parallax_background_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ParallaxBackground::__class_id);
	classes["ParallaxBackground"] = ParallaxBackground::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ParallaxBackground::__class_id, &parallax_background_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, CanvasLayer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ParallaxBackground::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, parallax_background_class_proto_funcs, _countof(parallax_background_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, parallax_background_class_constructor, "ParallaxBackground", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ParallaxBackground", ctor);

	return 0;
}

JSModuleDef *_js_init_parallax_background_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_parallax_background_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ParallaxBackground");
	return m;
}

JSModuleDef *js_init_parallax_background_module(JSContext *ctx) {
	return _js_init_parallax_background_module(ctx, "godot/classes/parallax_background");
}

void register_parallax_background() {
	js_init_parallax_background_module(ctx);
}