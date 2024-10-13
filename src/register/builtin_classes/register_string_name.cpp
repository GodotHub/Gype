
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/string_name.hpp>

using namespace godot;

static void string_name_class_finalizer(JSRuntime *rt, JSValue val) {
	StringName *string_name = static_cast<StringName *>(JS_GetOpaque(val, StringName::__class_id));
	if (string_name)
		memfree(string_name);
}

static JSClassDef string_name_class_def = {
	"StringName",
	.finalizer = string_name_class_finalizer
};

static JSValue string_name_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	StringName *string_name_class;
	JSValue obj = JS_NewObjectClass(ctx, StringName::__class_id);
	if (JS_IsException(obj))
		return obj;
	string_name_class = memnew(StringName);
	if (!string_name_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, string_name_class);
	return obj;
}

void define_string_name_property(JSContext *ctx, JSValue obj) {
}

static int js_string_name_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&StringName::__class_id);
	classes["StringName"] = StringName::__class_id;
	class_id_list.insert(StringName::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), StringName::__class_id, &string_name_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, StringName::__class_id, proto);
	define_string_name_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, string_name_class_constructor, "StringName", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "StringName", ctor);

	return 0;
}

JSModuleDef *_js_init_string_name_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_string_name_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StringName");
	return m;
}

JSModuleDef *js_init_string_name_module(JSContext *ctx) {
	return _js_init_string_name_module(ctx, "godot/classes/string_name");
}

void register_string_name() {
	StringName::__init_js_class_id();
	js_init_string_name_module(ctx);
}