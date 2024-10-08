
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/rd_shader_spirv.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void rd_shader_spirv_class_finalizer(JSRuntime *rt, JSValue val) {
	RDShaderSPIRV *rd_shader_spirv = static_cast<RDShaderSPIRV *>(JS_GetOpaque(val, RDShaderSPIRV::__class_id));
	if (rd_shader_spirv)
		RDShaderSPIRV::free(nullptr, rd_shader_spirv);
}

static JSClassDef rd_shader_spirv_class_def = {
	"RDShaderSPIRV",
	.finalizer = rd_shader_spirv_class_finalizer
};

static JSValue rd_shader_spirv_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RDShaderSPIRV *rd_shader_spirv_class;
	JSValue obj = JS_NewObjectClass(ctx, RDShaderSPIRV::__class_id);
	if (JS_IsException(obj))
		return obj;
	rd_shader_spirv_class = memnew(RDShaderSPIRV);
	if (!rd_shader_spirv_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rd_shader_spirv_class);
	return obj;
}
static JSValue rd_shader_spirv_class_set_stage_bytecode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDShaderSPIRV::set_stage_bytecode, RDShaderSPIRV::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_shader_spirv_class_get_stage_bytecode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDShaderSPIRV::get_stage_bytecode, RDShaderSPIRV::__class_id, ctx, this_val, argv);
};
static JSValue rd_shader_spirv_class_set_stage_compile_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RDShaderSPIRV::set_stage_compile_error, RDShaderSPIRV::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_shader_spirv_class_get_stage_compile_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDShaderSPIRV::get_stage_compile_error, RDShaderSPIRV::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry rd_shader_spirv_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_stage_bytecode", 2, &rd_shader_spirv_class_set_stage_bytecode),
	JS_CFUNC_DEF("get_stage_bytecode", 1, &rd_shader_spirv_class_get_stage_bytecode),
	JS_CFUNC_DEF("set_stage_compile_error", 2, &rd_shader_spirv_class_set_stage_compile_error),
	JS_CFUNC_DEF("get_stage_compile_error", 1, &rd_shader_spirv_class_get_stage_compile_error),
};

static int js_rd_shader_spirv_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RDShaderSPIRV::__class_id);
	classes["RDShaderSPIRV"] = RDShaderSPIRV::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RDShaderSPIRV::__class_id, &rd_shader_spirv_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDShaderSPIRV::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_shader_spirv_class_proto_funcs, _countof(rd_shader_spirv_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rd_shader_spirv_class_constructor, "RDShaderSPIRV", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RDShaderSPIRV", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_shader_spirv_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_shader_spirv_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDShaderSPIRV");
	return m;
}

JSModuleDef *js_init_rd_shader_spirv_module(JSContext *ctx) {
	return _js_init_rd_shader_spirv_module(ctx, "godot/classes/rd_shader_spirv");
}

void register_rd_shader_spirv() {
	js_init_rd_shader_spirv_module(ctx);
}