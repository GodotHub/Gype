
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/java_class.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void java_class_class_finalizer(JSRuntime *rt, JSValue val) {
	JavaClass *java_class = static_cast<JavaClass *>(JS_GetOpaque(val, JavaClass::__class_id));
	if (java_class)
		JavaClass::free(nullptr, java_class);
}

static JSClassDef java_class_class_def = {
	"JavaClass",
	.finalizer = java_class_class_finalizer
};

static JSValue java_class_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JavaClass *java_class_class;
	JSValue obj = JS_NewObjectClass(ctx, JavaClass::__class_id);
	if (JS_IsException(obj))
		return obj;
	java_class_class = memnew(JavaClass);
	if (!java_class_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, java_class_class);
	return obj;
}

static int js_java_class_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&JavaClass::__class_id);
	classes["JavaClass"] = JavaClass::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), JavaClass::__class_id, &java_class_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, JavaClass::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, java_class_class_constructor, "JavaClass", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "JavaClass", ctor);

	return 0;
}

JSModuleDef *_js_init_java_class_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_java_class_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "JavaClass");
	return m;
}

JSModuleDef *js_init_java_class_module(JSContext *ctx) {
	return _js_init_java_class_module(ctx, "godot/classes/java_class");
}

void register_java_class() {
	js_init_java_class_module(ctx);
}