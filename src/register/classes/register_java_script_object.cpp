
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/java_script_object.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void java_script_object_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef java_script_object_class_def = {
	"JavaScriptObject",
	.finalizer = java_script_object_class_finalizer
};

static JSValue java_script_object_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, JavaScriptObject::__class_id);
	if (JS_IsException(obj))
		return obj;

	JavaScriptObject *java_script_object_class;
	if (argc == 1) 
		java_script_object_class = static_cast<JavaScriptObject *>(static_cast<Object *>(Variant(*argv)));
	else 
		java_script_object_class = memnew(JavaScriptObject);
	if (!java_script_object_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, java_script_object_class);	
	return obj;
}

static void define_java_script_object_property(JSContext *ctx, JSValue proto) {
	
}

static void define_java_script_object_enum(JSContext *ctx, JSValue proto) {
}

static int js_java_script_object_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&JavaScriptObject::__class_id);
	classes["JavaScriptObject"] = JavaScriptObject::__class_id;
	class_id_list.insert(JavaScriptObject::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), JavaScriptObject::__class_id, &java_script_object_class_def);

	JSValue proto = JS_NewObjectClass(ctx, JavaScriptObject::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, JavaScriptObject::__class_id, proto);

	define_java_script_object_property(ctx, proto);
	define_java_script_object_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, java_script_object_class_constructor, "JavaScriptObject", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "JavaScriptObject", ctor);

	return 0;
}

JSModuleDef *_js_init_java_script_object_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_java_script_object_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "JavaScriptObject");
	return m;
}

JSModuleDef *js_init_java_script_object_module(JSContext *ctx) {
	return _js_init_java_script_object_module(ctx, "@godot/classes/java_script_object");
}

void register_java_script_object() {
	JavaScriptObject::__init_js_class_id();
	js_init_java_script_object_module(ctx);
}