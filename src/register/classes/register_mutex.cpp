
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/mutex.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void mutex_class_finalizer(JSRuntime *rt, JSValue val) {
	Mutex *mutex = static_cast<Mutex *>(JS_GetOpaque(val, Mutex::__class_id));
	if (mutex)
		Mutex::free(nullptr, mutex);
}

static JSClassDef mutex_class_def = {
	"Mutex",
	.finalizer = mutex_class_finalizer
};

static JSValue mutex_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Mutex *mutex_class;
	JSValue obj = JS_NewObjectClass(ctx, Mutex::__class_id);
	if (JS_IsException(obj))
		return obj;
	mutex_class = memnew(Mutex);
	if (!mutex_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, mutex_class);
	return obj;
}
static JSValue mutex_class_lock(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Mutex::lock, Mutex::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mutex_class_try_lock(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Mutex::try_lock, Mutex::__class_id, ctx, this_val, argv);
};
static JSValue mutex_class_unlock(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Mutex::unlock, Mutex::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry mutex_class_proto_funcs[] = {
	JS_CFUNC_DEF("lock", 0, &mutex_class_lock),
	JS_CFUNC_DEF("try_lock", 0, &mutex_class_try_lock),
	JS_CFUNC_DEF("unlock", 0, &mutex_class_unlock),
};

static int js_mutex_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Mutex::__class_id);
	classes["Mutex"] = Mutex::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Mutex::__class_id, &mutex_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Mutex::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, mutex_class_proto_funcs, _countof(mutex_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, mutex_class_constructor, "Mutex", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Mutex", ctor);

	return 0;
}

JSModuleDef *_js_init_mutex_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_mutex_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Mutex");
	return m;
}

JSModuleDef *js_init_mutex_module(JSContext *ctx) {
	return _js_init_mutex_module(ctx, "godot/classes/mutex");
}

void register_mutex() {
	js_init_mutex_module(ctx);
}