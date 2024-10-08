
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/aes_context.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void aes_context_class_finalizer(JSRuntime *rt, JSValue val) {
	AESContext *aes_context = static_cast<AESContext *>(JS_GetOpaque(val, AESContext::__class_id));
	if (aes_context)
		AESContext::free(nullptr, aes_context);
}

static JSClassDef aes_context_class_def = {
	"AESContext",
	.finalizer = aes_context_class_finalizer
};

static JSValue aes_context_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AESContext *aes_context_class;
	JSValue obj = JS_NewObjectClass(ctx, AESContext::__class_id);
	if (JS_IsException(obj))
		return obj;
	aes_context_class = memnew(AESContext);
	if (!aes_context_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, aes_context_class);
	return obj;
}
static JSValue aes_context_class_start(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AESContext::start, AESContext::__class_id, ctx, this_val, argv);
};
static JSValue aes_context_class_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AESContext::update, AESContext::__class_id, ctx, this_val, argv);
};
static JSValue aes_context_class_get_iv_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AESContext::get_iv_state, AESContext::__class_id, ctx, this_val, argv);
};
static JSValue aes_context_class_finish(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AESContext::finish, AESContext::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry aes_context_class_proto_funcs[] = {
	JS_CFUNC_DEF("start", 3, &aes_context_class_start),
	JS_CFUNC_DEF("update", 1, &aes_context_class_update),
	JS_CFUNC_DEF("get_iv_state", 0, &aes_context_class_get_iv_state),
	JS_CFUNC_DEF("finish", 0, &aes_context_class_finish),
};

static int js_aes_context_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AESContext::__class_id);
	classes["AESContext"] = AESContext::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AESContext::__class_id, &aes_context_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AESContext::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, aes_context_class_proto_funcs, _countof(aes_context_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, aes_context_class_constructor, "AESContext", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AESContext", ctor);

	return 0;
}

JSModuleDef *_js_init_aes_context_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_aes_context_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AESContext");
	return m;
}

JSModuleDef *js_init_aes_context_module(JSContext *ctx) {
	return _js_init_aes_context_module(ctx, "godot/classes/aes_context");
}

void register_aes_context() {
	js_init_aes_context_module(ctx);
}