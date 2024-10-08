
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/rd_pipeline_multisample_state.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rd_pipeline_multisample_state_class_finalizer(JSRuntime *rt, JSValue val) {
	RDPipelineMultisampleState *rd_pipeline_multisample_state = static_cast<RDPipelineMultisampleState *>(JS_GetOpaque(val, RDPipelineMultisampleState::__class_id));
	if (rd_pipeline_multisample_state)
		RDPipelineMultisampleState::free(nullptr, rd_pipeline_multisample_state);
}

static JSClassDef rd_pipeline_multisample_state_class_def = {
	"RDPipelineMultisampleState",
	.finalizer = rd_pipeline_multisample_state_class_finalizer
};

static JSValue rd_pipeline_multisample_state_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RDPipelineMultisampleState *rd_pipeline_multisample_state_class;
	JSValue obj = JS_NewObjectClass(ctx, RDPipelineMultisampleState::__class_id);
	if (JS_IsException(obj))
		return obj;
	rd_pipeline_multisample_state_class = memnew(RDPipelineMultisampleState);
	if (!rd_pipeline_multisample_state_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rd_pipeline_multisample_state_class);
	return obj;
}
static JSValue rd_pipeline_multisample_state_class_set_sample_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineMultisampleState::set_sample_count, RDPipelineMultisampleState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_multisample_state_class_get_sample_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineMultisampleState::get_sample_count, RDPipelineMultisampleState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_multisample_state_class_set_enable_sample_shading(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineMultisampleState::set_enable_sample_shading, RDPipelineMultisampleState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_multisample_state_class_get_enable_sample_shading(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineMultisampleState::get_enable_sample_shading, RDPipelineMultisampleState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_multisample_state_class_set_min_sample_shading(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineMultisampleState::set_min_sample_shading, RDPipelineMultisampleState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_multisample_state_class_get_min_sample_shading(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineMultisampleState::get_min_sample_shading, RDPipelineMultisampleState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_multisample_state_class_set_enable_alpha_to_coverage(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineMultisampleState::set_enable_alpha_to_coverage, RDPipelineMultisampleState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_multisample_state_class_get_enable_alpha_to_coverage(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineMultisampleState::get_enable_alpha_to_coverage, RDPipelineMultisampleState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_multisample_state_class_set_enable_alpha_to_one(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineMultisampleState::set_enable_alpha_to_one, RDPipelineMultisampleState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_multisample_state_class_get_enable_alpha_to_one(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineMultisampleState::get_enable_alpha_to_one, RDPipelineMultisampleState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_multisample_state_class_set_sample_masks(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineMultisampleState::set_sample_masks, RDPipelineMultisampleState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_multisample_state_class_get_sample_masks(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineMultisampleState::get_sample_masks, RDPipelineMultisampleState::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry rd_pipeline_multisample_state_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_sample_count", 1, &rd_pipeline_multisample_state_class_set_sample_count),
	JS_CFUNC_DEF("get_sample_count", 0, &rd_pipeline_multisample_state_class_get_sample_count),
	JS_CFUNC_DEF("set_enable_sample_shading", 1, &rd_pipeline_multisample_state_class_set_enable_sample_shading),
	JS_CFUNC_DEF("get_enable_sample_shading", 0, &rd_pipeline_multisample_state_class_get_enable_sample_shading),
	JS_CFUNC_DEF("set_min_sample_shading", 1, &rd_pipeline_multisample_state_class_set_min_sample_shading),
	JS_CFUNC_DEF("get_min_sample_shading", 0, &rd_pipeline_multisample_state_class_get_min_sample_shading),
	JS_CFUNC_DEF("set_enable_alpha_to_coverage", 1, &rd_pipeline_multisample_state_class_set_enable_alpha_to_coverage),
	JS_CFUNC_DEF("get_enable_alpha_to_coverage", 0, &rd_pipeline_multisample_state_class_get_enable_alpha_to_coverage),
	JS_CFUNC_DEF("set_enable_alpha_to_one", 1, &rd_pipeline_multisample_state_class_set_enable_alpha_to_one),
	JS_CFUNC_DEF("get_enable_alpha_to_one", 0, &rd_pipeline_multisample_state_class_get_enable_alpha_to_one),
	JS_CFUNC_DEF("set_sample_masks", 1, &rd_pipeline_multisample_state_class_set_sample_masks),
	JS_CFUNC_DEF("get_sample_masks", 0, &rd_pipeline_multisample_state_class_get_sample_masks),
};

static int js_rd_pipeline_multisample_state_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RDPipelineMultisampleState::__class_id);
	classes["RDPipelineMultisampleState"] = RDPipelineMultisampleState::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RDPipelineMultisampleState::__class_id, &rd_pipeline_multisample_state_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDPipelineMultisampleState::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_pipeline_multisample_state_class_proto_funcs, _countof(rd_pipeline_multisample_state_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rd_pipeline_multisample_state_class_constructor, "RDPipelineMultisampleState", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RDPipelineMultisampleState", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_pipeline_multisample_state_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_pipeline_multisample_state_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDPipelineMultisampleState");
	return m;
}

JSModuleDef *js_init_rd_pipeline_multisample_state_module(JSContext *ctx) {
	return _js_init_rd_pipeline_multisample_state_module(ctx, "godot/classes/rd_pipeline_multisample_state");
}

void register_rd_pipeline_multisample_state() {
	js_init_rd_pipeline_multisample_state_module(ctx);
}