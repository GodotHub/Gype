
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/performance.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static JSValue performance_instance;

static void js_performance_singleton();

static void performance_class_finalizer(JSRuntime *rt, JSValue val) {
	Performance *performance = static_cast<Performance *>(JS_GetOpaque(val, Performance::__class_id));
	if (performance)
		Performance::free(nullptr, performance);
}

static JSClassDef performance_class_def = {
	"Performance",
	.finalizer = performance_class_finalizer
};

static JSValue performance_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Performance *performance_class;
	JSValue obj = JS_NewObjectClass(ctx, Performance::__class_id);
	if (JS_IsException(obj))
		return obj;
	performance_class = Performance::get_singleton();
	if (!performance_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, performance_class);
	return obj;
}
static JSValue performance_class_get_monitor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_performance_singleton();
	return call_builtin_const_method_ret(&Performance::get_monitor, ctx, this_val, argc, argv);
};
static JSValue performance_class_add_custom_monitor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_performance_singleton();
    call_builtin_method_no_ret(&Performance::add_custom_monitor, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue performance_class_remove_custom_monitor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_performance_singleton();
    call_builtin_method_no_ret(&Performance::remove_custom_monitor, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue performance_class_has_custom_monitor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_performance_singleton();
	return call_builtin_method_ret(&Performance::has_custom_monitor, ctx, this_val, argc, argv);
};
static JSValue performance_class_get_custom_monitor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_performance_singleton();
	return call_builtin_method_ret(&Performance::get_custom_monitor, ctx, this_val, argc, argv);
};
static JSValue performance_class_get_monitor_modification_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_performance_singleton();
	return call_builtin_method_ret(&Performance::get_monitor_modification_time, ctx, this_val, argc, argv);
};
static JSValue performance_class_get_custom_monitor_names(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_performance_singleton();
	return call_builtin_method_ret(&Performance::get_custom_monitor_names, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry performance_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_monitor", 1, &performance_class_get_monitor),
	JS_CFUNC_DEF("add_custom_monitor", 3, &performance_class_add_custom_monitor),
	JS_CFUNC_DEF("remove_custom_monitor", 1, &performance_class_remove_custom_monitor),
	JS_CFUNC_DEF("has_custom_monitor", 1, &performance_class_has_custom_monitor),
	JS_CFUNC_DEF("get_custom_monitor", 1, &performance_class_get_custom_monitor),
	JS_CFUNC_DEF("get_monitor_modification_time", 0, &performance_class_get_monitor_modification_time),
	JS_CFUNC_DEF("get_custom_monitor_names", 0, &performance_class_get_custom_monitor_names),
};

static int js_performance_class_init(JSContext *ctx) {
	JS_NewClassID(&Performance::__class_id);
	classes["Performance"] = Performance::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Performance::__class_id, &performance_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Performance::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, performance_class_proto_funcs, _countof(performance_class_proto_funcs));
	return 0;
}

static void js_performance_singleton() {
	if (JS_IsUninitialized(performance_instance)) {
		JSValue global = JS_GetGlobalObject(ctx);
		performance_instance = performance_class_constructor(ctx, global, 0, NULL);
		JS_SetPropertyStr(ctx, global, "Performance", performance_instance);
	}
}


void register_performance() {
	js_performance_class_init(ctx);
}