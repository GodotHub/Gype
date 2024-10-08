
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void navigation_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	NavigationMesh *navigation_mesh = static_cast<NavigationMesh *>(JS_GetOpaque(val, NavigationMesh::__class_id));
	if (navigation_mesh)
		NavigationMesh::free(nullptr, navigation_mesh);
}

static JSClassDef navigation_mesh_class_def = {
	"NavigationMesh",
	.finalizer = navigation_mesh_class_finalizer
};

static JSValue navigation_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NavigationMesh *navigation_mesh_class;
	JSValue obj = JS_NewObjectClass(ctx, NavigationMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	navigation_mesh_class = memnew(NavigationMesh);
	if (!navigation_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, navigation_mesh_class);
	return obj;
}
static JSValue navigation_mesh_class_set_sample_partition_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_sample_partition_type, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_sample_partition_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_sample_partition_type, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_parsed_geometry_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_parsed_geometry_type, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_parsed_geometry_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_parsed_geometry_type, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_collision_mask, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_collision_mask, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_collision_mask_value, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_collision_mask_value, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_source_geometry_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_source_geometry_mode, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_source_geometry_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_source_geometry_mode, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_source_group_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_source_group_name, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_source_group_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_source_group_name, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_cell_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_cell_size, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_cell_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_cell_size, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_cell_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_cell_height, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_cell_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_cell_height, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_border_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_border_size, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_border_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_border_size, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_agent_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_agent_height, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_agent_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_agent_height, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_agent_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_agent_radius, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_agent_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NavigationMesh::get_agent_radius, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_agent_max_climb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_agent_max_climb, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_agent_max_climb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_agent_max_climb, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_agent_max_slope(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_agent_max_slope, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_agent_max_slope(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_agent_max_slope, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_region_min_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_region_min_size, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_region_min_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_region_min_size, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_region_merge_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_region_merge_size, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_region_merge_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_region_merge_size, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_edge_max_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_edge_max_length, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_edge_max_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_edge_max_length, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_edge_max_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_edge_max_error, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_edge_max_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_edge_max_error, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_vertices_per_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_vertices_per_polygon, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_vertices_per_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_vertices_per_polygon, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_detail_sample_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_detail_sample_distance, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_detail_sample_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_detail_sample_distance, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_detail_sample_max_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_detail_sample_max_error, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_detail_sample_max_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_detail_sample_max_error, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_filter_low_hanging_obstacles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_filter_low_hanging_obstacles, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_filter_low_hanging_obstacles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_filter_low_hanging_obstacles, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_filter_ledge_spans(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_filter_ledge_spans, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_filter_ledge_spans(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_filter_ledge_spans, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_filter_walkable_low_height_spans(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_filter_walkable_low_height_spans, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_filter_walkable_low_height_spans(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_filter_walkable_low_height_spans, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_filter_baking_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_filter_baking_aabb, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_filter_baking_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_filter_baking_aabb, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_filter_baking_aabb_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_filter_baking_aabb_offset, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_filter_baking_aabb_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_filter_baking_aabb_offset, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_set_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::set_vertices, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_vertices, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_add_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::add_polygon, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_get_polygon_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationMesh::get_polygon_count, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_get_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NavigationMesh::get_polygon, NavigationMesh::__class_id, ctx, this_val, argv);
};
static JSValue navigation_mesh_class_clear_polygons(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::clear_polygons, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_create_from_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::create_from_mesh, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMesh::clear, NavigationMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry navigation_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_sample_partition_type", 1, &navigation_mesh_class_set_sample_partition_type),
	JS_CFUNC_DEF("get_sample_partition_type", 0, &navigation_mesh_class_get_sample_partition_type),
	JS_CFUNC_DEF("set_parsed_geometry_type", 1, &navigation_mesh_class_set_parsed_geometry_type),
	JS_CFUNC_DEF("get_parsed_geometry_type", 0, &navigation_mesh_class_get_parsed_geometry_type),
	JS_CFUNC_DEF("set_collision_mask", 1, &navigation_mesh_class_set_collision_mask),
	JS_CFUNC_DEF("get_collision_mask", 0, &navigation_mesh_class_get_collision_mask),
	JS_CFUNC_DEF("set_collision_mask_value", 2, &navigation_mesh_class_set_collision_mask_value),
	JS_CFUNC_DEF("get_collision_mask_value", 1, &navigation_mesh_class_get_collision_mask_value),
	JS_CFUNC_DEF("set_source_geometry_mode", 1, &navigation_mesh_class_set_source_geometry_mode),
	JS_CFUNC_DEF("get_source_geometry_mode", 0, &navigation_mesh_class_get_source_geometry_mode),
	JS_CFUNC_DEF("set_source_group_name", 1, &navigation_mesh_class_set_source_group_name),
	JS_CFUNC_DEF("get_source_group_name", 0, &navigation_mesh_class_get_source_group_name),
	JS_CFUNC_DEF("set_cell_size", 1, &navigation_mesh_class_set_cell_size),
	JS_CFUNC_DEF("get_cell_size", 0, &navigation_mesh_class_get_cell_size),
	JS_CFUNC_DEF("set_cell_height", 1, &navigation_mesh_class_set_cell_height),
	JS_CFUNC_DEF("get_cell_height", 0, &navigation_mesh_class_get_cell_height),
	JS_CFUNC_DEF("set_border_size", 1, &navigation_mesh_class_set_border_size),
	JS_CFUNC_DEF("get_border_size", 0, &navigation_mesh_class_get_border_size),
	JS_CFUNC_DEF("set_agent_height", 1, &navigation_mesh_class_set_agent_height),
	JS_CFUNC_DEF("get_agent_height", 0, &navigation_mesh_class_get_agent_height),
	JS_CFUNC_DEF("set_agent_radius", 1, &navigation_mesh_class_set_agent_radius),
	JS_CFUNC_DEF("get_agent_radius", 0, &navigation_mesh_class_get_agent_radius),
	JS_CFUNC_DEF("set_agent_max_climb", 1, &navigation_mesh_class_set_agent_max_climb),
	JS_CFUNC_DEF("get_agent_max_climb", 0, &navigation_mesh_class_get_agent_max_climb),
	JS_CFUNC_DEF("set_agent_max_slope", 1, &navigation_mesh_class_set_agent_max_slope),
	JS_CFUNC_DEF("get_agent_max_slope", 0, &navigation_mesh_class_get_agent_max_slope),
	JS_CFUNC_DEF("set_region_min_size", 1, &navigation_mesh_class_set_region_min_size),
	JS_CFUNC_DEF("get_region_min_size", 0, &navigation_mesh_class_get_region_min_size),
	JS_CFUNC_DEF("set_region_merge_size", 1, &navigation_mesh_class_set_region_merge_size),
	JS_CFUNC_DEF("get_region_merge_size", 0, &navigation_mesh_class_get_region_merge_size),
	JS_CFUNC_DEF("set_edge_max_length", 1, &navigation_mesh_class_set_edge_max_length),
	JS_CFUNC_DEF("get_edge_max_length", 0, &navigation_mesh_class_get_edge_max_length),
	JS_CFUNC_DEF("set_edge_max_error", 1, &navigation_mesh_class_set_edge_max_error),
	JS_CFUNC_DEF("get_edge_max_error", 0, &navigation_mesh_class_get_edge_max_error),
	JS_CFUNC_DEF("set_vertices_per_polygon", 1, &navigation_mesh_class_set_vertices_per_polygon),
	JS_CFUNC_DEF("get_vertices_per_polygon", 0, &navigation_mesh_class_get_vertices_per_polygon),
	JS_CFUNC_DEF("set_detail_sample_distance", 1, &navigation_mesh_class_set_detail_sample_distance),
	JS_CFUNC_DEF("get_detail_sample_distance", 0, &navigation_mesh_class_get_detail_sample_distance),
	JS_CFUNC_DEF("set_detail_sample_max_error", 1, &navigation_mesh_class_set_detail_sample_max_error),
	JS_CFUNC_DEF("get_detail_sample_max_error", 0, &navigation_mesh_class_get_detail_sample_max_error),
	JS_CFUNC_DEF("set_filter_low_hanging_obstacles", 1, &navigation_mesh_class_set_filter_low_hanging_obstacles),
	JS_CFUNC_DEF("get_filter_low_hanging_obstacles", 0, &navigation_mesh_class_get_filter_low_hanging_obstacles),
	JS_CFUNC_DEF("set_filter_ledge_spans", 1, &navigation_mesh_class_set_filter_ledge_spans),
	JS_CFUNC_DEF("get_filter_ledge_spans", 0, &navigation_mesh_class_get_filter_ledge_spans),
	JS_CFUNC_DEF("set_filter_walkable_low_height_spans", 1, &navigation_mesh_class_set_filter_walkable_low_height_spans),
	JS_CFUNC_DEF("get_filter_walkable_low_height_spans", 0, &navigation_mesh_class_get_filter_walkable_low_height_spans),
	JS_CFUNC_DEF("set_filter_baking_aabb", 1, &navigation_mesh_class_set_filter_baking_aabb),
	JS_CFUNC_DEF("get_filter_baking_aabb", 0, &navigation_mesh_class_get_filter_baking_aabb),
	JS_CFUNC_DEF("set_filter_baking_aabb_offset", 1, &navigation_mesh_class_set_filter_baking_aabb_offset),
	JS_CFUNC_DEF("get_filter_baking_aabb_offset", 0, &navigation_mesh_class_get_filter_baking_aabb_offset),
	JS_CFUNC_DEF("set_vertices", 1, &navigation_mesh_class_set_vertices),
	JS_CFUNC_DEF("get_vertices", 0, &navigation_mesh_class_get_vertices),
	JS_CFUNC_DEF("add_polygon", 1, &navigation_mesh_class_add_polygon),
	JS_CFUNC_DEF("get_polygon_count", 0, &navigation_mesh_class_get_polygon_count),
	JS_CFUNC_DEF("get_polygon", 1, &navigation_mesh_class_get_polygon),
	JS_CFUNC_DEF("clear_polygons", 0, &navigation_mesh_class_clear_polygons),
	JS_CFUNC_DEF("create_from_mesh", 1, &navigation_mesh_class_create_from_mesh),
	JS_CFUNC_DEF("clear", 0, &navigation_mesh_class_clear),
};

static int js_navigation_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&NavigationMesh::__class_id);
	classes["NavigationMesh"] = NavigationMesh::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), NavigationMesh::__class_id, &navigation_mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationMesh::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_mesh_class_proto_funcs, _countof(navigation_mesh_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, navigation_mesh_class_constructor, "NavigationMesh", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "NavigationMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_navigation_mesh_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationMesh");
	return m;
}

JSModuleDef *js_init_navigation_mesh_module(JSContext *ctx) {
	return _js_init_navigation_mesh_module(ctx, "godot/classes/navigation_mesh");
}

void register_navigation_mesh() {
	js_init_navigation_mesh_module(ctx);
}