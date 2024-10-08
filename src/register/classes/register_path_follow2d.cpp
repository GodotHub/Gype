
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/path_follow2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void path_follow2d_class_finalizer(JSRuntime *rt, JSValue val) {
	PathFollow2D *path_follow2d = static_cast<PathFollow2D *>(JS_GetOpaque(val, PathFollow2D::__class_id));
	if (path_follow2d)
		PathFollow2D::free(nullptr, path_follow2d);
}

static JSClassDef path_follow2d_class_def = {
	"PathFollow2D",
	.finalizer = path_follow2d_class_finalizer
};

static JSValue path_follow2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PathFollow2D *path_follow2d_class;
	JSValue obj = JS_NewObjectClass(ctx, PathFollow2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	path_follow2d_class = memnew(PathFollow2D);
	if (!path_follow2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, path_follow2d_class);
	return obj;
}
static JSValue path_follow2d_class_set_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PathFollow2D::set_progress, PathFollow2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow2d_class_get_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PathFollow2D::get_progress, PathFollow2D::__class_id, ctx, this_val, argv);
};
static JSValue path_follow2d_class_set_h_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PathFollow2D::set_h_offset, PathFollow2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow2d_class_get_h_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PathFollow2D::get_h_offset, PathFollow2D::__class_id, ctx, this_val, argv);
};
static JSValue path_follow2d_class_set_v_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PathFollow2D::set_v_offset, PathFollow2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow2d_class_get_v_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PathFollow2D::get_v_offset, PathFollow2D::__class_id, ctx, this_val, argv);
};
static JSValue path_follow2d_class_set_progress_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PathFollow2D::set_progress_ratio, PathFollow2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow2d_class_get_progress_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PathFollow2D::get_progress_ratio, PathFollow2D::__class_id, ctx, this_val, argv);
};
static JSValue path_follow2d_class_set_rotates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PathFollow2D::set_rotates, PathFollow2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow2d_class_is_rotating(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PathFollow2D::is_rotating, PathFollow2D::__class_id, ctx, this_val, argv);
};
static JSValue path_follow2d_class_set_cubic_interpolation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PathFollow2D::set_cubic_interpolation, PathFollow2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow2d_class_get_cubic_interpolation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PathFollow2D::get_cubic_interpolation, PathFollow2D::__class_id, ctx, this_val, argv);
};
static JSValue path_follow2d_class_set_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PathFollow2D::set_loop, PathFollow2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow2d_class_has_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PathFollow2D::has_loop, PathFollow2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry path_follow2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_progress", 1, &path_follow2d_class_set_progress),
	JS_CFUNC_DEF("get_progress", 0, &path_follow2d_class_get_progress),
	JS_CFUNC_DEF("set_h_offset", 1, &path_follow2d_class_set_h_offset),
	JS_CFUNC_DEF("get_h_offset", 0, &path_follow2d_class_get_h_offset),
	JS_CFUNC_DEF("set_v_offset", 1, &path_follow2d_class_set_v_offset),
	JS_CFUNC_DEF("get_v_offset", 0, &path_follow2d_class_get_v_offset),
	JS_CFUNC_DEF("set_progress_ratio", 1, &path_follow2d_class_set_progress_ratio),
	JS_CFUNC_DEF("get_progress_ratio", 0, &path_follow2d_class_get_progress_ratio),
	JS_CFUNC_DEF("set_rotates", 1, &path_follow2d_class_set_rotates),
	JS_CFUNC_DEF("is_rotating", 0, &path_follow2d_class_is_rotating),
	JS_CFUNC_DEF("set_cubic_interpolation", 1, &path_follow2d_class_set_cubic_interpolation),
	JS_CFUNC_DEF("get_cubic_interpolation", 0, &path_follow2d_class_get_cubic_interpolation),
	JS_CFUNC_DEF("set_loop", 1, &path_follow2d_class_set_loop),
	JS_CFUNC_DEF("has_loop", 0, &path_follow2d_class_has_loop),
};

static int js_path_follow2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PathFollow2D::__class_id);
	classes["PathFollow2D"] = PathFollow2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PathFollow2D::__class_id, &path_follow2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PathFollow2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, path_follow2d_class_proto_funcs, _countof(path_follow2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, path_follow2d_class_constructor, "PathFollow2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PathFollow2D", ctor);

	return 0;
}

JSModuleDef *_js_init_path_follow2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_path_follow2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PathFollow2D");
	return m;
}

JSModuleDef *js_init_path_follow2d_module(JSContext *ctx) {
	return _js_init_path_follow2d_module(ctx, "godot/classes/path_follow2d");
}

void register_path_follow2d() {
	js_init_path_follow2d_module(ctx);
}