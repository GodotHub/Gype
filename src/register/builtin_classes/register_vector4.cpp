
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "utils/func_utils.h"
#include <godot_cpp/variant/vector4.hpp>


using namespace godot;

static void vector4_class_finalizer(JSRuntime *rt, JSValue val) {
	Vector4 *vector4 = static_cast<Vector4 *>(JS_GetOpaque(val, Vector4::__class_id));
	if (vector4)
		memfree(vector4);
}

static JSClassDef vector4_class_def = {
	"Vector4",
	.finalizer = vector4_class_finalizer
};

static JSValue vector4_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Vector4 *vector4_class;
	JSValue obj = JS_NewObjectClass(ctx, Vector4::__class_id);
	if (JS_IsException(obj))
		return obj;
	vector4_class = memnew(Vector4);
	if (!vector4_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, vector4_class);
	return obj;
}
static JSValue vector4_class_min_axis_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::min_axis_index, ctx, this_val, argc, argv);
};
static JSValue vector4_class_max_axis_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::max_axis_index, ctx, this_val, argc, argv);
};
static JSValue vector4_class_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::length, ctx, this_val, argc, argv);
};
static JSValue vector4_class_length_squared(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::length_squared, ctx, this_val, argc, argv);
};
static JSValue vector4_class_abs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::abs, ctx, this_val, argc, argv);
};
static JSValue vector4_class_sign(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::sign, ctx, this_val, argc, argv);
};
static JSValue vector4_class_floor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::floor, ctx, this_val, argc, argv);
};
static JSValue vector4_class_ceil(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::ceil, ctx, this_val, argc, argv);
};
static JSValue vector4_class_round(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::round, ctx, this_val, argc, argv);
};
static JSValue vector4_class_lerp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::lerp, ctx, this_val, argc, argv);
};
static JSValue vector4_class_cubic_interpolate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::cubic_interpolate, ctx, this_val, argc, argv);
};
static JSValue vector4_class_cubic_interpolate_in_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::cubic_interpolate_in_time, ctx, this_val, argc, argv);
};
static JSValue vector4_class_posmod(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::posmod, ctx, this_val, argc, argv);
};
static JSValue vector4_class_posmodv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::posmodv, ctx, this_val, argc, argv);
};
static JSValue vector4_class_snapped(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::snapped, ctx, this_val, argc, argv);
};
static JSValue vector4_class_snappedf(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::snappedf, ctx, this_val, argc, argv);
};
static JSValue vector4_class_clamp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::clamp, ctx, this_val, argc, argv);
};
static JSValue vector4_class_clampf(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::clampf, ctx, this_val, argc, argv);
};
static JSValue vector4_class_normalized(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::normalized, ctx, this_val, argc, argv);
};
static JSValue vector4_class_is_normalized(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::is_normalized, ctx, this_val, argc, argv);
};
static JSValue vector4_class_direction_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::direction_to, ctx, this_val, argc, argv);
};
static JSValue vector4_class_distance_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::distance_to, ctx, this_val, argc, argv);
};
static JSValue vector4_class_distance_squared_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::distance_squared_to, ctx, this_val, argc, argv);
};
static JSValue vector4_class_dot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::dot, ctx, this_val, argc, argv);
};
static JSValue vector4_class_inverse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::inverse, ctx, this_val, argc, argv);
};
static JSValue vector4_class_is_equal_approx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::is_equal_approx, ctx, this_val, argc, argv);
};
static JSValue vector4_class_is_zero_approx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::is_zero_approx, ctx, this_val, argc, argv);
};
static JSValue vector4_class_is_finite(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::is_finite, ctx, this_val, argc, argv);
};
static JSValue vector4_class_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::min, ctx, this_val, argc, argv);
};
static JSValue vector4_class_minf(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::minf, ctx, this_val, argc, argv);
};
static JSValue vector4_class_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::max, ctx, this_val, argc, argv);
};
static JSValue vector4_class_maxf(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4::maxf, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry vector4_class_proto_funcs[] = {
	JS_CFUNC_DEF("min_axis_index", 0, &vector4_class_min_axis_index),
	JS_CFUNC_DEF("max_axis_index", 0, &vector4_class_max_axis_index),
	JS_CFUNC_DEF("length", 0, &vector4_class_length),
	JS_CFUNC_DEF("length_squared", 0, &vector4_class_length_squared),
	JS_CFUNC_DEF("abs", 0, &vector4_class_abs),
	JS_CFUNC_DEF("sign", 0, &vector4_class_sign),
	JS_CFUNC_DEF("floor", 0, &vector4_class_floor),
	JS_CFUNC_DEF("ceil", 0, &vector4_class_ceil),
	JS_CFUNC_DEF("round", 0, &vector4_class_round),
	JS_CFUNC_DEF("lerp", 2, &vector4_class_lerp),
	JS_CFUNC_DEF("cubic_interpolate", 4, &vector4_class_cubic_interpolate),
	JS_CFUNC_DEF("cubic_interpolate_in_time", 7, &vector4_class_cubic_interpolate_in_time),
	JS_CFUNC_DEF("posmod", 1, &vector4_class_posmod),
	JS_CFUNC_DEF("posmodv", 1, &vector4_class_posmodv),
	JS_CFUNC_DEF("snapped", 1, &vector4_class_snapped),
	JS_CFUNC_DEF("snappedf", 1, &vector4_class_snappedf),
	JS_CFUNC_DEF("clamp", 2, &vector4_class_clamp),
	JS_CFUNC_DEF("clampf", 2, &vector4_class_clampf),
	JS_CFUNC_DEF("normalized", 0, &vector4_class_normalized),
	JS_CFUNC_DEF("is_normalized", 0, &vector4_class_is_normalized),
	JS_CFUNC_DEF("direction_to", 1, &vector4_class_direction_to),
	JS_CFUNC_DEF("distance_to", 1, &vector4_class_distance_to),
	JS_CFUNC_DEF("distance_squared_to", 1, &vector4_class_distance_squared_to),
	JS_CFUNC_DEF("dot", 1, &vector4_class_dot),
	JS_CFUNC_DEF("inverse", 0, &vector4_class_inverse),
	JS_CFUNC_DEF("is_equal_approx", 1, &vector4_class_is_equal_approx),
	JS_CFUNC_DEF("is_zero_approx", 0, &vector4_class_is_zero_approx),
	JS_CFUNC_DEF("is_finite", 0, &vector4_class_is_finite),
	JS_CFUNC_DEF("min", 1, &vector4_class_min),
	JS_CFUNC_DEF("minf", 1, &vector4_class_minf),
	JS_CFUNC_DEF("max", 1, &vector4_class_max),
	JS_CFUNC_DEF("maxf", 1, &vector4_class_maxf),
};

void define_vector4_property(JSContext *ctx, JSValue obj) {
}

static int js_vector4_class_init(JSContext *ctx) {
	JS_NewClassID(&Vector4::__class_id);
	classes["Vector4"] = Vector4::__class_id;
	class_id_list.insert(Vector4::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Vector4::__class_id, &vector4_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Vector4::__class_id, proto);

	define_vector4_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, vector4_class_proto_funcs, _countof(vector4_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, vector4_class_constructor, "Vector4", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "Vector4", ctor);

	return 0;
}

void js_init_vector4_module(JSContext *ctx) {
	js_vector4_class_init(ctx);
}

void register_vector4() {
	Vector4::__init_js_class_id();
	js_init_vector4_module(ctx);
}