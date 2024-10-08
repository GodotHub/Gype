
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/rd_sampler_state.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rd_sampler_state_class_finalizer(JSRuntime *rt, JSValue val) {
	RDSamplerState *rd_sampler_state = static_cast<RDSamplerState *>(JS_GetOpaque(val, RDSamplerState::__class_id));
	if (rd_sampler_state)
		RDSamplerState::free(nullptr, rd_sampler_state);
}

static JSClassDef rd_sampler_state_class_def = {
	"RDSamplerState",
	.finalizer = rd_sampler_state_class_finalizer
};

static JSValue rd_sampler_state_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RDSamplerState *rd_sampler_state_class;
	JSValue obj = JS_NewObjectClass(ctx, RDSamplerState::__class_id);
	if (JS_IsException(obj))
		return obj;
	rd_sampler_state_class = memnew(RDSamplerState);
	if (!rd_sampler_state_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rd_sampler_state_class);
	return obj;
}
static JSValue rd_sampler_state_class_set_mag_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDSamplerState::set_mag_filter, RDSamplerState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_sampler_state_class_get_mag_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDSamplerState::get_mag_filter, RDSamplerState::__class_id, ctx, this_val, argv);
};
static JSValue rd_sampler_state_class_set_min_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDSamplerState::set_min_filter, RDSamplerState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_sampler_state_class_get_min_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDSamplerState::get_min_filter, RDSamplerState::__class_id, ctx, this_val, argv);
};
static JSValue rd_sampler_state_class_set_mip_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDSamplerState::set_mip_filter, RDSamplerState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_sampler_state_class_get_mip_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDSamplerState::get_mip_filter, RDSamplerState::__class_id, ctx, this_val, argv);
};
static JSValue rd_sampler_state_class_set_repeat_u(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDSamplerState::set_repeat_u, RDSamplerState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_sampler_state_class_get_repeat_u(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDSamplerState::get_repeat_u, RDSamplerState::__class_id, ctx, this_val, argv);
};
static JSValue rd_sampler_state_class_set_repeat_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDSamplerState::set_repeat_v, RDSamplerState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_sampler_state_class_get_repeat_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDSamplerState::get_repeat_v, RDSamplerState::__class_id, ctx, this_val, argv);
};
static JSValue rd_sampler_state_class_set_repeat_w(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDSamplerState::set_repeat_w, RDSamplerState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_sampler_state_class_get_repeat_w(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDSamplerState::get_repeat_w, RDSamplerState::__class_id, ctx, this_val, argv);
};
static JSValue rd_sampler_state_class_set_lod_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDSamplerState::set_lod_bias, RDSamplerState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_sampler_state_class_get_lod_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDSamplerState::get_lod_bias, RDSamplerState::__class_id, ctx, this_val, argv);
};
static JSValue rd_sampler_state_class_set_use_anisotropy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDSamplerState::set_use_anisotropy, RDSamplerState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_sampler_state_class_get_use_anisotropy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDSamplerState::get_use_anisotropy, RDSamplerState::__class_id, ctx, this_val, argv);
};
static JSValue rd_sampler_state_class_set_anisotropy_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDSamplerState::set_anisotropy_max, RDSamplerState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_sampler_state_class_get_anisotropy_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDSamplerState::get_anisotropy_max, RDSamplerState::__class_id, ctx, this_val, argv);
};
static JSValue rd_sampler_state_class_set_enable_compare(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDSamplerState::set_enable_compare, RDSamplerState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_sampler_state_class_get_enable_compare(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDSamplerState::get_enable_compare, RDSamplerState::__class_id, ctx, this_val, argv);
};
static JSValue rd_sampler_state_class_set_compare_op(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDSamplerState::set_compare_op, RDSamplerState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_sampler_state_class_get_compare_op(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDSamplerState::get_compare_op, RDSamplerState::__class_id, ctx, this_val, argv);
};
static JSValue rd_sampler_state_class_set_min_lod(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDSamplerState::set_min_lod, RDSamplerState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_sampler_state_class_get_min_lod(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDSamplerState::get_min_lod, RDSamplerState::__class_id, ctx, this_val, argv);
};
static JSValue rd_sampler_state_class_set_max_lod(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDSamplerState::set_max_lod, RDSamplerState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_sampler_state_class_get_max_lod(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDSamplerState::get_max_lod, RDSamplerState::__class_id, ctx, this_val, argv);
};
static JSValue rd_sampler_state_class_set_border_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDSamplerState::set_border_color, RDSamplerState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_sampler_state_class_get_border_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDSamplerState::get_border_color, RDSamplerState::__class_id, ctx, this_val, argv);
};
static JSValue rd_sampler_state_class_set_unnormalized_uvw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDSamplerState::set_unnormalized_uvw, RDSamplerState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_sampler_state_class_get_unnormalized_uvw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDSamplerState::get_unnormalized_uvw, RDSamplerState::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry rd_sampler_state_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mag_filter", 1, &rd_sampler_state_class_set_mag_filter),
	JS_CFUNC_DEF("get_mag_filter", 0, &rd_sampler_state_class_get_mag_filter),
	JS_CFUNC_DEF("set_min_filter", 1, &rd_sampler_state_class_set_min_filter),
	JS_CFUNC_DEF("get_min_filter", 0, &rd_sampler_state_class_get_min_filter),
	JS_CFUNC_DEF("set_mip_filter", 1, &rd_sampler_state_class_set_mip_filter),
	JS_CFUNC_DEF("get_mip_filter", 0, &rd_sampler_state_class_get_mip_filter),
	JS_CFUNC_DEF("set_repeat_u", 1, &rd_sampler_state_class_set_repeat_u),
	JS_CFUNC_DEF("get_repeat_u", 0, &rd_sampler_state_class_get_repeat_u),
	JS_CFUNC_DEF("set_repeat_v", 1, &rd_sampler_state_class_set_repeat_v),
	JS_CFUNC_DEF("get_repeat_v", 0, &rd_sampler_state_class_get_repeat_v),
	JS_CFUNC_DEF("set_repeat_w", 1, &rd_sampler_state_class_set_repeat_w),
	JS_CFUNC_DEF("get_repeat_w", 0, &rd_sampler_state_class_get_repeat_w),
	JS_CFUNC_DEF("set_lod_bias", 1, &rd_sampler_state_class_set_lod_bias),
	JS_CFUNC_DEF("get_lod_bias", 0, &rd_sampler_state_class_get_lod_bias),
	JS_CFUNC_DEF("set_use_anisotropy", 1, &rd_sampler_state_class_set_use_anisotropy),
	JS_CFUNC_DEF("get_use_anisotropy", 0, &rd_sampler_state_class_get_use_anisotropy),
	JS_CFUNC_DEF("set_anisotropy_max", 1, &rd_sampler_state_class_set_anisotropy_max),
	JS_CFUNC_DEF("get_anisotropy_max", 0, &rd_sampler_state_class_get_anisotropy_max),
	JS_CFUNC_DEF("set_enable_compare", 1, &rd_sampler_state_class_set_enable_compare),
	JS_CFUNC_DEF("get_enable_compare", 0, &rd_sampler_state_class_get_enable_compare),
	JS_CFUNC_DEF("set_compare_op", 1, &rd_sampler_state_class_set_compare_op),
	JS_CFUNC_DEF("get_compare_op", 0, &rd_sampler_state_class_get_compare_op),
	JS_CFUNC_DEF("set_min_lod", 1, &rd_sampler_state_class_set_min_lod),
	JS_CFUNC_DEF("get_min_lod", 0, &rd_sampler_state_class_get_min_lod),
	JS_CFUNC_DEF("set_max_lod", 1, &rd_sampler_state_class_set_max_lod),
	JS_CFUNC_DEF("get_max_lod", 0, &rd_sampler_state_class_get_max_lod),
	JS_CFUNC_DEF("set_border_color", 1, &rd_sampler_state_class_set_border_color),
	JS_CFUNC_DEF("get_border_color", 0, &rd_sampler_state_class_get_border_color),
	JS_CFUNC_DEF("set_unnormalized_uvw", 1, &rd_sampler_state_class_set_unnormalized_uvw),
	JS_CFUNC_DEF("get_unnormalized_uvw", 0, &rd_sampler_state_class_get_unnormalized_uvw),
};

static int js_rd_sampler_state_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RDSamplerState::__class_id);
	classes["RDSamplerState"] = RDSamplerState::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RDSamplerState::__class_id, &rd_sampler_state_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDSamplerState::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_sampler_state_class_proto_funcs, _countof(rd_sampler_state_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rd_sampler_state_class_constructor, "RDSamplerState", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RDSamplerState", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_sampler_state_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_sampler_state_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDSamplerState");
	return m;
}

JSModuleDef *js_init_rd_sampler_state_module(JSContext *ctx) {
	return _js_init_rd_sampler_state_module(ctx, "godot/classes/rd_sampler_state");
}

void register_rd_sampler_state() {
	js_init_rd_sampler_state_module(ctx);
}