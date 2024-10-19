
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/thread.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void thread_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef thread_class_def = {
	"Thread",
	.finalizer = thread_class_finalizer
};

static JSValue thread_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Thread::__class_id);
	if (JS_IsException(obj))
		return obj;
	Thread *thread_class = memnew(Thread);
	if (!thread_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, thread_class);	
	return obj;
}
static JSValue thread_class_start(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Thread::start, ctx, this_val, argc, argv);
};
static JSValue thread_class_get_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Thread::get_id, ctx, this_val, argc, argv);
};
static JSValue thread_class_is_started(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Thread::is_started, ctx, this_val, argc, argv);
};
static JSValue thread_class_is_alive(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Thread::is_alive, ctx, this_val, argc, argv);
};
static JSValue thread_class_wait_to_finish(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Thread::wait_to_finish, ctx, this_val, argc, argv);
};
static JSValue thread_class_set_thread_safety_checks_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_static_method_no_ret(&Thread::set_thread_safety_checks_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry thread_class_proto_funcs[] = {
	JS_CFUNC_DEF("start", 2, &thread_class_start),
	JS_CFUNC_DEF("get_id", 0, &thread_class_get_id),
	JS_CFUNC_DEF("is_started", 0, &thread_class_is_started),
	JS_CFUNC_DEF("is_alive", 0, &thread_class_is_alive),
	JS_CFUNC_DEF("wait_to_finish", 0, &thread_class_wait_to_finish),
};
static const JSCFunctionListEntry thread_class_static_funcs[] = {
	JS_CFUNC_DEF("set_thread_safety_checks_enabled", 1, &thread_class_set_thread_safety_checks_enabled),
};

void define_thread_property(JSContext *ctx, JSValue obj) {
}

static int js_thread_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Thread::__class_id);
	classes["Thread"] = Thread::__class_id;
	class_id_list.insert(Thread::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Thread::__class_id, &thread_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Thread::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Thread::__class_id, proto);

	define_thread_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, thread_class_proto_funcs, _countof(thread_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, thread_class_constructor, "Thread", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, thread_class_static_funcs, _countof(thread_class_static_funcs));
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Thread", ctor);

	return 0;
}

JSModuleDef *_js_init_thread_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_thread_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Thread");
	return m;
}

JSModuleDef *js_init_thread_module(JSContext *ctx) {
	return _js_init_thread_module(ctx, "godot/classes/thread");
}

void register_thread() {
	Thread::__init_js_class_id();
	js_init_thread_module(ctx);
}