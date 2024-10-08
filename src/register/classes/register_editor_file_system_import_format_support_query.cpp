
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/editor_file_system_import_format_support_query.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_file_system_import_format_support_query_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorFileSystemImportFormatSupportQuery *editor_file_system_import_format_support_query = static_cast<EditorFileSystemImportFormatSupportQuery *>(JS_GetOpaque(val, EditorFileSystemImportFormatSupportQuery::__class_id));
	if (editor_file_system_import_format_support_query)
		EditorFileSystemImportFormatSupportQuery::free(nullptr, editor_file_system_import_format_support_query);
}

static JSClassDef editor_file_system_import_format_support_query_class_def = {
	"EditorFileSystemImportFormatSupportQuery",
	.finalizer = editor_file_system_import_format_support_query_class_finalizer
};

static JSValue editor_file_system_import_format_support_query_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorFileSystemImportFormatSupportQuery *editor_file_system_import_format_support_query_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorFileSystemImportFormatSupportQuery::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_file_system_import_format_support_query_class = memnew(EditorFileSystemImportFormatSupportQuery);
	if (!editor_file_system_import_format_support_query_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_file_system_import_format_support_query_class);
	return obj;
}

static int js_editor_file_system_import_format_support_query_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorFileSystemImportFormatSupportQuery::__class_id);
	classes["EditorFileSystemImportFormatSupportQuery"] = EditorFileSystemImportFormatSupportQuery::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorFileSystemImportFormatSupportQuery::__class_id, &editor_file_system_import_format_support_query_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorFileSystemImportFormatSupportQuery::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, editor_file_system_import_format_support_query_class_constructor, "EditorFileSystemImportFormatSupportQuery", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorFileSystemImportFormatSupportQuery", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_file_system_import_format_support_query_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_file_system_import_format_support_query_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorFileSystemImportFormatSupportQuery");
	return m;
}

JSModuleDef *js_init_editor_file_system_import_format_support_query_module(JSContext *ctx) {
	return _js_init_editor_file_system_import_format_support_query_module(ctx, "godot/classes/editor_file_system_import_format_support_query");
}

void register_editor_file_system_import_format_support_query() {
	js_init_editor_file_system_import_format_support_query_module(ctx);
}