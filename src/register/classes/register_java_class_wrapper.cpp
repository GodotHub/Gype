
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/java_class.hpp>
#include <godot_cpp/classes/java_class_wrapper.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void java_class_wrapper_class_finalizer(JSRuntime *rt, JSValue val) {
	JavaClassWrapper *java_class_wrapper = static_cast<JavaClassWrapper *>(JS_GetOpaque(val, JavaClassWrapper::__class_id));
	if (java_class_wrapper)
		JavaClassWrapper::free(nullptr, java_class_wrapper);
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
	return call_builtin_method_ret(&JavaClassWrapper::wrap, JavaClassWrapper::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry java_class_wrapper_class_proto_funcs[] = {
	JS_CFUNC_DEF("wrap", 1, &java_class_wrapper_class_wrap),
};

static int js_java_class_wrapper_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&JavaClassWrapper::__class_id);
	classes["JavaClassWrapper"] = JavaClassWrapper::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), JavaClassWrapper::__class_id, &java_class_wrapper_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, JavaClassWrapper::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, java_class_wrapper_class_proto_funcs, _countof(java_class_wrapper_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, java_class_wrapper_class_constructor, "JavaClassWrapper", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "JavaClassWrapper", ctor);

	return 0;
}

JSModuleDef *_js_init_java_class_wrapper_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_java_class_wrapper_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "JavaClassWrapper");
	return m;
}

JSModuleDef *js_init_java_class_wrapper_module(JSContext *ctx) {
	return _js_init_java_class_wrapper_module(ctx, "godot/classes/java_class_wrapper");
}

void register_java_class_wrapper() {
	js_init_java_class_wrapper_module(ctx);
}