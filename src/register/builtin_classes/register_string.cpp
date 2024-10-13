
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/string.hpp>

using namespace godot;

static void string_class_finalizer(JSRuntime *rt, JSValue val) {
	String *string = static_cast<String *>(JS_GetOpaque(val, String::__class_id));
	if (string)
		memfree(string);
}

static JSClassDef string_class_def = {
	"String",
	.finalizer = string_class_finalizer
};

static JSValue string_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	String *string_class;
	JSValue obj = JS_NewObjectClass(ctx, String::__class_id);
	if (JS_IsException(obj))
		return obj;
	string_class = memnew(String);
	if (!string_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, string_class);
	return obj;
}

void define_string_property(JSContext *ctx, JSValue obj) {
}

static int js_string_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&String::__class_id);
	classes["String"] = String::__class_id;
	class_id_list.insert(String::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), String::__class_id, &string_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, String::__class_id, proto);
	define_string_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, string_class_constructor, "String", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "String", ctor);

	return 0;
}

JSModuleDef *_js_init_string_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_string_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "String");
	return m;
}

JSModuleDef *js_init_string_module(JSContext *ctx) {
	return _js_init_string_module(ctx, "godot/classes/string");
}

void register_string() {
	String::__init_js_class_id();
	js_init_string_module(ctx);
}