
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/navigation_mesh_source_geometry_data2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void navigation_mesh_source_geometry_data2d_class_finalizer(JSRuntime *rt, JSValue val) {
	NavigationMeshSourceGeometryData2D *navigation_mesh_source_geometry_data2d = static_cast<NavigationMeshSourceGeometryData2D *>(JS_GetOpaque(val, NavigationMeshSourceGeometryData2D::__class_id));
	if (navigation_mesh_source_geometry_data2d)
		NavigationMeshSourceGeometryData2D::free(nullptr, navigation_mesh_source_geometry_data2d);
}

static JSClassDef navigation_mesh_source_geometry_data2d_class_def = {
	"NavigationMeshSourceGeometryData2D",
	.finalizer = navigation_mesh_source_geometry_data2d_class_finalizer
};

static JSValue navigation_mesh_source_geometry_data2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NavigationMeshSourceGeometryData2D *navigation_mesh_source_geometry_data2d_class;
	JSValue obj = JS_NewObjectClass(ctx, NavigationMeshSourceGeometryData2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	navigation_mesh_source_geometry_data2d_class = memnew(NavigationMeshSourceGeometryData2D);
	if (!navigation_mesh_source_geometry_data2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, navigation_mesh_source_geometry_data2d_class);
	return obj;
}
static JSValue navigation_mesh_source_geometry_data2d_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::clear, NavigationMeshSourceGeometryData2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_has_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NavigationMeshSourceGeometryData2D::has_data, NavigationMeshSourceGeometryData2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_source_geometry_data2d_class_set_traversable_outlines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::set_traversable_outlines, NavigationMeshSourceGeometryData2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_get_traversable_outlines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMeshSourceGeometryData2D::get_traversable_outlines, NavigationMeshSourceGeometryData2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_source_geometry_data2d_class_set_obstruction_outlines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::set_obstruction_outlines, NavigationMeshSourceGeometryData2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_get_obstruction_outlines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMeshSourceGeometryData2D::get_obstruction_outlines, NavigationMeshSourceGeometryData2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_source_geometry_data2d_class_append_traversable_outlines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::append_traversable_outlines, NavigationMeshSourceGeometryData2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_append_obstruction_outlines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::append_obstruction_outlines, NavigationMeshSourceGeometryData2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_add_traversable_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::add_traversable_outline, NavigationMeshSourceGeometryData2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_add_obstruction_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::add_obstruction_outline, NavigationMeshSourceGeometryData2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_merge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::merge, NavigationMeshSourceGeometryData2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_add_projected_obstruction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::add_projected_obstruction, NavigationMeshSourceGeometryData2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_clear_projected_obstructions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::clear_projected_obstructions, NavigationMeshSourceGeometryData2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_set_projected_obstructions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::set_projected_obstructions, NavigationMeshSourceGeometryData2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_get_projected_obstructions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMeshSourceGeometryData2D::get_projected_obstructions, NavigationMeshSourceGeometryData2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry navigation_mesh_source_geometry_data2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("clear", 0, &navigation_mesh_source_geometry_data2d_class_clear),
	JS_CFUNC_DEF("has_data", 0, &navigation_mesh_source_geometry_data2d_class_has_data),
	JS_CFUNC_DEF("set_traversable_outlines", 1, &navigation_mesh_source_geometry_data2d_class_set_traversable_outlines),
	JS_CFUNC_DEF("get_traversable_outlines", 0, &navigation_mesh_source_geometry_data2d_class_get_traversable_outlines),
	JS_CFUNC_DEF("set_obstruction_outlines", 1, &navigation_mesh_source_geometry_data2d_class_set_obstruction_outlines),
	JS_CFUNC_DEF("get_obstruction_outlines", 0, &navigation_mesh_source_geometry_data2d_class_get_obstruction_outlines),
	JS_CFUNC_DEF("append_traversable_outlines", 1, &navigation_mesh_source_geometry_data2d_class_append_traversable_outlines),
	JS_CFUNC_DEF("append_obstruction_outlines", 1, &navigation_mesh_source_geometry_data2d_class_append_obstruction_outlines),
	JS_CFUNC_DEF("add_traversable_outline", 1, &navigation_mesh_source_geometry_data2d_class_add_traversable_outline),
	JS_CFUNC_DEF("add_obstruction_outline", 1, &navigation_mesh_source_geometry_data2d_class_add_obstruction_outline),
	JS_CFUNC_DEF("merge", 1, &navigation_mesh_source_geometry_data2d_class_merge),
	JS_CFUNC_DEF("add_projected_obstruction", 2, &navigation_mesh_source_geometry_data2d_class_add_projected_obstruction),
	JS_CFUNC_DEF("clear_projected_obstructions", 0, &navigation_mesh_source_geometry_data2d_class_clear_projected_obstructions),
	JS_CFUNC_DEF("set_projected_obstructions", 1, &navigation_mesh_source_geometry_data2d_class_set_projected_obstructions),
	JS_CFUNC_DEF("get_projected_obstructions", 0, &navigation_mesh_source_geometry_data2d_class_get_projected_obstructions),
};

static int js_navigation_mesh_source_geometry_data2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&NavigationMeshSourceGeometryData2D::__class_id);
	classes["NavigationMeshSourceGeometryData2D"] = NavigationMeshSourceGeometryData2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), NavigationMeshSourceGeometryData2D::__class_id, &navigation_mesh_source_geometry_data2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationMeshSourceGeometryData2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_mesh_source_geometry_data2d_class_proto_funcs, _countof(navigation_mesh_source_geometry_data2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, navigation_mesh_source_geometry_data2d_class_constructor, "NavigationMeshSourceGeometryData2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "NavigationMeshSourceGeometryData2D", ctor);

	return 0;
}

JSModuleDef *_js_init_navigation_mesh_source_geometry_data2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_mesh_source_geometry_data2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationMeshSourceGeometryData2D");
	return m;
}

JSModuleDef *js_init_navigation_mesh_source_geometry_data2d_module(JSContext *ctx) {
	return _js_init_navigation_mesh_source_geometry_data2d_module(ctx, "godot/classes/navigation_mesh_source_geometry_data2d");
}

void register_navigation_mesh_source_geometry_data2d() {
	js_init_navigation_mesh_source_geometry_data2d_module(ctx);
}