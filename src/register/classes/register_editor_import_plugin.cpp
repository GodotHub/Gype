
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/editor_import_plugin.hpp>
#include <godot_cpp/classes/resource_importer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_import_plugin_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef editor_import_plugin_class_def = {
	"EditorImportPlugin",
	.finalizer = editor_import_plugin_class_finalizer
};

static JSValue editor_import_plugin_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorImportPlugin::__class_id);
	if (JS_IsException(obj))
		return obj;

	EditorImportPlugin *editor_import_plugin_class;
	if (argc == 1) 
		editor_import_plugin_class = static_cast<EditorImportPlugin *>(Variant(*argv).operator Object *());
	else 
		editor_import_plugin_class = memnew(EditorImportPlugin);
	if (!editor_import_plugin_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_import_plugin_class);
	return obj;
}
static JSValue editor_import_plugin_class_append_import_external_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorImportPlugin::append_import_external_resource, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry editor_import_plugin_class_proto_funcs[] = {
	JS_CFUNC_DEF("append_import_external_resource", 4, &editor_import_plugin_class_append_import_external_resource),
};

static void define_editor_import_plugin_property(JSContext *ctx, JSValue proto) {
	
}

static void define_editor_import_plugin_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_import_plugin_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["EditorImportPlugin"] = EditorImportPlugin::__class_id;
	class_id_list.insert(EditorImportPlugin::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorImportPlugin::__class_id, &editor_import_plugin_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorImportPlugin::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, ResourceImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorImportPlugin::__class_id, proto);

	define_editor_import_plugin_property(ctx, proto);
	define_editor_import_plugin_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_import_plugin_class_proto_funcs, _countof(editor_import_plugin_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, editor_import_plugin_class_constructor, "EditorImportPlugin", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "EditorImportPlugin", ctor);
	constructors[EditorImportPlugin::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_editor_import_plugin_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/resource_importer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_import_plugin_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorImportPlugin");
	return m;
}

JSModuleDef *js_init_editor_import_plugin_module(JSContext *ctx) {
	return _js_init_editor_import_plugin_module(ctx, "@godot/classes/editor_import_plugin");
}

void register_editor_import_plugin() {
	EditorImportPlugin::__init_js_class_id();
	js_init_editor_import_plugin_module(ctx);
}