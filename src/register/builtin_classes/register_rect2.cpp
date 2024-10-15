
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/rect2.hpp>

using namespace godot;

static void rect2_class_finalizer(JSRuntime *rt, JSValue val) {
	Rect2 *rect2 = static_cast<Rect2 *>(JS_GetOpaque(val, Rect2::__class_id));
	if (rect2)
		memfree(rect2);
}

static JSClassDef rect2_class_def = {
	"Rect2",
	.finalizer = rect2_class_finalizer
};

static JSValue rect2_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Rect2 *rect2_class;
	JSValue obj = JS_NewObjectClass(ctx, Rect2::__class_id);
	if (JS_IsException(obj))
		return obj;
	rect2_class = memnew(Rect2);
	if (!rect2_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rect2_class);
	return obj;
}
static JSValue rect2_class_get_center(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2::get_center, ctx, this_val, argc, argv);
};
static JSValue rect2_class_get_area(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2::get_area, ctx, this_val, argc, argv);
};
static JSValue rect2_class_has_area(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2::has_area, ctx, this_val, argc, argv);
};
static JSValue rect2_class_has_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2::has_point, ctx, this_val, argc, argv);
};
static JSValue rect2_class_is_equal_approx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2::is_equal_approx, ctx, this_val, argc, argv);
};
static JSValue rect2_class_is_finite(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2::is_finite, ctx, this_val, argc, argv);
};
static JSValue rect2_class_intersects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2::intersects, ctx, this_val, argc, argv);
};
static JSValue rect2_class_encloses(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2::encloses, ctx, this_val, argc, argv);
};
static JSValue rect2_class_intersection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2::intersection, ctx, this_val, argc, argv);
};
static JSValue rect2_class_merge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2::merge, ctx, this_val, argc, argv);
};
static JSValue rect2_class_expand(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2::expand, ctx, this_val, argc, argv);
};
static JSValue rect2_class_grow(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2::grow, ctx, this_val, argc, argv);
};
static JSValue rect2_class_grow_side(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2::grow_side, ctx, this_val, argc, argv);
};
static JSValue rect2_class_grow_individual(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2::grow_individual, ctx, this_val, argc, argv);
};
static JSValue rect2_class_abs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2::abs, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry rect2_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_center", 0, &rect2_class_get_center),
	JS_CFUNC_DEF("get_area", 0, &rect2_class_get_area),
	JS_CFUNC_DEF("has_area", 0, &rect2_class_has_area),
	JS_CFUNC_DEF("has_point", 1, &rect2_class_has_point),
	JS_CFUNC_DEF("is_equal_approx", 1, &rect2_class_is_equal_approx),
	JS_CFUNC_DEF("is_finite", 0, &rect2_class_is_finite),
	JS_CFUNC_DEF("intersects", 2, &rect2_class_intersects),
	JS_CFUNC_DEF("encloses", 1, &rect2_class_encloses),
	JS_CFUNC_DEF("intersection", 1, &rect2_class_intersection),
	JS_CFUNC_DEF("merge", 1, &rect2_class_merge),
	JS_CFUNC_DEF("expand", 1, &rect2_class_expand),
	JS_CFUNC_DEF("grow", 1, &rect2_class_grow),
	JS_CFUNC_DEF("grow_side", 2, &rect2_class_grow_side),
	JS_CFUNC_DEF("grow_individual", 4, &rect2_class_grow_individual),
	JS_CFUNC_DEF("abs", 0, &rect2_class_abs),
};

void define_rect2_property(JSContext *ctx, JSValue obj) {
}

static int js_rect2_class_init(JSContext *ctx) {
	
	JS_NewClassID(&Rect2::__class_id);
	classes["Rect2"] = Rect2::__class_id;
	class_id_list.insert(Rect2::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Rect2::__class_id, &rect2_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Rect2::__class_id, proto);

	define_rect2_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, rect2_class_proto_funcs, _countof(rect2_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rect2_class_constructor, "Rect2", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "Rect2", ctor);

	return 0;
}

void js_init_rect2_module(JSContext *ctx) {
	js_rect2_class_init(ctx);
}

void register_rect2() {
	Rect2::__init_js_class_id();
	js_init_rect2_module(ctx);
}