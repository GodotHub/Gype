
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/hashing_context.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void hashing_context_class_finalizer(JSRuntime *rt, JSValue val) {
	HashingContext *hashing_context = static_cast<HashingContext *>(JS_GetOpaque(val, HashingContext::__class_id));
	if (hashing_context)
		HashingContext::free(nullptr, hashing_context);
}

static JSClassDef hashing_context_class_def = {
	"HashingContext",
	.finalizer = hashing_context_class_finalizer
};

static JSValue hashing_context_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	HashingContext *hashing_context_class;
	JSValue obj = JS_NewObjectClass(ctx, HashingContext::__class_id);
	if (JS_IsException(obj))
		return obj;
	hashing_context_class = memnew(HashingContext);
	if (!hashing_context_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, hashing_context_class);
	return obj;
}
static JSValue hashing_context_class_start(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&HashingContext::start, HashingContext::__class_id, ctx, this_val, argv);
};
static JSValue hashing_context_class_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&HashingContext::update, HashingContext::__class_id, ctx, this_val, argv);
};
static JSValue hashing_context_class_finish(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&HashingContext::finish, HashingContext::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry hashing_context_class_proto_funcs[] = {
	JS_CFUNC_DEF("start", 1, &hashing_context_class_start),
	JS_CFUNC_DEF("update", 1, &hashing_context_class_update),
	JS_CFUNC_DEF("finish", 0, &hashing_context_class_finish),
};

static int js_hashing_context_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&HashingContext::__class_id);
	classes["HashingContext"] = HashingContext::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), HashingContext::__class_id, &hashing_context_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, HashingContext::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, hashing_context_class_proto_funcs, _countof(hashing_context_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, hashing_context_class_constructor, "HashingContext", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "HashingContext", ctor);

	return 0;
}

JSModuleDef *_js_init_hashing_context_module(JSContext *ctx, const char *module_name) {
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
	js_init_hashing_context_module(ctx);
}