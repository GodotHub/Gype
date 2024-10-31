
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/java_class.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void java_class_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef java_class_class_def = {
	"JavaClass",
	.finalizer = java_class_class_finalizer
};

static JSValue java_class_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, JavaClass::__class_id);
	if (JS_IsException(obj))
		return obj;

	JavaClass *java_class_class;
	if (argc == 1) 
		java_class_class = static_cast<JavaClass *>(Variant(*argv).operator Object *());
	else 
		java_class_class = memnew(JavaClass);
	if (!java_class_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, java_class_class);
	return obj;
}

static void define_java_class_property(JSContext *ctx, JSValue proto) {
	
}

static void define_java_class_enum(JSContext *ctx, JSValue proto) {
}

static int js_java_class_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["JavaClass"] = JavaClass::__class_id;
	class_id_list.insert(JavaClass::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), JavaClass::__class_id, &java_class_class_def);

	JSValue proto = JS_NewObjectClass(ctx, JavaClass::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, JavaClass::__class_id, proto);

	define_java_class_property(ctx, proto);
	define_java_class_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, java_class_class_constructor, "JavaClass", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "JavaClass", ctor);

	return 0;
}

JSModuleDef *_js_init_java_class_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_java_class_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "JavaClass");
	return m;
}

JSModuleDef *js_init_java_class_module(JSContext *ctx) {
	return _js_init_java_class_module(ctx, "@godot/classes/java_class");
}

void register_java_class() {
	JavaClass::__init_js_class_id();
	js_init_java_class_module(ctx);
}