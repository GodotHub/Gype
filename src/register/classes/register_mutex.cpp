
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/mutex.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void mutex_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef mutex_class_def = {
	"Mutex",
	.finalizer = mutex_class_finalizer
};

static JSValue mutex_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Mutex::__class_id);
	if (JS_IsException(obj))
		return obj;
	Mutex *mutex_class = memnew(Mutex);
	if (!mutex_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, mutex_class);	
	return obj;
}
static JSValue mutex_class_lock(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Mutex::lock, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue mutex_class_try_lock(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Mutex::try_lock, ctx, this_val, argc, argv);
};
static JSValue mutex_class_unlock(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Mutex::unlock, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry mutex_class_proto_funcs[] = {
	JS_CFUNC_DEF("lock", 0, &mutex_class_lock),
	JS_CFUNC_DEF("try_lock", 0, &mutex_class_try_lock),
	JS_CFUNC_DEF("unlock", 0, &mutex_class_unlock),
};

void define_mutex_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_mutex_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Mutex::__class_id);
	classes["Mutex"] = Mutex::__class_id;
	class_id_list.insert(Mutex::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Mutex::__class_id, &mutex_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Mutex::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Mutex::__class_id, proto);

	define_mutex_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, mutex_class_proto_funcs, _countof(mutex_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, mutex_class_constructor, "Mutex", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Mutex", ctor);

	return 0;
}

JSModuleDef *_js_init_mutex_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_mutex_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Mutex");
	return m;
}

JSModuleDef *js_init_mutex_module(JSContext *ctx) {
	return _js_init_mutex_module(ctx, "@godot/classes/mutex");
}

void register_mutex() {
	Mutex::__init_js_class_id();
	js_init_mutex_module(ctx);
}