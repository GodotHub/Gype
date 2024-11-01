
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/tweener.hpp>
#include <godot_cpp/classes/callback_tweener.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void callback_tweener_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef callback_tweener_class_def = {
	"CallbackTweener",
	.finalizer = callback_tweener_class_finalizer
};

static JSValue callback_tweener_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CallbackTweener::__class_id);
	if (JS_IsException(obj))
		return obj;

	CallbackTweener *callback_tweener_class;
	if (argc == 1) 
		callback_tweener_class = static_cast<CallbackTweener *>(Variant(*argv).operator Object *());
	else 
		callback_tweener_class = memnew(CallbackTweener);
	if (!callback_tweener_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, callback_tweener_class);
	return obj;
}
static JSValue callback_tweener_class_set_delay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CallbackTweener::set_delay, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry callback_tweener_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_delay", 1, &callback_tweener_class_set_delay),
};

static void define_callback_tweener_property(JSContext *ctx, JSValue proto) {
	
}

static void define_callback_tweener_enum(JSContext *ctx, JSValue proto) {
}

static int js_callback_tweener_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["CallbackTweener"] = CallbackTweener::__class_id;
	class_id_list.insert(CallbackTweener::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CallbackTweener::__class_id, &callback_tweener_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CallbackTweener::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Tweener::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CallbackTweener::__class_id, proto);

	define_callback_tweener_property(ctx, proto);
	define_callback_tweener_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, callback_tweener_class_proto_funcs, _countof(callback_tweener_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, callback_tweener_class_constructor, "CallbackTweener", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CallbackTweener", ctor);

	return 0;
}

JSModuleDef *_js_init_callback_tweener_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/tweener';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_callback_tweener_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CallbackTweener");
	return m;
}

JSModuleDef *js_init_callback_tweener_module(JSContext *ctx) {
	return _js_init_callback_tweener_module(ctx, "@godot/classes/callback_tweener");
}

void register_callback_tweener() {
	CallbackTweener::__init_js_class_id();
	js_init_callback_tweener_module(ctx);
}