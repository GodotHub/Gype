
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/java_class_wrapper.hpp>
#include <godot_cpp/classes/java_class.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void java_class_wrapper_class_finalizer(JSRuntime *rt, JSValue val) {
	JavaClassWrapper *java_class_wrapper = static_cast<JavaClassWrapper *>(JS_GetOpaque(val, JavaClassWrapper::__class_id));
	if (java_class_wrapper)
		memdelete(java_class_wrapper);
}

static JSClassDef java_class_wrapper_class_def = {
	"_JavaClassWrapper",
	.finalizer = java_class_wrapper_class_finalizer
};

static JSValue java_class_wrapper_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue obj = JS_NewObjectClass(ctx, JavaClassWrapper::__class_id);
	if (JS_IsException(obj))
		return obj;
	JavaClassWrapper *java_class_wrapper_class = JavaClassWrapper::get_singleton();
	if (!java_class_wrapper_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, java_class_wrapper_class);
	return obj;
}
static JSValue java_class_wrapper_class_wrap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&JavaClassWrapper::wrap, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry java_class_wrapper_class_proto_funcs[] = {
	JS_CFUNC_DEF("wrap", 1, &java_class_wrapper_class_wrap),
};

static int js_java_class_wrapper_class_init(JSContext *ctx) {
	classes["JavaClassWrapper"] = JavaClassWrapper::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), JavaClassWrapper::__class_id, &java_class_wrapper_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, JavaClassWrapper::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, java_class_wrapper_class_proto_funcs, _countof(java_class_wrapper_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, java_class_wrapper_class_constructor, "_JavaClassWrapper", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "_JavaClassWrapper", ctor);
	JS_FreeValue(ctx, global);
	return 0;
}

void register_java_class_wrapper() {
	JavaClassWrapper::__init_js_class_id();
	js_java_class_wrapper_class_init(ctx);
}