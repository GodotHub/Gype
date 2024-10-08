
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/java_script_object.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void java_script_object_class_finalizer(JSRuntime *rt, JSValue val) {
	JavaScriptObject *java_script_object = static_cast<JavaScriptObject *>(JS_GetOpaque(val, JavaScriptObject::__class_id));
	if (java_script_object)
		JavaScriptObject::free(nullptr, java_script_object);
}

static JSClassDef java_script_object_class_def = {
	"JavaScriptObject",
	.finalizer = java_script_object_class_finalizer
};

static JSValue java_script_object_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JavaScriptObject *java_script_object_class;
	JSValue obj = JS_NewObjectClass(ctx, JavaScriptObject::__class_id);
	if (JS_IsException(obj))
		return obj;
	java_script_object_class = memnew(JavaScriptObject);
	if (!java_script_object_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, java_script_object_class);
	return obj;
}

static int js_java_script_object_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&JavaScriptObject::__class_id);
	classes["JavaScriptObject"] = JavaScriptObject::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), JavaScriptObject::__class_id, &java_script_object_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, JavaScriptObject::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, java_script_object_class_constructor, "JavaScriptObject", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "JavaScriptObject", ctor);

	return 0;
}

JSModuleDef *_js_init_java_script_object_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_java_script_object_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "JavaScriptObject");
	return m;
}

JSModuleDef *js_init_java_script_object_module(JSContext *ctx) {
	return _js_init_java_script_object_module(ctx, "godot/classes/java_script_object");
}

void register_java_script_object() {
	js_init_java_script_object_module(ctx);
}