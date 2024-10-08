
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/thread.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void thread_class_finalizer(JSRuntime *rt, JSValue val) {
	Thread *thread = static_cast<Thread *>(JS_GetOpaque(val, Thread::__class_id));
	if (thread)
		Thread::free(nullptr, thread);
}

static JSClassDef thread_class_def = {
	"Thread",
	.finalizer = thread_class_finalizer
};

static JSValue thread_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Thread *thread_class;
	JSValue obj = JS_NewObjectClass(ctx, Thread::__class_id);
	if (JS_IsException(obj))
		return obj;
	thread_class = memnew(Thread);
	if (!thread_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, thread_class);
	return obj;
}
static JSValue thread_class_start(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Thread::start, Thread::__class_id, ctx, this_val, argv);
};
static JSValue thread_class_get_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Thread::get_id, Thread::__class_id, ctx, this_val, argv);
};
static JSValue thread_class_is_started(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Thread::is_started, Thread::__class_id, ctx, this_val, argv);
};
static JSValue thread_class_is_alive(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Thread::is_alive, Thread::__class_id, ctx, this_val, argv);
};
static JSValue thread_class_wait_to_finish(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Thread::wait_to_finish, Thread::__class_id, ctx, this_val, argv);
};
static JSValue thread_class_set_thread_safety_checks_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_static_method_no_ret(&Thread::set_thread_safety_checks_enabled, Thread::__class_id, ctx, this_val, argv);
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

static int js_thread_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Thread::__class_id);
	classes["Thread"] = Thread::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Thread::__class_id, &thread_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Thread::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, thread_class_proto_funcs, _countof(thread_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, thread_class_constructor, "Thread", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, thread_class_static_funcs, _countof(thread_class_static_funcs));

	JS_SetModuleExport(ctx, m, "Thread", ctor);

	return 0;
}

JSModuleDef *_js_init_thread_module(JSContext *ctx, const char *module_name) {
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
	js_init_thread_module(ctx);
}