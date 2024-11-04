
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/navigation_path_query_result2d.hpp>
#include <godot_cpp/classes/navigation_agent2d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void navigation_agent2d_class_finalizer(JSRuntime *rt, JSValue val) {
	NavigationAgent2D *navigation_agent2d = static_cast<NavigationAgent2D *>(JS_GetOpaque(val, NavigationAgent2D::__class_id));
	if (navigation_agent2d)
		memdelete(navigation_agent2d);
}

static JSClassDef navigation_agent2d_class_def = {
	"NavigationAgent2D",
	.finalizer = navigation_agent2d_class_finalizer
};

static JSValue navigation_agent2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, NavigationAgent2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	NavigationAgent2D *navigation_agent2d_class;
	if (argc == 1) 
		navigation_agent2d_class = static_cast<NavigationAgent2D *>(Variant(*argv).operator Object *());
	else 
		navigation_agent2d_class = memnew(NavigationAgent2D);
	if (!navigation_agent2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, navigation_agent2d_class);
	return obj;
}
static JSValue navigation_agent2d_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_rid, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_avoidance_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_avoidance_enabled, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_avoidance_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_avoidance_enabled, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_path_desired_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_path_desired_distance, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_path_desired_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_path_desired_distance, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_target_desired_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_target_desired_distance, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_target_desired_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_target_desired_distance, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_radius, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_radius, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_neighbor_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_neighbor_distance, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_neighbor_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_neighbor_distance, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_max_neighbors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_max_neighbors, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_max_neighbors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_max_neighbors, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_time_horizon_agents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_time_horizon_agents, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_time_horizon_agents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_time_horizon_agents, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_time_horizon_obstacles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_time_horizon_obstacles, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_time_horizon_obstacles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_time_horizon_obstacles, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_max_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_max_speed, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_max_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_max_speed, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_path_max_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_path_max_distance, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_path_max_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&NavigationAgent2D::get_path_max_distance, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_navigation_layers, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_navigation_layers, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_navigation_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_navigation_layer_value, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_navigation_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_navigation_layer_value, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_pathfinding_algorithm(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_pathfinding_algorithm, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_pathfinding_algorithm(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_pathfinding_algorithm, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_path_postprocessing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_path_postprocessing, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_path_postprocessing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_path_postprocessing, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_path_metadata_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_path_metadata_flags, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_path_metadata_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_path_metadata_flags, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_navigation_map, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_navigation_map, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_target_position, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_target_position, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_simplify_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_simplify_path, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_simplify_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_simplify_path, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_simplify_epsilon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_simplify_epsilon, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_simplify_epsilon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_simplify_epsilon, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_next_path_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&NavigationAgent2D::get_next_path_position, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_velocity_forced(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_velocity_forced, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_velocity, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&NavigationAgent2D::get_velocity, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_distance_to_target(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::distance_to_target, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_current_navigation_result(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_current_navigation_result, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_current_navigation_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_current_navigation_path, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_current_navigation_path_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_current_navigation_path_index, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_is_target_reached(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::is_target_reached, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_is_target_reachable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&NavigationAgent2D::is_target_reachable, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_is_navigation_finished(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&NavigationAgent2D::is_navigation_finished, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_final_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&NavigationAgent2D::get_final_position, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_avoidance_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_avoidance_layers, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_avoidance_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_avoidance_layers, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_avoidance_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_avoidance_mask, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_avoidance_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_avoidance_mask, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_avoidance_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_avoidance_layer_value, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_avoidance_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_avoidance_layer_value, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_avoidance_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_avoidance_mask_value, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_avoidance_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_avoidance_mask_value, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_avoidance_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_avoidance_priority, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_avoidance_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_avoidance_priority, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_debug_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_debug_enabled, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_debug_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_debug_enabled, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_debug_use_custom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_debug_use_custom, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_debug_use_custom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_debug_use_custom, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_debug_path_custom_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_debug_path_custom_color, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_debug_path_custom_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_debug_path_custom_color, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_debug_path_custom_point_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_debug_path_custom_point_size, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_debug_path_custom_point_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_debug_path_custom_point_size, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_set_debug_path_custom_line_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationAgent2D::set_debug_path_custom_line_width, ctx, this_val, argc, argv);
};
static JSValue navigation_agent2d_class_get_debug_path_custom_line_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationAgent2D::get_debug_path_custom_line_width, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry navigation_agent2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_rid", 0, &navigation_agent2d_class_get_rid),
	JS_CFUNC_DEF("set_avoidance_enabled", 1, &navigation_agent2d_class_set_avoidance_enabled),
	JS_CFUNC_DEF("get_avoidance_enabled", 0, &navigation_agent2d_class_get_avoidance_enabled),
	JS_CFUNC_DEF("set_path_desired_distance", 1, &navigation_agent2d_class_set_path_desired_distance),
	JS_CFUNC_DEF("get_path_desired_distance", 0, &navigation_agent2d_class_get_path_desired_distance),
	JS_CFUNC_DEF("set_target_desired_distance", 1, &navigation_agent2d_class_set_target_desired_distance),
	JS_CFUNC_DEF("get_target_desired_distance", 0, &navigation_agent2d_class_get_target_desired_distance),
	JS_CFUNC_DEF("set_radius", 1, &navigation_agent2d_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &navigation_agent2d_class_get_radius),
	JS_CFUNC_DEF("set_neighbor_distance", 1, &navigation_agent2d_class_set_neighbor_distance),
	JS_CFUNC_DEF("get_neighbor_distance", 0, &navigation_agent2d_class_get_neighbor_distance),
	JS_CFUNC_DEF("set_max_neighbors", 1, &navigation_agent2d_class_set_max_neighbors),
	JS_CFUNC_DEF("get_max_neighbors", 0, &navigation_agent2d_class_get_max_neighbors),
	JS_CFUNC_DEF("set_time_horizon_agents", 1, &navigation_agent2d_class_set_time_horizon_agents),
	JS_CFUNC_DEF("get_time_horizon_agents", 0, &navigation_agent2d_class_get_time_horizon_agents),
	JS_CFUNC_DEF("set_time_horizon_obstacles", 1, &navigation_agent2d_class_set_time_horizon_obstacles),
	JS_CFUNC_DEF("get_time_horizon_obstacles", 0, &navigation_agent2d_class_get_time_horizon_obstacles),
	JS_CFUNC_DEF("set_max_speed", 1, &navigation_agent2d_class_set_max_speed),
	JS_CFUNC_DEF("get_max_speed", 0, &navigation_agent2d_class_get_max_speed),
	JS_CFUNC_DEF("set_path_max_distance", 1, &navigation_agent2d_class_set_path_max_distance),
	JS_CFUNC_DEF("get_path_max_distance", 0, &navigation_agent2d_class_get_path_max_distance),
	JS_CFUNC_DEF("set_navigation_layers", 1, &navigation_agent2d_class_set_navigation_layers),
	JS_CFUNC_DEF("get_navigation_layers", 0, &navigation_agent2d_class_get_navigation_layers),
	JS_CFUNC_DEF("set_navigation_layer_value", 2, &navigation_agent2d_class_set_navigation_layer_value),
	JS_CFUNC_DEF("get_navigation_layer_value", 1, &navigation_agent2d_class_get_navigation_layer_value),
	JS_CFUNC_DEF("set_pathfinding_algorithm", 1, &navigation_agent2d_class_set_pathfinding_algorithm),
	JS_CFUNC_DEF("get_pathfinding_algorithm", 0, &navigation_agent2d_class_get_pathfinding_algorithm),
	JS_CFUNC_DEF("set_path_postprocessing", 1, &navigation_agent2d_class_set_path_postprocessing),
	JS_CFUNC_DEF("get_path_postprocessing", 0, &navigation_agent2d_class_get_path_postprocessing),
	JS_CFUNC_DEF("set_path_metadata_flags", 1, &navigation_agent2d_class_set_path_metadata_flags),
	JS_CFUNC_DEF("get_path_metadata_flags", 0, &navigation_agent2d_class_get_path_metadata_flags),
	JS_CFUNC_DEF("set_navigation_map", 1, &navigation_agent2d_class_set_navigation_map),
	JS_CFUNC_DEF("get_navigation_map", 0, &navigation_agent2d_class_get_navigation_map),
	JS_CFUNC_DEF("set_target_position", 1, &navigation_agent2d_class_set_target_position),
	JS_CFUNC_DEF("get_target_position", 0, &navigation_agent2d_class_get_target_position),
	JS_CFUNC_DEF("set_simplify_path", 1, &navigation_agent2d_class_set_simplify_path),
	JS_CFUNC_DEF("get_simplify_path", 0, &navigation_agent2d_class_get_simplify_path),
	JS_CFUNC_DEF("set_simplify_epsilon", 1, &navigation_agent2d_class_set_simplify_epsilon),
	JS_CFUNC_DEF("get_simplify_epsilon", 0, &navigation_agent2d_class_get_simplify_epsilon),
	JS_CFUNC_DEF("get_next_path_position", 0, &navigation_agent2d_class_get_next_path_position),
	JS_CFUNC_DEF("set_velocity_forced", 1, &navigation_agent2d_class_set_velocity_forced),
	JS_CFUNC_DEF("set_velocity", 1, &navigation_agent2d_class_set_velocity),
	JS_CFUNC_DEF("get_velocity", 0, &navigation_agent2d_class_get_velocity),
	JS_CFUNC_DEF("distance_to_target", 0, &navigation_agent2d_class_distance_to_target),
	JS_CFUNC_DEF("get_current_navigation_result", 0, &navigation_agent2d_class_get_current_navigation_result),
	JS_CFUNC_DEF("get_current_navigation_path", 0, &navigation_agent2d_class_get_current_navigation_path),
	JS_CFUNC_DEF("get_current_navigation_path_index", 0, &navigation_agent2d_class_get_current_navigation_path_index),
	JS_CFUNC_DEF("is_target_reached", 0, &navigation_agent2d_class_is_target_reached),
	JS_CFUNC_DEF("is_target_reachable", 0, &navigation_agent2d_class_is_target_reachable),
	JS_CFUNC_DEF("is_navigation_finished", 0, &navigation_agent2d_class_is_navigation_finished),
	JS_CFUNC_DEF("get_final_position", 0, &navigation_agent2d_class_get_final_position),
	JS_CFUNC_DEF("set_avoidance_layers", 1, &navigation_agent2d_class_set_avoidance_layers),
	JS_CFUNC_DEF("get_avoidance_layers", 0, &navigation_agent2d_class_get_avoidance_layers),
	JS_CFUNC_DEF("set_avoidance_mask", 1, &navigation_agent2d_class_set_avoidance_mask),
	JS_CFUNC_DEF("get_avoidance_mask", 0, &navigation_agent2d_class_get_avoidance_mask),
	JS_CFUNC_DEF("set_avoidance_layer_value", 2, &navigation_agent2d_class_set_avoidance_layer_value),
	JS_CFUNC_DEF("get_avoidance_layer_value", 1, &navigation_agent2d_class_get_avoidance_layer_value),
	JS_CFUNC_DEF("set_avoidance_mask_value", 2, &navigation_agent2d_class_set_avoidance_mask_value),
	JS_CFUNC_DEF("get_avoidance_mask_value", 1, &navigation_agent2d_class_get_avoidance_mask_value),
	JS_CFUNC_DEF("set_avoidance_priority", 1, &navigation_agent2d_class_set_avoidance_priority),
	JS_CFUNC_DEF("get_avoidance_priority", 0, &navigation_agent2d_class_get_avoidance_priority),
	JS_CFUNC_DEF("set_debug_enabled", 1, &navigation_agent2d_class_set_debug_enabled),
	JS_CFUNC_DEF("get_debug_enabled", 0, &navigation_agent2d_class_get_debug_enabled),
	JS_CFUNC_DEF("set_debug_use_custom", 1, &navigation_agent2d_class_set_debug_use_custom),
	JS_CFUNC_DEF("get_debug_use_custom", 0, &navigation_agent2d_class_get_debug_use_custom),
	JS_CFUNC_DEF("set_debug_path_custom_color", 1, &navigation_agent2d_class_set_debug_path_custom_color),
	JS_CFUNC_DEF("get_debug_path_custom_color", 0, &navigation_agent2d_class_get_debug_path_custom_color),
	JS_CFUNC_DEF("set_debug_path_custom_point_size", 1, &navigation_agent2d_class_set_debug_path_custom_point_size),
	JS_CFUNC_DEF("get_debug_path_custom_point_size", 0, &navigation_agent2d_class_get_debug_path_custom_point_size),
	JS_CFUNC_DEF("set_debug_path_custom_line_width", 1, &navigation_agent2d_class_set_debug_path_custom_line_width),
	JS_CFUNC_DEF("get_debug_path_custom_line_width", 0, &navigation_agent2d_class_get_debug_path_custom_line_width),
};
static JSValue navigation_agent2d_class_get_path_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	NavigationAgent2D *opaque = reinterpret_cast<NavigationAgent2D *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "path_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "path_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "path_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue navigation_agent2d_class_get_target_reached_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	NavigationAgent2D *opaque = reinterpret_cast<NavigationAgent2D *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "target_reached_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "target_reached").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "target_reached_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue navigation_agent2d_class_get_waypoint_reached_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	NavigationAgent2D *opaque = reinterpret_cast<NavigationAgent2D *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "waypoint_reached_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "waypoint_reached").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "waypoint_reached_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue navigation_agent2d_class_get_link_reached_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	NavigationAgent2D *opaque = reinterpret_cast<NavigationAgent2D *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "link_reached_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "link_reached").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "link_reached_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue navigation_agent2d_class_get_navigation_finished_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	NavigationAgent2D *opaque = reinterpret_cast<NavigationAgent2D *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "navigation_finished_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "navigation_finished").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "navigation_finished_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue navigation_agent2d_class_get_velocity_computed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	NavigationAgent2D *opaque = reinterpret_cast<NavigationAgent2D *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "velocity_computed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "velocity_computed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "velocity_computed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_navigation_agent2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "target_position"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_target_position, "get_target_position", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_target_position, "set_target_position", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "path_desired_distance"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_path_desired_distance, "get_path_desired_distance", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_path_desired_distance, "set_path_desired_distance", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "target_desired_distance"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_target_desired_distance, "get_target_desired_distance", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_target_desired_distance, "set_target_desired_distance", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "path_max_distance"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_path_max_distance, "get_path_max_distance", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_path_max_distance, "set_path_max_distance", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "navigation_layers"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_navigation_layers, "get_navigation_layers", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_navigation_layers, "set_navigation_layers", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "pathfinding_algorithm"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_pathfinding_algorithm, "get_pathfinding_algorithm", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_pathfinding_algorithm, "set_pathfinding_algorithm", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "path_postprocessing"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_path_postprocessing, "get_path_postprocessing", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_path_postprocessing, "set_path_postprocessing", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "path_metadata_flags"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_path_metadata_flags, "get_path_metadata_flags", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_path_metadata_flags, "set_path_metadata_flags", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "simplify_path"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_simplify_path, "get_simplify_path", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_simplify_path, "set_simplify_path", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "simplify_epsilon"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_simplify_epsilon, "get_simplify_epsilon", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_simplify_epsilon, "set_simplify_epsilon", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "avoidance_enabled"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_avoidance_enabled, "get_avoidance_enabled", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_avoidance_enabled, "set_avoidance_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "velocity"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_velocity, "get_velocity", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_velocity, "set_velocity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "radius"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_radius, "get_radius", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_radius, "set_radius", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "neighbor_distance"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_neighbor_distance, "get_neighbor_distance", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_neighbor_distance, "set_neighbor_distance", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "max_neighbors"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_max_neighbors, "get_max_neighbors", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_max_neighbors, "set_max_neighbors", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "time_horizon_agents"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_time_horizon_agents, "get_time_horizon_agents", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_time_horizon_agents, "set_time_horizon_agents", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "time_horizon_obstacles"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_time_horizon_obstacles, "get_time_horizon_obstacles", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_time_horizon_obstacles, "set_time_horizon_obstacles", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "max_speed"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_max_speed, "get_max_speed", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_max_speed, "set_max_speed", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "avoidance_layers"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_avoidance_layers, "get_avoidance_layers", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_avoidance_layers, "set_avoidance_layers", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "avoidance_mask"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_avoidance_mask, "get_avoidance_mask", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_avoidance_mask, "set_avoidance_mask", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "avoidance_priority"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_avoidance_priority, "get_avoidance_priority", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_avoidance_priority, "set_avoidance_priority", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "debug_enabled"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_debug_enabled, "get_debug_enabled", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_debug_enabled, "set_debug_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "debug_use_custom"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_debug_use_custom, "get_debug_use_custom", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_debug_use_custom, "set_debug_use_custom", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "debug_path_custom_color"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_debug_path_custom_color, "get_debug_path_custom_color", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_debug_path_custom_color, "set_debug_path_custom_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "debug_path_custom_point_size"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_debug_path_custom_point_size, "get_debug_path_custom_point_size", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_debug_path_custom_point_size, "set_debug_path_custom_point_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "debug_path_custom_line_width"),
        JS_NewCFunction(ctx, navigation_agent2d_class_get_debug_path_custom_line_width, "get_debug_path_custom_line_width", 0),
        JS_NewCFunction(ctx, navigation_agent2d_class_set_debug_path_custom_line_width, "set_debug_path_custom_line_width", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "path_changed"),
		JS_NewCFunction(ctx, navigation_agent2d_class_get_path_changed_signal, "get_path_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "target_reached"),
		JS_NewCFunction(ctx, navigation_agent2d_class_get_target_reached_signal, "get_target_reached_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "waypoint_reached"),
		JS_NewCFunction(ctx, navigation_agent2d_class_get_waypoint_reached_signal, "get_waypoint_reached_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "link_reached"),
		JS_NewCFunction(ctx, navigation_agent2d_class_get_link_reached_signal, "get_link_reached_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "navigation_finished"),
		JS_NewCFunction(ctx, navigation_agent2d_class_get_navigation_finished_signal, "get_navigation_finished_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "velocity_computed"),
		JS_NewCFunction(ctx, navigation_agent2d_class_get_velocity_computed_signal, "get_velocity_computed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_navigation_agent2d_enum(JSContext *ctx, JSValue proto) {
}

static int js_navigation_agent2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["NavigationAgent2D"] = NavigationAgent2D::__class_id;
	class_id_list.insert(NavigationAgent2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), NavigationAgent2D::__class_id, &navigation_agent2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, NavigationAgent2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationAgent2D::__class_id, proto);

	define_navigation_agent2d_property(ctx, proto);
	define_navigation_agent2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_agent2d_class_proto_funcs, _countof(navigation_agent2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, navigation_agent2d_class_constructor, "NavigationAgent2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "NavigationAgent2D", ctor);
	constructors[NavigationAgent2D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_navigation_agent2d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_agent2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationAgent2D");
	return m;
}

JSModuleDef *js_init_navigation_agent2d_module(JSContext *ctx) {
	return _js_init_navigation_agent2d_module(ctx, "@godot/classes/navigation_agent2d");
}

void register_navigation_agent2d() {
	NavigationAgent2D::__init_js_class_id();
	js_init_navigation_agent2d_module(ctx);
}