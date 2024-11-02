
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/engine_debugger.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/engine_profiler.hpp>
#include <godot_cpp/classes/script_language.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static JSValue engine_debugger_instance;

static void js_engine_debugger_singleton();

static void engine_debugger_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef engine_debugger_class_def = {
	"EngineDebugger",
	.finalizer = engine_debugger_class_finalizer
};

static JSValue engine_debugger_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EngineDebugger *engine_debugger_class;
	JSValue obj = JS_NewObjectClass(ctx, EngineDebugger::__class_id);
	if (JS_IsException(obj))
		return obj;
	engine_debugger_class = EngineDebugger::get_singleton();
	if (!engine_debugger_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, engine_debugger_class);
	return obj;
}
static JSValue engine_debugger_class_is_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
	return call_builtin_method_ret(&EngineDebugger::is_active, ctx, this_val, argc, argv);
};
static JSValue engine_debugger_class_register_profiler(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
    call_builtin_method_no_ret(&EngineDebugger::register_profiler, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue engine_debugger_class_unregister_profiler(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
    call_builtin_method_no_ret(&EngineDebugger::unregister_profiler, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue engine_debugger_class_is_profiling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
	return call_builtin_method_ret(&EngineDebugger::is_profiling, ctx, this_val, argc, argv);
};
static JSValue engine_debugger_class_has_profiler(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
	return call_builtin_method_ret(&EngineDebugger::has_profiler, ctx, this_val, argc, argv);
};
static JSValue engine_debugger_class_profiler_add_frame_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
    call_builtin_method_no_ret(&EngineDebugger::profiler_add_frame_data, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue engine_debugger_class_profiler_enable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
    call_builtin_method_no_ret(&EngineDebugger::profiler_enable, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue engine_debugger_class_register_message_capture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
    call_builtin_method_no_ret(&EngineDebugger::register_message_capture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue engine_debugger_class_unregister_message_capture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
    call_builtin_method_no_ret(&EngineDebugger::unregister_message_capture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue engine_debugger_class_has_capture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
	return call_builtin_method_ret(&EngineDebugger::has_capture, ctx, this_val, argc, argv);
};
static JSValue engine_debugger_class_line_poll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
    call_builtin_method_no_ret(&EngineDebugger::line_poll, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue engine_debugger_class_send_message(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
    call_builtin_method_no_ret(&EngineDebugger::send_message, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue engine_debugger_class_debug(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
    call_builtin_method_no_ret(&EngineDebugger::debug, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue engine_debugger_class_script_debug(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
    call_builtin_method_no_ret(&EngineDebugger::script_debug, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue engine_debugger_class_set_lines_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
    call_builtin_method_no_ret(&EngineDebugger::set_lines_left, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue engine_debugger_class_get_lines_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
	return call_builtin_const_method_ret(&EngineDebugger::get_lines_left, ctx, this_val, argc, argv);
};
static JSValue engine_debugger_class_set_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
    call_builtin_method_no_ret(&EngineDebugger::set_depth, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue engine_debugger_class_get_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
	return call_builtin_const_method_ret(&EngineDebugger::get_depth, ctx, this_val, argc, argv);
};
static JSValue engine_debugger_class_is_breakpoint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
	return call_builtin_const_method_ret(&EngineDebugger::is_breakpoint, ctx, this_val, argc, argv);
};
static JSValue engine_debugger_class_is_skipping_breakpoints(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
	return call_builtin_const_method_ret(&EngineDebugger::is_skipping_breakpoints, ctx, this_val, argc, argv);
};
static JSValue engine_debugger_class_insert_breakpoint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
    call_builtin_method_no_ret(&EngineDebugger::insert_breakpoint, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue engine_debugger_class_remove_breakpoint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
    call_builtin_method_no_ret(&EngineDebugger::remove_breakpoint, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue engine_debugger_class_clear_breakpoints(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_engine_debugger_singleton();
    call_builtin_method_no_ret(&EngineDebugger::clear_breakpoints, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry engine_debugger_class_proto_funcs[] = {
	JS_CFUNC_DEF("is_active", 0, &engine_debugger_class_is_active),
	JS_CFUNC_DEF("register_profiler", 2, &engine_debugger_class_register_profiler),
	JS_CFUNC_DEF("unregister_profiler", 1, &engine_debugger_class_unregister_profiler),
	JS_CFUNC_DEF("is_profiling", 1, &engine_debugger_class_is_profiling),
	JS_CFUNC_DEF("has_profiler", 1, &engine_debugger_class_has_profiler),
	JS_CFUNC_DEF("profiler_add_frame_data", 2, &engine_debugger_class_profiler_add_frame_data),
	JS_CFUNC_DEF("profiler_enable", 3, &engine_debugger_class_profiler_enable),
	JS_CFUNC_DEF("register_message_capture", 2, &engine_debugger_class_register_message_capture),
	JS_CFUNC_DEF("unregister_message_capture", 1, &engine_debugger_class_unregister_message_capture),
	JS_CFUNC_DEF("has_capture", 1, &engine_debugger_class_has_capture),
	JS_CFUNC_DEF("line_poll", 0, &engine_debugger_class_line_poll),
	JS_CFUNC_DEF("send_message", 2, &engine_debugger_class_send_message),
	JS_CFUNC_DEF("debug", 2, &engine_debugger_class_debug),
	JS_CFUNC_DEF("script_debug", 3, &engine_debugger_class_script_debug),
	JS_CFUNC_DEF("set_lines_left", 1, &engine_debugger_class_set_lines_left),
	JS_CFUNC_DEF("get_lines_left", 0, &engine_debugger_class_get_lines_left),
	JS_CFUNC_DEF("set_depth", 1, &engine_debugger_class_set_depth),
	JS_CFUNC_DEF("get_depth", 0, &engine_debugger_class_get_depth),
	JS_CFUNC_DEF("is_breakpoint", 2, &engine_debugger_class_is_breakpoint),
	JS_CFUNC_DEF("is_skipping_breakpoints", 0, &engine_debugger_class_is_skipping_breakpoints),
	JS_CFUNC_DEF("insert_breakpoint", 2, &engine_debugger_class_insert_breakpoint),
	JS_CFUNC_DEF("remove_breakpoint", 2, &engine_debugger_class_remove_breakpoint),
	JS_CFUNC_DEF("clear_breakpoints", 0, &engine_debugger_class_clear_breakpoints),
};

static int js_engine_debugger_class_init(JSContext *ctx) {
	JS_NewClassID(&EngineDebugger::__class_id);
	classes["EngineDebugger"] = EngineDebugger::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EngineDebugger::__class_id, &engine_debugger_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EngineDebugger::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, engine_debugger_class_proto_funcs, _countof(engine_debugger_class_proto_funcs));
	return 0;
}

static void js_engine_debugger_singleton() {
	if (JS_IsUninitialized(engine_debugger_instance)) {
		JSValue global = JS_GetGlobalObject(ctx);
		engine_debugger_instance = engine_debugger_class_constructor(ctx, global, 0, NULL);
		JS_SetPropertyStr(ctx, global, "EngineDebugger", engine_debugger_instance);
	}
}


void register_engine_debugger() {
	js_engine_debugger_class_init(ctx);
}