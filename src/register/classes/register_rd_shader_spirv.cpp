
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/rd_shader_spirv.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rd_shader_spirv_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef rd_shader_spirv_class_def = {
	"RDShaderSPIRV",
	.finalizer = rd_shader_spirv_class_finalizer
};

static JSValue rd_shader_spirv_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RDShaderSPIRV::__class_id);
	if (JS_IsException(obj))
		return obj;
	RDShaderSPIRV *rd_shader_spirv_class;
	if (argc == 1) {
		Variant vobj = *argv;
		rd_shader_spirv_class = static_cast<RDShaderSPIRV *>(static_cast<Object *>(vobj));
	} else {
		rd_shader_spirv_class = memnew(RDShaderSPIRV);
	}
	if (!rd_shader_spirv_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, rd_shader_spirv_class);	
	return obj;
}
static JSValue rd_shader_spirv_class_set_stage_bytecode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RDShaderSPIRV::set_stage_bytecode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rd_shader_spirv_class_get_stage_bytecode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDShaderSPIRV::get_stage_bytecode, ctx, this_val, argc, argv);
};
static JSValue rd_shader_spirv_class_set_stage_compile_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RDShaderSPIRV::set_stage_compile_error, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rd_shader_spirv_class_get_stage_compile_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDShaderSPIRV::get_stage_compile_error, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry rd_shader_spirv_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_stage_bytecode", 2, &rd_shader_spirv_class_set_stage_bytecode),
	JS_CFUNC_DEF("get_stage_bytecode", 1, &rd_shader_spirv_class_get_stage_bytecode),
	JS_CFUNC_DEF("set_stage_compile_error", 2, &rd_shader_spirv_class_set_stage_compile_error),
	JS_CFUNC_DEF("get_stage_compile_error", 1, &rd_shader_spirv_class_get_stage_compile_error),
};

void define_rd_shader_spirv_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "bytecode_vertex"),
        JS_NewCFunction(ctx, rd_shader_spirv_class_get_stage_bytecode, "get_stage_bytecode", 0),
        JS_NewCFunction(ctx, rd_shader_spirv_class_set_stage_bytecode, "set_stage_bytecode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "bytecode_fragment"),
        JS_NewCFunction(ctx, rd_shader_spirv_class_get_stage_bytecode, "get_stage_bytecode", 0),
        JS_NewCFunction(ctx, rd_shader_spirv_class_set_stage_bytecode, "set_stage_bytecode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "bytecode_tesselation_control"),
        JS_NewCFunction(ctx, rd_shader_spirv_class_get_stage_bytecode, "get_stage_bytecode", 0),
        JS_NewCFunction(ctx, rd_shader_spirv_class_set_stage_bytecode, "set_stage_bytecode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "bytecode_tesselation_evaluation"),
        JS_NewCFunction(ctx, rd_shader_spirv_class_get_stage_bytecode, "get_stage_bytecode", 0),
        JS_NewCFunction(ctx, rd_shader_spirv_class_set_stage_bytecode, "set_stage_bytecode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "bytecode_compute"),
        JS_NewCFunction(ctx, rd_shader_spirv_class_get_stage_bytecode, "get_stage_bytecode", 0),
        JS_NewCFunction(ctx, rd_shader_spirv_class_set_stage_bytecode, "set_stage_bytecode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "compile_error_vertex"),
        JS_NewCFunction(ctx, rd_shader_spirv_class_get_stage_compile_error, "get_stage_compile_error", 0),
        JS_NewCFunction(ctx, rd_shader_spirv_class_set_stage_compile_error, "set_stage_compile_error", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "compile_error_fragment"),
        JS_NewCFunction(ctx, rd_shader_spirv_class_get_stage_compile_error, "get_stage_compile_error", 0),
        JS_NewCFunction(ctx, rd_shader_spirv_class_set_stage_compile_error, "set_stage_compile_error", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "compile_error_tesselation_control"),
        JS_NewCFunction(ctx, rd_shader_spirv_class_get_stage_compile_error, "get_stage_compile_error", 0),
        JS_NewCFunction(ctx, rd_shader_spirv_class_set_stage_compile_error, "set_stage_compile_error", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "compile_error_tesselation_evaluation"),
        JS_NewCFunction(ctx, rd_shader_spirv_class_get_stage_compile_error, "get_stage_compile_error", 0),
        JS_NewCFunction(ctx, rd_shader_spirv_class_set_stage_compile_error, "set_stage_compile_error", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "compile_error_compute"),
        JS_NewCFunction(ctx, rd_shader_spirv_class_get_stage_compile_error, "get_stage_compile_error", 0),
        JS_NewCFunction(ctx, rd_shader_spirv_class_set_stage_compile_error, "set_stage_compile_error", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_rd_shader_spirv_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&RDShaderSPIRV::__class_id);
	classes["RDShaderSPIRV"] = RDShaderSPIRV::__class_id;
	class_id_list.insert(RDShaderSPIRV::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RDShaderSPIRV::__class_id, &rd_shader_spirv_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RDShaderSPIRV::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDShaderSPIRV::__class_id, proto);

	define_rd_shader_spirv_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_shader_spirv_class_proto_funcs, _countof(rd_shader_spirv_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, rd_shader_spirv_class_constructor, "RDShaderSPIRV", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RDShaderSPIRV", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_shader_spirv_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_shader_spirv_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDShaderSPIRV");
	return m;
}

JSModuleDef *js_init_rd_shader_spirv_module(JSContext *ctx) {
	return _js_init_rd_shader_spirv_module(ctx, "@godot/classes/rd_shader_spirv");
}

void register_rd_shader_spirv() {
	RDShaderSPIRV::__init_js_class_id();
	js_init_rd_shader_spirv_module(ctx);
}