
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "utils/func_utils.h"
#include <godot_cpp/variant/vector2i.hpp>

using namespace godot;

static void vector2i_class_finalizer(JSRuntime *rt, JSValue val) {
	Vector2i *vector2i = static_cast<Vector2i *>(JS_GetOpaque(val, Vector2i::__class_id));
	if (vector2i)
		memfree(vector2i);
}

static JSClassDef vector2i_class_def = {
	"Vector2i",
	.finalizer = vector2i_class_finalizer
};

static JSValue vector2i_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Vector2i *vector2i_class;
	JSValue obj = JS_NewObjectClass(ctx, Vector2i::__class_id);
	if (JS_IsException(obj))
		return obj;
	vector2i_class = memnew(Vector2i);
	if (!vector2i_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, vector2i_class);
	return obj;
}
static JSValue vector2i_class_aspect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::aspect, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_max_axis_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::max_axis_index, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_min_axis_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::min_axis_index, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_distance_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::distance_to, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_distance_squared_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::distance_squared_to, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::length, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_length_squared(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::length_squared, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_sign(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::sign, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_abs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::abs, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_clamp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::clamp, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_clampi(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::clampi, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_snapped(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::snapped, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_snappedi(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::snappedi, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::min, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_mini(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::mini, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::max, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_maxi(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::maxi, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry vector2i_class_proto_funcs[] = {
	JS_CFUNC_DEF("aspect", 0, &vector2i_class_aspect),
	JS_CFUNC_DEF("max_axis_index", 0, &vector2i_class_max_axis_index),
	JS_CFUNC_DEF("min_axis_index", 0, &vector2i_class_min_axis_index),
	JS_CFUNC_DEF("distance_to", 1, &vector2i_class_distance_to),
	JS_CFUNC_DEF("distance_squared_to", 1, &vector2i_class_distance_squared_to),
	JS_CFUNC_DEF("length", 0, &vector2i_class_length),
	JS_CFUNC_DEF("length_squared", 0, &vector2i_class_length_squared),
	JS_CFUNC_DEF("sign", 0, &vector2i_class_sign),
	JS_CFUNC_DEF("abs", 0, &vector2i_class_abs),
	JS_CFUNC_DEF("clamp", 2, &vector2i_class_clamp),
	JS_CFUNC_DEF("clampi", 2, &vector2i_class_clampi),
	JS_CFUNC_DEF("snapped", 1, &vector2i_class_snapped),
	JS_CFUNC_DEF("snappedi", 1, &vector2i_class_snappedi),
	JS_CFUNC_DEF("min", 1, &vector2i_class_min),
	JS_CFUNC_DEF("mini", 1, &vector2i_class_mini),
	JS_CFUNC_DEF("max", 1, &vector2i_class_max),
	JS_CFUNC_DEF("maxi", 1, &vector2i_class_maxi),
};

void define_vector2i_property(JSContext *ctx, JSValue obj) {
}

static int js_vector2i_class_init(JSContext *ctx) {
	JS_NewClassID(&Vector2i::__class_id);
	classes["Vector2i"] = Vector2i::__class_id;
	class_id_list.insert(Vector2i::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Vector2i::__class_id, &vector2i_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Vector2i::__class_id, proto);

	define_vector2i_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, vector2i_class_proto_funcs, _countof(vector2i_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, vector2i_class_constructor, "Vector2i", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "Vector2i", ctor);

	return 0;
}

void js_init_vector2i_module(JSContext *ctx) {
	js_vector2i_class_init(ctx);
}

void register_vector2i() {
	Vector2i::__init_js_class_id();
	js_init_vector2i_module(ctx);
}