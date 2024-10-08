
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/array_mesh.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh_data_tool.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void mesh_data_tool_class_finalizer(JSRuntime *rt, JSValue val) {
	MeshDataTool *mesh_data_tool = static_cast<MeshDataTool *>(JS_GetOpaque(val, MeshDataTool::__class_id));
	if (mesh_data_tool)
		MeshDataTool::free(nullptr, mesh_data_tool);
}

static JSClassDef mesh_data_tool_class_def = {
	"MeshDataTool",
	.finalizer = mesh_data_tool_class_finalizer
};

static JSValue mesh_data_tool_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	MeshDataTool *mesh_data_tool_class;
	JSValue obj = JS_NewObjectClass(ctx, MeshDataTool::__class_id);
	if (JS_IsException(obj))
		return obj;
	mesh_data_tool_class = memnew(MeshDataTool);
	if (!mesh_data_tool_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, mesh_data_tool_class);
	return obj;
}
static JSValue mesh_data_tool_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshDataTool::clear, MeshDataTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_data_tool_class_create_from_surface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&MeshDataTool::create_from_surface, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_commit_to_surface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&MeshDataTool::commit_to_surface, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_get_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_format, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_get_vertex_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_vertex_count, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_get_edge_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_edge_count, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_get_face_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_face_count, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_set_vertex(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshDataTool::set_vertex, MeshDataTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_data_tool_class_get_vertex(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_vertex, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_set_vertex_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshDataTool::set_vertex_normal, MeshDataTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_data_tool_class_get_vertex_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_vertex_normal, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_set_vertex_tangent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshDataTool::set_vertex_tangent, MeshDataTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_data_tool_class_get_vertex_tangent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_vertex_tangent, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_set_vertex_uv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshDataTool::set_vertex_uv, MeshDataTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_data_tool_class_get_vertex_uv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_vertex_uv, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_set_vertex_uv2(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshDataTool::set_vertex_uv2, MeshDataTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_data_tool_class_get_vertex_uv2(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_vertex_uv2, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_set_vertex_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshDataTool::set_vertex_color, MeshDataTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_data_tool_class_get_vertex_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_vertex_color, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_set_vertex_bones(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshDataTool::set_vertex_bones, MeshDataTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_data_tool_class_get_vertex_bones(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_vertex_bones, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_set_vertex_weights(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshDataTool::set_vertex_weights, MeshDataTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_data_tool_class_get_vertex_weights(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_vertex_weights, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_set_vertex_meta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshDataTool::set_vertex_meta, MeshDataTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_data_tool_class_get_vertex_meta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_vertex_meta, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_get_vertex_edges(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_vertex_edges, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_get_vertex_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_vertex_faces, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_get_edge_vertex(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_edge_vertex, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_get_edge_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_edge_faces, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_set_edge_meta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshDataTool::set_edge_meta, MeshDataTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_data_tool_class_get_edge_meta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_edge_meta, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_get_face_vertex(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_face_vertex, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_get_face_edge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_face_edge, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_set_face_meta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshDataTool::set_face_meta, MeshDataTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_data_tool_class_get_face_meta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_face_meta, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_get_face_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_face_normal, MeshDataTool::__class_id, ctx, this_val, argv);
};
static JSValue mesh_data_tool_class_set_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshDataTool::set_material, MeshDataTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_data_tool_class_get_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshDataTool::get_material, MeshDataTool::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry mesh_data_tool_class_proto_funcs[] = {
	JS_CFUNC_DEF("clear", 0, &mesh_data_tool_class_clear),
	JS_CFUNC_DEF("create_from_surface", 2, &mesh_data_tool_class_create_from_surface),
	JS_CFUNC_DEF("commit_to_surface", 2, &mesh_data_tool_class_commit_to_surface),
	JS_CFUNC_DEF("get_format", 0, &mesh_data_tool_class_get_format),
	JS_CFUNC_DEF("get_vertex_count", 0, &mesh_data_tool_class_get_vertex_count),
	JS_CFUNC_DEF("get_edge_count", 0, &mesh_data_tool_class_get_edge_count),
	JS_CFUNC_DEF("get_face_count", 0, &mesh_data_tool_class_get_face_count),
	JS_CFUNC_DEF("set_vertex", 2, &mesh_data_tool_class_set_vertex),
	JS_CFUNC_DEF("get_vertex", 1, &mesh_data_tool_class_get_vertex),
	JS_CFUNC_DEF("set_vertex_normal", 2, &mesh_data_tool_class_set_vertex_normal),
	JS_CFUNC_DEF("get_vertex_normal", 1, &mesh_data_tool_class_get_vertex_normal),
	JS_CFUNC_DEF("set_vertex_tangent", 2, &mesh_data_tool_class_set_vertex_tangent),
	JS_CFUNC_DEF("get_vertex_tangent", 1, &mesh_data_tool_class_get_vertex_tangent),
	JS_CFUNC_DEF("set_vertex_uv", 2, &mesh_data_tool_class_set_vertex_uv),
	JS_CFUNC_DEF("get_vertex_uv", 1, &mesh_data_tool_class_get_vertex_uv),
	JS_CFUNC_DEF("set_vertex_uv2", 2, &mesh_data_tool_class_set_vertex_uv2),
	JS_CFUNC_DEF("get_vertex_uv2", 1, &mesh_data_tool_class_get_vertex_uv2),
	JS_CFUNC_DEF("set_vertex_color", 2, &mesh_data_tool_class_set_vertex_color),
	JS_CFUNC_DEF("get_vertex_color", 1, &mesh_data_tool_class_get_vertex_color),
	JS_CFUNC_DEF("set_vertex_bones", 2, &mesh_data_tool_class_set_vertex_bones),
	JS_CFUNC_DEF("get_vertex_bones", 1, &mesh_data_tool_class_get_vertex_bones),
	JS_CFUNC_DEF("set_vertex_weights", 2, &mesh_data_tool_class_set_vertex_weights),
	JS_CFUNC_DEF("get_vertex_weights", 1, &mesh_data_tool_class_get_vertex_weights),
	JS_CFUNC_DEF("set_vertex_meta", 2, &mesh_data_tool_class_set_vertex_meta),
	JS_CFUNC_DEF("get_vertex_meta", 1, &mesh_data_tool_class_get_vertex_meta),
	JS_CFUNC_DEF("get_vertex_edges", 1, &mesh_data_tool_class_get_vertex_edges),
	JS_CFUNC_DEF("get_vertex_faces", 1, &mesh_data_tool_class_get_vertex_faces),
	JS_CFUNC_DEF("get_edge_vertex", 2, &mesh_data_tool_class_get_edge_vertex),
	JS_CFUNC_DEF("get_edge_faces", 1, &mesh_data_tool_class_get_edge_faces),
	JS_CFUNC_DEF("set_edge_meta", 2, &mesh_data_tool_class_set_edge_meta),
	JS_CFUNC_DEF("get_edge_meta", 1, &mesh_data_tool_class_get_edge_meta),
	JS_CFUNC_DEF("get_face_vertex", 2, &mesh_data_tool_class_get_face_vertex),
	JS_CFUNC_DEF("get_face_edge", 2, &mesh_data_tool_class_get_face_edge),
	JS_CFUNC_DEF("set_face_meta", 2, &mesh_data_tool_class_set_face_meta),
	JS_CFUNC_DEF("get_face_meta", 1, &mesh_data_tool_class_get_face_meta),
	JS_CFUNC_DEF("get_face_normal", 1, &mesh_data_tool_class_get_face_normal),
	JS_CFUNC_DEF("set_material", 1, &mesh_data_tool_class_set_material),
	JS_CFUNC_DEF("get_material", 0, &mesh_data_tool_class_get_material),
};

static int js_mesh_data_tool_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&MeshDataTool::__class_id);
	classes["MeshDataTool"] = MeshDataTool::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), MeshDataTool::__class_id, &mesh_data_tool_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MeshDataTool::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, mesh_data_tool_class_proto_funcs, _countof(mesh_data_tool_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, mesh_data_tool_class_constructor, "MeshDataTool", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "MeshDataTool", ctor);

	return 0;
}

JSModuleDef *_js_init_mesh_data_tool_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_mesh_data_tool_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MeshDataTool");
	return m;
}

JSModuleDef *js_init_mesh_data_tool_module(JSContext *ctx) {
	return _js_init_mesh_data_tool_module(ctx, "godot/classes/mesh_data_tool");
}

void register_mesh_data_tool() {
	js_init_mesh_data_tool_module(ctx);
}