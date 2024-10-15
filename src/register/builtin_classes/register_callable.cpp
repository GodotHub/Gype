
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "utils/func_utils.h"
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
static JSValue callable_class_callv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Callable::callv, ctx, this_val, argc, argv);
};
static JSValue callable_class_is_null(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Callable::is_null, ctx, this_val, argc, argv);
};
static JSValue callable_class_is_custom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Callable::is_custom, ctx, this_val, argc, argv);
};
static JSValue callable_class_is_standard(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Callable::is_standard, ctx, this_val, argc, argv);
};
static JSValue callable_class_is_valid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Callable::is_valid, ctx, this_val, argc, argv);
};
static JSValue callable_class_get_object(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Callable::get_object, ctx, this_val, argc, argv);
};
static JSValue callable_class_get_object_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Callable::get_object_id, ctx, this_val, argc, argv);
};
static JSValue callable_class_get_method(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Callable::get_method, ctx, this_val, argc, argv);
};
static JSValue callable_class_get_argument_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Callable::get_argument_count, ctx, this_val, argc, argv);
};
static JSValue callable_class_get_bound_arguments_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Callable::get_bound_arguments_count, ctx, this_val, argc, argv);
};
static JSValue callable_class_get_bound_arguments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Callable::get_bound_arguments, ctx, this_val, argc, argv);
};
static JSValue callable_class_hash(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Callable::hash, ctx, this_val, argc, argv);
};
static JSValue callable_class_bindv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Callable::bindv, ctx, this_val, argc, argv);
};
static JSValue callable_class_unbind(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Callable::unbind, ctx, this_val, argc, argv);
};
static JSValue callable_class_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Callable::create, ctx, this_val, argc, argv);
};

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
	JS_CFUNC_DEF("callv", 1, &callable_class_callv),
	JS_CFUNC_DEF("is_null", 0, &callable_class_is_null),
	JS_CFUNC_DEF("is_custom", 0, &callable_class_is_custom),
	JS_CFUNC_DEF("is_standard", 0, &callable_class_is_standard),
	JS_CFUNC_DEF("is_valid", 0, &callable_class_is_valid),
	JS_CFUNC_DEF("get_object", 0, &callable_class_get_object),
	JS_CFUNC_DEF("get_object_id", 0, &callable_class_get_object_id),
	JS_CFUNC_DEF("get_method", 0, &callable_class_get_method),
	JS_CFUNC_DEF("get_argument_count", 0, &callable_class_get_argument_count),
	JS_CFUNC_DEF("get_bound_arguments_count", 0, &callable_class_get_bound_arguments_count),
	JS_CFUNC_DEF("get_bound_arguments", 0, &callable_class_get_bound_arguments),
	JS_CFUNC_DEF("hash", 0, &callable_class_hash),
	JS_CFUNC_DEF("bindv", 1, &callable_class_bindv),
	JS_CFUNC_DEF("unbind", 1, &callable_class_unbind),
	JS_CFUNC_DEF("call", 0, &callable_class_call),
	JS_CFUNC_DEF("call_deferred", 0, &callable_class_call_deferred),
	JS_CFUNC_DEF("rpc", 0, &callable_class_rpc),
	JS_CFUNC_DEF("rpc_id", 1, &callable_class_rpc_id),
	JS_CFUNC_DEF("bind", 0, &callable_class_bind),
};
static const JSCFunctionListEntry callable_class_static_funcs[] = {
	JS_CFUNC_DEF("create", 2, &callable_class_create),
};

void define_callable_property(JSContext *ctx, JSValue obj) {
}

static int js_callable_class_init(JSContext *ctx) {
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
	JS_SetPropertyFunctionList(ctx, ctor, callable_class_static_funcs, _countof(callable_class_static_funcs));

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "Callable", ctor);

	return 0;
}

void js_init_callable_module(JSContext *ctx) {
	js_callable_class_init(ctx);
}

void register_callable() {
	Callable::__init_js_class_id();
	js_init_callable_module(ctx);
}