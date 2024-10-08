
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/navigation_mesh_source_geometry_data3d.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void navigation_mesh_source_geometry_data3d_class_finalizer(JSRuntime *rt, JSValue val) {
	NavigationMeshSourceGeometryData3D *navigation_mesh_source_geometry_data3d = static_cast<NavigationMeshSourceGeometryData3D *>(JS_GetOpaque(val, NavigationMeshSourceGeometryData3D::__class_id));
	if (navigation_mesh_source_geometry_data3d)
		NavigationMeshSourceGeometryData3D::free(nullptr, navigation_mesh_source_geometry_data3d);
}

static JSClassDef navigation_mesh_source_geometry_data3d_class_def = {
	"NavigationMeshSourceGeometryData3D",
	.finalizer = navigation_mesh_source_geometry_data3d_class_finalizer
};

static JSValue navigation_mesh_source_geometry_data3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NavigationMeshSourceGeometryData3D *navigation_mesh_source_geometry_data3d_class;
	JSValue obj = JS_NewObjectClass(ctx, NavigationMeshSourceGeometryData3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	navigation_mesh_source_geometry_data3d_class = memnew(NavigationMeshSourceGeometryData3D);
	if (!navigation_mesh_source_geometry_data3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, navigation_mesh_source_geometry_data3d_class);
	return obj;
}
static JSValue navigation_mesh_source_geometry_data3d_class_set_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::set_vertices, NavigationMeshSourceGeometryData3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data3d_class_get_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMeshSourceGeometryData3D::get_vertices, NavigationMeshSourceGeometryData3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_source_geometry_data3d_class_set_indices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::set_indices, NavigationMeshSourceGeometryData3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data3d_class_get_indices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMeshSourceGeometryData3D::get_indices, NavigationMeshSourceGeometryData3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_source_geometry_data3d_class_append_arrays(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::append_arrays, NavigationMeshSourceGeometryData3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data3d_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::clear, NavigationMeshSourceGeometryData3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data3d_class_has_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NavigationMeshSourceGeometryData3D::has_data, NavigationMeshSourceGeometryData3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_source_geometry_data3d_class_add_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::add_mesh, NavigationMeshSourceGeometryData3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data3d_class_add_mesh_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::add_mesh_array, NavigationMeshSourceGeometryData3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data3d_class_add_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::add_faces, NavigationMeshSourceGeometryData3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data3d_class_merge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::merge, NavigationMeshSourceGeometryData3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data3d_class_add_projected_obstruction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::add_projected_obstruction, NavigationMeshSourceGeometryData3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data3d_class_clear_projected_obstructions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::clear_projected_obstructions, NavigationMeshSourceGeometryData3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data3d_class_set_projected_obstructions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::set_projected_obstructions, NavigationMeshSourceGeometryData3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data3d_class_get_projected_obstructions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMeshSourceGeometryData3D::get_projected_obstructions, NavigationMeshSourceGeometryData3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry navigation_mesh_source_geometry_data3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_vertices", 1, &navigation_mesh_source_geometry_data3d_class_set_vertices),
	JS_CFUNC_DEF("get_vertices", 0, &navigation_mesh_source_geometry_data3d_class_get_vertices),
	JS_CFUNC_DEF("set_indices", 1, &navigation_mesh_source_geometry_data3d_class_set_indices),
	JS_CFUNC_DEF("get_indices", 0, &navigation_mesh_source_geometry_data3d_class_get_indices),
	JS_CFUNC_DEF("append_arrays", 2, &navigation_mesh_source_geometry_data3d_class_append_arrays),
	JS_CFUNC_DEF("clear", 0, &navigation_mesh_source_geometry_data3d_class_clear),
	JS_CFUNC_DEF("has_data", 0, &navigation_mesh_source_geometry_data3d_class_has_data),
	JS_CFUNC_DEF("add_mesh", 2, &navigation_mesh_source_geometry_data3d_class_add_mesh),
	JS_CFUNC_DEF("add_mesh_array", 2, &navigation_mesh_source_geometry_data3d_class_add_mesh_array),
	JS_CFUNC_DEF("add_faces", 2, &navigation_mesh_source_geometry_data3d_class_add_faces),
	JS_CFUNC_DEF("merge", 1, &navigation_mesh_source_geometry_data3d_class_merge),
	JS_CFUNC_DEF("add_projected_obstruction", 4, &navigation_mesh_source_geometry_data3d_class_add_projected_obstruction),
	JS_CFUNC_DEF("clear_projected_obstructions", 0, &navigation_mesh_source_geometry_data3d_class_clear_projected_obstructions),
	JS_CFUNC_DEF("set_projected_obstructions", 1, &navigation_mesh_source_geometry_data3d_class_set_projected_obstructions),
	JS_CFUNC_DEF("get_projected_obstructions", 0, &navigation_mesh_source_geometry_data3d_class_get_projected_obstructions),
};

static int js_navigation_mesh_source_geometry_data3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&NavigationMeshSourceGeometryData3D::__class_id);
	classes["NavigationMeshSourceGeometryData3D"] = NavigationMeshSourceGeometryData3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), NavigationMeshSourceGeometryData3D::__class_id, &navigation_mesh_source_geometry_data3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationMeshSourceGeometryData3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_mesh_source_geometry_data3d_class_proto_funcs, _countof(navigation_mesh_source_geometry_data3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, navigation_mesh_source_geometry_data3d_class_constructor, "NavigationMeshSourceGeometryData3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "NavigationMeshSourceGeometryData3D", ctor);

	return 0;
}

JSModuleDef *_js_init_navigation_mesh_source_geometry_data3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_mesh_source_geometry_data3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationMeshSourceGeometryData3D");
	return m;
}

JSModuleDef *js_init_navigation_mesh_source_geometry_data3d_module(JSContext *ctx) {
	return _js_init_navigation_mesh_source_geometry_data3d_module(ctx, "godot/classes/navigation_mesh_source_geometry_data3d");
}

void register_navigation_mesh_source_geometry_data3d() {
	js_init_navigation_mesh_source_geometry_data3d_module(ctx);
}