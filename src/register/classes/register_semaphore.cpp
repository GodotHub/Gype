
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/semaphore.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void semaphore_class_finalizer(JSRuntime *rt, JSValue val) {
	Semaphore *semaphore = static_cast<Semaphore *>(JS_GetOpaque(val, Semaphore::__class_id));
	if (semaphore)
		Semaphore::free(nullptr, semaphore);
}

static JSClassDef semaphore_class_def = {
	"Semaphore",
	.finalizer = semaphore_class_finalizer
};

static JSValue semaphore_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Semaphore *semaphore_class;
	JSValue obj = JS_NewObjectClass(ctx, Semaphore::__class_id);
	if (JS_IsException(obj))
		return obj;
	semaphore_class = memnew(Semaphore);
	if (!semaphore_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, semaphore_class);
	return obj;
}
static JSValue semaphore_class_wait(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Semaphore::wait, Semaphore::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue semaphore_class_try_wait(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Semaphore::try_wait, Semaphore::__class_id, ctx, this_val, argv);
};
static JSValue semaphore_class_post(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Semaphore::post, Semaphore::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry semaphore_class_proto_funcs[] = {
	JS_CFUNC_DEF("wait", 0, &semaphore_class_wait),
	JS_CFUNC_DEF("try_wait", 0, &semaphore_class_try_wait),
	JS_CFUNC_DEF("post", 0, &semaphore_class_post),
};

static int js_semaphore_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Semaphore::__class_id);
	classes["Semaphore"] = Semaphore::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Semaphore::__class_id, &semaphore_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Semaphore::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, semaphore_class_proto_funcs, _countof(semaphore_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, semaphore_class_constructor, "Semaphore", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Semaphore", ctor);

	return 0;
}

JSModuleDef *_js_init_semaphore_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_semaphore_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Semaphore");
	return m;
}

JSModuleDef *js_init_semaphore_module(JSContext *ctx) {
	return _js_init_semaphore_module(ctx, "godot/classes/semaphore");
}

void register_semaphore() {
	js_init_semaphore_module(ctx);
}