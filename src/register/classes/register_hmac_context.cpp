
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/hmac_context.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void hmac_context_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef hmac_context_class_def = {
	"HMACContext",
	.finalizer = hmac_context_class_finalizer
};

static JSValue hmac_context_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, HMACContext::__class_id);
	if (JS_IsException(obj))
		return obj;
	HMACContext *hmac_context_class = memnew(HMACContext);
	if (!hmac_context_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, hmac_context_class);	
	return obj;
}
static JSValue hmac_context_class_start(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&HMACContext::start, ctx, this_val, argc, argv);
};
static JSValue hmac_context_class_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&HMACContext::update, ctx, this_val, argc, argv);
};
static JSValue hmac_context_class_finish(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&HMACContext::finish, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry hmac_context_class_proto_funcs[] = {
	JS_CFUNC_DEF("start", 2, &hmac_context_class_start),
	JS_CFUNC_DEF("update", 1, &hmac_context_class_update),
	JS_CFUNC_DEF("finish", 0, &hmac_context_class_finish),
};

void define_hmac_context_property(JSContext *ctx, JSValue obj) {
}

static int js_hmac_context_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&HMACContext::__class_id);
	classes["HMACContext"] = HMACContext::__class_id;
	class_id_list.insert(HMACContext::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), HMACContext::__class_id, &hmac_context_class_def);

	JSValue proto = JS_NewObjectClass(ctx, HMACContext::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, HMACContext::__class_id, proto);

	define_hmac_context_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, hmac_context_class_proto_funcs, _countof(hmac_context_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, hmac_context_class_constructor, "HMACContext", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "HMACContext", ctor);

	return 0;
}

JSModuleDef *_js_init_hmac_context_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_hmac_context_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "HMACContext");
	return m;
}

JSModuleDef *js_init_hmac_context_module(JSContext *ctx) {
	return _js_init_hmac_context_module(ctx, "godot/classes/hmac_context");
}

void register_hmac_context() {
	HMACContext::__init_js_class_id();
	js_init_hmac_context_module(ctx);
}