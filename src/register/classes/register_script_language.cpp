
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/script_language.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void script_language_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef script_language_class_def = {
	"ScriptLanguage",
	.finalizer = script_language_class_finalizer
};

static JSValue script_language_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ScriptLanguage::__class_id);
	if (JS_IsException(obj))
		return obj;

	ScriptLanguage *script_language_class;
	if (argc == 1) 
		script_language_class = static_cast<ScriptLanguage *>(Variant(*argv).operator Object *());
	else 
		script_language_class = memnew(ScriptLanguage);
	if (!script_language_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, script_language_class);
	return obj;
}

static void define_script_language_property(JSContext *ctx, JSValue proto) {
	
}

static void define_script_language_enum(JSContext *ctx, JSValue proto) {
	JSValue ScriptNameCasing_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, ScriptNameCasing_obj, "SCRIPT_NAME_CASING_AUTO", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, ScriptNameCasing_obj, "SCRIPT_NAME_CASING_PASCAL_CASE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, ScriptNameCasing_obj, "SCRIPT_NAME_CASING_SNAKE_CASE", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, ScriptNameCasing_obj, "SCRIPT_NAME_CASING_KEBAB_CASE", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "ScriptNameCasing", ScriptNameCasing_obj);
}

static int js_script_language_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["ScriptLanguage"] = ScriptLanguage::__class_id;
	class_id_list.insert(ScriptLanguage::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ScriptLanguage::__class_id, &script_language_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ScriptLanguage::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ScriptLanguage::__class_id, proto);

	define_script_language_property(ctx, proto);
	define_script_language_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, script_language_class_constructor, "ScriptLanguage", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "ScriptLanguage", ctor);
	constructors[ScriptLanguage::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_script_language_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/godot_object';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_script_language_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ScriptLanguage");
	return m;
}

JSModuleDef *js_init_script_language_module(JSContext *ctx) {
	return _js_init_script_language_module(ctx, "@godot/classes/script_language");
}

void register_script_language() {
	ScriptLanguage::__init_js_class_id();
	js_init_script_language_module(ctx);
}