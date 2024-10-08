
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/geometry3d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void geometry3d_class_finalizer(JSRuntime *rt, JSValue val) {
	Geometry3D *geometry3d = static_cast<Geometry3D *>(JS_GetOpaque(val, Geometry3D::__class_id));
	if (geometry3d)
		Geometry3D::free(nullptr, geometry3d);
}

static JSClassDef geometry3d_class_def = {
	"Geometry3D",
	.finalizer = geometry3d_class_finalizer
};

static JSValue geometry3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Geometry3D *geometry3d_class;
	JSValue obj = JS_NewObjectClass(ctx, Geometry3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	geometry3d_class = Geometry3D::get_singleton();
	if (!geometry3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, geometry3d_class);
	return obj;
}
static JSValue geometry3d_class_compute_convex_mesh_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry3D::compute_convex_mesh_points, Geometry3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry3d_class_build_box_planes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry3D::build_box_planes, Geometry3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry3d_class_build_cylinder_planes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry3D::build_cylinder_planes, Geometry3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry3d_class_build_capsule_planes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry3D::build_capsule_planes, Geometry3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry3d_class_get_closest_points_between_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry3D::get_closest_points_between_segments, Geometry3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry3d_class_get_closest_point_to_segment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry3D::get_closest_point_to_segment, Geometry3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry3d_class_get_closest_point_to_segment_uncapped(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry3D::get_closest_point_to_segment_uncapped, Geometry3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry3d_class_get_triangle_barycentric_coords(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry3D::get_triangle_barycentric_coords, Geometry3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry3d_class_ray_intersects_triangle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry3D::ray_intersects_triangle, Geometry3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry3d_class_segment_intersects_triangle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry3D::segment_intersects_triangle, Geometry3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry3d_class_segment_intersects_sphere(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry3D::segment_intersects_sphere, Geometry3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry3d_class_segment_intersects_cylinder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry3D::segment_intersects_cylinder, Geometry3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry3d_class_segment_intersects_convex(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry3D::segment_intersects_convex, Geometry3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry3d_class_clip_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry3D::clip_polygon, Geometry3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry3d_class_tetrahedralize_delaunay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry3D::tetrahedralize_delaunay, Geometry3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry geometry3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("compute_convex_mesh_points", 1, &geometry3d_class_compute_convex_mesh_points),
	JS_CFUNC_DEF("build_box_planes", 1, &geometry3d_class_build_box_planes),
	JS_CFUNC_DEF("build_cylinder_planes", 4, &geometry3d_class_build_cylinder_planes),
	JS_CFUNC_DEF("build_capsule_planes", 5, &geometry3d_class_build_capsule_planes),
	JS_CFUNC_DEF("get_closest_points_between_segments", 4, &geometry3d_class_get_closest_points_between_segments),
	JS_CFUNC_DEF("get_closest_point_to_segment", 3, &geometry3d_class_get_closest_point_to_segment),
	JS_CFUNC_DEF("get_closest_point_to_segment_uncapped", 3, &geometry3d_class_get_closest_point_to_segment_uncapped),
	JS_CFUNC_DEF("get_triangle_barycentric_coords", 4, &geometry3d_class_get_triangle_barycentric_coords),
	JS_CFUNC_DEF("ray_intersects_triangle", 5, &geometry3d_class_ray_intersects_triangle),
	JS_CFUNC_DEF("segment_intersects_triangle", 5, &geometry3d_class_segment_intersects_triangle),
	JS_CFUNC_DEF("segment_intersects_sphere", 4, &geometry3d_class_segment_intersects_sphere),
	JS_CFUNC_DEF("segment_intersects_cylinder", 4, &geometry3d_class_segment_intersects_cylinder),
	JS_CFUNC_DEF("segment_intersects_convex", 3, &geometry3d_class_segment_intersects_convex),
	JS_CFUNC_DEF("clip_polygon", 2, &geometry3d_class_clip_polygon),
	JS_CFUNC_DEF("tetrahedralize_delaunay", 1, &geometry3d_class_tetrahedralize_delaunay),
};

static int js_geometry3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Geometry3D::__class_id);
	classes["Geometry3D"] = Geometry3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Geometry3D::__class_id, &geometry3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Geometry3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, geometry3d_class_proto_funcs, _countof(geometry3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, geometry3d_class_constructor, "Geometry3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Geometry3D", ctor);

	return 0;
}

JSModuleDef *_js_init_geometry3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_geometry3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Geometry3D");
	return m;
}

JSModuleDef *js_init_geometry3d_module(JSContext *ctx) {
	return _js_init_geometry3d_module(ctx, "godot/classes/geometry3d");
}

void register_geometry3d() {
	js_init_geometry3d_module(ctx);
}