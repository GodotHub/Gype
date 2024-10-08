
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/mesh_convex_decomposition_settings.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void mesh_convex_decomposition_settings_class_finalizer(JSRuntime *rt, JSValue val) {
	MeshConvexDecompositionSettings *mesh_convex_decomposition_settings = static_cast<MeshConvexDecompositionSettings *>(JS_GetOpaque(val, MeshConvexDecompositionSettings::__class_id));
	if (mesh_convex_decomposition_settings)
		MeshConvexDecompositionSettings::free(nullptr, mesh_convex_decomposition_settings);
}

static JSClassDef mesh_convex_decomposition_settings_class_def = {
	"MeshConvexDecompositionSettings",
	.finalizer = mesh_convex_decomposition_settings_class_finalizer
};

static JSValue mesh_convex_decomposition_settings_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	MeshConvexDecompositionSettings *mesh_convex_decomposition_settings_class;
	JSValue obj = JS_NewObjectClass(ctx, MeshConvexDecompositionSettings::__class_id);
	if (JS_IsException(obj))
		return obj;
	mesh_convex_decomposition_settings_class = memnew(MeshConvexDecompositionSettings);
	if (!mesh_convex_decomposition_settings_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, mesh_convex_decomposition_settings_class);
	return obj;
}
static JSValue mesh_convex_decomposition_settings_class_set_max_concavity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_max_concavity, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_convex_decomposition_settings_class_get_max_concavity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_max_concavity, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_symmetry_planes_clipping_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_symmetry_planes_clipping_bias, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_convex_decomposition_settings_class_get_symmetry_planes_clipping_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_symmetry_planes_clipping_bias, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_revolution_axes_clipping_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_revolution_axes_clipping_bias, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_convex_decomposition_settings_class_get_revolution_axes_clipping_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_revolution_axes_clipping_bias, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_min_volume_per_convex_hull(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_min_volume_per_convex_hull, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_convex_decomposition_settings_class_get_min_volume_per_convex_hull(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_min_volume_per_convex_hull, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_resolution(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_resolution, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_convex_decomposition_settings_class_get_resolution(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_resolution, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_max_num_vertices_per_convex_hull(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_max_num_vertices_per_convex_hull, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_convex_decomposition_settings_class_get_max_num_vertices_per_convex_hull(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_max_num_vertices_per_convex_hull, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_plane_downsampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_plane_downsampling, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_convex_decomposition_settings_class_get_plane_downsampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_plane_downsampling, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_convex_hull_downsampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_convex_hull_downsampling, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_convex_decomposition_settings_class_get_convex_hull_downsampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_convex_hull_downsampling, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_normalize_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_normalize_mesh, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_convex_decomposition_settings_class_get_normalize_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_normalize_mesh, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_mode, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_convex_decomposition_settings_class_get_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_mode, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_convex_hull_approximation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_convex_hull_approximation, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_convex_decomposition_settings_class_get_convex_hull_approximation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_convex_hull_approximation, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_max_convex_hulls(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_max_convex_hulls, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_convex_decomposition_settings_class_get_max_convex_hulls(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_max_convex_hulls, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_project_hull_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_project_hull_vertices, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_convex_decomposition_settings_class_get_project_hull_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_project_hull_vertices, MeshConvexDecompositionSettings::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry mesh_convex_decomposition_settings_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_max_concavity", 1, &mesh_convex_decomposition_settings_class_set_max_concavity),
	JS_CFUNC_DEF("get_max_concavity", 0, &mesh_convex_decomposition_settings_class_get_max_concavity),
	JS_CFUNC_DEF("set_symmetry_planes_clipping_bias", 1, &mesh_convex_decomposition_settings_class_set_symmetry_planes_clipping_bias),
	JS_CFUNC_DEF("get_symmetry_planes_clipping_bias", 0, &mesh_convex_decomposition_settings_class_get_symmetry_planes_clipping_bias),
	JS_CFUNC_DEF("set_revolution_axes_clipping_bias", 1, &mesh_convex_decomposition_settings_class_set_revolution_axes_clipping_bias),
	JS_CFUNC_DEF("get_revolution_axes_clipping_bias", 0, &mesh_convex_decomposition_settings_class_get_revolution_axes_clipping_bias),
	JS_CFUNC_DEF("set_min_volume_per_convex_hull", 1, &mesh_convex_decomposition_settings_class_set_min_volume_per_convex_hull),
	JS_CFUNC_DEF("get_min_volume_per_convex_hull", 0, &mesh_convex_decomposition_settings_class_get_min_volume_per_convex_hull),
	JS_CFUNC_DEF("set_resolution", 1, &mesh_convex_decomposition_settings_class_set_resolution),
	JS_CFUNC_DEF("get_resolution", 0, &mesh_convex_decomposition_settings_class_get_resolution),
	JS_CFUNC_DEF("set_max_num_vertices_per_convex_hull", 1, &mesh_convex_decomposition_settings_class_set_max_num_vertices_per_convex_hull),
	JS_CFUNC_DEF("get_max_num_vertices_per_convex_hull", 0, &mesh_convex_decomposition_settings_class_get_max_num_vertices_per_convex_hull),
	JS_CFUNC_DEF("set_plane_downsampling", 1, &mesh_convex_decomposition_settings_class_set_plane_downsampling),
	JS_CFUNC_DEF("get_plane_downsampling", 0, &mesh_convex_decomposition_settings_class_get_plane_downsampling),
	JS_CFUNC_DEF("set_convex_hull_downsampling", 1, &mesh_convex_decomposition_settings_class_set_convex_hull_downsampling),
	JS_CFUNC_DEF("get_convex_hull_downsampling", 0, &mesh_convex_decomposition_settings_class_get_convex_hull_downsampling),
	JS_CFUNC_DEF("set_normalize_mesh", 1, &mesh_convex_decomposition_settings_class_set_normalize_mesh),
	JS_CFUNC_DEF("get_normalize_mesh", 0, &mesh_convex_decomposition_settings_class_get_normalize_mesh),
	JS_CFUNC_DEF("set_mode", 1, &mesh_convex_decomposition_settings_class_set_mode),
	JS_CFUNC_DEF("get_mode", 0, &mesh_convex_decomposition_settings_class_get_mode),
	JS_CFUNC_DEF("set_convex_hull_approximation", 1, &mesh_convex_decomposition_settings_class_set_convex_hull_approximation),
	JS_CFUNC_DEF("get_convex_hull_approximation", 0, &mesh_convex_decomposition_settings_class_get_convex_hull_approximation),
	JS_CFUNC_DEF("set_max_convex_hulls", 1, &mesh_convex_decomposition_settings_class_set_max_convex_hulls),
	JS_CFUNC_DEF("get_max_convex_hulls", 0, &mesh_convex_decomposition_settings_class_get_max_convex_hulls),
	JS_CFUNC_DEF("set_project_hull_vertices", 1, &mesh_convex_decomposition_settings_class_set_project_hull_vertices),
	JS_CFUNC_DEF("get_project_hull_vertices", 0, &mesh_convex_decomposition_settings_class_get_project_hull_vertices),
};

static int js_mesh_convex_decomposition_settings_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&MeshConvexDecompositionSettings::__class_id);
	classes["MeshConvexDecompositionSettings"] = MeshConvexDecompositionSettings::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), MeshConvexDecompositionSettings::__class_id, &mesh_convex_decomposition_settings_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MeshConvexDecompositionSettings::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, mesh_convex_decomposition_settings_class_proto_funcs, _countof(mesh_convex_decomposition_settings_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, mesh_convex_decomposition_settings_class_constructor, "MeshConvexDecompositionSettings", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "MeshConvexDecompositionSettings", ctor);

	return 0;
}

JSModuleDef *_js_init_mesh_convex_decomposition_settings_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_mesh_convex_decomposition_settings_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MeshConvexDecompositionSettings");
	return m;
}

JSModuleDef *js_init_mesh_convex_decomposition_settings_module(JSContext *ctx) {
	return _js_init_mesh_convex_decomposition_settings_module(ctx, "godot/classes/mesh_convex_decomposition_settings");
}

void register_mesh_convex_decomposition_settings() {
	js_init_mesh_convex_decomposition_settings_module(ctx);
}