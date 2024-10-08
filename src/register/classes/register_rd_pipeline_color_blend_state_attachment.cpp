
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/rd_pipeline_color_blend_state_attachment.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rd_pipeline_color_blend_state_attachment_class_finalizer(JSRuntime *rt, JSValue val) {
	RDPipelineColorBlendStateAttachment *rd_pipeline_color_blend_state_attachment = static_cast<RDPipelineColorBlendStateAttachment *>(JS_GetOpaque(val, RDPipelineColorBlendStateAttachment::__class_id));
	if (rd_pipeline_color_blend_state_attachment)
		RDPipelineColorBlendStateAttachment::free(nullptr, rd_pipeline_color_blend_state_attachment);
}

static JSClassDef rd_pipeline_color_blend_state_attachment_class_def = {
	"RDPipelineColorBlendStateAttachment",
	.finalizer = rd_pipeline_color_blend_state_attachment_class_finalizer
};

static JSValue rd_pipeline_color_blend_state_attachment_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RDPipelineColorBlendStateAttachment *rd_pipeline_color_blend_state_attachment_class;
	JSValue obj = JS_NewObjectClass(ctx, RDPipelineColorBlendStateAttachment::__class_id);
	if (JS_IsException(obj))
		return obj;
	rd_pipeline_color_blend_state_attachment_class = memnew(RDPipelineColorBlendStateAttachment);
	if (!rd_pipeline_color_blend_state_attachment_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rd_pipeline_color_blend_state_attachment_class);
	return obj;
}
static JSValue rd_pipeline_color_blend_state_attachment_class_set_as_mix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineColorBlendStateAttachment::set_as_mix, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_color_blend_state_attachment_class_set_enable_blend(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineColorBlendStateAttachment::set_enable_blend, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_color_blend_state_attachment_class_get_enable_blend(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineColorBlendStateAttachment::get_enable_blend, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_color_blend_state_attachment_class_set_src_color_blend_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineColorBlendStateAttachment::set_src_color_blend_factor, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_color_blend_state_attachment_class_get_src_color_blend_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineColorBlendStateAttachment::get_src_color_blend_factor, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_color_blend_state_attachment_class_set_dst_color_blend_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineColorBlendStateAttachment::set_dst_color_blend_factor, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_color_blend_state_attachment_class_get_dst_color_blend_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineColorBlendStateAttachment::get_dst_color_blend_factor, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_color_blend_state_attachment_class_set_color_blend_op(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineColorBlendStateAttachment::set_color_blend_op, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_color_blend_state_attachment_class_get_color_blend_op(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineColorBlendStateAttachment::get_color_blend_op, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_color_blend_state_attachment_class_set_src_alpha_blend_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineColorBlendStateAttachment::set_src_alpha_blend_factor, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_color_blend_state_attachment_class_get_src_alpha_blend_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineColorBlendStateAttachment::get_src_alpha_blend_factor, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_color_blend_state_attachment_class_set_dst_alpha_blend_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineColorBlendStateAttachment::set_dst_alpha_blend_factor, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_color_blend_state_attachment_class_get_dst_alpha_blend_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineColorBlendStateAttachment::get_dst_alpha_blend_factor, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_color_blend_state_attachment_class_set_alpha_blend_op(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineColorBlendStateAttachment::set_alpha_blend_op, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_color_blend_state_attachment_class_get_alpha_blend_op(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineColorBlendStateAttachment::get_alpha_blend_op, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_color_blend_state_attachment_class_set_write_r(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineColorBlendStateAttachment::set_write_r, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_color_blend_state_attachment_class_get_write_r(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineColorBlendStateAttachment::get_write_r, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_color_blend_state_attachment_class_set_write_g(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineColorBlendStateAttachment::set_write_g, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_color_blend_state_attachment_class_get_write_g(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineColorBlendStateAttachment::get_write_g, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_color_blend_state_attachment_class_set_write_b(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineColorBlendStateAttachment::set_write_b, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_color_blend_state_attachment_class_get_write_b(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineColorBlendStateAttachment::get_write_b, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_color_blend_state_attachment_class_set_write_a(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDPipelineColorBlendStateAttachment::set_write_a, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_color_blend_state_attachment_class_get_write_a(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineColorBlendStateAttachment::get_write_a, RDPipelineColorBlendStateAttachment::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry rd_pipeline_color_blend_state_attachment_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_as_mix", 0, &rd_pipeline_color_blend_state_attachment_class_set_as_mix),
	JS_CFUNC_DEF("set_enable_blend", 1, &rd_pipeline_color_blend_state_attachment_class_set_enable_blend),
	JS_CFUNC_DEF("get_enable_blend", 0, &rd_pipeline_color_blend_state_attachment_class_get_enable_blend),
	JS_CFUNC_DEF("set_src_color_blend_factor", 1, &rd_pipeline_color_blend_state_attachment_class_set_src_color_blend_factor),
	JS_CFUNC_DEF("get_src_color_blend_factor", 0, &rd_pipeline_color_blend_state_attachment_class_get_src_color_blend_factor),
	JS_CFUNC_DEF("set_dst_color_blend_factor", 1, &rd_pipeline_color_blend_state_attachment_class_set_dst_color_blend_factor),
	JS_CFUNC_DEF("get_dst_color_blend_factor", 0, &rd_pipeline_color_blend_state_attachment_class_get_dst_color_blend_factor),
	JS_CFUNC_DEF("set_color_blend_op", 1, &rd_pipeline_color_blend_state_attachment_class_set_color_blend_op),
	JS_CFUNC_DEF("get_color_blend_op", 0, &rd_pipeline_color_blend_state_attachment_class_get_color_blend_op),
	JS_CFUNC_DEF("set_src_alpha_blend_factor", 1, &rd_pipeline_color_blend_state_attachment_class_set_src_alpha_blend_factor),
	JS_CFUNC_DEF("get_src_alpha_blend_factor", 0, &rd_pipeline_color_blend_state_attachment_class_get_src_alpha_blend_factor),
	JS_CFUNC_DEF("set_dst_alpha_blend_factor", 1, &rd_pipeline_color_blend_state_attachment_class_set_dst_alpha_blend_factor),
	JS_CFUNC_DEF("get_dst_alpha_blend_factor", 0, &rd_pipeline_color_blend_state_attachment_class_get_dst_alpha_blend_factor),
	JS_CFUNC_DEF("set_alpha_blend_op", 1, &rd_pipeline_color_blend_state_attachment_class_set_alpha_blend_op),
	JS_CFUNC_DEF("get_alpha_blend_op", 0, &rd_pipeline_color_blend_state_attachment_class_get_alpha_blend_op),
	JS_CFUNC_DEF("set_write_r", 1, &rd_pipeline_color_blend_state_attachment_class_set_write_r),
	JS_CFUNC_DEF("get_write_r", 0, &rd_pipeline_color_blend_state_attachment_class_get_write_r),
	JS_CFUNC_DEF("set_write_g", 1, &rd_pipeline_color_blend_state_attachment_class_set_write_g),
	JS_CFUNC_DEF("get_write_g", 0, &rd_pipeline_color_blend_state_attachment_class_get_write_g),
	JS_CFUNC_DEF("set_write_b", 1, &rd_pipeline_color_blend_state_attachment_class_set_write_b),
	JS_CFUNC_DEF("get_write_b", 0, &rd_pipeline_color_blend_state_attachment_class_get_write_b),
	JS_CFUNC_DEF("set_write_a", 1, &rd_pipeline_color_blend_state_attachment_class_set_write_a),
	JS_CFUNC_DEF("get_write_a", 0, &rd_pipeline_color_blend_state_attachment_class_get_write_a),
};

static int js_rd_pipeline_color_blend_state_attachment_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RDPipelineColorBlendStateAttachment::__class_id);
	classes["RDPipelineColorBlendStateAttachment"] = RDPipelineColorBlendStateAttachment::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RDPipelineColorBlendStateAttachment::__class_id, &rd_pipeline_color_blend_state_attachment_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDPipelineColorBlendStateAttachment::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_pipeline_color_blend_state_attachment_class_proto_funcs, _countof(rd_pipeline_color_blend_state_attachment_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rd_pipeline_color_blend_state_attachment_class_constructor, "RDPipelineColorBlendStateAttachment", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RDPipelineColorBlendStateAttachment", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_pipeline_color_blend_state_attachment_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_pipeline_color_blend_state_attachment_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDPipelineColorBlendStateAttachment");
	return m;
}

JSModuleDef *js_init_rd_pipeline_color_blend_state_attachment_module(JSContext *ctx) {
	return _js_init_rd_pipeline_color_blend_state_attachment_module(ctx, "godot/classes/rd_pipeline_color_blend_state_attachment");
}

void register_rd_pipeline_color_blend_state_attachment() {
	js_init_rd_pipeline_color_blend_state_attachment_module(ctx);
}