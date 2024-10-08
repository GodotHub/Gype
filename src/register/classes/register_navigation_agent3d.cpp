
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/navigation_agent3d.hpp>
#include <godot_cpp/classes/navigation_path_query_result3d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void navigation_agent3d_class_finalizer(JSRuntime *rt, JSValue val) {
	NavigationAgent3D *navigation_agent3d = static_cast<NavigationAgent3D *>(JS_GetOpaque(val, NavigationAgent3D::__class_id));
	if (navigation_agent3d)
		NavigationAgent3D::free(nullptr, navigation_agent3d);
}

static JSClassDef navigation_agent3d_class_def = {
	"NavigationAgent3D",
	.finalizer = navigation_agent3d_class_finalizer
};

static JSValue navigation_agent3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NavigationAgent3D *navigation_agent3d_class;
	JSValue obj = JS_NewObjectClass(ctx, NavigationAgent3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	navigation_agent3d_class = memnew(NavigationAgent3D);
	if (!navigation_agent3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, navigation_agent3d_class);
	return obj;
}
static JSValue navigation_agent3d_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_rid, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_avoidance_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_avoidance_enabled, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_avoidance_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_avoidance_enabled, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_path_desired_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_path_desired_distance, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_path_desired_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_path_desired_distance, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_target_desired_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_target_desired_distance, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_target_desired_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_target_desired_distance, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_radius, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_radius, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_height, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_height, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_path_height_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_path_height_offset, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_path_height_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_path_height_offset, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_use_3d_avoidance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_use_3d_avoidance, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_use_3d_avoidance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_use_3d_avoidance, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_keep_y_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_keep_y_velocity, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_keep_y_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_keep_y_velocity, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_neighbor_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_neighbor_distance, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_neighbor_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_neighbor_distance, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_max_neighbors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_max_neighbors, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_max_neighbors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_max_neighbors, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_time_horizon_agents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_time_horizon_agents, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_time_horizon_agents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_time_horizon_agents, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_time_horizon_obstacles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_time_horizon_obstacles, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_time_horizon_obstacles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_time_horizon_obstacles, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_max_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_max_speed, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_max_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_max_speed, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_path_max_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_path_max_distance, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_path_max_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NavigationAgent3D::get_path_max_distance, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_navigation_layers, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_navigation_layers, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_navigation_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_navigation_layer_value, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_navigation_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_navigation_layer_value, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_pathfinding_algorithm(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_pathfinding_algorithm, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_pathfinding_algorithm(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_pathfinding_algorithm, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_path_postprocessing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_path_postprocessing, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_path_postprocessing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_path_postprocessing, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_path_metadata_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_path_metadata_flags, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_path_metadata_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_path_metadata_flags, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_navigation_map, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_navigation_map, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_target_position, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_target_position, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_simplify_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_simplify_path, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_simplify_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_simplify_path, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_simplify_epsilon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_simplify_epsilon, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_simplify_epsilon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_simplify_epsilon, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_get_next_path_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NavigationAgent3D::get_next_path_position, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_velocity_forced(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_velocity_forced, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_set_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_velocity, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NavigationAgent3D::get_velocity, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_distance_to_target(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::distance_to_target, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_get_current_navigation_result(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_current_navigation_result, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_get_current_navigation_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_current_navigation_path, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_get_current_navigation_path_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_current_navigation_path_index, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_is_target_reached(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::is_target_reached, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_is_target_reachable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NavigationAgent3D::is_target_reachable, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_is_navigation_finished(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NavigationAgent3D::is_navigation_finished, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_get_final_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NavigationAgent3D::get_final_position, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_avoidance_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_avoidance_layers, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_avoidance_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_avoidance_layers, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_avoidance_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_avoidance_mask, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_avoidance_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_avoidance_mask, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_avoidance_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_avoidance_layer_value, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_avoidance_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_avoidance_layer_value, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_avoidance_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_avoidance_mask_value, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_avoidance_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_avoidance_mask_value, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_avoidance_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_avoidance_priority, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_avoidance_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_avoidance_priority, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_debug_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_debug_enabled, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_debug_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_debug_enabled, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_debug_use_custom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_debug_use_custom, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_debug_use_custom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_debug_use_custom, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_debug_path_custom_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_debug_path_custom_color, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_debug_path_custom_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_debug_path_custom_color, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_agent3d_class_set_debug_path_custom_point_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationAgent3D::set_debug_path_custom_point_size, NavigationAgent3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_agent3d_class_get_debug_path_custom_point_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationAgent3D::get_debug_path_custom_point_size, NavigationAgent3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry navigation_agent3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_rid", 0, &navigation_agent3d_class_get_rid),
	JS_CFUNC_DEF("set_avoidance_enabled", 1, &navigation_agent3d_class_set_avoidance_enabled),
	JS_CFUNC_DEF("get_avoidance_enabled", 0, &navigation_agent3d_class_get_avoidance_enabled),
	JS_CFUNC_DEF("set_path_desired_distance", 1, &navigation_agent3d_class_set_path_desired_distance),
	JS_CFUNC_DEF("get_path_desired_distance", 0, &navigation_agent3d_class_get_path_desired_distance),
	JS_CFUNC_DEF("set_target_desired_distance", 1, &navigation_agent3d_class_set_target_desired_distance),
	JS_CFUNC_DEF("get_target_desired_distance", 0, &navigation_agent3d_class_get_target_desired_distance),
	JS_CFUNC_DEF("set_radius", 1, &navigation_agent3d_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &navigation_agent3d_class_get_radius),
	JS_CFUNC_DEF("set_height", 1, &navigation_agent3d_class_set_height),
	JS_CFUNC_DEF("get_height", 0, &navigation_agent3d_class_get_height),
	JS_CFUNC_DEF("set_path_height_offset", 1, &navigation_agent3d_class_set_path_height_offset),
	JS_CFUNC_DEF("get_path_height_offset", 0, &navigation_agent3d_class_get_path_height_offset),
	JS_CFUNC_DEF("set_use_3d_avoidance", 1, &navigation_agent3d_class_set_use_3d_avoidance),
	JS_CFUNC_DEF("get_use_3d_avoidance", 0, &navigation_agent3d_class_get_use_3d_avoidance),
	JS_CFUNC_DEF("set_keep_y_velocity", 1, &navigation_agent3d_class_set_keep_y_velocity),
	JS_CFUNC_DEF("get_keep_y_velocity", 0, &navigation_agent3d_class_get_keep_y_velocity),
	JS_CFUNC_DEF("set_neighbor_distance", 1, &navigation_agent3d_class_set_neighbor_distance),
	JS_CFUNC_DEF("get_neighbor_distance", 0, &navigation_agent3d_class_get_neighbor_distance),
	JS_CFUNC_DEF("set_max_neighbors", 1, &navigation_agent3d_class_set_max_neighbors),
	JS_CFUNC_DEF("get_max_neighbors", 0, &navigation_agent3d_class_get_max_neighbors),
	JS_CFUNC_DEF("set_time_horizon_agents", 1, &navigation_agent3d_class_set_time_horizon_agents),
	JS_CFUNC_DEF("get_time_horizon_agents", 0, &navigation_agent3d_class_get_time_horizon_agents),
	JS_CFUNC_DEF("set_time_horizon_obstacles", 1, &navigation_agent3d_class_set_time_horizon_obstacles),
	JS_CFUNC_DEF("get_time_horizon_obstacles", 0, &navigation_agent3d_class_get_time_horizon_obstacles),
	JS_CFUNC_DEF("set_max_speed", 1, &navigation_agent3d_class_set_max_speed),
	JS_CFUNC_DEF("get_max_speed", 0, &navigation_agent3d_class_get_max_speed),
	JS_CFUNC_DEF("set_path_max_distance", 1, &navigation_agent3d_class_set_path_max_distance),
	JS_CFUNC_DEF("get_path_max_distance", 0, &navigation_agent3d_class_get_path_max_distance),
	JS_CFUNC_DEF("set_navigation_layers", 1, &navigation_agent3d_class_set_navigation_layers),
	JS_CFUNC_DEF("get_navigation_layers", 0, &navigation_agent3d_class_get_navigation_layers),
	JS_CFUNC_DEF("set_navigation_layer_value", 2, &navigation_agent3d_class_set_navigation_layer_value),
	JS_CFUNC_DEF("get_navigation_layer_value", 1, &navigation_agent3d_class_get_navigation_layer_value),
	JS_CFUNC_DEF("set_pathfinding_algorithm", 1, &navigation_agent3d_class_set_pathfinding_algorithm),
	JS_CFUNC_DEF("get_pathfinding_algorithm", 0, &navigation_agent3d_class_get_pathfinding_algorithm),
	JS_CFUNC_DEF("set_path_postprocessing", 1, &navigation_agent3d_class_set_path_postprocessing),
	JS_CFUNC_DEF("get_path_postprocessing", 0, &navigation_agent3d_class_get_path_postprocessing),
	JS_CFUNC_DEF("set_path_metadata_flags", 1, &navigation_agent3d_class_set_path_metadata_flags),
	JS_CFUNC_DEF("get_path_metadata_flags", 0, &navigation_agent3d_class_get_path_metadata_flags),
	JS_CFUNC_DEF("set_navigation_map", 1, &navigation_agent3d_class_set_navigation_map),
	JS_CFUNC_DEF("get_navigation_map", 0, &navigation_agent3d_class_get_navigation_map),
	JS_CFUNC_DEF("set_target_position", 1, &navigation_agent3d_class_set_target_position),
	JS_CFUNC_DEF("get_target_position", 0, &navigation_agent3d_class_get_target_position),
	JS_CFUNC_DEF("set_simplify_path", 1, &navigation_agent3d_class_set_simplify_path),
	JS_CFUNC_DEF("get_simplify_path", 0, &navigation_agent3d_class_get_simplify_path),
	JS_CFUNC_DEF("set_simplify_epsilon", 1, &navigation_agent3d_class_set_simplify_epsilon),
	JS_CFUNC_DEF("get_simplify_epsilon", 0, &navigation_agent3d_class_get_simplify_epsilon),
	JS_CFUNC_DEF("get_next_path_position", 0, &navigation_agent3d_class_get_next_path_position),
	JS_CFUNC_DEF("set_velocity_forced", 1, &navigation_agent3d_class_set_velocity_forced),
	JS_CFUNC_DEF("set_velocity", 1, &navigation_agent3d_class_set_velocity),
	JS_CFUNC_DEF("get_velocity", 0, &navigation_agent3d_class_get_velocity),
	JS_CFUNC_DEF("distance_to_target", 0, &navigation_agent3d_class_distance_to_target),
	JS_CFUNC_DEF("get_current_navigation_result", 0, &navigation_agent3d_class_get_current_navigation_result),
	JS_CFUNC_DEF("get_current_navigation_path", 0, &navigation_agent3d_class_get_current_navigation_path),
	JS_CFUNC_DEF("get_current_navigation_path_index", 0, &navigation_agent3d_class_get_current_navigation_path_index),
	JS_CFUNC_DEF("is_target_reached", 0, &navigation_agent3d_class_is_target_reached),
	JS_CFUNC_DEF("is_target_reachable", 0, &navigation_agent3d_class_is_target_reachable),
	JS_CFUNC_DEF("is_navigation_finished", 0, &navigation_agent3d_class_is_navigation_finished),
	JS_CFUNC_DEF("get_final_position", 0, &navigation_agent3d_class_get_final_position),
	JS_CFUNC_DEF("set_avoidance_layers", 1, &navigation_agent3d_class_set_avoidance_layers),
	JS_CFUNC_DEF("get_avoidance_layers", 0, &navigation_agent3d_class_get_avoidance_layers),
	JS_CFUNC_DEF("set_avoidance_mask", 1, &navigation_agent3d_class_set_avoidance_mask),
	JS_CFUNC_DEF("get_avoidance_mask", 0, &navigation_agent3d_class_get_avoidance_mask),
	JS_CFUNC_DEF("set_avoidance_layer_value", 2, &navigation_agent3d_class_set_avoidance_layer_value),
	JS_CFUNC_DEF("get_avoidance_layer_value", 1, &navigation_agent3d_class_get_avoidance_layer_value),
	JS_CFUNC_DEF("set_avoidance_mask_value", 2, &navigation_agent3d_class_set_avoidance_mask_value),
	JS_CFUNC_DEF("get_avoidance_mask_value", 1, &navigation_agent3d_class_get_avoidance_mask_value),
	JS_CFUNC_DEF("set_avoidance_priority", 1, &navigation_agent3d_class_set_avoidance_priority),
	JS_CFUNC_DEF("get_avoidance_priority", 0, &navigation_agent3d_class_get_avoidance_priority),
	JS_CFUNC_DEF("set_debug_enabled", 1, &navigation_agent3d_class_set_debug_enabled),
	JS_CFUNC_DEF("get_debug_enabled", 0, &navigation_agent3d_class_get_debug_enabled),
	JS_CFUNC_DEF("set_debug_use_custom", 1, &navigation_agent3d_class_set_debug_use_custom),
	JS_CFUNC_DEF("get_debug_use_custom", 0, &navigation_agent3d_class_get_debug_use_custom),
	JS_CFUNC_DEF("set_debug_path_custom_color", 1, &navigation_agent3d_class_set_debug_path_custom_color),
	JS_CFUNC_DEF("get_debug_path_custom_color", 0, &navigation_agent3d_class_get_debug_path_custom_color),
	JS_CFUNC_DEF("set_debug_path_custom_point_size", 1, &navigation_agent3d_class_set_debug_path_custom_point_size),
	JS_CFUNC_DEF("get_debug_path_custom_point_size", 0, &navigation_agent3d_class_get_debug_path_custom_point_size),
};

static int js_navigation_agent3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&NavigationAgent3D::__class_id);
	classes["NavigationAgent3D"] = NavigationAgent3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), NavigationAgent3D::__class_id, &navigation_agent3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationAgent3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_agent3d_class_proto_funcs, _countof(navigation_agent3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, navigation_agent3d_class_constructor, "NavigationAgent3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "NavigationAgent3D", ctor);

	return 0;
}

JSModuleDef *_js_init_navigation_agent3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_agent3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationAgent3D");
	return m;
}

JSModuleDef *js_init_navigation_agent3d_module(JSContext *ctx) {
	return _js_init_navigation_agent3d_module(ctx, "godot/classes/navigation_agent3d");
}

void register_navigation_agent3d() {
	js_init_navigation_agent3d_module(ctx);
}