
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/geometry2d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void geometry2d_class_finalizer(JSRuntime *rt, JSValue val) {
	Geometry2D *geometry2d = static_cast<Geometry2D *>(JS_GetOpaque(val, Geometry2D::__class_id));
	if (geometry2d)
		Geometry2D::free(nullptr, geometry2d);
}

static JSClassDef geometry2d_class_def = {
	"Geometry2D",
	.finalizer = geometry2d_class_finalizer
};

static JSValue geometry2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Geometry2D *geometry2d_class;
	JSValue obj = JS_NewObjectClass(ctx, Geometry2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	geometry2d_class = Geometry2D::get_singleton();
	if (!geometry2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, geometry2d_class);
	return obj;
}
static JSValue geometry2d_class_is_point_in_circle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::is_point_in_circle, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_segment_intersects_circle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::segment_intersects_circle, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_segment_intersects_segment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::segment_intersects_segment, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_line_intersects_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::line_intersects_line, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_get_closest_points_between_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::get_closest_points_between_segments, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_get_closest_point_to_segment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::get_closest_point_to_segment, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_get_closest_point_to_segment_uncapped(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::get_closest_point_to_segment_uncapped, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_point_is_inside_triangle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Geometry2D::point_is_inside_triangle, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_is_polygon_clockwise(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::is_polygon_clockwise, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_is_point_in_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::is_point_in_polygon, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_triangulate_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::triangulate_polygon, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_triangulate_delaunay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::triangulate_delaunay, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_convex_hull(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::convex_hull, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_decompose_polygon_in_convex(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::decompose_polygon_in_convex, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_merge_polygons(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::merge_polygons, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_clip_polygons(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::clip_polygons, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_intersect_polygons(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::intersect_polygons, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_exclude_polygons(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::exclude_polygons, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_clip_polyline_with_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::clip_polyline_with_polygon, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_intersect_polyline_with_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::intersect_polyline_with_polygon, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_offset_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::offset_polygon, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_offset_polyline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::offset_polyline, Geometry2D::__class_id, ctx, this_val, argv);
};
static JSValue geometry2d_class_make_atlas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Geometry2D::make_atlas, Geometry2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry geometry2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("is_point_in_circle", 3, &geometry2d_class_is_point_in_circle),
	JS_CFUNC_DEF("segment_intersects_circle", 4, &geometry2d_class_segment_intersects_circle),
	JS_CFUNC_DEF("segment_intersects_segment", 4, &geometry2d_class_segment_intersects_segment),
	JS_CFUNC_DEF("line_intersects_line", 4, &geometry2d_class_line_intersects_line),
	JS_CFUNC_DEF("get_closest_points_between_segments", 4, &geometry2d_class_get_closest_points_between_segments),
	JS_CFUNC_DEF("get_closest_point_to_segment", 3, &geometry2d_class_get_closest_point_to_segment),
	JS_CFUNC_DEF("get_closest_point_to_segment_uncapped", 3, &geometry2d_class_get_closest_point_to_segment_uncapped),
	JS_CFUNC_DEF("point_is_inside_triangle", 4, &geometry2d_class_point_is_inside_triangle),
	JS_CFUNC_DEF("is_polygon_clockwise", 1, &geometry2d_class_is_polygon_clockwise),
	JS_CFUNC_DEF("is_point_in_polygon", 2, &geometry2d_class_is_point_in_polygon),
	JS_CFUNC_DEF("triangulate_polygon", 1, &geometry2d_class_triangulate_polygon),
	JS_CFUNC_DEF("triangulate_delaunay", 1, &geometry2d_class_triangulate_delaunay),
	JS_CFUNC_DEF("convex_hull", 1, &geometry2d_class_convex_hull),
	JS_CFUNC_DEF("decompose_polygon_in_convex", 1, &geometry2d_class_decompose_polygon_in_convex),
	JS_CFUNC_DEF("merge_polygons", 2, &geometry2d_class_merge_polygons),
	JS_CFUNC_DEF("clip_polygons", 2, &geometry2d_class_clip_polygons),
	JS_CFUNC_DEF("intersect_polygons", 2, &geometry2d_class_intersect_polygons),
	JS_CFUNC_DEF("exclude_polygons", 2, &geometry2d_class_exclude_polygons),
	JS_CFUNC_DEF("clip_polyline_with_polygon", 2, &geometry2d_class_clip_polyline_with_polygon),
	JS_CFUNC_DEF("intersect_polyline_with_polygon", 2, &geometry2d_class_intersect_polyline_with_polygon),
	JS_CFUNC_DEF("offset_polygon", 3, &geometry2d_class_offset_polygon),
	JS_CFUNC_DEF("offset_polyline", 4, &geometry2d_class_offset_polyline),
	JS_CFUNC_DEF("make_atlas", 1, &geometry2d_class_make_atlas),
};

static int js_geometry2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Geometry2D::__class_id);
	classes["Geometry2D"] = Geometry2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Geometry2D::__class_id, &geometry2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Geometry2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, geometry2d_class_proto_funcs, _countof(geometry2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, geometry2d_class_constructor, "Geometry2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Geometry2D", ctor);

	return 0;
}

JSModuleDef *_js_init_geometry2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_geometry2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Geometry2D");
	return m;
}

JSModuleDef *js_init_geometry2d_module(JSContext *ctx) {
	return _js_init_geometry2d_module(ctx, "godot/classes/geometry2d");
}

void register_geometry2d() {
	js_init_geometry2d_module(ctx);
}