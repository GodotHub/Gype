
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void curve_class_finalizer(JSRuntime *rt, JSValue val) {
	Curve *curve = static_cast<Curve *>(JS_GetOpaque(val, Curve::__class_id));
	if (curve)
		Curve::free(nullptr, curve);
}

static JSClassDef curve_class_def = {
	"Curve",
	.finalizer = curve_class_finalizer
};

static JSValue curve_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Curve *curve_class;
	JSValue obj = JS_NewObjectClass(ctx, Curve::__class_id);
	if (JS_IsException(obj))
		return obj;
	curve_class = memnew(Curve);
	if (!curve_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, curve_class);
	return obj;
}
static JSValue curve_class_get_point_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve::get_point_count, Curve::__class_id, ctx, this_val, argv);
};
static JSValue curve_class_set_point_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve::set_point_count, Curve::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve_class_add_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Curve::add_point, Curve::__class_id, ctx, this_val, argv);
};
static JSValue curve_class_remove_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve::remove_point, Curve::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve_class_clear_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve::clear_points, Curve::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve_class_get_point_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve::get_point_position, Curve::__class_id, ctx, this_val, argv);
};
static JSValue curve_class_set_point_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve::set_point_value, Curve::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve_class_set_point_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Curve::set_point_offset, Curve::__class_id, ctx, this_val, argv);
};
static JSValue curve_class_sample(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve::sample, Curve::__class_id, ctx, this_val, argv);
};
static JSValue curve_class_sample_baked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve::sample_baked, Curve::__class_id, ctx, this_val, argv);
};
static JSValue curve_class_get_point_left_tangent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve::get_point_left_tangent, Curve::__class_id, ctx, this_val, argv);
};
static JSValue curve_class_get_point_right_tangent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve::get_point_right_tangent, Curve::__class_id, ctx, this_val, argv);
};
static JSValue curve_class_get_point_left_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve::get_point_left_mode, Curve::__class_id, ctx, this_val, argv);
};
static JSValue curve_class_get_point_right_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve::get_point_right_mode, Curve::__class_id, ctx, this_val, argv);
};
static JSValue curve_class_set_point_left_tangent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve::set_point_left_tangent, Curve::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve_class_set_point_right_tangent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve::set_point_right_tangent, Curve::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve_class_set_point_left_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve::set_point_left_mode, Curve::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve_class_set_point_right_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve::set_point_right_mode, Curve::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve_class_get_min_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve::get_min_value, Curve::__class_id, ctx, this_val, argv);
};
static JSValue curve_class_set_min_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve::set_min_value, Curve::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve_class_get_max_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve::get_max_value, Curve::__class_id, ctx, this_val, argv);
};
static JSValue curve_class_set_max_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve::set_max_value, Curve::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve_class_clean_dupes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve::clean_dupes, Curve::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve_class_bake(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve::bake, Curve::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve_class_get_bake_resolution(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve::get_bake_resolution, Curve::__class_id, ctx, this_val, argv);
};
static JSValue curve_class_set_bake_resolution(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve::set_bake_resolution, Curve::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry curve_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_point_count", 0, &curve_class_get_point_count),
	JS_CFUNC_DEF("set_point_count", 1, &curve_class_set_point_count),
	JS_CFUNC_DEF("add_point", 5, &curve_class_add_point),
	JS_CFUNC_DEF("remove_point", 1, &curve_class_remove_point),
	JS_CFUNC_DEF("clear_points", 0, &curve_class_clear_points),
	JS_CFUNC_DEF("get_point_position", 1, &curve_class_get_point_position),
	JS_CFUNC_DEF("set_point_value", 2, &curve_class_set_point_value),
	JS_CFUNC_DEF("set_point_offset", 2, &curve_class_set_point_offset),
	JS_CFUNC_DEF("sample", 1, &curve_class_sample),
	JS_CFUNC_DEF("sample_baked", 1, &curve_class_sample_baked),
	JS_CFUNC_DEF("get_point_left_tangent", 1, &curve_class_get_point_left_tangent),
	JS_CFUNC_DEF("get_point_right_tangent", 1, &curve_class_get_point_right_tangent),
	JS_CFUNC_DEF("get_point_left_mode", 1, &curve_class_get_point_left_mode),
	JS_CFUNC_DEF("get_point_right_mode", 1, &curve_class_get_point_right_mode),
	JS_CFUNC_DEF("set_point_left_tangent", 2, &curve_class_set_point_left_tangent),
	JS_CFUNC_DEF("set_point_right_tangent", 2, &curve_class_set_point_right_tangent),
	JS_CFUNC_DEF("set_point_left_mode", 2, &curve_class_set_point_left_mode),
	JS_CFUNC_DEF("set_point_right_mode", 2, &curve_class_set_point_right_mode),
	JS_CFUNC_DEF("get_min_value", 0, &curve_class_get_min_value),
	JS_CFUNC_DEF("set_min_value", 1, &curve_class_set_min_value),
	JS_CFUNC_DEF("get_max_value", 0, &curve_class_get_max_value),
	JS_CFUNC_DEF("set_max_value", 1, &curve_class_set_max_value),
	JS_CFUNC_DEF("clean_dupes", 0, &curve_class_clean_dupes),
	JS_CFUNC_DEF("bake", 0, &curve_class_bake),
	JS_CFUNC_DEF("get_bake_resolution", 0, &curve_class_get_bake_resolution),
	JS_CFUNC_DEF("set_bake_resolution", 1, &curve_class_set_bake_resolution),
};

static int js_curve_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Curve::__class_id);
	classes["Curve"] = Curve::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Curve::__class_id, &curve_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Curve::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, curve_class_proto_funcs, _countof(curve_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, curve_class_constructor, "Curve", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Curve", ctor);

	return 0;
}

JSModuleDef *_js_init_curve_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_curve_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Curve");
	return m;
}

JSModuleDef *js_init_curve_module(JSContext *ctx) {
	return _js_init_curve_module(ctx, "godot/classes/curve");
}

void register_curve() {
	js_init_curve_module(ctx);
}