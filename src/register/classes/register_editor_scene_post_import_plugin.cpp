
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/editor_scene_post_import_plugin.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_scene_post_import_plugin_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorScenePostImportPlugin *editor_scene_post_import_plugin = static_cast<EditorScenePostImportPlugin *>(JS_GetOpaque(val, EditorScenePostImportPlugin::__class_id));
	if (editor_scene_post_import_plugin)
		EditorScenePostImportPlugin::free(nullptr, editor_scene_post_import_plugin);
}

static JSClassDef editor_scene_post_import_plugin_class_def = {
	"EditorScenePostImportPlugin",
	.finalizer = editor_scene_post_import_plugin_class_finalizer
};

static JSValue editor_scene_post_import_plugin_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorScenePostImportPlugin *editor_scene_post_import_plugin_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorScenePostImportPlugin::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_scene_post_import_plugin_class = memnew(EditorScenePostImportPlugin);
	if (!editor_scene_post_import_plugin_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_scene_post_import_plugin_class);
	return obj;
}
static JSValue editor_scene_post_import_plugin_class_get_option_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorScenePostImportPlugin::get_option_value, EditorScenePostImportPlugin::__class_id, ctx, this_val, argv);
};
static JSValue editor_scene_post_import_plugin_class_add_import_option(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorScenePostImportPlugin::add_import_option, EditorScenePostImportPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_scene_post_import_plugin_class_add_import_option_advanced(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorScenePostImportPlugin::add_import_option_advanced, EditorScenePostImportPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry editor_scene_post_import_plugin_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_option_value", 1, &editor_scene_post_import_plugin_class_get_option_value),
	JS_CFUNC_DEF("add_import_option", 2, &editor_scene_post_import_plugin_class_add_import_option),
	JS_CFUNC_DEF("add_import_option_advanced", 6, &editor_scene_post_import_plugin_class_add_import_option_advanced),
};

static int js_editor_scene_post_import_plugin_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorScenePostImportPlugin::__class_id);
	classes["EditorScenePostImportPlugin"] = EditorScenePostImportPlugin::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorScenePostImportPlugin::__class_id, &editor_scene_post_import_plugin_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorScenePostImportPlugin::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_scene_post_import_plugin_class_proto_funcs, _countof(editor_scene_post_import_plugin_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_scene_post_import_plugin_class_constructor, "EditorScenePostImportPlugin", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorScenePostImportPlugin", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_scene_post_import_plugin_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_scene_post_import_plugin_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorScenePostImportPlugin");
	return m;
}

JSModuleDef *js_init_editor_scene_post_import_plugin_module(JSContext *ctx) {
	return _js_init_editor_scene_post_import_plugin_module(ctx, "godot/classes/editor_scene_post_import_plugin");
}

void register_editor_scene_post_import_plugin() {
	js_init_editor_scene_post_import_plugin_module(ctx);
}