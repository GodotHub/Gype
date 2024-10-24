
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/fast_noise_lite.hpp>
#include <godot_cpp/classes/noise.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void fast_noise_lite_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef fast_noise_lite_class_def = {
	"FastNoiseLite",
	.finalizer = fast_noise_lite_class_finalizer
};

static JSValue fast_noise_lite_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, FastNoiseLite::__class_id);
	if (JS_IsException(obj))
		return obj;
	FastNoiseLite *fast_noise_lite_class = memnew(FastNoiseLite);
	if (!fast_noise_lite_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, fast_noise_lite_class);	
	return obj;
}
static JSValue fast_noise_lite_class_set_noise_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_noise_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_noise_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_noise_type, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_seed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_seed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_seed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_seed, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_frequency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_frequency, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_frequency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_frequency, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_offset, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_fractal_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_fractal_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_fractal_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_fractal_type, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_fractal_octaves(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_fractal_octaves, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_fractal_octaves(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_fractal_octaves, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_fractal_lacunarity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_fractal_lacunarity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_fractal_lacunarity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_fractal_lacunarity, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_fractal_gain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_fractal_gain, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_fractal_gain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_fractal_gain, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_fractal_weighted_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_fractal_weighted_strength, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_fractal_weighted_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_fractal_weighted_strength, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_fractal_ping_pong_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_fractal_ping_pong_strength, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_fractal_ping_pong_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_fractal_ping_pong_strength, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_cellular_distance_function(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_cellular_distance_function, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_cellular_distance_function(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_cellular_distance_function, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_cellular_jitter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_cellular_jitter, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_cellular_jitter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_cellular_jitter, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_cellular_return_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_cellular_return_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_cellular_return_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_cellular_return_type, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_domain_warp_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_domain_warp_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_is_domain_warp_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::is_domain_warp_enabled, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_domain_warp_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_domain_warp_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_domain_warp_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_domain_warp_type, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_domain_warp_amplitude(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_domain_warp_amplitude, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_domain_warp_amplitude(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_domain_warp_amplitude, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_domain_warp_frequency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_domain_warp_frequency, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_domain_warp_frequency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_domain_warp_frequency, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_domain_warp_fractal_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_domain_warp_fractal_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_domain_warp_fractal_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_domain_warp_fractal_type, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_domain_warp_fractal_octaves(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_domain_warp_fractal_octaves, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_domain_warp_fractal_octaves(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_domain_warp_fractal_octaves, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_domain_warp_fractal_lacunarity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_domain_warp_fractal_lacunarity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_domain_warp_fractal_lacunarity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_domain_warp_fractal_lacunarity, ctx, this_val, argc, argv);
};
static JSValue fast_noise_lite_class_set_domain_warp_fractal_gain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FastNoiseLite::set_domain_warp_fractal_gain, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_domain_warp_fractal_gain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FastNoiseLite::get_domain_warp_fractal_gain, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry fast_noise_lite_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_noise_type", 1, &fast_noise_lite_class_set_noise_type),
	JS_CFUNC_DEF("get_noise_type", 0, &fast_noise_lite_class_get_noise_type),
	JS_CFUNC_DEF("set_seed", 1, &fast_noise_lite_class_set_seed),
	JS_CFUNC_DEF("get_seed", 0, &fast_noise_lite_class_get_seed),
	JS_CFUNC_DEF("set_frequency", 1, &fast_noise_lite_class_set_frequency),
	JS_CFUNC_DEF("get_frequency", 0, &fast_noise_lite_class_get_frequency),
	JS_CFUNC_DEF("set_offset", 1, &fast_noise_lite_class_set_offset),
	JS_CFUNC_DEF("get_offset", 0, &fast_noise_lite_class_get_offset),
	JS_CFUNC_DEF("set_fractal_type", 1, &fast_noise_lite_class_set_fractal_type),
	JS_CFUNC_DEF("get_fractal_type", 0, &fast_noise_lite_class_get_fractal_type),
	JS_CFUNC_DEF("set_fractal_octaves", 1, &fast_noise_lite_class_set_fractal_octaves),
	JS_CFUNC_DEF("get_fractal_octaves", 0, &fast_noise_lite_class_get_fractal_octaves),
	JS_CFUNC_DEF("set_fractal_lacunarity", 1, &fast_noise_lite_class_set_fractal_lacunarity),
	JS_CFUNC_DEF("get_fractal_lacunarity", 0, &fast_noise_lite_class_get_fractal_lacunarity),
	JS_CFUNC_DEF("set_fractal_gain", 1, &fast_noise_lite_class_set_fractal_gain),
	JS_CFUNC_DEF("get_fractal_gain", 0, &fast_noise_lite_class_get_fractal_gain),
	JS_CFUNC_DEF("set_fractal_weighted_strength", 1, &fast_noise_lite_class_set_fractal_weighted_strength),
	JS_CFUNC_DEF("get_fractal_weighted_strength", 0, &fast_noise_lite_class_get_fractal_weighted_strength),
	JS_CFUNC_DEF("set_fractal_ping_pong_strength", 1, &fast_noise_lite_class_set_fractal_ping_pong_strength),
	JS_CFUNC_DEF("get_fractal_ping_pong_strength", 0, &fast_noise_lite_class_get_fractal_ping_pong_strength),
	JS_CFUNC_DEF("set_cellular_distance_function", 1, &fast_noise_lite_class_set_cellular_distance_function),
	JS_CFUNC_DEF("get_cellular_distance_function", 0, &fast_noise_lite_class_get_cellular_distance_function),
	JS_CFUNC_DEF("set_cellular_jitter", 1, &fast_noise_lite_class_set_cellular_jitter),
	JS_CFUNC_DEF("get_cellular_jitter", 0, &fast_noise_lite_class_get_cellular_jitter),
	JS_CFUNC_DEF("set_cellular_return_type", 1, &fast_noise_lite_class_set_cellular_return_type),
	JS_CFUNC_DEF("get_cellular_return_type", 0, &fast_noise_lite_class_get_cellular_return_type),
	JS_CFUNC_DEF("set_domain_warp_enabled", 1, &fast_noise_lite_class_set_domain_warp_enabled),
	JS_CFUNC_DEF("is_domain_warp_enabled", 0, &fast_noise_lite_class_is_domain_warp_enabled),
	JS_CFUNC_DEF("set_domain_warp_type", 1, &fast_noise_lite_class_set_domain_warp_type),
	JS_CFUNC_DEF("get_domain_warp_type", 0, &fast_noise_lite_class_get_domain_warp_type),
	JS_CFUNC_DEF("set_domain_warp_amplitude", 1, &fast_noise_lite_class_set_domain_warp_amplitude),
	JS_CFUNC_DEF("get_domain_warp_amplitude", 0, &fast_noise_lite_class_get_domain_warp_amplitude),
	JS_CFUNC_DEF("set_domain_warp_frequency", 1, &fast_noise_lite_class_set_domain_warp_frequency),
	JS_CFUNC_DEF("get_domain_warp_frequency", 0, &fast_noise_lite_class_get_domain_warp_frequency),
	JS_CFUNC_DEF("set_domain_warp_fractal_type", 1, &fast_noise_lite_class_set_domain_warp_fractal_type),
	JS_CFUNC_DEF("get_domain_warp_fractal_type", 0, &fast_noise_lite_class_get_domain_warp_fractal_type),
	JS_CFUNC_DEF("set_domain_warp_fractal_octaves", 1, &fast_noise_lite_class_set_domain_warp_fractal_octaves),
	JS_CFUNC_DEF("get_domain_warp_fractal_octaves", 0, &fast_noise_lite_class_get_domain_warp_fractal_octaves),
	JS_CFUNC_DEF("set_domain_warp_fractal_lacunarity", 1, &fast_noise_lite_class_set_domain_warp_fractal_lacunarity),
	JS_CFUNC_DEF("get_domain_warp_fractal_lacunarity", 0, &fast_noise_lite_class_get_domain_warp_fractal_lacunarity),
	JS_CFUNC_DEF("set_domain_warp_fractal_gain", 1, &fast_noise_lite_class_set_domain_warp_fractal_gain),
	JS_CFUNC_DEF("get_domain_warp_fractal_gain", 0, &fast_noise_lite_class_get_domain_warp_fractal_gain),
};

void define_fast_noise_lite_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "noise_type"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_noise_type, "get_noise_type", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_noise_type, "set_noise_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "seed"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_seed, "get_seed", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_seed, "set_seed", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "frequency"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_frequency, "get_frequency", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_frequency, "set_frequency", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "offset"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_offset, "get_offset", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_offset, "set_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "fractal_type"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_fractal_type, "get_fractal_type", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_fractal_type, "set_fractal_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "fractal_octaves"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_fractal_octaves, "get_fractal_octaves", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_fractal_octaves, "set_fractal_octaves", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "fractal_lacunarity"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_fractal_lacunarity, "get_fractal_lacunarity", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_fractal_lacunarity, "set_fractal_lacunarity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "fractal_gain"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_fractal_gain, "get_fractal_gain", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_fractal_gain, "set_fractal_gain", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "fractal_weighted_strength"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_fractal_weighted_strength, "get_fractal_weighted_strength", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_fractal_weighted_strength, "set_fractal_weighted_strength", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "fractal_ping_pong_strength"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_fractal_ping_pong_strength, "get_fractal_ping_pong_strength", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_fractal_ping_pong_strength, "set_fractal_ping_pong_strength", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "cellular_distance_function"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_cellular_distance_function, "get_cellular_distance_function", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_cellular_distance_function, "set_cellular_distance_function", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "cellular_jitter"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_cellular_jitter, "get_cellular_jitter", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_cellular_jitter, "set_cellular_jitter", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "cellular_return_type"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_cellular_return_type, "get_cellular_return_type", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_cellular_return_type, "set_cellular_return_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "domain_warp_enabled"),
        JS_NewCFunction(ctx, fast_noise_lite_class_is_domain_warp_enabled, "is_domain_warp_enabled", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_domain_warp_enabled, "set_domain_warp_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "domain_warp_type"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_domain_warp_type, "get_domain_warp_type", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_domain_warp_type, "set_domain_warp_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "domain_warp_amplitude"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_domain_warp_amplitude, "get_domain_warp_amplitude", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_domain_warp_amplitude, "set_domain_warp_amplitude", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "domain_warp_frequency"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_domain_warp_frequency, "get_domain_warp_frequency", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_domain_warp_frequency, "set_domain_warp_frequency", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "domain_warp_fractal_type"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_domain_warp_fractal_type, "get_domain_warp_fractal_type", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_domain_warp_fractal_type, "set_domain_warp_fractal_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "domain_warp_fractal_octaves"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_domain_warp_fractal_octaves, "get_domain_warp_fractal_octaves", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_domain_warp_fractal_octaves, "set_domain_warp_fractal_octaves", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "domain_warp_fractal_lacunarity"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_domain_warp_fractal_lacunarity, "get_domain_warp_fractal_lacunarity", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_domain_warp_fractal_lacunarity, "set_domain_warp_fractal_lacunarity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "domain_warp_fractal_gain"),
        JS_NewCFunction(ctx, fast_noise_lite_class_get_domain_warp_fractal_gain, "get_domain_warp_fractal_gain", 0),
        JS_NewCFunction(ctx, fast_noise_lite_class_set_domain_warp_fractal_gain, "set_domain_warp_fractal_gain", 1),
        JS_PROP_GETSET
    );
}

static int js_fast_noise_lite_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&FastNoiseLite::__class_id);
	classes["FastNoiseLite"] = FastNoiseLite::__class_id;
	class_id_list.insert(FastNoiseLite::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), FastNoiseLite::__class_id, &fast_noise_lite_class_def);

	JSValue proto = JS_NewObjectClass(ctx, FastNoiseLite::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Noise::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FastNoiseLite::__class_id, proto);

	define_fast_noise_lite_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, fast_noise_lite_class_proto_funcs, _countof(fast_noise_lite_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, fast_noise_lite_class_constructor, "FastNoiseLite", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "FastNoiseLite", ctor);

	return 0;
}

JSModuleDef *_js_init_fast_noise_lite_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/noise';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_fast_noise_lite_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "FastNoiseLite");
	return m;
}

JSModuleDef *js_init_fast_noise_lite_module(JSContext *ctx) {
	return _js_init_fast_noise_lite_module(ctx, "godot/classes/fast_noise_lite");
}

void register_fast_noise_lite() {
	FastNoiseLite::__init_js_class_id();
	js_init_fast_noise_lite_module(ctx);
}