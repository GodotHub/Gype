
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/classes/script_language.hpp>
#include <godot_cpp/classes/script_language_extension.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void script_language_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef script_language_extension_class_def = {
	"ScriptLanguageExtension",
	.finalizer = script_language_extension_class_finalizer
};

static JSValue script_language_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ScriptLanguageExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	ScriptLanguageExtension *script_language_extension_class = memnew(ScriptLanguageExtension);
	if (!script_language_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, script_language_extension_class);
	return obj;
}

void define_script_language_extension_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue LookupResultType_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, LookupResultType_obj, "LOOKUP_RESULT_SCRIPT_LOCATION", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, LookupResultType_obj, "LOOKUP_RESULT_CLASS", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, LookupResultType_obj, "LOOKUP_RESULT_CLASS_CONSTANT", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, LookupResultType_obj, "LOOKUP_RESULT_CLASS_PROPERTY", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, LookupResultType_obj, "LOOKUP_RESULT_CLASS_METHOD", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, LookupResultType_obj, "LOOKUP_RESULT_CLASS_SIGNAL", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, LookupResultType_obj, "LOOKUP_RESULT_CLASS_ENUM", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, LookupResultType_obj, "LOOKUP_RESULT_CLASS_TBD_GLOBALSCOPE", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, LookupResultType_obj, "LOOKUP_RESULT_CLASS_ANNOTATION", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, LookupResultType_obj, "LOOKUP_RESULT_MAX", JS_NewInt64(ctx, 9));
	JS_SetPropertyStr(ctx, proto, "LookupResultType", LookupResultType_obj);
	JSValue CodeCompletionLocation_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, CodeCompletionLocation_obj, "LOCATION_LOCAL", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, CodeCompletionLocation_obj, "LOCATION_PARENT_MASK", JS_NewInt64(ctx, 256));
	JS_SetPropertyStr(ctx, CodeCompletionLocation_obj, "LOCATION_OTHER_USER_CODE", JS_NewInt64(ctx, 512));
	JS_SetPropertyStr(ctx, CodeCompletionLocation_obj, "LOCATION_OTHER", JS_NewInt64(ctx, 1024));
	JS_SetPropertyStr(ctx, proto, "CodeCompletionLocation", CodeCompletionLocation_obj);
	JSValue CodeCompletionKind_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, CodeCompletionKind_obj, "CODE_COMPLETION_KIND_CLASS", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, CodeCompletionKind_obj, "CODE_COMPLETION_KIND_FUNCTION", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, CodeCompletionKind_obj, "CODE_COMPLETION_KIND_SIGNAL", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, CodeCompletionKind_obj, "CODE_COMPLETION_KIND_VARIABLE", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, CodeCompletionKind_obj, "CODE_COMPLETION_KIND_MEMBER", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, CodeCompletionKind_obj, "CODE_COMPLETION_KIND_ENUM", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, CodeCompletionKind_obj, "CODE_COMPLETION_KIND_CONSTANT", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, CodeCompletionKind_obj, "CODE_COMPLETION_KIND_NODE_PATH", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, CodeCompletionKind_obj, "CODE_COMPLETION_KIND_FILE_PATH", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, CodeCompletionKind_obj, "CODE_COMPLETION_KIND_PLAIN_TEXT", JS_NewInt64(ctx, 9));
	JS_SetPropertyStr(ctx, CodeCompletionKind_obj, "CODE_COMPLETION_KIND_MAX", JS_NewInt64(ctx, 10));
	JS_SetPropertyStr(ctx, proto, "CodeCompletionKind", CodeCompletionKind_obj);
}

static int js_script_language_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ScriptLanguageExtension::__class_id);
	classes["ScriptLanguageExtension"] = ScriptLanguageExtension::__class_id;
	class_id_list.insert(ScriptLanguageExtension::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ScriptLanguageExtension::__class_id, &script_language_extension_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ScriptLanguageExtension::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, ScriptLanguage::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ScriptLanguageExtension::__class_id, proto);

	define_script_language_extension_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, script_language_extension_class_constructor, "ScriptLanguageExtension", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ScriptLanguageExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_script_language_extension_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/script_language';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	ScriptLanguageExtension::__init_js_class_id();
	js_init_script_language_extension_module(ctx);
}