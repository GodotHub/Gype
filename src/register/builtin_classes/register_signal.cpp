
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/signal.hpp>

using namespace godot;

static void signal_class_finalizer(JSRuntime *rt, JSValue val) {
	Signal *signal = static_cast<Signal *>(JS_GetOpaque(val, Signal::__class_id));
	if (signal)
		memfree(signal);
}

static JSClassDef signal_class_def = {
	"Signal",
	.finalizer = signal_class_finalizer
};

static JSValue signal_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Signal *signal_class;
	JSValue obj = JS_NewObjectClass(ctx, Signal::__class_id);
	if (JS_IsException(obj))
		return obj;
	signal_class = memnew(Signal);
	if (!signal_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, signal_class);
	return obj;
}
static JSValue signal_class_emit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_no_fixed_vararg_method_no_ret(&Signal::js_emit, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
}
static const JSCFunctionListEntry signal_class_proto_funcs[] = {
	JS_CFUNC_DEF("emit", 0, &signal_class_emit),
};

void define_signal_property(JSContext *ctx, JSValue obj) {
}

static int js_signal_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Signal::__class_id);
	classes["Signal"] = Signal::__class_id;
	class_id_list.insert(Signal::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Signal::__class_id, &signal_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Signal::__class_id, proto);
	define_signal_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, signal_class_proto_funcs, _countof(signal_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, signal_class_constructor, "Signal", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Signal", ctor);

	return 0;
}

JSModuleDef *_js_init_signal_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_signal_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Signal");
	return m;
}

JSModuleDef *js_init_signal_module(JSContext *ctx) {
	return _js_init_signal_module(ctx, "godot/classes/signal");
}

void register_signal() {
	Signal::__init_js_class_id();
	js_init_signal_module(ctx);
}