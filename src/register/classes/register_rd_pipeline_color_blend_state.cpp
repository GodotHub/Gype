
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rd_pipeline_color_blend_state.hpp>
#include <godot_cpp/classes/rd_pipeline_color_blend_state_attachment.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void rd_pipeline_color_blend_state_class_finalizer(JSRuntime *rt, JSValue val) {
	RDPipelineColorBlendState *rd_pipeline_color_blend_state = static_cast<RDPipelineColorBlendState *>(JS_GetOpaque(val, RDPipelineColorBlendState::__class_id));
	if (rd_pipeline_color_blend_state)
		RDPipelineColorBlendState::free(nullptr, rd_pipeline_color_blend_state);
}

static JSClassDef rd_pipeline_color_blend_state_class_def = {
	"RDPipelineColorBlendState",
	.finalizer = rd_pipeline_color_blend_state_class_finalizer
};

static JSValue rd_pipeline_color_blend_state_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RDPipelineColorBlendState *rd_pipeline_color_blend_state_class;
	JSValue obj = JS_NewObjectClass(ctx, RDPipelineColorBlendState::__class_id);
	if (JS_IsException(obj))
		return obj;
	rd_pipeline_color_blend_state_class = memnew(RDPipelineColorBlendState);
	if (!rd_pipeline_color_blend_state_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rd_pipeline_color_blend_state_class);
	return obj;
}
static JSValue rd_pipeline_color_blend_state_class_set_enable_logic_op(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDPipelineColorBlendState::set_enable_logic_op, RDPipelineColorBlendState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_color_blend_state_class_get_enable_logic_op(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineColorBlendState::get_enable_logic_op, RDPipelineColorBlendState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_color_blend_state_class_set_logic_op(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDPipelineColorBlendState::set_logic_op, RDPipelineColorBlendState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_color_blend_state_class_get_logic_op(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineColorBlendState::get_logic_op, RDPipelineColorBlendState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_color_blend_state_class_set_blend_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDPipelineColorBlendState::set_blend_constant, RDPipelineColorBlendState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_color_blend_state_class_get_blend_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineColorBlendState::get_blend_constant, RDPipelineColorBlendState::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_color_blend_state_class_set_attachments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDPipelineColorBlendState::set_attachments, RDPipelineColorBlendState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_color_blend_state_class_get_attachments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineColorBlendState::get_attachments, RDPipelineColorBlendState::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry rd_pipeline_color_blend_state_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_enable_logic_op", 1, &rd_pipeline_color_blend_state_class_set_enable_logic_op),
	JS_CFUNC_DEF("get_enable_logic_op", 0, &rd_pipeline_color_blend_state_class_get_enable_logic_op),
	JS_CFUNC_DEF("set_logic_op", 1, &rd_pipeline_color_blend_state_class_set_logic_op),
	JS_CFUNC_DEF("get_logic_op", 0, &rd_pipeline_color_blend_state_class_get_logic_op),
	JS_CFUNC_DEF("set_blend_constant", 1, &rd_pipeline_color_blend_state_class_set_blend_constant),
	JS_CFUNC_DEF("get_blend_constant", 0, &rd_pipeline_color_blend_state_class_get_blend_constant),
	JS_CFUNC_DEF("set_attachments", 1, &rd_pipeline_color_blend_state_class_set_attachments),
	JS_CFUNC_DEF("get_attachments", 0, &rd_pipeline_color_blend_state_class_get_attachments),
};

static int js_rd_pipeline_color_blend_state_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RDPipelineColorBlendState::__class_id);
	classes["RDPipelineColorBlendState"] = RDPipelineColorBlendState::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RDPipelineColorBlendState::__class_id, &rd_pipeline_color_blend_state_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDPipelineColorBlendState::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_pipeline_color_blend_state_class_proto_funcs, _countof(rd_pipeline_color_blend_state_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rd_pipeline_color_blend_state_class_constructor, "RDPipelineColorBlendState", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RDPipelineColorBlendState", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_pipeline_color_blend_state_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_pipeline_color_blend_state_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDPipelineColorBlendState");
	return m;
}

JSModuleDef *js_init_rd_pipeline_color_blend_state_module(JSContext *ctx) {
	return _js_init_rd_pipeline_color_blend_state_module(ctx, "godot/classes/rd_pipeline_color_blend_state");
}

void register_rd_pipeline_color_blend_state() {
	js_init_rd_pipeline_color_blend_state_module(ctx);
}