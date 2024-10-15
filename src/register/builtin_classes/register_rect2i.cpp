
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "utils/func_utils.h"
#include <godot_cpp/variant/rect2i.hpp>


using namespace godot;

static void rect2i_class_finalizer(JSRuntime *rt, JSValue val) {
	Rect2i *rect2i = static_cast<Rect2i *>(JS_GetOpaque(val, Rect2i::__class_id));
	if (rect2i)
		memfree(rect2i);
}

static JSClassDef rect2i_class_def = {
	"Rect2i",
	.finalizer = rect2i_class_finalizer
};

static JSValue rect2i_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Rect2i *rect2i_class;
	JSValue obj = JS_NewObjectClass(ctx, Rect2i::__class_id);
	if (JS_IsException(obj))
		return obj;
	rect2i_class = memnew(Rect2i);
	if (!rect2i_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rect2i_class);
	return obj;
}
static JSValue rect2i_class_get_center(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::get_center, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_get_area(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::get_area, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_has_area(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::has_area, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_has_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::has_point, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_intersects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::intersects, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_encloses(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::encloses, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_intersection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::intersection, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_merge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::merge, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_expand(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::expand, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_grow(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::grow, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_grow_side(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::grow_side, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_grow_individual(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::grow_individual, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_abs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::abs, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry rect2i_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_center", 0, &rect2i_class_get_center),
	JS_CFUNC_DEF("get_area", 0, &rect2i_class_get_area),
	JS_CFUNC_DEF("has_area", 0, &rect2i_class_has_area),
	JS_CFUNC_DEF("has_point", 1, &rect2i_class_has_point),
	JS_CFUNC_DEF("intersects", 1, &rect2i_class_intersects),
	JS_CFUNC_DEF("encloses", 1, &rect2i_class_encloses),
	JS_CFUNC_DEF("intersection", 1, &rect2i_class_intersection),
	JS_CFUNC_DEF("merge", 1, &rect2i_class_merge),
	JS_CFUNC_DEF("expand", 1, &rect2i_class_expand),
	JS_CFUNC_DEF("grow", 1, &rect2i_class_grow),
	JS_CFUNC_DEF("grow_side", 2, &rect2i_class_grow_side),
	JS_CFUNC_DEF("grow_individual", 4, &rect2i_class_grow_individual),
	JS_CFUNC_DEF("abs", 0, &rect2i_class_abs),
};

void define_rect2i_property(JSContext *ctx, JSValue obj) {
}

static int js_rect2i_class_init(JSContext *ctx) {
	JS_NewClassID(&Rect2i::__class_id);
	classes["Rect2i"] = Rect2i::__class_id;
	class_id_list.insert(Rect2i::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Rect2i::__class_id, &rect2i_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Rect2i::__class_id, proto);

	define_rect2i_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, rect2i_class_proto_funcs, _countof(rect2i_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rect2i_class_constructor, "Rect2i", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "Rect2i", ctor);

	return 0;
}

void js_init_rect2i_module(JSContext *ctx) {
	js_rect2i_class_init(ctx);
}

void register_rect2i() {
	Rect2i::__init_js_class_id();
	js_init_rect2i_module(ctx);
}