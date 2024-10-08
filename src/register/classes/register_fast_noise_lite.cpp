
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/noise.hpp>
#include <godot_cpp/classes/fast_noise_lite.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void fast_noise_lite_class_finalizer(JSRuntime *rt, JSValue val) {
	FastNoiseLite *fast_noise_lite = static_cast<FastNoiseLite *>(JS_GetOpaque(val, FastNoiseLite::__class_id));
	if (fast_noise_lite)
		FastNoiseLite::free(nullptr, fast_noise_lite);
}

static JSClassDef fast_noise_lite_class_def = {
	"FastNoiseLite",
	.finalizer = fast_noise_lite_class_finalizer
};

static JSValue fast_noise_lite_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	FastNoiseLite *fast_noise_lite_class;
	JSValue obj = JS_NewObjectClass(ctx, FastNoiseLite::__class_id);
	if (JS_IsException(obj))
		return obj;
	fast_noise_lite_class = memnew(FastNoiseLite);
	if (!fast_noise_lite_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, fast_noise_lite_class);
	return obj;
}
static JSValue fast_noise_lite_class_set_noise_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_noise_type, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_noise_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_noise_type, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_seed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_seed, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_seed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_seed, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_frequency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_frequency, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_frequency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_frequency, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_offset, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_offset, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_fractal_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_fractal_type, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_fractal_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_fractal_type, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_fractal_octaves(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_fractal_octaves, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_fractal_octaves(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_fractal_octaves, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_fractal_lacunarity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_fractal_lacunarity, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_fractal_lacunarity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_fractal_lacunarity, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_fractal_gain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_fractal_gain, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_fractal_gain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_fractal_gain, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_fractal_weighted_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_fractal_weighted_strength, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_fractal_weighted_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_fractal_weighted_strength, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_fractal_ping_pong_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_fractal_ping_pong_strength, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_fractal_ping_pong_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_fractal_ping_pong_strength, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_cellular_distance_function(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_cellular_distance_function, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_cellular_distance_function(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_cellular_distance_function, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_cellular_jitter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_cellular_jitter, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_cellular_jitter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_cellular_jitter, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_cellular_return_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_cellular_return_type, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_cellular_return_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_cellular_return_type, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_domain_warp_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_domain_warp_enabled, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_is_domain_warp_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::is_domain_warp_enabled, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_domain_warp_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_domain_warp_type, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_domain_warp_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_domain_warp_type, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_domain_warp_amplitude(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_domain_warp_amplitude, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_domain_warp_amplitude(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_domain_warp_amplitude, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_domain_warp_frequency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_domain_warp_frequency, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_domain_warp_frequency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_domain_warp_frequency, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_domain_warp_fractal_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_domain_warp_fractal_type, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_domain_warp_fractal_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_domain_warp_fractal_type, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_domain_warp_fractal_octaves(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_domain_warp_fractal_octaves, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_domain_warp_fractal_octaves(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_domain_warp_fractal_octaves, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_domain_warp_fractal_lacunarity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_domain_warp_fractal_lacunarity, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_domain_warp_fractal_lacunarity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_domain_warp_fractal_lacunarity, FastNoiseLite::__class_id, ctx, this_val, argv);
};
static JSValue fast_noise_lite_class_set_domain_warp_fractal_gain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FastNoiseLite::set_domain_warp_fractal_gain, FastNoiseLite::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fast_noise_lite_class_get_domain_warp_fractal_gain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FastNoiseLite::get_domain_warp_fractal_gain, FastNoiseLite::__class_id, ctx, this_val, argv);
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

static int js_fast_noise_lite_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&FastNoiseLite::__class_id);
	classes["FastNoiseLite"] = FastNoiseLite::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), FastNoiseLite::__class_id, &fast_noise_lite_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Noise::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FastNoiseLite::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, fast_noise_lite_class_proto_funcs, _countof(fast_noise_lite_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, fast_noise_lite_class_constructor, "FastNoiseLite", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "FastNoiseLite", ctor);

	return 0;
}

JSModuleDef *_js_init_fast_noise_lite_module(JSContext *ctx, const char *module_name) {
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
	js_init_fast_noise_lite_module(ctx);
}