
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/tweener.hpp>
#include <godot_cpp/classes/method_tweener.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void method_tweener_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef method_tweener_class_def = {
	"MethodTweener",
	.finalizer = method_tweener_class_finalizer
};

static JSValue method_tweener_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, MethodTweener::__class_id);
	if (JS_IsException(obj))
		return obj;
	MethodTweener *method_tweener_class = memnew(MethodTweener);
	if (!method_tweener_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, method_tweener_class);	
	return obj;
}
static JSValue method_tweener_class_set_delay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&MethodTweener::set_delay, ctx, this_val, argc, argv);
};
static JSValue method_tweener_class_set_trans(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&MethodTweener::set_trans, ctx, this_val, argc, argv);
};
static JSValue method_tweener_class_set_ease(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&MethodTweener::set_ease, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry method_tweener_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_delay", 1, &method_tweener_class_set_delay),
	JS_CFUNC_DEF("set_trans", 1, &method_tweener_class_set_trans),
	JS_CFUNC_DEF("set_ease", 1, &method_tweener_class_set_ease),
};

void define_method_tweener_property(JSContext *ctx, JSValue obj) {
}

static int js_method_tweener_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&MethodTweener::__class_id);
	classes["MethodTweener"] = MethodTweener::__class_id;
	class_id_list.insert(MethodTweener::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MethodTweener::__class_id, &method_tweener_class_def);

	JSValue proto = JS_NewObjectClass(ctx, MethodTweener::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Tweener::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MethodTweener::__class_id, proto);

	define_method_tweener_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, method_tweener_class_proto_funcs, _countof(method_tweener_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, method_tweener_class_constructor, "MethodTweener", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "MethodTweener", ctor);

	return 0;
}

JSModuleDef *_js_init_method_tweener_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/tweener';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_method_tweener_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MethodTweener");
	return m;
}

JSModuleDef *js_init_method_tweener_module(JSContext *ctx) {
	return _js_init_method_tweener_module(ctx, "godot/classes/method_tweener");
}

void register_method_tweener() {
	MethodTweener::__init_js_class_id();
	js_init_method_tweener_module(ctx);
}