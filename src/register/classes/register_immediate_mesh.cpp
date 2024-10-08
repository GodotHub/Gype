
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/immediate_mesh.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void immediate_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	ImmediateMesh *immediate_mesh = static_cast<ImmediateMesh *>(JS_GetOpaque(val, ImmediateMesh::__class_id));
	if (immediate_mesh)
		ImmediateMesh::free(nullptr, immediate_mesh);
}

static JSClassDef immediate_mesh_class_def = {
	"ImmediateMesh",
	.finalizer = immediate_mesh_class_finalizer
};

static JSValue immediate_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ImmediateMesh *immediate_mesh_class;
	JSValue obj = JS_NewObjectClass(ctx, ImmediateMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	immediate_mesh_class = memnew(ImmediateMesh);
	if (!immediate_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, immediate_mesh_class);
	return obj;
}
static JSValue immediate_mesh_class_surface_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImmediateMesh::surface_begin, ImmediateMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue immediate_mesh_class_surface_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImmediateMesh::surface_set_color, ImmediateMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue immediate_mesh_class_surface_set_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImmediateMesh::surface_set_normal, ImmediateMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue immediate_mesh_class_surface_set_tangent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImmediateMesh::surface_set_tangent, ImmediateMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue immediate_mesh_class_surface_set_uv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImmediateMesh::surface_set_uv, ImmediateMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue immediate_mesh_class_surface_set_uv2(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImmediateMesh::surface_set_uv2, ImmediateMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue immediate_mesh_class_surface_add_vertex(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImmediateMesh::surface_add_vertex, ImmediateMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue immediate_mesh_class_surface_add_vertex_2d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImmediateMesh::surface_add_vertex_2d, ImmediateMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue immediate_mesh_class_surface_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImmediateMesh::surface_end, ImmediateMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue immediate_mesh_class_clear_surfaces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImmediateMesh::clear_surfaces, ImmediateMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry immediate_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("surface_begin", 2, &immediate_mesh_class_surface_begin),
	JS_CFUNC_DEF("surface_set_color", 1, &immediate_mesh_class_surface_set_color),
	JS_CFUNC_DEF("surface_set_normal", 1, &immediate_mesh_class_surface_set_normal),
	JS_CFUNC_DEF("surface_set_tangent", 1, &immediate_mesh_class_surface_set_tangent),
	JS_CFUNC_DEF("surface_set_uv", 1, &immediate_mesh_class_surface_set_uv),
	JS_CFUNC_DEF("surface_set_uv2", 1, &immediate_mesh_class_surface_set_uv2),
	JS_CFUNC_DEF("surface_add_vertex", 1, &immediate_mesh_class_surface_add_vertex),
	JS_CFUNC_DEF("surface_add_vertex_2d", 1, &immediate_mesh_class_surface_add_vertex_2d),
	JS_CFUNC_DEF("surface_end", 0, &immediate_mesh_class_surface_end),
	JS_CFUNC_DEF("clear_surfaces", 0, &immediate_mesh_class_clear_surfaces),
};

static int js_immediate_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ImmediateMesh::__class_id);
	classes["ImmediateMesh"] = ImmediateMesh::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ImmediateMesh::__class_id, &immediate_mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Mesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ImmediateMesh::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, immediate_mesh_class_proto_funcs, _countof(immediate_mesh_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, immediate_mesh_class_constructor, "ImmediateMesh", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ImmediateMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_immediate_mesh_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_immediate_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ImmediateMesh");
	return m;
}

JSModuleDef *js_init_immediate_mesh_module(JSContext *ctx) {
	return _js_init_immediate_mesh_module(ctx, "godot/classes/immediate_mesh");
}

void register_immediate_mesh() {
	js_init_immediate_mesh_module(ctx);
}