
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/concave_polygon_shape3d.hpp>
#include <godot_cpp/classes/convex_polygon_shape3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/triangle_mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	Mesh *mesh = static_cast<Mesh *>(JS_GetOpaque(val, Mesh::__class_id));
	if (mesh)
		Mesh::free(nullptr, mesh);
}

static JSClassDef mesh_class_def = {
	"Mesh",
	.finalizer = mesh_class_finalizer
};

static JSValue mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Mesh *mesh_class;
	JSValue obj = JS_NewObjectClass(ctx, Mesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	mesh_class = memnew(Mesh);
	if (!mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, mesh_class);
	return obj;
}
static JSValue mesh_class_set_lightmap_size_hint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Mesh::set_lightmap_size_hint, Mesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_class_get_lightmap_size_hint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Mesh::get_lightmap_size_hint, Mesh::__class_id, ctx, this_val, argv);
};
static JSValue mesh_class_get_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Mesh::get_aabb, Mesh::__class_id, ctx, this_val, argv);
};
static JSValue mesh_class_get_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Mesh::get_faces, Mesh::__class_id, ctx, this_val, argv);
};
static JSValue mesh_class_get_surface_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Mesh::get_surface_count, Mesh::__class_id, ctx, this_val, argv);
};
static JSValue mesh_class_surface_get_arrays(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Mesh::surface_get_arrays, Mesh::__class_id, ctx, this_val, argv);
};
static JSValue mesh_class_surface_get_blend_shape_arrays(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Mesh::surface_get_blend_shape_arrays, Mesh::__class_id, ctx, this_val, argv);
};
static JSValue mesh_class_surface_set_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Mesh::surface_set_material, Mesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_class_surface_get_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Mesh::surface_get_material, Mesh::__class_id, ctx, this_val, argv);
};
static JSValue mesh_class_create_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Mesh::create_placeholder, Mesh::__class_id, ctx, this_val, argv);
};
static JSValue mesh_class_create_trimesh_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Mesh::create_trimesh_shape, Mesh::__class_id, ctx, this_val, argv);
};
static JSValue mesh_class_create_convex_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Mesh::create_convex_shape, Mesh::__class_id, ctx, this_val, argv);
};
static JSValue mesh_class_create_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Mesh::create_outline, Mesh::__class_id, ctx, this_val, argv);
};
static JSValue mesh_class_generate_triangle_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Mesh::generate_triangle_mesh, Mesh::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_lightmap_size_hint", 1, &mesh_class_set_lightmap_size_hint),
	JS_CFUNC_DEF("get_lightmap_size_hint", 0, &mesh_class_get_lightmap_size_hint),
	JS_CFUNC_DEF("get_aabb", 0, &mesh_class_get_aabb),
	JS_CFUNC_DEF("get_faces", 0, &mesh_class_get_faces),
	JS_CFUNC_DEF("get_surface_count", 0, &mesh_class_get_surface_count),
	JS_CFUNC_DEF("surface_get_arrays", 1, &mesh_class_surface_get_arrays),
	JS_CFUNC_DEF("surface_get_blend_shape_arrays", 1, &mesh_class_surface_get_blend_shape_arrays),
	JS_CFUNC_DEF("surface_set_material", 2, &mesh_class_surface_set_material),
	JS_CFUNC_DEF("surface_get_material", 1, &mesh_class_surface_get_material),
	JS_CFUNC_DEF("create_placeholder", 0, &mesh_class_create_placeholder),
	JS_CFUNC_DEF("create_trimesh_shape", 0, &mesh_class_create_trimesh_shape),
	JS_CFUNC_DEF("create_convex_shape", 2, &mesh_class_create_convex_shape),
	JS_CFUNC_DEF("create_outline", 1, &mesh_class_create_outline),
	JS_CFUNC_DEF("generate_triangle_mesh", 0, &mesh_class_generate_triangle_mesh),
};

static int js_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Mesh::__class_id);
	classes["Mesh"] = Mesh::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Mesh::__class_id, &mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Mesh::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, mesh_class_proto_funcs, _countof(mesh_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, mesh_class_constructor, "Mesh", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Mesh", ctor);

	return 0;
}

JSModuleDef *_js_init_mesh_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Mesh");
	return m;
}

JSModuleDef *js_init_mesh_module(JSContext *ctx) {
	return _js_init_mesh_module(ctx, "godot/classes/mesh");
}

void register_mesh() {
	js_init_mesh_module(ctx);
}