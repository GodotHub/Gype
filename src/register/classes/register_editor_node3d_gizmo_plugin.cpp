
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/editor_node3d_gizmo.hpp>
#include <godot_cpp/classes/editor_node3d_gizmo_plugin.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/standard_material3d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_node3d_gizmo_plugin_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorNode3DGizmoPlugin *editor_node3d_gizmo_plugin = static_cast<EditorNode3DGizmoPlugin *>(JS_GetOpaque(val, EditorNode3DGizmoPlugin::__class_id));
	if (editor_node3d_gizmo_plugin)
		EditorNode3DGizmoPlugin::free(nullptr, editor_node3d_gizmo_plugin);
}

static JSClassDef editor_node3d_gizmo_plugin_class_def = {
	"EditorNode3DGizmoPlugin",
	.finalizer = editor_node3d_gizmo_plugin_class_finalizer
};

static JSValue editor_node3d_gizmo_plugin_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorNode3DGizmoPlugin *editor_node3d_gizmo_plugin_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorNode3DGizmoPlugin::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_node3d_gizmo_plugin_class = memnew(EditorNode3DGizmoPlugin);
	if (!editor_node3d_gizmo_plugin_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_node3d_gizmo_plugin_class);
	return obj;
}
static JSValue editor_node3d_gizmo_plugin_class_create_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorNode3DGizmoPlugin::create_material, EditorNode3DGizmoPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_node3d_gizmo_plugin_class_create_icon_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorNode3DGizmoPlugin::create_icon_material, EditorNode3DGizmoPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_node3d_gizmo_plugin_class_create_handle_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorNode3DGizmoPlugin::create_handle_material, EditorNode3DGizmoPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_node3d_gizmo_plugin_class_add_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorNode3DGizmoPlugin::add_material, EditorNode3DGizmoPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_node3d_gizmo_plugin_class_get_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorNode3DGizmoPlugin::get_material, EditorNode3DGizmoPlugin::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry editor_node3d_gizmo_plugin_class_proto_funcs[] = {
	JS_CFUNC_DEF("create_material", 5, &editor_node3d_gizmo_plugin_class_create_material),
	JS_CFUNC_DEF("create_icon_material", 4, &editor_node3d_gizmo_plugin_class_create_icon_material),
	JS_CFUNC_DEF("create_handle_material", 3, &editor_node3d_gizmo_plugin_class_create_handle_material),
	JS_CFUNC_DEF("add_material", 2, &editor_node3d_gizmo_plugin_class_add_material),
	JS_CFUNC_DEF("get_material", 2, &editor_node3d_gizmo_plugin_class_get_material),
};

static int js_editor_node3d_gizmo_plugin_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorNode3DGizmoPlugin::__class_id);
	classes["EditorNode3DGizmoPlugin"] = EditorNode3DGizmoPlugin::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorNode3DGizmoPlugin::__class_id, &editor_node3d_gizmo_plugin_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorNode3DGizmoPlugin::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_node3d_gizmo_plugin_class_proto_funcs, _countof(editor_node3d_gizmo_plugin_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_node3d_gizmo_plugin_class_constructor, "EditorNode3DGizmoPlugin", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorNode3DGizmoPlugin", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_node3d_gizmo_plugin_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_node3d_gizmo_plugin_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorNode3DGizmoPlugin");
	return m;
}

JSModuleDef *js_init_editor_node3d_gizmo_plugin_module(JSContext *ctx) {
	return _js_init_editor_node3d_gizmo_plugin_module(ctx, "godot/classes/editor_node3d_gizmo_plugin");
}

void register_editor_node3d_gizmo_plugin() {
	js_init_editor_node3d_gizmo_plugin_module(ctx);
}