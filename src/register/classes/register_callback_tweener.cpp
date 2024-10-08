
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/tweener.hpp>
#include <godot_cpp/classes/callback_tweener.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void callback_tweener_class_finalizer(JSRuntime *rt, JSValue val) {
	CallbackTweener *callback_tweener = static_cast<CallbackTweener *>(JS_GetOpaque(val, CallbackTweener::__class_id));
	if (callback_tweener)
		CallbackTweener::free(nullptr, callback_tweener);
}

static JSClassDef callback_tweener_class_def = {
	"CallbackTweener",
	.finalizer = callback_tweener_class_finalizer
};

static JSValue callback_tweener_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CallbackTweener *callback_tweener_class;
	JSValue obj = JS_NewObjectClass(ctx, CallbackTweener::__class_id);
	if (JS_IsException(obj))
		return obj;
	callback_tweener_class = memnew(CallbackTweener);
	if (!callback_tweener_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, callback_tweener_class);
	return obj;
}
static JSValue callback_tweener_class_set_delay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CallbackTweener::set_delay, CallbackTweener::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry callback_tweener_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_delay", 1, &callback_tweener_class_set_delay),
};

static int js_callback_tweener_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CallbackTweener::__class_id);
	classes["CallbackTweener"] = CallbackTweener::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CallbackTweener::__class_id, &callback_tweener_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Tweener::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CallbackTweener::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, callback_tweener_class_proto_funcs, _countof(callback_tweener_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, callback_tweener_class_constructor, "CallbackTweener", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CallbackTweener", ctor);

	return 0;
}

JSModuleDef *_js_init_callback_tweener_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_callback_tweener_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CallbackTweener");
	return m;
}

JSModuleDef *js_init_callback_tweener_module(JSContext *ctx) {
	return _js_init_callback_tweener_module(ctx, "godot/classes/callback_tweener");
}

void register_callback_tweener() {
	js_init_callback_tweener_module(ctx);
}