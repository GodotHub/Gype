
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/hashing_context.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void hashing_context_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef hashing_context_class_def = {
	"HashingContext",
	.finalizer = hashing_context_class_finalizer
};

static JSValue hashing_context_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, HashingContext::__class_id);
	if (JS_IsException(obj))
		return obj;
	HashingContext *hashing_context_class = memnew(HashingContext);
	if (!hashing_context_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, hashing_context_class);	
	return obj;
}
static JSValue hashing_context_class_start(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&HashingContext::start, ctx, this_val, argc, argv);
};
static JSValue hashing_context_class_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&HashingContext::update, ctx, this_val, argc, argv);
};
static JSValue hashing_context_class_finish(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&HashingContext::finish, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry hashing_context_class_proto_funcs[] = {
	JS_CFUNC_DEF("start", 1, &hashing_context_class_start),
	JS_CFUNC_DEF("update", 1, &hashing_context_class_update),
	JS_CFUNC_DEF("finish", 0, &hashing_context_class_finish),
};

void define_hashing_context_property(JSContext *ctx, JSValue obj) {
}

static int js_hashing_context_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&HashingContext::__class_id);
	classes["HashingContext"] = HashingContext::__class_id;
	class_id_list.insert(HashingContext::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), HashingContext::__class_id, &hashing_context_class_def);

	JSValue proto = JS_NewObjectClass(ctx, HashingContext::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, HashingContext::__class_id, proto);

	define_hashing_context_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, hashing_context_class_proto_funcs, _countof(hashing_context_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, hashing_context_class_constructor, "HashingContext", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "HashingContext", ctor);

	return 0;
}

JSModuleDef *_js_init_hashing_context_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_hashing_context_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "HashingContext");
	return m;
}

JSModuleDef *js_init_hashing_context_module(JSContext *ctx) {
	return _js_init_hashing_context_module(ctx, "godot/classes/hashing_context");
}

void register_hashing_context() {
	HashingContext::__init_js_class_id();
	js_init_hashing_context_module(ctx);
}