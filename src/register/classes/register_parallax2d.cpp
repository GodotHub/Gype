
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/parallax2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void parallax2d_class_finalizer(JSRuntime *rt, JSValue val) {
	Parallax2D *parallax2d = static_cast<Parallax2D *>(JS_GetOpaque(val, Parallax2D::__class_id));
	if (parallax2d)
		Parallax2D::free(nullptr, parallax2d);
}

static JSClassDef parallax2d_class_def = {
	"Parallax2D",
	.finalizer = parallax2d_class_finalizer
};

static JSValue parallax2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Parallax2D *parallax2d_class;
	JSValue obj = JS_NewObjectClass(ctx, Parallax2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	parallax2d_class = memnew(Parallax2D);
	if (!parallax2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, parallax2d_class);
	return obj;
}
static JSValue parallax2d_class_set_scroll_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Parallax2D::set_scroll_scale, Parallax2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue parallax2d_class_get_scroll_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Parallax2D::get_scroll_scale, Parallax2D::__class_id, ctx, this_val, argv);
};
static JSValue parallax2d_class_set_repeat_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Parallax2D::set_repeat_size, Parallax2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue parallax2d_class_get_repeat_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Parallax2D::get_repeat_size, Parallax2D::__class_id, ctx, this_val, argv);
};
static JSValue parallax2d_class_set_repeat_times(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Parallax2D::set_repeat_times, Parallax2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue parallax2d_class_get_repeat_times(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Parallax2D::get_repeat_times, Parallax2D::__class_id, ctx, this_val, argv);
};
static JSValue parallax2d_class_set_autoscroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Parallax2D::set_autoscroll, Parallax2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue parallax2d_class_get_autoscroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Parallax2D::get_autoscroll, Parallax2D::__class_id, ctx, this_val, argv);
};
static JSValue parallax2d_class_set_scroll_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Parallax2D::set_scroll_offset, Parallax2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue parallax2d_class_get_scroll_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Parallax2D::get_scroll_offset, Parallax2D::__class_id, ctx, this_val, argv);
};
static JSValue parallax2d_class_set_screen_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Parallax2D::set_screen_offset, Parallax2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue parallax2d_class_get_screen_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Parallax2D::get_screen_offset, Parallax2D::__class_id, ctx, this_val, argv);
};
static JSValue parallax2d_class_set_limit_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Parallax2D::set_limit_begin, Parallax2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue parallax2d_class_get_limit_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Parallax2D::get_limit_begin, Parallax2D::__class_id, ctx, this_val, argv);
};
static JSValue parallax2d_class_set_limit_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Parallax2D::set_limit_end, Parallax2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue parallax2d_class_get_limit_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Parallax2D::get_limit_end, Parallax2D::__class_id, ctx, this_val, argv);
};
static JSValue parallax2d_class_set_follow_viewport(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Parallax2D::set_follow_viewport, Parallax2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue parallax2d_class_get_follow_viewport(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Parallax2D::get_follow_viewport, Parallax2D::__class_id, ctx, this_val, argv);
};
static JSValue parallax2d_class_set_ignore_camera_scroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Parallax2D::set_ignore_camera_scroll, Parallax2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue parallax2d_class_is_ignore_camera_scroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Parallax2D::is_ignore_camera_scroll, Parallax2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry parallax2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_scroll_scale", 1, &parallax2d_class_set_scroll_scale),
	JS_CFUNC_DEF("get_scroll_scale", 0, &parallax2d_class_get_scroll_scale),
	JS_CFUNC_DEF("set_repeat_size", 1, &parallax2d_class_set_repeat_size),
	JS_CFUNC_DEF("get_repeat_size", 0, &parallax2d_class_get_repeat_size),
	JS_CFUNC_DEF("set_repeat_times", 1, &parallax2d_class_set_repeat_times),
	JS_CFUNC_DEF("get_repeat_times", 0, &parallax2d_class_get_repeat_times),
	JS_CFUNC_DEF("set_autoscroll", 1, &parallax2d_class_set_autoscroll),
	JS_CFUNC_DEF("get_autoscroll", 0, &parallax2d_class_get_autoscroll),
	JS_CFUNC_DEF("set_scroll_offset", 1, &parallax2d_class_set_scroll_offset),
	JS_CFUNC_DEF("get_scroll_offset", 0, &parallax2d_class_get_scroll_offset),
	JS_CFUNC_DEF("set_screen_offset", 1, &parallax2d_class_set_screen_offset),
	JS_CFUNC_DEF("get_screen_offset", 0, &parallax2d_class_get_screen_offset),
	JS_CFUNC_DEF("set_limit_begin", 1, &parallax2d_class_set_limit_begin),
	JS_CFUNC_DEF("get_limit_begin", 0, &parallax2d_class_get_limit_begin),
	JS_CFUNC_DEF("set_limit_end", 1, &parallax2d_class_set_limit_end),
	JS_CFUNC_DEF("get_limit_end", 0, &parallax2d_class_get_limit_end),
	JS_CFUNC_DEF("set_follow_viewport", 1, &parallax2d_class_set_follow_viewport),
	JS_CFUNC_DEF("get_follow_viewport", 0, &parallax2d_class_get_follow_viewport),
	JS_CFUNC_DEF("set_ignore_camera_scroll", 1, &parallax2d_class_set_ignore_camera_scroll),
	JS_CFUNC_DEF("is_ignore_camera_scroll", 0, &parallax2d_class_is_ignore_camera_scroll),
};

static int js_parallax2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Parallax2D::__class_id);
	classes["Parallax2D"] = Parallax2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Parallax2D::__class_id, &parallax2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Parallax2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, parallax2d_class_proto_funcs, _countof(parallax2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, parallax2d_class_constructor, "Parallax2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Parallax2D", ctor);

	return 0;
}

JSModuleDef *_js_init_parallax2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_parallax2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Parallax2D");
	return m;
}

JSModuleDef *js_init_parallax2d_module(JSContext *ctx) {
	return _js_init_parallax2d_module(ctx, "godot/classes/parallax2d");
}

void register_parallax2d() {
	js_init_parallax2d_module(ctx);
}