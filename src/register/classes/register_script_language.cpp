
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/script_language.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void script_language_class_finalizer(JSRuntime *rt, JSValue val) {
	ScriptLanguage *script_language = static_cast<ScriptLanguage *>(JS_GetOpaque(val, ScriptLanguage::__class_id));
	if (script_language)
		ScriptLanguage::free(nullptr, script_language);
}

static JSClassDef script_language_class_def = {
	"ScriptLanguage",
	.finalizer = script_language_class_finalizer
};

static JSValue script_language_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ScriptLanguage *script_language_class;
	JSValue obj = JS_NewObjectClass(ctx, ScriptLanguage::__class_id);
	if (JS_IsException(obj))
		return obj;
	script_language_class = memnew(ScriptLanguage);
	if (!script_language_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, script_language_class);
	return obj;
}

static int js_script_language_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ScriptLanguage::__class_id);
	classes["ScriptLanguage"] = ScriptLanguage::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ScriptLanguage::__class_id, &script_language_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ScriptLanguage::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, script_language_class_constructor, "ScriptLanguage", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ScriptLanguage", ctor);

	return 0;
}

JSModuleDef *_js_init_script_language_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_script_language_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ScriptLanguage");
	return m;
}

JSModuleDef *js_init_script_language_module(JSContext *ctx) {
	return _js_init_script_language_module(ctx, "godot/classes/script_language");
}

void register_script_language() {
	js_init_script_language_module(ctx);
}