
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/array_mesh.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/mesh_convex_decomposition_settings.hpp>
#include <godot_cpp/classes/mesh_instance3d.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/classes/skin_reference.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void mesh_instance3d_class_finalizer(JSRuntime *rt, JSValue val) {
	MeshInstance3D *mesh_instance3d = static_cast<MeshInstance3D *>(JS_GetOpaque(val, MeshInstance3D::__class_id));
	if (mesh_instance3d)
		MeshInstance3D::free(nullptr, mesh_instance3d);
}

static JSClassDef mesh_instance3d_class_def = {
	"MeshInstance3D",
	.finalizer = mesh_instance3d_class_finalizer
};

static JSValue mesh_instance3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	MeshInstance3D *mesh_instance3d_class;
	JSValue obj = JS_NewObjectClass(ctx, MeshInstance3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	mesh_instance3d_class = memnew(MeshInstance3D);
	if (!mesh_instance3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, mesh_instance3d_class);
	return obj;
}
static JSValue mesh_instance3d_class_set_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshInstance3D::set_mesh, MeshInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance3d_class_get_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshInstance3D::get_mesh, MeshInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue mesh_instance3d_class_set_skeleton_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshInstance3D::set_skeleton_path, MeshInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance3d_class_get_skeleton_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&MeshInstance3D::get_skeleton_path, MeshInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue mesh_instance3d_class_set_skin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshInstance3D::set_skin, MeshInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance3d_class_get_skin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshInstance3D::get_skin, MeshInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue mesh_instance3d_class_get_skin_reference(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshInstance3D::get_skin_reference, MeshInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue mesh_instance3d_class_get_surface_override_material_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshInstance3D::get_surface_override_material_count, MeshInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue mesh_instance3d_class_set_surface_override_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshInstance3D::set_surface_override_material, MeshInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance3d_class_get_surface_override_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshInstance3D::get_surface_override_material, MeshInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue mesh_instance3d_class_get_active_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshInstance3D::get_active_material, MeshInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue mesh_instance3d_class_create_trimesh_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshInstance3D::create_trimesh_collision, MeshInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance3d_class_create_convex_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshInstance3D::create_convex_collision, MeshInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance3d_class_create_multiple_convex_collisions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshInstance3D::create_multiple_convex_collisions, MeshInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance3d_class_get_blend_shape_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshInstance3D::get_blend_shape_count, MeshInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue mesh_instance3d_class_find_blend_shape_by_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&MeshInstance3D::find_blend_shape_by_name, MeshInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue mesh_instance3d_class_get_blend_shape_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshInstance3D::get_blend_shape_value, MeshInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue mesh_instance3d_class_set_blend_shape_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshInstance3D::set_blend_shape_value, MeshInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance3d_class_create_debug_tangents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MeshInstance3D::create_debug_tangents, MeshInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance3d_class_bake_mesh_from_current_blend_shape_mix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&MeshInstance3D::bake_mesh_from_current_blend_shape_mix, MeshInstance3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry mesh_instance3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mesh", 1, &mesh_instance3d_class_set_mesh),
	JS_CFUNC_DEF("get_mesh", 0, &mesh_instance3d_class_get_mesh),
	JS_CFUNC_DEF("set_skeleton_path", 1, &mesh_instance3d_class_set_skeleton_path),
	JS_CFUNC_DEF("get_skeleton_path", 0, &mesh_instance3d_class_get_skeleton_path),
	JS_CFUNC_DEF("set_skin", 1, &mesh_instance3d_class_set_skin),
	JS_CFUNC_DEF("get_skin", 0, &mesh_instance3d_class_get_skin),
	JS_CFUNC_DEF("get_skin_reference", 0, &mesh_instance3d_class_get_skin_reference),
	JS_CFUNC_DEF("get_surface_override_material_count", 0, &mesh_instance3d_class_get_surface_override_material_count),
	JS_CFUNC_DEF("set_surface_override_material", 2, &mesh_instance3d_class_set_surface_override_material),
	JS_CFUNC_DEF("get_surface_override_material", 1, &mesh_instance3d_class_get_surface_override_material),
	JS_CFUNC_DEF("get_active_material", 1, &mesh_instance3d_class_get_active_material),
	JS_CFUNC_DEF("create_trimesh_collision", 0, &mesh_instance3d_class_create_trimesh_collision),
	JS_CFUNC_DEF("create_convex_collision", 2, &mesh_instance3d_class_create_convex_collision),
	JS_CFUNC_DEF("create_multiple_convex_collisions", 1, &mesh_instance3d_class_create_multiple_convex_collisions),
	JS_CFUNC_DEF("get_blend_shape_count", 0, &mesh_instance3d_class_get_blend_shape_count),
	JS_CFUNC_DEF("find_blend_shape_by_name", 1, &mesh_instance3d_class_find_blend_shape_by_name),
	JS_CFUNC_DEF("get_blend_shape_value", 1, &mesh_instance3d_class_get_blend_shape_value),
	JS_CFUNC_DEF("set_blend_shape_value", 2, &mesh_instance3d_class_set_blend_shape_value),
	JS_CFUNC_DEF("create_debug_tangents", 0, &mesh_instance3d_class_create_debug_tangents),
	JS_CFUNC_DEF("bake_mesh_from_current_blend_shape_mix", 1, &mesh_instance3d_class_bake_mesh_from_current_blend_shape_mix),
};

static int js_mesh_instance3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&MeshInstance3D::__class_id);
	classes["MeshInstance3D"] = MeshInstance3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), MeshInstance3D::__class_id, &mesh_instance3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, GeometryInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MeshInstance3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, mesh_instance3d_class_proto_funcs, _countof(mesh_instance3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, mesh_instance3d_class_constructor, "MeshInstance3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "MeshInstance3D", ctor);

	return 0;
}

JSModuleDef *_js_init_mesh_instance3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_mesh_instance3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MeshInstance3D");
	return m;
}

JSModuleDef *js_init_mesh_instance3d_module(JSContext *ctx) {
	return _js_init_mesh_instance3d_module(ctx, "godot/classes/mesh_instance3d");
}

void register_mesh_instance3d() {
	js_init_mesh_instance3d_module(ctx);
}