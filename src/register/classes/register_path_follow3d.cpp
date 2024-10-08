
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/path_follow3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void path_follow3d_class_finalizer(JSRuntime *rt, JSValue val) {
	PathFollow3D *path_follow3d = static_cast<PathFollow3D *>(JS_GetOpaque(val, PathFollow3D::__class_id));
	if (path_follow3d)
		PathFollow3D::free(nullptr, path_follow3d);
}

static JSClassDef path_follow3d_class_def = {
	"PathFollow3D",
	.finalizer = path_follow3d_class_finalizer
};

static JSValue path_follow3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PathFollow3D *path_follow3d_class;
	JSValue obj = JS_NewObjectClass(ctx, PathFollow3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	path_follow3d_class = memnew(PathFollow3D);
	if (!path_follow3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, path_follow3d_class);
	return obj;
}
static JSValue path_follow3d_class_set_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PathFollow3D::set_progress, PathFollow3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow3d_class_get_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PathFollow3D::get_progress, PathFollow3D::__class_id, ctx, this_val, argv);
};
static JSValue path_follow3d_class_set_h_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PathFollow3D::set_h_offset, PathFollow3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow3d_class_get_h_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PathFollow3D::get_h_offset, PathFollow3D::__class_id, ctx, this_val, argv);
};
static JSValue path_follow3d_class_set_v_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PathFollow3D::set_v_offset, PathFollow3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow3d_class_get_v_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PathFollow3D::get_v_offset, PathFollow3D::__class_id, ctx, this_val, argv);
};
static JSValue path_follow3d_class_set_progress_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PathFollow3D::set_progress_ratio, PathFollow3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow3d_class_get_progress_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PathFollow3D::get_progress_ratio, PathFollow3D::__class_id, ctx, this_val, argv);
};
static JSValue path_follow3d_class_set_rotation_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PathFollow3D::set_rotation_mode, PathFollow3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow3d_class_get_rotation_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PathFollow3D::get_rotation_mode, PathFollow3D::__class_id, ctx, this_val, argv);
};
static JSValue path_follow3d_class_set_cubic_interpolation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PathFollow3D::set_cubic_interpolation, PathFollow3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow3d_class_get_cubic_interpolation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PathFollow3D::get_cubic_interpolation, PathFollow3D::__class_id, ctx, this_val, argv);
};
static JSValue path_follow3d_class_set_use_model_front(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PathFollow3D::set_use_model_front, PathFollow3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow3d_class_is_using_model_front(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PathFollow3D::is_using_model_front, PathFollow3D::__class_id, ctx, this_val, argv);
};
static JSValue path_follow3d_class_set_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PathFollow3D::set_loop, PathFollow3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow3d_class_has_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PathFollow3D::has_loop, PathFollow3D::__class_id, ctx, this_val, argv);
};
static JSValue path_follow3d_class_set_tilt_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PathFollow3D::set_tilt_enabled, PathFollow3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow3d_class_is_tilt_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PathFollow3D::is_tilt_enabled, PathFollow3D::__class_id, ctx, this_val, argv);
};
static JSValue path_follow3d_class_correct_posture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&PathFollow3D::correct_posture, PathFollow3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry path_follow3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_progress", 1, &path_follow3d_class_set_progress),
	JS_CFUNC_DEF("get_progress", 0, &path_follow3d_class_get_progress),
	JS_CFUNC_DEF("set_h_offset", 1, &path_follow3d_class_set_h_offset),
	JS_CFUNC_DEF("get_h_offset", 0, &path_follow3d_class_get_h_offset),
	JS_CFUNC_DEF("set_v_offset", 1, &path_follow3d_class_set_v_offset),
	JS_CFUNC_DEF("get_v_offset", 0, &path_follow3d_class_get_v_offset),
	JS_CFUNC_DEF("set_progress_ratio", 1, &path_follow3d_class_set_progress_ratio),
	JS_CFUNC_DEF("get_progress_ratio", 0, &path_follow3d_class_get_progress_ratio),
	JS_CFUNC_DEF("set_rotation_mode", 1, &path_follow3d_class_set_rotation_mode),
	JS_CFUNC_DEF("get_rotation_mode", 0, &path_follow3d_class_get_rotation_mode),
	JS_CFUNC_DEF("set_cubic_interpolation", 1, &path_follow3d_class_set_cubic_interpolation),
	JS_CFUNC_DEF("get_cubic_interpolation", 0, &path_follow3d_class_get_cubic_interpolation),
	JS_CFUNC_DEF("set_use_model_front", 1, &path_follow3d_class_set_use_model_front),
	JS_CFUNC_DEF("is_using_model_front", 0, &path_follow3d_class_is_using_model_front),
	JS_CFUNC_DEF("set_loop", 1, &path_follow3d_class_set_loop),
	JS_CFUNC_DEF("has_loop", 0, &path_follow3d_class_has_loop),
	JS_CFUNC_DEF("set_tilt_enabled", 1, &path_follow3d_class_set_tilt_enabled),
	JS_CFUNC_DEF("is_tilt_enabled", 0, &path_follow3d_class_is_tilt_enabled),
};
static const JSCFunctionListEntry path_follow3d_class_static_funcs[] = {
	JS_CFUNC_DEF("correct_posture", 2, &path_follow3d_class_correct_posture),
};

static int js_path_follow3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PathFollow3D::__class_id);
	classes["PathFollow3D"] = PathFollow3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PathFollow3D::__class_id, &path_follow3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PathFollow3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, path_follow3d_class_proto_funcs, _countof(path_follow3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, path_follow3d_class_constructor, "PathFollow3D", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, path_follow3d_class_static_funcs, _countof(path_follow3d_class_static_funcs));

	JS_SetModuleExport(ctx, m, "PathFollow3D", ctor);

	return 0;
}

JSModuleDef *_js_init_path_follow3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_path_follow3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PathFollow3D");
	return m;
}

JSModuleDef *js_init_path_follow3d_module(JSContext *ctx) {
	return _js_init_path_follow3d_module(ctx, "godot/classes/path_follow3d");
}

void register_path_follow3d() {
	js_init_path_follow3d_module(ctx);
}