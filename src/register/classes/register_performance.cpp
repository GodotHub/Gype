
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/performance.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

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
	return call_builtin_const_method_ret(&Performance::get_monitor, Performance::__class_id, ctx, this_val, argv);
};
static JSValue performance_class_add_custom_monitor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Performance::add_custom_monitor, Performance::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue performance_class_remove_custom_monitor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Performance::remove_custom_monitor, Performance::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue performance_class_has_custom_monitor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Performance::has_custom_monitor, Performance::__class_id, ctx, this_val, argv);
};
static JSValue performance_class_get_custom_monitor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Performance::get_custom_monitor, Performance::__class_id, ctx, this_val, argv);
};
static JSValue performance_class_get_monitor_modification_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Performance::get_monitor_modification_time, Performance::__class_id, ctx, this_val, argv);
};
static JSValue performance_class_get_custom_monitor_names(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Performance::get_custom_monitor_names, Performance::__class_id, ctx, this_val, argv);
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

static int js_performance_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Performance::__class_id);
	classes["Performance"] = Performance::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Performance::__class_id, &performance_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Performance::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, performance_class_proto_funcs, _countof(performance_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, performance_class_constructor, "Performance", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Performance", ctor);

	return 0;
}

JSModuleDef *_js_init_performance_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_performance_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Performance");
	return m;
}

JSModuleDef *js_init_performance_module(JSContext *ctx) {
	return _js_init_performance_module(ctx, "godot/classes/performance");
}

void register_performance() {
	js_init_performance_module(ctx);
}