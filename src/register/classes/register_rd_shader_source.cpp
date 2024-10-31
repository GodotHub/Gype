
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rd_shader_source.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rd_shader_source_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef rd_shader_source_class_def = {
	"RDShaderSource",
	.finalizer = rd_shader_source_class_finalizer
};

static JSValue rd_shader_source_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RDShaderSource::__class_id);
	if (JS_IsException(obj))
		return obj;

	RDShaderSource *rd_shader_source_class;
	if (argc == 1) 
		rd_shader_source_class = static_cast<RDShaderSource *>(Variant(*argv).operator Object *());
	else 
		rd_shader_source_class = memnew(RDShaderSource);
	if (!rd_shader_source_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, rd_shader_source_class);
	return obj;
}
static JSValue rd_shader_source_class_set_stage_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDShaderSource::set_stage_source, ctx, this_val, argc, argv);
};
static JSValue rd_shader_source_class_get_stage_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDShaderSource::get_stage_source, ctx, this_val, argc, argv);
};
static JSValue rd_shader_source_class_set_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDShaderSource::set_language, ctx, this_val, argc, argv);
};
static JSValue rd_shader_source_class_get_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDShaderSource::get_language, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry rd_shader_source_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_stage_source", 2, &rd_shader_source_class_set_stage_source),
	JS_CFUNC_DEF("get_stage_source", 1, &rd_shader_source_class_get_stage_source),
	JS_CFUNC_DEF("set_language", 1, &rd_shader_source_class_set_language),
	JS_CFUNC_DEF("get_language", 0, &rd_shader_source_class_get_language),
};

static void define_rd_shader_source_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "source_vertex"),
        JS_NewCFunction(ctx, rd_shader_source_class_get_stage_source, "get_stage_source", 0),
        JS_NewCFunction(ctx, rd_shader_source_class_set_stage_source, "set_stage_source", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "source_fragment"),
        JS_NewCFunction(ctx, rd_shader_source_class_get_stage_source, "get_stage_source", 0),
        JS_NewCFunction(ctx, rd_shader_source_class_set_stage_source, "set_stage_source", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "source_tesselation_control"),
        JS_NewCFunction(ctx, rd_shader_source_class_get_stage_source, "get_stage_source", 0),
        JS_NewCFunction(ctx, rd_shader_source_class_set_stage_source, "set_stage_source", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "source_tesselation_evaluation"),
        JS_NewCFunction(ctx, rd_shader_source_class_get_stage_source, "get_stage_source", 0),
        JS_NewCFunction(ctx, rd_shader_source_class_set_stage_source, "set_stage_source", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "source_compute"),
        JS_NewCFunction(ctx, rd_shader_source_class_get_stage_source, "get_stage_source", 0),
        JS_NewCFunction(ctx, rd_shader_source_class_set_stage_source, "set_stage_source", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "language"),
        JS_NewCFunction(ctx, rd_shader_source_class_get_language, "get_language", 0),
        JS_NewCFunction(ctx, rd_shader_source_class_set_language, "set_language", 1),
        JS_PROP_GETSET
    );
	
}

static void define_rd_shader_source_enum(JSContext *ctx, JSValue proto) {
}

static int js_rd_shader_source_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["RDShaderSource"] = RDShaderSource::__class_id;
	class_id_list.insert(RDShaderSource::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RDShaderSource::__class_id, &rd_shader_source_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RDShaderSource::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDShaderSource::__class_id, proto);

	define_rd_shader_source_property(ctx, proto);
	define_rd_shader_source_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_shader_source_class_proto_funcs, _countof(rd_shader_source_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, rd_shader_source_class_constructor, "RDShaderSource", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RDShaderSource", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_shader_source_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_shader_source_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDShaderSource");
	return m;
}

JSModuleDef *js_init_rd_shader_source_module(JSContext *ctx) {
	return _js_init_rd_shader_source_module(ctx, "@godot/classes/rd_shader_source");
}

void register_rd_shader_source() {
	RDShaderSource::__init_js_class_id();
	js_init_rd_shader_source_module(ctx);
}