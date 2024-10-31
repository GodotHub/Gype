
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/editor_file_system_import_format_support_query.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_file_system_import_format_support_query_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef editor_file_system_import_format_support_query_class_def = {
	"EditorFileSystemImportFormatSupportQuery",
	.finalizer = editor_file_system_import_format_support_query_class_finalizer
};

static JSValue editor_file_system_import_format_support_query_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorFileSystemImportFormatSupportQuery::__class_id);
	if (JS_IsException(obj))
		return obj;

	EditorFileSystemImportFormatSupportQuery *editor_file_system_import_format_support_query_class;
	if (argc == 1) 
		editor_file_system_import_format_support_query_class = static_cast<EditorFileSystemImportFormatSupportQuery *>(Variant(*argv).operator Object *());
	else 
		editor_file_system_import_format_support_query_class = memnew(EditorFileSystemImportFormatSupportQuery);
	if (!editor_file_system_import_format_support_query_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_file_system_import_format_support_query_class);
	return obj;
}

static void define_editor_file_system_import_format_support_query_property(JSContext *ctx, JSValue proto) {
	
}

static void define_editor_file_system_import_format_support_query_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_file_system_import_format_support_query_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["EditorFileSystemImportFormatSupportQuery"] = EditorFileSystemImportFormatSupportQuery::__class_id;
	class_id_list.insert(EditorFileSystemImportFormatSupportQuery::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorFileSystemImportFormatSupportQuery::__class_id, &editor_file_system_import_format_support_query_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorFileSystemImportFormatSupportQuery::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorFileSystemImportFormatSupportQuery::__class_id, proto);

	define_editor_file_system_import_format_support_query_property(ctx, proto);
	define_editor_file_system_import_format_support_query_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, editor_file_system_import_format_support_query_class_constructor, "EditorFileSystemImportFormatSupportQuery", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorFileSystemImportFormatSupportQuery", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_file_system_import_format_support_query_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_file_system_import_format_support_query_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorFileSystemImportFormatSupportQuery");
	return m;
}

JSModuleDef *js_init_editor_file_system_import_format_support_query_module(JSContext *ctx) {
	return _js_init_editor_file_system_import_format_support_query_module(ctx, "@godot/classes/editor_file_system_import_format_support_query");
}

void register_editor_file_system_import_format_support_query() {
	EditorFileSystemImportFormatSupportQuery::__init_js_class_id();
	js_init_editor_file_system_import_format_support_query_module(ctx);
}