
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/editor_scene_post_import_plugin.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_scene_post_import_plugin_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef editor_scene_post_import_plugin_class_def = {
	"EditorScenePostImportPlugin",
	.finalizer = editor_scene_post_import_plugin_class_finalizer
};

static JSValue editor_scene_post_import_plugin_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorScenePostImportPlugin::__class_id);
	if (JS_IsException(obj))
		return obj;
	EditorScenePostImportPlugin *editor_scene_post_import_plugin_class = memnew(EditorScenePostImportPlugin);
	if (!editor_scene_post_import_plugin_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_scene_post_import_plugin_class);	
	return obj;
}
static JSValue editor_scene_post_import_plugin_class_get_option_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&EditorScenePostImportPlugin::get_option_value, ctx, this_val, argc, argv);
};
static JSValue editor_scene_post_import_plugin_class_add_import_option(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&EditorScenePostImportPlugin::add_import_option, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_scene_post_import_plugin_class_add_import_option_advanced(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&EditorScenePostImportPlugin::add_import_option_advanced, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry editor_scene_post_import_plugin_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_option_value", 1, &editor_scene_post_import_plugin_class_get_option_value),
	JS_CFUNC_DEF("add_import_option", 2, &editor_scene_post_import_plugin_class_add_import_option),
	JS_CFUNC_DEF("add_import_option_advanced", 6, &editor_scene_post_import_plugin_class_add_import_option_advanced),
};

void define_editor_scene_post_import_plugin_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue InternalImportCategory_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, InternalImportCategory_obj, "INTERNAL_IMPORT_CATEGORY_NODE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, InternalImportCategory_obj, "INTERNAL_IMPORT_CATEGORY_MESH_3D_NODE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, InternalImportCategory_obj, "INTERNAL_IMPORT_CATEGORY_MESH", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, InternalImportCategory_obj, "INTERNAL_IMPORT_CATEGORY_MATERIAL", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, InternalImportCategory_obj, "INTERNAL_IMPORT_CATEGORY_ANIMATION", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, InternalImportCategory_obj, "INTERNAL_IMPORT_CATEGORY_ANIMATION_NODE", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, InternalImportCategory_obj, "INTERNAL_IMPORT_CATEGORY_SKELETON_3D_NODE", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, InternalImportCategory_obj, "INTERNAL_IMPORT_CATEGORY_MAX", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, proto, "InternalImportCategory", InternalImportCategory_obj);
}

static int js_editor_scene_post_import_plugin_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&EditorScenePostImportPlugin::__class_id);
	classes["EditorScenePostImportPlugin"] = EditorScenePostImportPlugin::__class_id;
	class_id_list.insert(EditorScenePostImportPlugin::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorScenePostImportPlugin::__class_id, &editor_scene_post_import_plugin_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorScenePostImportPlugin::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorScenePostImportPlugin::__class_id, proto);

	define_editor_scene_post_import_plugin_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_scene_post_import_plugin_class_proto_funcs, _countof(editor_scene_post_import_plugin_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, editor_scene_post_import_plugin_class_constructor, "EditorScenePostImportPlugin", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorScenePostImportPlugin", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_scene_post_import_plugin_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	EditorScenePostImportPlugin::__init_js_class_id();
	js_init_editor_scene_post_import_plugin_module(ctx);
}