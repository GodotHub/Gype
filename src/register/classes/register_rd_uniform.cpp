
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rd_uniform.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rd_uniform_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef rd_uniform_class_def = {
	"RDUniform",
	.finalizer = rd_uniform_class_finalizer
};

static JSValue rd_uniform_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RDUniform::__class_id);
	if (JS_IsException(obj))
		return obj;

	RDUniform *rd_uniform_class;
	if (argc == 1) 
		rd_uniform_class = static_cast<RDUniform *>(Variant(*argv).operator Object *());
	else 
		rd_uniform_class = memnew(RDUniform);
	if (!rd_uniform_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, rd_uniform_class);
	return obj;
}
static JSValue rd_uniform_class_set_uniform_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDUniform::set_uniform_type, ctx, this_val, argc, argv);
};
static JSValue rd_uniform_class_get_uniform_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDUniform::get_uniform_type, ctx, this_val, argc, argv);
};
static JSValue rd_uniform_class_set_binding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDUniform::set_binding, ctx, this_val, argc, argv);
};
static JSValue rd_uniform_class_get_binding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDUniform::get_binding, ctx, this_val, argc, argv);
};
static JSValue rd_uniform_class_add_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDUniform::add_id, ctx, this_val, argc, argv);
};
static JSValue rd_uniform_class_clear_ids(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDUniform::clear_ids, ctx, this_val, argc, argv);
};
static JSValue rd_uniform_class_get_ids(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDUniform::get_ids, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry rd_uniform_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_uniform_type", 1, &rd_uniform_class_set_uniform_type),
	JS_CFUNC_DEF("get_uniform_type", 0, &rd_uniform_class_get_uniform_type),
	JS_CFUNC_DEF("set_binding", 1, &rd_uniform_class_set_binding),
	JS_CFUNC_DEF("get_binding", 0, &rd_uniform_class_get_binding),
	JS_CFUNC_DEF("add_id", 1, &rd_uniform_class_add_id),
	JS_CFUNC_DEF("clear_ids", 0, &rd_uniform_class_clear_ids),
	JS_CFUNC_DEF("get_ids", 0, &rd_uniform_class_get_ids),
};

static void define_rd_uniform_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "uniform_type"),
        JS_NewCFunction(ctx, rd_uniform_class_get_uniform_type, "get_uniform_type", 0),
        JS_NewCFunction(ctx, rd_uniform_class_set_uniform_type, "set_uniform_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "binding"),
        JS_NewCFunction(ctx, rd_uniform_class_get_binding, "get_binding", 0),
        JS_NewCFunction(ctx, rd_uniform_class_set_binding, "set_binding", 1),
        JS_PROP_GETSET
    );
	
}

static void define_rd_uniform_enum(JSContext *ctx, JSValue proto) {
}

static int js_rd_uniform_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["RDUniform"] = RDUniform::__class_id;
	class_id_list.insert(RDUniform::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RDUniform::__class_id, &rd_uniform_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RDUniform::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDUniform::__class_id, proto);

	define_rd_uniform_property(ctx, proto);
	define_rd_uniform_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_uniform_class_proto_funcs, _countof(rd_uniform_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, rd_uniform_class_constructor, "RDUniform", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RDUniform", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_uniform_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_uniform_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDUniform");
	return m;
}

JSModuleDef *js_init_rd_uniform_module(JSContext *ctx) {
	return _js_init_rd_uniform_module(ctx, "@godot/classes/rd_uniform");
}

void register_rd_uniform() {
	RDUniform::__init_js_class_id();
	js_init_rd_uniform_module(ctx);
}