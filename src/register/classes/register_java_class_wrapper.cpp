
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/java_class.hpp>
#include <godot_cpp/classes/java_class_wrapper.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static JSValue java_class_wrapper_instance;

static void js_java_class_wrapper_singleton();

static void java_class_wrapper_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef java_class_wrapper_class_def = {
	"JavaClassWrapper",
	.finalizer = java_class_wrapper_class_finalizer
};

static JSValue java_class_wrapper_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JavaClassWrapper *java_class_wrapper_class;
	JSValue obj = JS_NewObjectClass(ctx, JavaClassWrapper::__class_id);
	if (JS_IsException(obj))
		return obj;
	java_class_wrapper_class = JavaClassWrapper::get_singleton();
	if (!java_class_wrapper_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, java_class_wrapper_class);
	return obj;
}
static JSValue java_class_wrapper_class_wrap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	js_java_class_wrapper_singleton();
	return call_builtin_method_ret(&JavaClassWrapper::wrap, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry java_class_wrapper_class_proto_funcs[] = {
	JS_CFUNC_DEF("wrap", 1, &java_class_wrapper_class_wrap),
};

static int js_java_class_wrapper_class_init(JSContext *ctx) {
	JS_NewClassID(&JavaClassWrapper::__class_id);
	classes["JavaClassWrapper"] = JavaClassWrapper::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), JavaClassWrapper::__class_id, &java_class_wrapper_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, JavaClassWrapper::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, java_class_wrapper_class_proto_funcs, _countof(java_class_wrapper_class_proto_funcs));
	return 0;
}

static void js_java_class_wrapper_singleton() {
	if (JS_IsUninitialized(java_class_wrapper_instance)) {
		JSValue global = JS_GetGlobalObject(ctx);
		java_class_wrapper_instance = java_class_wrapper_class_constructor(ctx, global, 0, NULL);
		JS_SetPropertyStr(ctx, global, "JavaClassWrapper", java_class_wrapper_instance);
	}
}

void register_java_class_wrapper() {
	js_java_class_wrapper_class_init(ctx);
}