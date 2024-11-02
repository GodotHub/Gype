
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/editor_node3d_gizmo.hpp>
#include <godot_cpp/classes/standard_material3d.hpp>
#include <godot_cpp/classes/editor_node3d_gizmo_plugin.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_node3d_gizmo_plugin_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef editor_node3d_gizmo_plugin_class_def = {
	"EditorNode3DGizmoPlugin",
	.finalizer = editor_node3d_gizmo_plugin_class_finalizer
};

static JSValue editor_node3d_gizmo_plugin_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorNode3DGizmoPlugin::__class_id);
	if (JS_IsException(obj))
		return obj;

	EditorNode3DGizmoPlugin *editor_node3d_gizmo_plugin_class;
	if (argc == 1) 
		editor_node3d_gizmo_plugin_class = static_cast<EditorNode3DGizmoPlugin *>(Variant(*argv).operator Object *());
	else 
		editor_node3d_gizmo_plugin_class = memnew(EditorNode3DGizmoPlugin);
	if (!editor_node3d_gizmo_plugin_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_node3d_gizmo_plugin_class);
	return obj;
}
static JSValue editor_node3d_gizmo_plugin_class_create_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorNode3DGizmoPlugin::create_material, ctx, this_val, argc, argv);
};
static JSValue editor_node3d_gizmo_plugin_class_create_icon_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorNode3DGizmoPlugin::create_icon_material, ctx, this_val, argc, argv);
};
static JSValue editor_node3d_gizmo_plugin_class_create_handle_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorNode3DGizmoPlugin::create_handle_material, ctx, this_val, argc, argv);
};
static JSValue editor_node3d_gizmo_plugin_class_add_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorNode3DGizmoPlugin::add_material, ctx, this_val, argc, argv);
};
static JSValue editor_node3d_gizmo_plugin_class_get_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorNode3DGizmoPlugin::get_material, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry editor_node3d_gizmo_plugin_class_proto_funcs[] = {
	JS_CFUNC_DEF("create_material", 5, &editor_node3d_gizmo_plugin_class_create_material),
	JS_CFUNC_DEF("create_icon_material", 4, &editor_node3d_gizmo_plugin_class_create_icon_material),
	JS_CFUNC_DEF("create_handle_material", 3, &editor_node3d_gizmo_plugin_class_create_handle_material),
	JS_CFUNC_DEF("add_material", 2, &editor_node3d_gizmo_plugin_class_add_material),
	JS_CFUNC_DEF("get_material", 2, &editor_node3d_gizmo_plugin_class_get_material),
};

static void define_editor_node3d_gizmo_plugin_property(JSContext *ctx, JSValue proto) {
	
}

static void define_editor_node3d_gizmo_plugin_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_node3d_gizmo_plugin_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["EditorNode3DGizmoPlugin"] = EditorNode3DGizmoPlugin::__class_id;
	class_id_list.insert(EditorNode3DGizmoPlugin::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorNode3DGizmoPlugin::__class_id, &editor_node3d_gizmo_plugin_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorNode3DGizmoPlugin::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorNode3DGizmoPlugin::__class_id, proto);

	define_editor_node3d_gizmo_plugin_property(ctx, proto);
	define_editor_node3d_gizmo_plugin_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_node3d_gizmo_plugin_class_proto_funcs, _countof(editor_node3d_gizmo_plugin_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, editor_node3d_gizmo_plugin_class_constructor, "EditorNode3DGizmoPlugin", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorNode3DGizmoPlugin", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_node3d_gizmo_plugin_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_node3d_gizmo_plugin_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorNode3DGizmoPlugin");
	return m;
}

JSModuleDef *js_init_editor_node3d_gizmo_plugin_module(JSContext *ctx) {
	return _js_init_editor_node3d_gizmo_plugin_module(ctx, "@godot/classes/editor_node3d_gizmo_plugin");
}

void register_editor_node3d_gizmo_plugin() {
	EditorNode3DGizmoPlugin::__init_js_class_id();
	js_init_editor_node3d_gizmo_plugin_module(ctx);
}