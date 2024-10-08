
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/editor_node3d_gizmo.hpp>
#include <godot_cpp/classes/editor_node3d_gizmo_plugin.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/node3d_gizmo.hpp>
#include <godot_cpp/classes/skin_reference.hpp>
#include <godot_cpp/classes/triangle_mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_node3d_gizmo_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorNode3DGizmo *editor_node3d_gizmo = static_cast<EditorNode3DGizmo *>(JS_GetOpaque(val, EditorNode3DGizmo::__class_id));
	if (editor_node3d_gizmo)
		EditorNode3DGizmo::free(nullptr, editor_node3d_gizmo);
}

static JSClassDef editor_node3d_gizmo_class_def = {
	"EditorNode3DGizmo",
	.finalizer = editor_node3d_gizmo_class_finalizer
};

static JSValue editor_node3d_gizmo_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorNode3DGizmo *editor_node3d_gizmo_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorNode3DGizmo::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_node3d_gizmo_class = memnew(EditorNode3DGizmo);
	if (!editor_node3d_gizmo_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_node3d_gizmo_class);
	return obj;
}
static JSValue editor_node3d_gizmo_class_add_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorNode3DGizmo::add_lines, EditorNode3DGizmo::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_node3d_gizmo_class_add_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorNode3DGizmo::add_mesh, EditorNode3DGizmo::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_node3d_gizmo_class_add_collision_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorNode3DGizmo::add_collision_segments, EditorNode3DGizmo::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_node3d_gizmo_class_add_collision_triangles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorNode3DGizmo::add_collision_triangles, EditorNode3DGizmo::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_node3d_gizmo_class_add_unscaled_billboard(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorNode3DGizmo::add_unscaled_billboard, EditorNode3DGizmo::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_node3d_gizmo_class_add_handles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorNode3DGizmo::add_handles, EditorNode3DGizmo::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_node3d_gizmo_class_set_node_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorNode3DGizmo::set_node_3d, EditorNode3DGizmo::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_node3d_gizmo_class_get_node_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorNode3DGizmo::get_node_3d, EditorNode3DGizmo::__class_id, ctx, this_val, argv);
};
static JSValue editor_node3d_gizmo_class_get_plugin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorNode3DGizmo::get_plugin, EditorNode3DGizmo::__class_id, ctx, this_val, argv);
};
static JSValue editor_node3d_gizmo_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorNode3DGizmo::clear, EditorNode3DGizmo::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_node3d_gizmo_class_set_hidden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorNode3DGizmo::set_hidden, EditorNode3DGizmo::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_node3d_gizmo_class_is_subgizmo_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorNode3DGizmo::is_subgizmo_selected, EditorNode3DGizmo::__class_id, ctx, this_val, argv);
};
static JSValue editor_node3d_gizmo_class_get_subgizmo_selection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorNode3DGizmo::get_subgizmo_selection, EditorNode3DGizmo::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry editor_node3d_gizmo_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_lines", 4, &editor_node3d_gizmo_class_add_lines),
	JS_CFUNC_DEF("add_mesh", 4, &editor_node3d_gizmo_class_add_mesh),
	JS_CFUNC_DEF("add_collision_segments", 1, &editor_node3d_gizmo_class_add_collision_segments),
	JS_CFUNC_DEF("add_collision_triangles", 1, &editor_node3d_gizmo_class_add_collision_triangles),
	JS_CFUNC_DEF("add_unscaled_billboard", 3, &editor_node3d_gizmo_class_add_unscaled_billboard),
	JS_CFUNC_DEF("add_handles", 5, &editor_node3d_gizmo_class_add_handles),
	JS_CFUNC_DEF("set_node_3d", 1, &editor_node3d_gizmo_class_set_node_3d),
	JS_CFUNC_DEF("get_node_3d", 0, &editor_node3d_gizmo_class_get_node_3d),
	JS_CFUNC_DEF("get_plugin", 0, &editor_node3d_gizmo_class_get_plugin),
	JS_CFUNC_DEF("clear", 0, &editor_node3d_gizmo_class_clear),
	JS_CFUNC_DEF("set_hidden", 1, &editor_node3d_gizmo_class_set_hidden),
	JS_CFUNC_DEF("is_subgizmo_selected", 1, &editor_node3d_gizmo_class_is_subgizmo_selected),
	JS_CFUNC_DEF("get_subgizmo_selection", 0, &editor_node3d_gizmo_class_get_subgizmo_selection),
};

static int js_editor_node3d_gizmo_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorNode3DGizmo::__class_id);
	classes["EditorNode3DGizmo"] = EditorNode3DGizmo::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorNode3DGizmo::__class_id, &editor_node3d_gizmo_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3DGizmo::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorNode3DGizmo::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_node3d_gizmo_class_proto_funcs, _countof(editor_node3d_gizmo_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_node3d_gizmo_class_constructor, "EditorNode3DGizmo", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorNode3DGizmo", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_node3d_gizmo_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_node3d_gizmo_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorNode3DGizmo");
	return m;
}

JSModuleDef *js_init_editor_node3d_gizmo_module(JSContext *ctx) {
	return _js_init_editor_node3d_gizmo_module(ctx, "godot/classes/editor_node3d_gizmo");
}

void register_editor_node3d_gizmo() {
	js_init_editor_node3d_gizmo_module(ctx);
}