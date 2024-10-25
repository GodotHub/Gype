
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/navigation_server3d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/navigation_path_query_parameters3d.hpp>
#include <godot_cpp/classes/navigation_mesh_source_geometry_data3d.hpp>
#include <godot_cpp/classes/navigation_path_query_result3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static JSValue navigation_server3d_instance;

static void js_navigation_server3d_singleton();

static void navigation_server3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef navigation_server3d_class_def = {
	"NavigationServer3D",
	.finalizer = navigation_server3d_class_finalizer
};

static JSValue navigation_server3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NavigationServer3D *navigation_server3d_class;
	JSValue obj = JS_NewObjectClass(ctx, NavigationServer3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	navigation_server3d_class = NavigationServer3D::get_singleton();
	if (!navigation_server3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, navigation_server3d_class);
	return obj;
}
static JSValue navigation_server3d_class_get_maps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::get_maps, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_method_ret(&NavigationServer3D::map_create, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_set_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::map_set_active, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_map_is_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::map_is_active, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_set_up(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::map_set_up, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_map_get_up(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::map_get_up, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_set_cell_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::map_set_cell_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_map_get_cell_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::map_get_cell_size, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_set_cell_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::map_set_cell_height, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_map_get_cell_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::map_get_cell_height, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_set_merge_rasterizer_cell_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::map_set_merge_rasterizer_cell_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_map_get_merge_rasterizer_cell_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::map_get_merge_rasterizer_cell_scale, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_set_use_edge_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::map_set_use_edge_connections, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_map_get_use_edge_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::map_get_use_edge_connections, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_set_edge_connection_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::map_set_edge_connection_margin, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_map_get_edge_connection_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::map_get_edge_connection_margin, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_set_link_connection_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::map_set_link_connection_radius, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_map_get_link_connection_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::map_get_link_connection_radius, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_get_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::map_get_path, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_get_closest_point_to_segment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::map_get_closest_point_to_segment, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_get_closest_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::map_get_closest_point, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_get_closest_point_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::map_get_closest_point_normal, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_get_closest_point_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::map_get_closest_point_owner, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_get_links(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::map_get_links, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_get_regions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::map_get_regions, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_get_agents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::map_get_agents, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_get_obstacles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::map_get_obstacles, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_force_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::map_force_update, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_map_get_iteration_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::map_get_iteration_id, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_map_get_random_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::map_get_random_point, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_query_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_const_method_no_ret(&NavigationServer3D::query_path, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_region_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_method_ret(&NavigationServer3D::region_create, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_region_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::region_set_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_region_get_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::region_get_enabled, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_region_set_use_edge_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::region_set_use_edge_connections, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_region_get_use_edge_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::region_get_use_edge_connections, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_region_set_enter_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::region_set_enter_cost, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_region_get_enter_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::region_get_enter_cost, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_region_set_travel_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::region_set_travel_cost, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_region_get_travel_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::region_get_travel_cost, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_region_set_owner_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::region_set_owner_id, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_region_get_owner_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::region_get_owner_id, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_region_owns_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::region_owns_point, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_region_set_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::region_set_map, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_region_get_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::region_get_map, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_region_set_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::region_set_navigation_layers, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_region_get_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::region_get_navigation_layers, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_region_set_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::region_set_transform, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_region_get_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::region_get_transform, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_region_set_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::region_set_navigation_mesh, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_region_bake_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::region_bake_navigation_mesh, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_region_get_connections_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::region_get_connections_count, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_region_get_connection_pathway_start(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::region_get_connection_pathway_start, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_region_get_connection_pathway_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::region_get_connection_pathway_end, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_region_get_random_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::region_get_random_point, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_link_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_method_ret(&NavigationServer3D::link_create, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_link_set_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::link_set_map, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_link_get_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::link_get_map, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_link_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::link_set_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_link_get_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::link_get_enabled, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_link_set_bidirectional(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::link_set_bidirectional, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_link_is_bidirectional(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::link_is_bidirectional, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_link_set_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::link_set_navigation_layers, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_link_get_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::link_get_navigation_layers, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_link_set_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::link_set_start_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_link_get_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::link_get_start_position, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_link_set_end_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::link_set_end_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_link_get_end_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::link_get_end_position, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_link_set_enter_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::link_set_enter_cost, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_link_get_enter_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::link_get_enter_cost, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_link_set_travel_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::link_set_travel_cost, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_link_get_travel_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::link_get_travel_cost, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_link_set_owner_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::link_set_owner_id, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_link_get_owner_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::link_get_owner_id, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_agent_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_method_ret(&NavigationServer3D::agent_create, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_agent_set_avoidance_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::agent_set_avoidance_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_agent_get_avoidance_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::agent_get_avoidance_enabled, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_agent_set_use_3d_avoidance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::agent_set_use_3d_avoidance, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_agent_get_use_3d_avoidance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::agent_get_use_3d_avoidance, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_agent_set_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::agent_set_map, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_agent_get_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::agent_get_map, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_agent_set_paused(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::agent_set_paused, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_agent_get_paused(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::agent_get_paused, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_agent_set_neighbor_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::agent_set_neighbor_distance, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_agent_get_neighbor_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::agent_get_neighbor_distance, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_agent_set_max_neighbors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::agent_set_max_neighbors, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_agent_get_max_neighbors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::agent_get_max_neighbors, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_agent_set_time_horizon_agents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::agent_set_time_horizon_agents, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_agent_get_time_horizon_agents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::agent_get_time_horizon_agents, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_agent_set_time_horizon_obstacles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::agent_set_time_horizon_obstacles, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_agent_get_time_horizon_obstacles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::agent_get_time_horizon_obstacles, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_agent_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::agent_set_radius, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_agent_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::agent_get_radius, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_agent_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::agent_set_height, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_agent_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::agent_get_height, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_agent_set_max_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::agent_set_max_speed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_agent_get_max_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::agent_get_max_speed, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_agent_set_velocity_forced(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::agent_set_velocity_forced, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_agent_set_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::agent_set_velocity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_agent_get_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::agent_get_velocity, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_agent_set_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::agent_set_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_agent_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::agent_get_position, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_agent_is_map_changed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::agent_is_map_changed, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_agent_set_avoidance_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::agent_set_avoidance_callback, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_agent_has_avoidance_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::agent_has_avoidance_callback, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_agent_set_avoidance_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::agent_set_avoidance_layers, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_agent_get_avoidance_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::agent_get_avoidance_layers, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_agent_set_avoidance_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::agent_set_avoidance_mask, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_agent_get_avoidance_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::agent_get_avoidance_mask, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_agent_set_avoidance_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::agent_set_avoidance_priority, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_agent_get_avoidance_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::agent_get_avoidance_priority, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_obstacle_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_method_ret(&NavigationServer3D::obstacle_create, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_obstacle_set_avoidance_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::obstacle_set_avoidance_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_obstacle_get_avoidance_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::obstacle_get_avoidance_enabled, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_obstacle_set_use_3d_avoidance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::obstacle_set_use_3d_avoidance, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_obstacle_get_use_3d_avoidance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::obstacle_get_use_3d_avoidance, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_obstacle_set_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::obstacle_set_map, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_obstacle_get_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::obstacle_get_map, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_obstacle_set_paused(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::obstacle_set_paused, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_obstacle_get_paused(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::obstacle_get_paused, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_obstacle_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::obstacle_set_radius, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_obstacle_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::obstacle_get_radius, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_obstacle_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::obstacle_set_height, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_obstacle_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::obstacle_get_height, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_obstacle_set_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::obstacle_set_velocity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_obstacle_get_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::obstacle_get_velocity, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_obstacle_set_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::obstacle_set_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_obstacle_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::obstacle_get_position, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_obstacle_set_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::obstacle_set_vertices, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_obstacle_get_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::obstacle_get_vertices, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_obstacle_set_avoidance_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::obstacle_set_avoidance_layers, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_obstacle_get_avoidance_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::obstacle_get_avoidance_layers, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_parse_source_geometry_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::parse_source_geometry_data, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_bake_from_source_geometry_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::bake_from_source_geometry_data, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_bake_from_source_geometry_data_async(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::bake_from_source_geometry_data_async, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_is_baking_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::is_baking_navigation_mesh, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_source_geometry_parser_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_method_ret(&NavigationServer3D::source_geometry_parser_create, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_source_geometry_parser_set_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::source_geometry_parser_set_callback, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_simplify_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_method_ret(&NavigationServer3D::simplify_path, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_free_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::free_rid, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_set_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::set_active, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_set_debug_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
    call_builtin_method_no_ret(&NavigationServer3D::set_debug_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_server3d_class_get_debug_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::get_debug_enabled, ctx, this_val, argc, argv);
};
static JSValue navigation_server3d_class_get_process_info(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_navigation_server3d_singleton();
	return call_builtin_const_method_ret(&NavigationServer3D::get_process_info, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry navigation_server3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_maps", 0, &navigation_server3d_class_get_maps),
	JS_CFUNC_DEF("map_create", 0, &navigation_server3d_class_map_create),
	JS_CFUNC_DEF("map_set_active", 2, &navigation_server3d_class_map_set_active),
	JS_CFUNC_DEF("map_is_active", 1, &navigation_server3d_class_map_is_active),
	JS_CFUNC_DEF("map_set_up", 2, &navigation_server3d_class_map_set_up),
	JS_CFUNC_DEF("map_get_up", 1, &navigation_server3d_class_map_get_up),
	JS_CFUNC_DEF("map_set_cell_size", 2, &navigation_server3d_class_map_set_cell_size),
	JS_CFUNC_DEF("map_get_cell_size", 1, &navigation_server3d_class_map_get_cell_size),
	JS_CFUNC_DEF("map_set_cell_height", 2, &navigation_server3d_class_map_set_cell_height),
	JS_CFUNC_DEF("map_get_cell_height", 1, &navigation_server3d_class_map_get_cell_height),
	JS_CFUNC_DEF("map_set_merge_rasterizer_cell_scale", 2, &navigation_server3d_class_map_set_merge_rasterizer_cell_scale),
	JS_CFUNC_DEF("map_get_merge_rasterizer_cell_scale", 1, &navigation_server3d_class_map_get_merge_rasterizer_cell_scale),
	JS_CFUNC_DEF("map_set_use_edge_connections", 2, &navigation_server3d_class_map_set_use_edge_connections),
	JS_CFUNC_DEF("map_get_use_edge_connections", 1, &navigation_server3d_class_map_get_use_edge_connections),
	JS_CFUNC_DEF("map_set_edge_connection_margin", 2, &navigation_server3d_class_map_set_edge_connection_margin),
	JS_CFUNC_DEF("map_get_edge_connection_margin", 1, &navigation_server3d_class_map_get_edge_connection_margin),
	JS_CFUNC_DEF("map_set_link_connection_radius", 2, &navigation_server3d_class_map_set_link_connection_radius),
	JS_CFUNC_DEF("map_get_link_connection_radius", 1, &navigation_server3d_class_map_get_link_connection_radius),
	JS_CFUNC_DEF("map_get_path", 5, &navigation_server3d_class_map_get_path),
	JS_CFUNC_DEF("map_get_closest_point_to_segment", 4, &navigation_server3d_class_map_get_closest_point_to_segment),
	JS_CFUNC_DEF("map_get_closest_point", 2, &navigation_server3d_class_map_get_closest_point),
	JS_CFUNC_DEF("map_get_closest_point_normal", 2, &navigation_server3d_class_map_get_closest_point_normal),
	JS_CFUNC_DEF("map_get_closest_point_owner", 2, &navigation_server3d_class_map_get_closest_point_owner),
	JS_CFUNC_DEF("map_get_links", 1, &navigation_server3d_class_map_get_links),
	JS_CFUNC_DEF("map_get_regions", 1, &navigation_server3d_class_map_get_regions),
	JS_CFUNC_DEF("map_get_agents", 1, &navigation_server3d_class_map_get_agents),
	JS_CFUNC_DEF("map_get_obstacles", 1, &navigation_server3d_class_map_get_obstacles),
	JS_CFUNC_DEF("map_force_update", 1, &navigation_server3d_class_map_force_update),
	JS_CFUNC_DEF("map_get_iteration_id", 1, &navigation_server3d_class_map_get_iteration_id),
	JS_CFUNC_DEF("map_get_random_point", 3, &navigation_server3d_class_map_get_random_point),
	JS_CFUNC_DEF("query_path", 2, &navigation_server3d_class_query_path),
	JS_CFUNC_DEF("region_create", 0, &navigation_server3d_class_region_create),
	JS_CFUNC_DEF("region_set_enabled", 2, &navigation_server3d_class_region_set_enabled),
	JS_CFUNC_DEF("region_get_enabled", 1, &navigation_server3d_class_region_get_enabled),
	JS_CFUNC_DEF("region_set_use_edge_connections", 2, &navigation_server3d_class_region_set_use_edge_connections),
	JS_CFUNC_DEF("region_get_use_edge_connections", 1, &navigation_server3d_class_region_get_use_edge_connections),
	JS_CFUNC_DEF("region_set_enter_cost", 2, &navigation_server3d_class_region_set_enter_cost),
	JS_CFUNC_DEF("region_get_enter_cost", 1, &navigation_server3d_class_region_get_enter_cost),
	JS_CFUNC_DEF("region_set_travel_cost", 2, &navigation_server3d_class_region_set_travel_cost),
	JS_CFUNC_DEF("region_get_travel_cost", 1, &navigation_server3d_class_region_get_travel_cost),
	JS_CFUNC_DEF("region_set_owner_id", 2, &navigation_server3d_class_region_set_owner_id),
	JS_CFUNC_DEF("region_get_owner_id", 1, &navigation_server3d_class_region_get_owner_id),
	JS_CFUNC_DEF("region_owns_point", 2, &navigation_server3d_class_region_owns_point),
	JS_CFUNC_DEF("region_set_map", 2, &navigation_server3d_class_region_set_map),
	JS_CFUNC_DEF("region_get_map", 1, &navigation_server3d_class_region_get_map),
	JS_CFUNC_DEF("region_set_navigation_layers", 2, &navigation_server3d_class_region_set_navigation_layers),
	JS_CFUNC_DEF("region_get_navigation_layers", 1, &navigation_server3d_class_region_get_navigation_layers),
	JS_CFUNC_DEF("region_set_transform", 2, &navigation_server3d_class_region_set_transform),
	JS_CFUNC_DEF("region_get_transform", 1, &navigation_server3d_class_region_get_transform),
	JS_CFUNC_DEF("region_set_navigation_mesh", 2, &navigation_server3d_class_region_set_navigation_mesh),
	JS_CFUNC_DEF("region_bake_navigation_mesh", 2, &navigation_server3d_class_region_bake_navigation_mesh),
	JS_CFUNC_DEF("region_get_connections_count", 1, &navigation_server3d_class_region_get_connections_count),
	JS_CFUNC_DEF("region_get_connection_pathway_start", 2, &navigation_server3d_class_region_get_connection_pathway_start),
	JS_CFUNC_DEF("region_get_connection_pathway_end", 2, &navigation_server3d_class_region_get_connection_pathway_end),
	JS_CFUNC_DEF("region_get_random_point", 3, &navigation_server3d_class_region_get_random_point),
	JS_CFUNC_DEF("link_create", 0, &navigation_server3d_class_link_create),
	JS_CFUNC_DEF("link_set_map", 2, &navigation_server3d_class_link_set_map),
	JS_CFUNC_DEF("link_get_map", 1, &navigation_server3d_class_link_get_map),
	JS_CFUNC_DEF("link_set_enabled", 2, &navigation_server3d_class_link_set_enabled),
	JS_CFUNC_DEF("link_get_enabled", 1, &navigation_server3d_class_link_get_enabled),
	JS_CFUNC_DEF("link_set_bidirectional", 2, &navigation_server3d_class_link_set_bidirectional),
	JS_CFUNC_DEF("link_is_bidirectional", 1, &navigation_server3d_class_link_is_bidirectional),
	JS_CFUNC_DEF("link_set_navigation_layers", 2, &navigation_server3d_class_link_set_navigation_layers),
	JS_CFUNC_DEF("link_get_navigation_layers", 1, &navigation_server3d_class_link_get_navigation_layers),
	JS_CFUNC_DEF("link_set_start_position", 2, &navigation_server3d_class_link_set_start_position),
	JS_CFUNC_DEF("link_get_start_position", 1, &navigation_server3d_class_link_get_start_position),
	JS_CFUNC_DEF("link_set_end_position", 2, &navigation_server3d_class_link_set_end_position),
	JS_CFUNC_DEF("link_get_end_position", 1, &navigation_server3d_class_link_get_end_position),
	JS_CFUNC_DEF("link_set_enter_cost", 2, &navigation_server3d_class_link_set_enter_cost),
	JS_CFUNC_DEF("link_get_enter_cost", 1, &navigation_server3d_class_link_get_enter_cost),
	JS_CFUNC_DEF("link_set_travel_cost", 2, &navigation_server3d_class_link_set_travel_cost),
	JS_CFUNC_DEF("link_get_travel_cost", 1, &navigation_server3d_class_link_get_travel_cost),
	JS_CFUNC_DEF("link_set_owner_id", 2, &navigation_server3d_class_link_set_owner_id),
	JS_CFUNC_DEF("link_get_owner_id", 1, &navigation_server3d_class_link_get_owner_id),
	JS_CFUNC_DEF("agent_create", 0, &navigation_server3d_class_agent_create),
	JS_CFUNC_DEF("agent_set_avoidance_enabled", 2, &navigation_server3d_class_agent_set_avoidance_enabled),
	JS_CFUNC_DEF("agent_get_avoidance_enabled", 1, &navigation_server3d_class_agent_get_avoidance_enabled),
	JS_CFUNC_DEF("agent_set_use_3d_avoidance", 2, &navigation_server3d_class_agent_set_use_3d_avoidance),
	JS_CFUNC_DEF("agent_get_use_3d_avoidance", 1, &navigation_server3d_class_agent_get_use_3d_avoidance),
	JS_CFUNC_DEF("agent_set_map", 2, &navigation_server3d_class_agent_set_map),
	JS_CFUNC_DEF("agent_get_map", 1, &navigation_server3d_class_agent_get_map),
	JS_CFUNC_DEF("agent_set_paused", 2, &navigation_server3d_class_agent_set_paused),
	JS_CFUNC_DEF("agent_get_paused", 1, &navigation_server3d_class_agent_get_paused),
	JS_CFUNC_DEF("agent_set_neighbor_distance", 2, &navigation_server3d_class_agent_set_neighbor_distance),
	JS_CFUNC_DEF("agent_get_neighbor_distance", 1, &navigation_server3d_class_agent_get_neighbor_distance),
	JS_CFUNC_DEF("agent_set_max_neighbors", 2, &navigation_server3d_class_agent_set_max_neighbors),
	JS_CFUNC_DEF("agent_get_max_neighbors", 1, &navigation_server3d_class_agent_get_max_neighbors),
	JS_CFUNC_DEF("agent_set_time_horizon_agents", 2, &navigation_server3d_class_agent_set_time_horizon_agents),
	JS_CFUNC_DEF("agent_get_time_horizon_agents", 1, &navigation_server3d_class_agent_get_time_horizon_agents),
	JS_CFUNC_DEF("agent_set_time_horizon_obstacles", 2, &navigation_server3d_class_agent_set_time_horizon_obstacles),
	JS_CFUNC_DEF("agent_get_time_horizon_obstacles", 1, &navigation_server3d_class_agent_get_time_horizon_obstacles),
	JS_CFUNC_DEF("agent_set_radius", 2, &navigation_server3d_class_agent_set_radius),
	JS_CFUNC_DEF("agent_get_radius", 1, &navigation_server3d_class_agent_get_radius),
	JS_CFUNC_DEF("agent_set_height", 2, &navigation_server3d_class_agent_set_height),
	JS_CFUNC_DEF("agent_get_height", 1, &navigation_server3d_class_agent_get_height),
	JS_CFUNC_DEF("agent_set_max_speed", 2, &navigation_server3d_class_agent_set_max_speed),
	JS_CFUNC_DEF("agent_get_max_speed", 1, &navigation_server3d_class_agent_get_max_speed),
	JS_CFUNC_DEF("agent_set_velocity_forced", 2, &navigation_server3d_class_agent_set_velocity_forced),
	JS_CFUNC_DEF("agent_set_velocity", 2, &navigation_server3d_class_agent_set_velocity),
	JS_CFUNC_DEF("agent_get_velocity", 1, &navigation_server3d_class_agent_get_velocity),
	JS_CFUNC_DEF("agent_set_position", 2, &navigation_server3d_class_agent_set_position),
	JS_CFUNC_DEF("agent_get_position", 1, &navigation_server3d_class_agent_get_position),
	JS_CFUNC_DEF("agent_is_map_changed", 1, &navigation_server3d_class_agent_is_map_changed),
	JS_CFUNC_DEF("agent_set_avoidance_callback", 2, &navigation_server3d_class_agent_set_avoidance_callback),
	JS_CFUNC_DEF("agent_has_avoidance_callback", 1, &navigation_server3d_class_agent_has_avoidance_callback),
	JS_CFUNC_DEF("agent_set_avoidance_layers", 2, &navigation_server3d_class_agent_set_avoidance_layers),
	JS_CFUNC_DEF("agent_get_avoidance_layers", 1, &navigation_server3d_class_agent_get_avoidance_layers),
	JS_CFUNC_DEF("agent_set_avoidance_mask", 2, &navigation_server3d_class_agent_set_avoidance_mask),
	JS_CFUNC_DEF("agent_get_avoidance_mask", 1, &navigation_server3d_class_agent_get_avoidance_mask),
	JS_CFUNC_DEF("agent_set_avoidance_priority", 2, &navigation_server3d_class_agent_set_avoidance_priority),
	JS_CFUNC_DEF("agent_get_avoidance_priority", 1, &navigation_server3d_class_agent_get_avoidance_priority),
	JS_CFUNC_DEF("obstacle_create", 0, &navigation_server3d_class_obstacle_create),
	JS_CFUNC_DEF("obstacle_set_avoidance_enabled", 2, &navigation_server3d_class_obstacle_set_avoidance_enabled),
	JS_CFUNC_DEF("obstacle_get_avoidance_enabled", 1, &navigation_server3d_class_obstacle_get_avoidance_enabled),
	JS_CFUNC_DEF("obstacle_set_use_3d_avoidance", 2, &navigation_server3d_class_obstacle_set_use_3d_avoidance),
	JS_CFUNC_DEF("obstacle_get_use_3d_avoidance", 1, &navigation_server3d_class_obstacle_get_use_3d_avoidance),
	JS_CFUNC_DEF("obstacle_set_map", 2, &navigation_server3d_class_obstacle_set_map),
	JS_CFUNC_DEF("obstacle_get_map", 1, &navigation_server3d_class_obstacle_get_map),
	JS_CFUNC_DEF("obstacle_set_paused", 2, &navigation_server3d_class_obstacle_set_paused),
	JS_CFUNC_DEF("obstacle_get_paused", 1, &navigation_server3d_class_obstacle_get_paused),
	JS_CFUNC_DEF("obstacle_set_radius", 2, &navigation_server3d_class_obstacle_set_radius),
	JS_CFUNC_DEF("obstacle_get_radius", 1, &navigation_server3d_class_obstacle_get_radius),
	JS_CFUNC_DEF("obstacle_set_height", 2, &navigation_server3d_class_obstacle_set_height),
	JS_CFUNC_DEF("obstacle_get_height", 1, &navigation_server3d_class_obstacle_get_height),
	JS_CFUNC_DEF("obstacle_set_velocity", 2, &navigation_server3d_class_obstacle_set_velocity),
	JS_CFUNC_DEF("obstacle_get_velocity", 1, &navigation_server3d_class_obstacle_get_velocity),
	JS_CFUNC_DEF("obstacle_set_position", 2, &navigation_server3d_class_obstacle_set_position),
	JS_CFUNC_DEF("obstacle_get_position", 1, &navigation_server3d_class_obstacle_get_position),
	JS_CFUNC_DEF("obstacle_set_vertices", 2, &navigation_server3d_class_obstacle_set_vertices),
	JS_CFUNC_DEF("obstacle_get_vertices", 1, &navigation_server3d_class_obstacle_get_vertices),
	JS_CFUNC_DEF("obstacle_set_avoidance_layers", 2, &navigation_server3d_class_obstacle_set_avoidance_layers),
	JS_CFUNC_DEF("obstacle_get_avoidance_layers", 1, &navigation_server3d_class_obstacle_get_avoidance_layers),
	JS_CFUNC_DEF("parse_source_geometry_data", 4, &navigation_server3d_class_parse_source_geometry_data),
	JS_CFUNC_DEF("bake_from_source_geometry_data", 3, &navigation_server3d_class_bake_from_source_geometry_data),
	JS_CFUNC_DEF("bake_from_source_geometry_data_async", 3, &navigation_server3d_class_bake_from_source_geometry_data_async),
	JS_CFUNC_DEF("is_baking_navigation_mesh", 1, &navigation_server3d_class_is_baking_navigation_mesh),
	JS_CFUNC_DEF("source_geometry_parser_create", 0, &navigation_server3d_class_source_geometry_parser_create),
	JS_CFUNC_DEF("source_geometry_parser_set_callback", 2, &navigation_server3d_class_source_geometry_parser_set_callback),
	JS_CFUNC_DEF("simplify_path", 2, &navigation_server3d_class_simplify_path),
	JS_CFUNC_DEF("free_rid", 1, &navigation_server3d_class_free_rid),
	JS_CFUNC_DEF("set_active", 1, &navigation_server3d_class_set_active),
	JS_CFUNC_DEF("set_debug_enabled", 1, &navigation_server3d_class_set_debug_enabled),
	JS_CFUNC_DEF("get_debug_enabled", 0, &navigation_server3d_class_get_debug_enabled),
	JS_CFUNC_DEF("get_process_info", 1, &navigation_server3d_class_get_process_info),
};

static int js_navigation_server3d_class_init(JSContext *ctx) {
	JS_NewClassID(&NavigationServer3D::__class_id);
	classes["NavigationServer3D"] = NavigationServer3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), NavigationServer3D::__class_id, &navigation_server3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationServer3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_server3d_class_proto_funcs, _countof(navigation_server3d_class_proto_funcs));
	return 0;
}

static void js_navigation_server3d_singleton() {
	if (JS_IsUninitialized(navigation_server3d_instance)) {
		JSValue global = JS_GetGlobalObject(ctx);
		navigation_server3d_instance = navigation_server3d_class_constructor(ctx, global, 0, NULL);
		JS_SetPropertyStr(ctx, global, "NavigationServer3D", navigation_server3d_instance);
	}
}


void register_navigation_server3d() {
	js_navigation_server3d_class_init(ctx);
}