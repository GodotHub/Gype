
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "utils/func_utils.h"
#include <godot_cpp/variant/plane.hpp>

using namespace godot;

static void plane_class_finalizer(JSRuntime *rt, JSValue val) {
	Plane *plane = static_cast<Plane *>(JS_GetOpaque(val, Plane::__class_id));
	if (plane)
		memfree(plane);
}

static JSClassDef plane_class_def = {
	"Plane",
	.finalizer = plane_class_finalizer
};

static JSValue plane_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Plane *plane_class;
	JSValue obj = JS_NewObjectClass(ctx, Plane::__class_id);
	if (JS_IsException(obj))
		return obj;
	plane_class = memnew(Plane);
	if (!plane_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, plane_class);
	return obj;
}
static JSValue plane_class_normalized(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Plane::normalized, ctx, this_val, argc, argv);
};
static JSValue plane_class_is_equal_approx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Plane::is_equal_approx, ctx, this_val, argc, argv);
};
static JSValue plane_class_is_finite(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Plane::is_finite, ctx, this_val, argc, argv);
};
static JSValue plane_class_is_point_over(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Plane::is_point_over, ctx, this_val, argc, argv);
};
static JSValue plane_class_distance_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Plane::distance_to, ctx, this_val, argc, argv);
};
static JSValue plane_class_has_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Plane::has_point, ctx, this_val, argc, argv);
};
static JSValue plane_class_project(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Plane::project, ctx, this_val, argc, argv);
};
static JSValue plane_class_intersect_3(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Plane::intersect_3, ctx, this_val, argc, argv);
};
static JSValue plane_class_intersects_ray(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Plane::intersects_ray, ctx, this_val, argc, argv);
};
static JSValue plane_class_intersects_segment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Plane::intersects_segment, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry plane_class_proto_funcs[] = {
	JS_CFUNC_DEF("normalized", 0, &plane_class_normalized),
	JS_CFUNC_DEF("is_equal_approx", 1, &plane_class_is_equal_approx),
	JS_CFUNC_DEF("is_finite", 0, &plane_class_is_finite),
	JS_CFUNC_DEF("is_point_over", 1, &plane_class_is_point_over),
	JS_CFUNC_DEF("distance_to", 1, &plane_class_distance_to),
	JS_CFUNC_DEF("has_point", 2, &plane_class_has_point),
	JS_CFUNC_DEF("project", 1, &plane_class_project),
	JS_CFUNC_DEF("intersect_3", 2, &plane_class_intersect_3),
	JS_CFUNC_DEF("intersects_ray", 2, &plane_class_intersects_ray),
	JS_CFUNC_DEF("intersects_segment", 2, &plane_class_intersects_segment),
};

void define_plane_property(JSContext *ctx, JSValue obj) {
}

static int js_plane_class_init(JSContext *ctx) {
	JS_NewClassID(&Plane::__class_id);
	classes["Plane"] = Plane::__class_id;
	class_id_list.insert(Plane::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Plane::__class_id, &plane_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Plane::__class_id, proto);

	define_plane_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, plane_class_proto_funcs, _countof(plane_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, plane_class_constructor, "Plane", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "Plane", ctor);

	return 0;
}

void js_init_plane_module(JSContext *ctx) {
	js_plane_class_init(ctx);
}

void register_plane() {
	Plane::__init_js_class_id();
	js_init_plane_module(ctx);
}