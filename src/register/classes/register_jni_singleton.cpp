
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/jni_singleton.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void jni_singleton_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef jni_singleton_class_def = {
	"JNISingleton",
	.finalizer = jni_singleton_class_finalizer
};

static JSValue jni_singleton_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, JNISingleton::__class_id);
	if (JS_IsException(obj))
		return obj;
	JNISingleton *jni_singleton_class = memnew(JNISingleton);
	if (!jni_singleton_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, jni_singleton_class);	
	return obj;
}

void define_jni_singleton_property(JSContext *ctx, JSValue obj) {
}

static int js_jni_singleton_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&JNISingleton::__class_id);
	classes["JNISingleton"] = JNISingleton::__class_id;
	class_id_list.insert(JNISingleton::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), JNISingleton::__class_id, &jni_singleton_class_def);

	JSValue proto = JS_NewObjectClass(ctx, JNISingleton::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, JNISingleton::__class_id, proto);

	define_jni_singleton_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, jni_singleton_class_constructor, "JNISingleton", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "JNISingleton", ctor);

	return 0;
}

JSModuleDef *_js_init_jni_singleton_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/object';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_jni_singleton_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "JNISingleton");
	return m;
}

JSModuleDef *js_init_jni_singleton_module(JSContext *ctx) {
	return _js_init_jni_singleton_module(ctx, "godot/classes/jni_singleton");
}

void register_jni_singleton() {
	JNISingleton::__init_js_class_id();
	js_init_jni_singleton_module(ctx);
}