
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/mesh_convex_decomposition_settings.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void mesh_convex_decomposition_settings_class_finalizer(JSRuntime *rt, JSValue val) {
	MeshConvexDecompositionSettings *mesh_convex_decomposition_settings = static_cast<MeshConvexDecompositionSettings *>(JS_GetOpaque(val, MeshConvexDecompositionSettings::__class_id));
	if (mesh_convex_decomposition_settings)
		memdelete(mesh_convex_decomposition_settings);
}

static JSClassDef mesh_convex_decomposition_settings_class_def = {
	"MeshConvexDecompositionSettings",
	.finalizer = mesh_convex_decomposition_settings_class_finalizer
};

static JSValue mesh_convex_decomposition_settings_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, MeshConvexDecompositionSettings::__class_id);
	if (JS_IsException(obj))
		return obj;

	MeshConvexDecompositionSettings *mesh_convex_decomposition_settings_class;
	if (argc == 1) 
		mesh_convex_decomposition_settings_class = static_cast<MeshConvexDecompositionSettings *>(Variant(*argv).operator Object *());
	else 
		mesh_convex_decomposition_settings_class = memnew(MeshConvexDecompositionSettings);
	if (!mesh_convex_decomposition_settings_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, mesh_convex_decomposition_settings_class);
	return obj;
}
static JSValue mesh_convex_decomposition_settings_class_set_max_concavity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_max_concavity, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_get_max_concavity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_max_concavity, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_symmetry_planes_clipping_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_symmetry_planes_clipping_bias, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_get_symmetry_planes_clipping_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_symmetry_planes_clipping_bias, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_revolution_axes_clipping_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_revolution_axes_clipping_bias, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_get_revolution_axes_clipping_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_revolution_axes_clipping_bias, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_min_volume_per_convex_hull(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_min_volume_per_convex_hull, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_get_min_volume_per_convex_hull(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_min_volume_per_convex_hull, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_resolution(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_resolution, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_get_resolution(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_resolution, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_max_num_vertices_per_convex_hull(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_max_num_vertices_per_convex_hull, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_get_max_num_vertices_per_convex_hull(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_max_num_vertices_per_convex_hull, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_plane_downsampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_plane_downsampling, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_get_plane_downsampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_plane_downsampling, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_convex_hull_downsampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_convex_hull_downsampling, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_get_convex_hull_downsampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_convex_hull_downsampling, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_normalize_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_normalize_mesh, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_get_normalize_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_normalize_mesh, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_mode, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_get_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_mode, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_convex_hull_approximation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_convex_hull_approximation, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_get_convex_hull_approximation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_convex_hull_approximation, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_max_convex_hulls(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_max_convex_hulls, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_get_max_convex_hulls(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_max_convex_hulls, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_set_project_hull_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MeshConvexDecompositionSettings::set_project_hull_vertices, ctx, this_val, argc, argv);
};
static JSValue mesh_convex_decomposition_settings_class_get_project_hull_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshConvexDecompositionSettings::get_project_hull_vertices, ctx, this_val, argc, argv);
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

static void define_mesh_convex_decomposition_settings_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "max_concavity"),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_get_max_concavity, "get_max_concavity", 0),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_set_max_concavity, "set_max_concavity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "symmetry_planes_clipping_bias"),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_get_symmetry_planes_clipping_bias, "get_symmetry_planes_clipping_bias", 0),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_set_symmetry_planes_clipping_bias, "set_symmetry_planes_clipping_bias", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "revolution_axes_clipping_bias"),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_get_revolution_axes_clipping_bias, "get_revolution_axes_clipping_bias", 0),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_set_revolution_axes_clipping_bias, "set_revolution_axes_clipping_bias", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "min_volume_per_convex_hull"),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_get_min_volume_per_convex_hull, "get_min_volume_per_convex_hull", 0),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_set_min_volume_per_convex_hull, "set_min_volume_per_convex_hull", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "resolution"),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_get_resolution, "get_resolution", 0),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_set_resolution, "set_resolution", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "max_num_vertices_per_convex_hull"),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_get_max_num_vertices_per_convex_hull, "get_max_num_vertices_per_convex_hull", 0),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_set_max_num_vertices_per_convex_hull, "set_max_num_vertices_per_convex_hull", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "plane_downsampling"),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_get_plane_downsampling, "get_plane_downsampling", 0),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_set_plane_downsampling, "set_plane_downsampling", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "convex_hull_downsampling"),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_get_convex_hull_downsampling, "get_convex_hull_downsampling", 0),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_set_convex_hull_downsampling, "set_convex_hull_downsampling", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "normalize_mesh"),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_get_normalize_mesh, "get_normalize_mesh", 0),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_set_normalize_mesh, "set_normalize_mesh", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "mode"),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_get_mode, "get_mode", 0),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_set_mode, "set_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "convex_hull_approximation"),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_get_convex_hull_approximation, "get_convex_hull_approximation", 0),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_set_convex_hull_approximation, "set_convex_hull_approximation", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "max_convex_hulls"),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_get_max_convex_hulls, "get_max_convex_hulls", 0),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_set_max_convex_hulls, "set_max_convex_hulls", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "project_hull_vertices"),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_get_project_hull_vertices, "get_project_hull_vertices", 0),
        JS_NewCFunction(ctx, mesh_convex_decomposition_settings_class_set_project_hull_vertices, "set_project_hull_vertices", 1),
        JS_PROP_GETSET
    );
	
}

static void define_mesh_convex_decomposition_settings_enum(JSContext *ctx, JSValue proto) {
	JSValue Mode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Mode_obj, "CONVEX_DECOMPOSITION_MODE_VOXEL", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Mode_obj, "CONVEX_DECOMPOSITION_MODE_TETRAHEDRON", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "Mode", Mode_obj);
}

static int js_mesh_convex_decomposition_settings_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["MeshConvexDecompositionSettings"] = MeshConvexDecompositionSettings::__class_id;
	class_id_list.insert(MeshConvexDecompositionSettings::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MeshConvexDecompositionSettings::__class_id, &mesh_convex_decomposition_settings_class_def);

	JSValue proto = JS_NewObjectClass(ctx, MeshConvexDecompositionSettings::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MeshConvexDecompositionSettings::__class_id, proto);

	define_mesh_convex_decomposition_settings_property(ctx, proto);
	define_mesh_convex_decomposition_settings_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, mesh_convex_decomposition_settings_class_proto_funcs, _countof(mesh_convex_decomposition_settings_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, mesh_convex_decomposition_settings_class_constructor, "MeshConvexDecompositionSettings", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "MeshConvexDecompositionSettings", ctor);
	constructors[MeshConvexDecompositionSettings::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_mesh_convex_decomposition_settings_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_mesh_convex_decomposition_settings_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MeshConvexDecompositionSettings");
	return m;
}

JSModuleDef *js_init_mesh_convex_decomposition_settings_module(JSContext *ctx) {
	return _js_init_mesh_convex_decomposition_settings_module(ctx, "@godot/classes/mesh_convex_decomposition_settings");
}

void register_mesh_convex_decomposition_settings() {
	MeshConvexDecompositionSettings::__init_js_class_id();
	js_init_mesh_convex_decomposition_settings_module(ctx);
}