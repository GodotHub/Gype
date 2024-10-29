
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/aes_context.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void aes_context_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef aes_context_class_def = {
	"AESContext",
	.finalizer = aes_context_class_finalizer
};

static JSValue aes_context_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AESContext::__class_id);
	if (JS_IsException(obj))
		return obj;
	AESContext *aes_context_class = memnew(AESContext);
	if (!aes_context_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, aes_context_class);	
	return obj;
}
static JSValue aes_context_class_start(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AESContext::start, ctx, this_val, argc, argv);
};
static JSValue aes_context_class_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AESContext::update, ctx, this_val, argc, argv);
};
static JSValue aes_context_class_get_iv_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AESContext::get_iv_state, ctx, this_val, argc, argv);
};
static JSValue aes_context_class_finish(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AESContext::finish, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry aes_context_class_proto_funcs[] = {
	JS_CFUNC_DEF("start", 3, &aes_context_class_start),
	JS_CFUNC_DEF("update", 1, &aes_context_class_update),
	JS_CFUNC_DEF("get_iv_state", 0, &aes_context_class_get_iv_state),
	JS_CFUNC_DEF("finish", 0, &aes_context_class_finish),
};

void define_aes_context_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue Mode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_ECB_ENCRYPT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_ECB_DECRYPT", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_CBC_ENCRYPT", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_CBC_DECRYPT", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_MAX", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, proto, "Mode", Mode_obj);
}

static int js_aes_context_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AESContext::__class_id);
	classes["AESContext"] = AESContext::__class_id;
	class_id_list.insert(AESContext::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AESContext::__class_id, &aes_context_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AESContext::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AESContext::__class_id, proto);

	define_aes_context_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, aes_context_class_proto_funcs, _countof(aes_context_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, aes_context_class_constructor, "AESContext", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AESContext", ctor);

	return 0;
}

JSModuleDef *_js_init_aes_context_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_aes_context_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AESContext");
	return m;
}

JSModuleDef *js_init_aes_context_module(JSContext *ctx) {
	return _js_init_aes_context_module(ctx, "@godot/classes/aes_context");
}

void register_aes_context() {
	AESContext::__init_js_class_id();
	js_init_aes_context_module(ctx);
}