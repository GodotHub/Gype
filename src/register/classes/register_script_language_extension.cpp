
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/classes/script_language.hpp>
#include <godot_cpp/classes/script_language_extension.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void script_language_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	ScriptLanguageExtension *script_language_extension = static_cast<ScriptLanguageExtension *>(JS_GetOpaque(val, ScriptLanguageExtension::__class_id));
	if (script_language_extension)
		ScriptLanguageExtension::free(nullptr, script_language_extension);
}

static JSClassDef script_language_extension_class_def = {
	"ScriptLanguageExtension",
	.finalizer = script_language_extension_class_finalizer
};

static JSValue script_language_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ScriptLanguageExtension *script_language_extension_class;
	JSValue obj = JS_NewObjectClass(ctx, ScriptLanguageExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	script_language_extension_class = memnew(ScriptLanguageExtension);
	if (!script_language_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, script_language_extension_class);
	return obj;
}

static int js_script_language_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ScriptLanguageExtension::__class_id);
	classes["ScriptLanguageExtension"] = ScriptLanguageExtension::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ScriptLanguageExtension::__class_id, &script_language_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, ScriptLanguage::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ScriptLanguageExtension::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, script_language_extension_class_constructor, "ScriptLanguageExtension", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ScriptLanguageExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_script_language_extension_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_script_language_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ScriptLanguageExtension");
	return m;
}

JSModuleDef *js_init_script_language_extension_module(JSContext *ctx) {
	return _js_init_script_language_extension_module(ctx, "godot/classes/script_language_extension");
}

void register_script_language_extension() {
	js_init_script_language_extension_module(ctx);
}