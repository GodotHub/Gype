
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/hmac_context.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void hmac_context_class_finalizer(JSRuntime *rt, JSValue val) {
	HMACContext *hmac_context = static_cast<HMACContext *>(JS_GetOpaque(val, HMACContext::__class_id));
	if (hmac_context)
		HMACContext::free(nullptr, hmac_context);
}

static JSClassDef hmac_context_class_def = {
	"HMACContext",
	.finalizer = hmac_context_class_finalizer
};

static JSValue hmac_context_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	HMACContext *hmac_context_class;
	JSValue obj = JS_NewObjectClass(ctx, HMACContext::__class_id);
	if (JS_IsException(obj))
		return obj;
	hmac_context_class = memnew(HMACContext);
	if (!hmac_context_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, hmac_context_class);
	return obj;
}
static JSValue hmac_context_class_start(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&HMACContext::start, HMACContext::__class_id, ctx, this_val, argv);
};
static JSValue hmac_context_class_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&HMACContext::update, HMACContext::__class_id, ctx, this_val, argv);
};
static JSValue hmac_context_class_finish(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&HMACContext::finish, HMACContext::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry hmac_context_class_proto_funcs[] = {
	JS_CFUNC_DEF("start", 2, &hmac_context_class_start),
	JS_CFUNC_DEF("update", 1, &hmac_context_class_update),
	JS_CFUNC_DEF("finish", 0, &hmac_context_class_finish),
};

static int js_hmac_context_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&HMACContext::__class_id);
	classes["HMACContext"] = HMACContext::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), HMACContext::__class_id, &hmac_context_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, HMACContext::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, hmac_context_class_proto_funcs, _countof(hmac_context_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, hmac_context_class_constructor, "HMACContext", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "HMACContext", ctor);

	return 0;
}

JSModuleDef *_js_init_hmac_context_module(JSContext *ctx, const char *module_name) {
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
	js_init_hmac_context_module(ctx);
}