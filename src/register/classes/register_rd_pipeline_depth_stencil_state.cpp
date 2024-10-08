
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/rd_pipeline_depth_stencil_state.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rd_pipeline_depth_stencil_state_class_finalizer(JSRuntime *rt, JSValue val) {
	RDPipelineDepthStencilState *rd_pipeline_depth_stencil_state = static_cast<RDPipelineDepthStencilState *>(JS_GetOpaque(val, RDPipelineDepthStencilState::__class_id));
	if (rd_pipeline_depth_stencil_state)
		RDPipelineDepthStencilState::free(nullptr, rd_pipeline_depth_stencil_state);
}

static JSClassDef rd_pipeline_depth_stencil_state_class_def = {
	"RDPipelineDepthStencilState",
	.finalizer = rd_pipeline_depth_stencil_state_class_finalizer
};

static JSValue rd_pipeline_depth_stencil_state_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RDPipelineDepthStencilState *rd_pipeline_depth_stencil_state_class;
	JSValue obj = JS_NewObjectClass(ctx, RDPipelineDepthStencilState::__class_id);
	if (JS_IsException(obj))
		return obj;
	rd_pipeline_depth_stencil_state_class = memnew(RDPipelineDepthStencilState);
	if (!rd_pipeline_depth_stencil_state_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rd_pipeline_depth_stencil_state_class);
	return obj;
}
static JSValue rd_pipeline_depth_stencil_state_class_set_enable_depth_test(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_enable_depth_test, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_enable_depth_test(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_enable_depth_test, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_enable_depth_write(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_enable_depth_write, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_enable_depth_write(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_enable_depth_write, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_depth_compare_operator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_depth_compare_operator, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_depth_compare_operator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_depth_compare_operator, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_enable_depth_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_enable_depth_range, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_enable_depth_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_enable_depth_range, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_depth_range_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_depth_range_min, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_depth_range_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_depth_range_min, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_depth_range_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_depth_range_max, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_depth_range_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_depth_range_max, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_enable_stencil(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_enable_stencil, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_enable_stencil(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_enable_stencil, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_front_op_fail(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_front_op_fail, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_front_op_fail(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_front_op_fail, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_front_op_pass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_front_op_pass, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_front_op_pass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_front_op_pass, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_front_op_depth_fail(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_front_op_depth_fail, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_front_op_depth_fail(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_front_op_depth_fail, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_front_op_compare(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_front_op_compare, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_front_op_compare(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_front_op_compare, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_front_op_compare_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_front_op_compare_mask, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_front_op_compare_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_front_op_compare_mask, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_front_op_write_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_front_op_write_mask, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_front_op_write_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_front_op_write_mask, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_front_op_reference(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_front_op_reference, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_front_op_reference(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_front_op_reference, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_back_op_fail(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_back_op_fail, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_back_op_fail(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_back_op_fail, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_back_op_pass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_back_op_pass, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_back_op_pass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_back_op_pass, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_back_op_depth_fail(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_back_op_depth_fail, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_back_op_depth_fail(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_back_op_depth_fail, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_back_op_compare(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_back_op_compare, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_back_op_compare(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_back_op_compare, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_back_op_compare_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_back_op_compare_mask, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_back_op_compare_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_back_op_compare_mask, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_back_op_write_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_back_op_write_mask, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_back_op_write_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_back_op_write_mask, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_depth_stencil_state_class_set_back_op_reference(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineDepthStencilState::set_back_op_reference, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_depth_stencil_state_class_get_back_op_reference(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineDepthStencilState::get_back_op_reference, RDPipelineDepthStencilState::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry rd_pipeline_depth_stencil_state_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_enable_depth_test", 1, &rd_pipeline_depth_stencil_state_class_set_enable_depth_test),
	JS_CFUNC_DEF("get_enable_depth_test", 0, &rd_pipeline_depth_stencil_state_class_get_enable_depth_test),
	JS_CFUNC_DEF("set_enable_depth_write", 1, &rd_pipeline_depth_stencil_state_class_set_enable_depth_write),
	JS_CFUNC_DEF("get_enable_depth_write", 0, &rd_pipeline_depth_stencil_state_class_get_enable_depth_write),
	JS_CFUNC_DEF("set_depth_compare_operator", 1, &rd_pipeline_depth_stencil_state_class_set_depth_compare_operator),
	JS_CFUNC_DEF("get_depth_compare_operator", 0, &rd_pipeline_depth_stencil_state_class_get_depth_compare_operator),
	JS_CFUNC_DEF("set_enable_depth_range", 1, &rd_pipeline_depth_stencil_state_class_set_enable_depth_range),
	JS_CFUNC_DEF("get_enable_depth_range", 0, &rd_pipeline_depth_stencil_state_class_get_enable_depth_range),
	JS_CFUNC_DEF("set_depth_range_min", 1, &rd_pipeline_depth_stencil_state_class_set_depth_range_min),
	JS_CFUNC_DEF("get_depth_range_min", 0, &rd_pipeline_depth_stencil_state_class_get_depth_range_min),
	JS_CFUNC_DEF("set_depth_range_max", 1, &rd_pipeline_depth_stencil_state_class_set_depth_range_max),
	JS_CFUNC_DEF("get_depth_range_max", 0, &rd_pipeline_depth_stencil_state_class_get_depth_range_max),
	JS_CFUNC_DEF("set_enable_stencil", 1, &rd_pipeline_depth_stencil_state_class_set_enable_stencil),
	JS_CFUNC_DEF("get_enable_stencil", 0, &rd_pipeline_depth_stencil_state_class_get_enable_stencil),
	JS_CFUNC_DEF("set_front_op_fail", 1, &rd_pipeline_depth_stencil_state_class_set_front_op_fail),
	JS_CFUNC_DEF("get_front_op_fail", 0, &rd_pipeline_depth_stencil_state_class_get_front_op_fail),
	JS_CFUNC_DEF("set_front_op_pass", 1, &rd_pipeline_depth_stencil_state_class_set_front_op_pass),
	JS_CFUNC_DEF("get_front_op_pass", 0, &rd_pipeline_depth_stencil_state_class_get_front_op_pass),
	JS_CFUNC_DEF("set_front_op_depth_fail", 1, &rd_pipeline_depth_stencil_state_class_set_front_op_depth_fail),
	JS_CFUNC_DEF("get_front_op_depth_fail", 0, &rd_pipeline_depth_stencil_state_class_get_front_op_depth_fail),
	JS_CFUNC_DEF("set_front_op_compare", 1, &rd_pipeline_depth_stencil_state_class_set_front_op_compare),
	JS_CFUNC_DEF("get_front_op_compare", 0, &rd_pipeline_depth_stencil_state_class_get_front_op_compare),
	JS_CFUNC_DEF("set_front_op_compare_mask", 1, &rd_pipeline_depth_stencil_state_class_set_front_op_compare_mask),
	JS_CFUNC_DEF("get_front_op_compare_mask", 0, &rd_pipeline_depth_stencil_state_class_get_front_op_compare_mask),
	JS_CFUNC_DEF("set_front_op_write_mask", 1, &rd_pipeline_depth_stencil_state_class_set_front_op_write_mask),
	JS_CFUNC_DEF("get_front_op_write_mask", 0, &rd_pipeline_depth_stencil_state_class_get_front_op_write_mask),
	JS_CFUNC_DEF("set_front_op_reference", 1, &rd_pipeline_depth_stencil_state_class_set_front_op_reference),
	JS_CFUNC_DEF("get_front_op_reference", 0, &rd_pipeline_depth_stencil_state_class_get_front_op_reference),
	JS_CFUNC_DEF("set_back_op_fail", 1, &rd_pipeline_depth_stencil_state_class_set_back_op_fail),
	JS_CFUNC_DEF("get_back_op_fail", 0, &rd_pipeline_depth_stencil_state_class_get_back_op_fail),
	JS_CFUNC_DEF("set_back_op_pass", 1, &rd_pipeline_depth_stencil_state_class_set_back_op_pass),
	JS_CFUNC_DEF("get_back_op_pass", 0, &rd_pipeline_depth_stencil_state_class_get_back_op_pass),
	JS_CFUNC_DEF("set_back_op_depth_fail", 1, &rd_pipeline_depth_stencil_state_class_set_back_op_depth_fail),
	JS_CFUNC_DEF("get_back_op_depth_fail", 0, &rd_pipeline_depth_stencil_state_class_get_back_op_depth_fail),
	JS_CFUNC_DEF("set_back_op_compare", 1, &rd_pipeline_depth_stencil_state_class_set_back_op_compare),
	JS_CFUNC_DEF("get_back_op_compare", 0, &rd_pipeline_depth_stencil_state_class_get_back_op_compare),
	JS_CFUNC_DEF("set_back_op_compare_mask", 1, &rd_pipeline_depth_stencil_state_class_set_back_op_compare_mask),
	JS_CFUNC_DEF("get_back_op_compare_mask", 0, &rd_pipeline_depth_stencil_state_class_get_back_op_compare_mask),
	JS_CFUNC_DEF("set_back_op_write_mask", 1, &rd_pipeline_depth_stencil_state_class_set_back_op_write_mask),
	JS_CFUNC_DEF("get_back_op_write_mask", 0, &rd_pipeline_depth_stencil_state_class_get_back_op_write_mask),
	JS_CFUNC_DEF("set_back_op_reference", 1, &rd_pipeline_depth_stencil_state_class_set_back_op_reference),
	JS_CFUNC_DEF("get_back_op_reference", 0, &rd_pipeline_depth_stencil_state_class_get_back_op_reference),
};

static int js_rd_pipeline_depth_stencil_state_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RDPipelineDepthStencilState::__class_id);
	classes["RDPipelineDepthStencilState"] = RDPipelineDepthStencilState::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RDPipelineDepthStencilState::__class_id, &rd_pipeline_depth_stencil_state_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDPipelineDepthStencilState::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_pipeline_depth_stencil_state_class_proto_funcs, _countof(rd_pipeline_depth_stencil_state_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rd_pipeline_depth_stencil_state_class_constructor, "RDPipelineDepthStencilState", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RDPipelineDepthStencilState", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_pipeline_depth_stencil_state_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_pipeline_depth_stencil_state_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDPipelineDepthStencilState");
	return m;
}

JSModuleDef *js_init_rd_pipeline_depth_stencil_state_module(JSContext *ctx) {
	return _js_init_rd_pipeline_depth_stencil_state_module(ctx, "godot/classes/rd_pipeline_depth_stencil_state");
}

void register_rd_pipeline_depth_stencil_state() {
	js_init_rd_pipeline_depth_stencil_state_module(ctx);
}