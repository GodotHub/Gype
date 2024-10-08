
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rd_pipeline_specialization_constant.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void rd_pipeline_specialization_constant_class_finalizer(JSRuntime *rt, JSValue val) {
	RDPipelineSpecializationConstant *rd_pipeline_specialization_constant = static_cast<RDPipelineSpecializationConstant *>(JS_GetOpaque(val, RDPipelineSpecializationConstant::__class_id));
	if (rd_pipeline_specialization_constant)
		RDPipelineSpecializationConstant::free(nullptr, rd_pipeline_specialization_constant);
}

static JSClassDef rd_pipeline_specialization_constant_class_def = {
	"RDPipelineSpecializationConstant",
	.finalizer = rd_pipeline_specialization_constant_class_finalizer
};

static JSValue rd_pipeline_specialization_constant_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RDPipelineSpecializationConstant *rd_pipeline_specialization_constant_class;
	JSValue obj = JS_NewObjectClass(ctx, RDPipelineSpecializationConstant::__class_id);
	if (JS_IsException(obj))
		return obj;
	rd_pipeline_specialization_constant_class = memnew(RDPipelineSpecializationConstant);
	if (!rd_pipeline_specialization_constant_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rd_pipeline_specialization_constant_class);
	return obj;
}
static JSValue rd_pipeline_specialization_constant_class_set_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDPipelineSpecializationConstant::set_value, RDPipelineSpecializationConstant::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_specialization_constant_class_get_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineSpecializationConstant::get_value, RDPipelineSpecializationConstant::__class_id, ctx, this_val, argv);
};
static JSValue rd_pipeline_specialization_constant_class_set_constant_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDPipelineSpecializationConstant::set_constant_id, RDPipelineSpecializationConstant::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_pipeline_specialization_constant_class_get_constant_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDPipelineSpecializationConstant::get_constant_id, RDPipelineSpecializationConstant::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry rd_pipeline_specialization_constant_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_value", 1, &rd_pipeline_specialization_constant_class_set_value),
	JS_CFUNC_DEF("get_value", 0, &rd_pipeline_specialization_constant_class_get_value),
	JS_CFUNC_DEF("set_constant_id", 1, &rd_pipeline_specialization_constant_class_set_constant_id),
	JS_CFUNC_DEF("get_constant_id", 0, &rd_pipeline_specialization_constant_class_get_constant_id),
};

static int js_rd_pipeline_specialization_constant_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RDPipelineSpecializationConstant::__class_id);
	classes["RDPipelineSpecializationConstant"] = RDPipelineSpecializationConstant::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RDPipelineSpecializationConstant::__class_id, &rd_pipeline_specialization_constant_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDPipelineSpecializationConstant::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_pipeline_specialization_constant_class_proto_funcs, _countof(rd_pipeline_specialization_constant_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rd_pipeline_specialization_constant_class_constructor, "RDPipelineSpecializationConstant", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RDPipelineSpecializationConstant", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_pipeline_specialization_constant_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_pipeline_specialization_constant_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDPipelineSpecializationConstant");
	return m;
}

JSModuleDef *js_init_rd_pipeline_specialization_constant_module(JSContext *ctx) {
	return _js_init_rd_pipeline_specialization_constant_module(ctx, "godot/classes/rd_pipeline_specialization_constant");
}

void register_rd_pipeline_specialization_constant() {
	js_init_rd_pipeline_specialization_constant_module(ctx);
}