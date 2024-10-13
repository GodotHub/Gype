
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/editor_translation_parser_plugin.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_translation_parser_plugin_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorTranslationParserPlugin *editor_translation_parser_plugin = static_cast<EditorTranslationParserPlugin *>(JS_GetOpaque(val, EditorTranslationParserPlugin::__class_id));
	if (editor_translation_parser_plugin)
		EditorTranslationParserPlugin::free(nullptr, editor_translation_parser_plugin);
}

static JSClassDef editor_translation_parser_plugin_class_def = {
	"EditorTranslationParserPlugin",
	.finalizer = editor_translation_parser_plugin_class_finalizer
};

static JSValue editor_translation_parser_plugin_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorTranslationParserPlugin *editor_translation_parser_plugin_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorTranslationParserPlugin::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_translation_parser_plugin_class = memnew(EditorTranslationParserPlugin);
	if (!editor_translation_parser_plugin_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_translation_parser_plugin_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}

void define_editor_translation_parser_plugin_property(JSContext *ctx, JSValue obj) {
}

static int js_editor_translation_parser_plugin_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&EditorTranslationParserPlugin::__class_id);
	classes["EditorTranslationParserPlugin"] = EditorTranslationParserPlugin::__class_id;
	class_id_list.insert(EditorTranslationParserPlugin::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorTranslationParserPlugin::__class_id, &editor_translation_parser_plugin_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorTranslationParserPlugin::__class_id, proto);
	define_editor_translation_parser_plugin_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, editor_translation_parser_plugin_class_constructor, "EditorTranslationParserPlugin", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorTranslationParserPlugin", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_translation_parser_plugin_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_translation_parser_plugin_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorTranslationParserPlugin");
	return m;
}

JSModuleDef *js_init_editor_translation_parser_plugin_module(JSContext *ctx) {
	return _js_init_editor_translation_parser_plugin_module(ctx, "godot/classes/editor_translation_parser_plugin");
}

void register_editor_translation_parser_plugin() {
	EditorTranslationParserPlugin::__init_js_class_id();
	js_init_editor_translation_parser_plugin_module(ctx);
}