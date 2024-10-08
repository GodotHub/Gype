
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/rd_pipeline_rasterization_state.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void rd_pipeline_rasterization_state_class_finalizer(JSRuntime *rt, JSValue val) {
	RDPipelineRasterizationState *rd_pipeline_rasterization_state = static_cast<RDPipelineRasterizationState *>(JS_GetOpaque(val, RDPipelineRasterizationState::__class_id));
	if (rd_pipeline_rasterization_state)
		RDPipelineRasterizationState::free(nullptr, rd_pipeline_rasterization_state);
}

static JSClassDef rd_pipeline_rasterization_state_class_def = {
	"RDPipelineRasterizationState",
	.finalizer = rd_pipeline_rasterization_state_class_finalizer
};

static JSValue rd_pipeline_rasterization_state_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RDPipelineRasterizationState *rd_pipeline_rasterization_state_class;
	JSValue obj = JS_NewObjectClass(ctx, RDPipelineRasterizationState::__class_id);
	if (JS_IsException(obj))
		return obj;
	rd_pipeline_rasterization_state_class = memnew(RDPipelineRasterizationState);
	if (!rd_pipeline_rasterization_state_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rd_pipeline_rasterization_state_class);
	return obj;
}
static JSValue rd_pipeline_rasterization_state_class_set_enable_depth_clamp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDPipelineRasterizationState::set_enable_depth_clamp, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_rasterization_state_class_get_enable_depth_clamp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_enable_depth_clamp, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_discard_primitives(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDPipelineRasterizationState::set_discard_primitives, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_rasterization_state_class_get_discard_primitives(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_discard_primitives, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_wireframe(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDPipelineRasterizationState::set_wireframe, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_rasterization_state_class_get_wireframe(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_wireframe, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_cull_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDPipelineRasterizationState::set_cull_mode, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_rasterization_state_class_get_cull_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_cull_mode, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_front_face(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDPipelineRasterizationState::set_front_face, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_rasterization_state_class_get_front_face(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_front_face, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_depth_bias_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDPipelineRasterizationState::set_depth_bias_enabled, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_rasterization_state_class_get_depth_bias_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_depth_bias_enabled, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_depth_bias_constant_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDPipelineRasterizationState::set_depth_bias_constant_factor, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_rasterization_state_class_get_depth_bias_constant_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_depth_bias_constant_factor, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_depth_bias_clamp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDPipelineRasterizationState::set_depth_bias_clamp, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_rasterization_state_class_get_depth_bias_clamp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_depth_bias_clamp, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_depth_bias_slope_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDPipelineRasterizationState::set_depth_bias_slope_factor, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_rasterization_state_class_get_depth_bias_slope_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_depth_bias_slope_factor, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_line_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDPipelineRasterizationState::set_line_width, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_rasterization_state_class_get_line_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_line_width, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_patch_control_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDPipelineRasterizationState::set_patch_control_points, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_rasterization_state_class_get_patch_control_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_patch_control_points, RDPipelineRasterizationState::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry rd_pipeline_rasterization_state_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_enable_depth_clamp", 1, &rd_pipeline_rasterization_state_class_set_enable_depth_clamp),
	JS_CFUNC_DEF("get_enable_depth_clamp", 0, &rd_pipeline_rasterization_state_class_get_enable_depth_clamp),
	JS_CFUNC_DEF("set_discard_primitives", 1, &rd_pipeline_rasterization_state_class_set_discard_primitives),
	JS_CFUNC_DEF("get_discard_primitives", 0, &rd_pipeline_rasterization_state_class_get_discard_primitives),
	JS_CFUNC_DEF("set_wireframe", 1, &rd_pipeline_rasterization_state_class_set_wireframe),
	JS_CFUNC_DEF("get_wireframe", 0, &rd_pipeline_rasterization_state_class_get_wireframe),
	JS_CFUNC_DEF("set_cull_mode", 1, &rd_pipeline_rasterization_state_class_set_cull_mode),
	JS_CFUNC_DEF("get_cull_mode", 0, &rd_pipeline_rasterization_state_class_get_cull_mode),
	JS_CFUNC_DEF("set_front_face", 1, &rd_pipeline_rasterization_state_class_set_front_face),
	JS_CFUNC_DEF("get_front_face", 0, &rd_pipeline_rasterization_state_class_get_front_face),
	JS_CFUNC_DEF("set_depth_bias_enabled", 1, &rd_pipeline_rasterization_state_class_set_depth_bias_enabled),
	JS_CFUNC_DEF("get_depth_bias_enabled", 0, &rd_pipeline_rasterization_state_class_get_depth_bias_enabled),
	JS_CFUNC_DEF("set_depth_bias_constant_factor", 1, &rd_pipeline_rasterization_state_class_set_depth_bias_constant_factor),
	JS_CFUNC_DEF("get_depth_bias_constant_factor", 0, &rd_pipeline_rasterization_state_class_get_depth_bias_constant_factor),
	JS_CFUNC_DEF("set_depth_bias_clamp", 1, &rd_pipeline_rasterization_state_class_set_depth_bias_clamp),
	JS_CFUNC_DEF("get_depth_bias_clamp", 0, &rd_pipeline_rasterization_state_class_get_depth_bias_clamp),
	JS_CFUNC_DEF("set_depth_bias_slope_factor", 1, &rd_pipeline_rasterization_state_class_set_depth_bias_slope_factor),
	JS_CFUNC_DEF("get_depth_bias_slope_factor", 0, &rd_pipeline_rasterization_state_class_get_depth_bias_slope_factor),
	JS_CFUNC_DEF("set_line_width", 1, &rd_pipeline_rasterization_state_class_set_line_width),
	JS_CFUNC_DEF("get_line_width", 0, &rd_pipeline_rasterization_state_class_get_line_width),
	JS_CFUNC_DEF("set_patch_control_points", 1, &rd_pipeline_rasterization_state_class_set_patch_control_points),
	JS_CFUNC_DEF("get_patch_control_points", 0, &rd_pipeline_rasterization_state_class_get_patch_control_points),
};

static int js_rd_pipeline_rasterization_state_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RDPipelineRasterizationState::__class_id);
	classes["RDPipelineRasterizationState"] = RDPipelineRasterizationState::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RDPipelineRasterizationState::__class_id, &rd_pipeline_rasterization_state_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDPipelineRasterizationState::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_pipeline_rasterization_state_class_proto_funcs, _countof(rd_pipeline_rasterization_state_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rd_pipeline_rasterization_state_class_constructor, "RDPipelineRasterizationState", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RDPipelineRasterizationState", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_pipeline_rasterization_state_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_pipeline_rasterization_state_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDPipelineRasterizationState");
	return m;
}

JSModuleDef *js_init_rd_pipeline_rasterization_state_module(JSContext *ctx) {
	return _js_init_rd_pipeline_rasterization_state_module(ctx, "godot/classes/rd_pipeline_rasterization_state");
}

void register_rd_pipeline_rasterization_state() {
	js_init_rd_pipeline_rasterization_state_module(ctx);
}