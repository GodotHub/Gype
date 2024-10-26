
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/worker_thread_pool.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static JSValue worker_thread_pool_instance;

static void js_worker_thread_pool_singleton();

static void worker_thread_pool_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef worker_thread_pool_class_def = {
	"WorkerThreadPool",
	.finalizer = worker_thread_pool_class_finalizer
};

static JSValue worker_thread_pool_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	WorkerThreadPool *worker_thread_pool_class;
	JSValue obj = JS_NewObjectClass(ctx, WorkerThreadPool::__class_id);
	if (JS_IsException(obj))
		return obj;
	worker_thread_pool_class = WorkerThreadPool::get_singleton();
	if (!worker_thread_pool_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, worker_thread_pool_class);
	return obj;
}
static JSValue worker_thread_pool_class_add_task(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_worker_thread_pool_singleton();
	return call_builtin_method_ret(&WorkerThreadPool::add_task, ctx, this_val, argc, argv);
};
static JSValue worker_thread_pool_class_is_task_completed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_worker_thread_pool_singleton();
	return call_builtin_const_method_ret(&WorkerThreadPool::is_task_completed, ctx, this_val, argc, argv);
};
static JSValue worker_thread_pool_class_wait_for_task_completion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_worker_thread_pool_singleton();
	return call_builtin_method_ret(&WorkerThreadPool::wait_for_task_completion, ctx, this_val, argc, argv);
};
static JSValue worker_thread_pool_class_add_group_task(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_worker_thread_pool_singleton();
	return call_builtin_method_ret(&WorkerThreadPool::add_group_task, ctx, this_val, argc, argv);
};
static JSValue worker_thread_pool_class_is_group_task_completed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_worker_thread_pool_singleton();
	return call_builtin_const_method_ret(&WorkerThreadPool::is_group_task_completed, ctx, this_val, argc, argv);
};
static JSValue worker_thread_pool_class_get_group_processed_element_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_worker_thread_pool_singleton();
	return call_builtin_const_method_ret(&WorkerThreadPool::get_group_processed_element_count, ctx, this_val, argc, argv);
};
static JSValue worker_thread_pool_class_wait_for_group_task_completion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_worker_thread_pool_singleton();
    call_builtin_method_no_ret(&WorkerThreadPool::wait_for_group_task_completion, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry worker_thread_pool_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_task", 3, &worker_thread_pool_class_add_task),
	JS_CFUNC_DEF("is_task_completed", 1, &worker_thread_pool_class_is_task_completed),
	JS_CFUNC_DEF("wait_for_task_completion", 1, &worker_thread_pool_class_wait_for_task_completion),
	JS_CFUNC_DEF("add_group_task", 5, &worker_thread_pool_class_add_group_task),
	JS_CFUNC_DEF("is_group_task_completed", 1, &worker_thread_pool_class_is_group_task_completed),
	JS_CFUNC_DEF("get_group_processed_element_count", 1, &worker_thread_pool_class_get_group_processed_element_count),
	JS_CFUNC_DEF("wait_for_group_task_completion", 1, &worker_thread_pool_class_wait_for_group_task_completion),
};

static int js_worker_thread_pool_class_init(JSContext *ctx) {
	JS_NewClassID(&WorkerThreadPool::__class_id);
	classes["WorkerThreadPool"] = WorkerThreadPool::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), WorkerThreadPool::__class_id, &worker_thread_pool_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, WorkerThreadPool::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, worker_thread_pool_class_proto_funcs, _countof(worker_thread_pool_class_proto_funcs));
	return 0;
}

static void js_worker_thread_pool_singleton() {
	if (JS_IsUninitialized(worker_thread_pool_instance)) {
		JSValue global = JS_GetGlobalObject(ctx);
		worker_thread_pool_instance = worker_thread_pool_class_constructor(ctx, global, 0, NULL);
		JS_SetPropertyStr(ctx, global, "WorkerThreadPool", worker_thread_pool_instance);
	}
}


void register_worker_thread_pool() {
	js_worker_thread_pool_class_init(ctx);
}