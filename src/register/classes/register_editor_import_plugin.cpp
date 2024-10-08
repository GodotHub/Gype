
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/editor_import_plugin.hpp>
#include <godot_cpp/classes/resource_importer.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void editor_import_plugin_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorImportPlugin *editor_import_plugin = static_cast<EditorImportPlugin *>(JS_GetOpaque(val, EditorImportPlugin::__class_id));
	if (editor_import_plugin)
		EditorImportPlugin::free(nullptr, editor_import_plugin);
}

static JSClassDef editor_import_plugin_class_def = {
	"EditorImportPlugin",
	.finalizer = editor_import_plugin_class_finalizer
};

static JSValue editor_import_plugin_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorImportPlugin *editor_import_plugin_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorImportPlugin::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_import_plugin_class = memnew(EditorImportPlugin);
	if (!editor_import_plugin_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_import_plugin_class);
	return obj;
}
static JSValue editor_import_plugin_class_append_import_external_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorImportPlugin::append_import_external_resource, EditorImportPlugin::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry editor_import_plugin_class_proto_funcs[] = {
	JS_CFUNC_DEF("append_import_external_resource", 4, &editor_import_plugin_class_append_import_external_resource),
};

static int js_editor_import_plugin_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorImportPlugin::__class_id);
	classes["EditorImportPlugin"] = EditorImportPlugin::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorImportPlugin::__class_id, &editor_import_plugin_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, ResourceImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorImportPlugin::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_import_plugin_class_proto_funcs, _countof(editor_import_plugin_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_import_plugin_class_constructor, "EditorImportPlugin", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorImportPlugin", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_import_plugin_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_import_plugin_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorImportPlugin");
	return m;
}

JSModuleDef *js_init_editor_import_plugin_module(JSContext *ctx) {
	return _js_init_editor_import_plugin_module(ctx, "godot/classes/editor_import_plugin");
}

void register_editor_import_plugin() {
	js_init_editor_import_plugin_module(ctx);
}