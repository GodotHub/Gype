
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/callable.hpp>

using namespace godot;

static void callable_class_finalizer(JSRuntime *rt, JSValue val) {
	Callable *callable = static_cast<Callable *>(JS_GetOpaque(val, Callable::__class_id));
	if (callable)
		memfree(callable);
}

static JSClassDef callable_class_def = {
	"Callable",
	.finalizer = callable_class_finalizer
};

static JSValue callable_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Callable *callable_class;
	JSValue obj = JS_NewObjectClass(ctx, Callable::__class_id);
	if (JS_IsException(obj))
		return obj;
	callable_class = memnew(Callable);
	if (!callable_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, callable_class);
	return obj;
}
static JSValue callable_class_call(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_no_fixed_vararg_method_ret(&Callable::js_call, ctx, this_val, argc, argv);
	
}
static JSValue callable_class_call_deferred(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_no_fixed_vararg_method_no_ret(&Callable::js_call_deferred, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
}
static JSValue callable_class_rpc(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_no_fixed_vararg_method_no_ret(&Callable::js_rpc, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
}
static JSValue callable_class_rpc_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_vararg_method_no_ret(&Callable::js_rpc_id, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
}
static JSValue callable_class_bind(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_no_fixed_vararg_method_ret(&Callable::js_bind, ctx, this_val, argc, argv);
	
}
static const JSCFunctionListEntry callable_class_proto_funcs[] = {
	JS_CFUNC_DEF("call", 0, &callable_class_call),
	JS_CFUNC_DEF("call_deferred", 0, &callable_class_call_deferred),
	JS_CFUNC_DEF("rpc", 0, &callable_class_rpc),
	JS_CFUNC_DEF("rpc_id", 1, &callable_class_rpc_id),
	JS_CFUNC_DEF("bind", 0, &callable_class_bind),
};

void define_callable_property(JSContext *ctx, JSValue obj) {
}

static int js_callable_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Callable::__class_id);
	classes["Callable"] = Callable::__class_id;
	class_id_list.insert(Callable::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Callable::__class_id, &callable_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Callable::__class_id, proto);
	define_callable_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, callable_class_proto_funcs, _countof(callable_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, callable_class_constructor, "Callable", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Callable", ctor);

	return 0;
}

JSModuleDef *_js_init_callable_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_callable_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Callable");
	return m;
}

JSModuleDef *js_init_callable_module(JSContext *ctx) {
	return _js_init_callable_module(ctx, "godot/classes/callable");
}

void register_callable() {
	Callable::__init_js_class_id();
	js_init_callable_module(ctx);
}