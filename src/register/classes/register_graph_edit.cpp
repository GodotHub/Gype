
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/classes/graph_frame.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/graph_edit.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void graph_edit_class_finalizer(JSRuntime *rt, JSValue val) {
	GraphEdit *graph_edit = static_cast<GraphEdit *>(JS_GetOpaque(val, GraphEdit::__class_id));
	if (graph_edit)
		GraphEdit::free(nullptr, graph_edit);
}

static JSClassDef graph_edit_class_def = {
	"GraphEdit",
	.finalizer = graph_edit_class_finalizer
};

static JSValue graph_edit_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GraphEdit *graph_edit_class;
	JSValue obj = JS_NewObjectClass(ctx, GraphEdit::__class_id);
	if (JS_IsException(obj))
		return obj;
	graph_edit_class = memnew(GraphEdit);
	if (!graph_edit_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, graph_edit_class);
	return obj;
}
static JSValue graph_edit_class_connect_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphEdit::connect_node, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_is_node_connected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphEdit::is_node_connected, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_disconnect_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::disconnect_node, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_set_connection_activity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_connection_activity, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_get_connection_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::get_connection_list, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_get_closest_connection_at_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::get_closest_connection_at_point, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_get_connections_intersecting_with_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::get_connections_intersecting_with_rect, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_clear_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::clear_connections, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_force_connection_drag_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::force_connection_drag_end, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_get_scroll_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::get_scroll_offset, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_scroll_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_scroll_offset, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_add_valid_right_disconnect_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::add_valid_right_disconnect_type, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_remove_valid_right_disconnect_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::remove_valid_right_disconnect_type, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_add_valid_left_disconnect_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::add_valid_left_disconnect_type, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_remove_valid_left_disconnect_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::remove_valid_left_disconnect_type, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_add_valid_connection_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::add_valid_connection_type, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_remove_valid_connection_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::remove_valid_connection_type, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_is_valid_connection_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::is_valid_connection_type, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_get_connection_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::get_connection_line, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_attach_graph_element_to_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::attach_graph_element_to_frame, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_detach_graph_element_from_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::detach_graph_element_from_frame, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_get_element_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphEdit::get_element_frame, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_get_attached_nodes_of_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphEdit::get_attached_nodes_of_frame, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_panning_scheme(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_panning_scheme, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_get_panning_scheme(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::get_panning_scheme, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_zoom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_zoom, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_get_zoom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::get_zoom, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_zoom_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_zoom_min, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_get_zoom_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::get_zoom_min, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_zoom_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_zoom_max, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_get_zoom_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::get_zoom_max, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_zoom_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_zoom_step, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_get_zoom_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::get_zoom_step, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_show_grid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_show_grid, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_is_showing_grid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::is_showing_grid, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_grid_pattern(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_grid_pattern, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_get_grid_pattern(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::get_grid_pattern, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_snapping_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_snapping_enabled, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_is_snapping_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::is_snapping_enabled, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_snapping_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_snapping_distance, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_get_snapping_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::get_snapping_distance, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_connection_lines_curvature(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_connection_lines_curvature, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_get_connection_lines_curvature(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::get_connection_lines_curvature, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_connection_lines_thickness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_connection_lines_thickness, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_get_connection_lines_thickness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::get_connection_lines_thickness, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_connection_lines_antialiased(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_connection_lines_antialiased, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_is_connection_lines_antialiased(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::is_connection_lines_antialiased, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_minimap_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_minimap_size, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_get_minimap_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::get_minimap_size, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_minimap_opacity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_minimap_opacity, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_get_minimap_opacity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::get_minimap_opacity, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_minimap_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_minimap_enabled, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_is_minimap_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::is_minimap_enabled, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_show_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_show_menu, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_is_showing_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::is_showing_menu, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_show_zoom_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_show_zoom_label, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_is_showing_zoom_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::is_showing_zoom_label, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_show_grid_buttons(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_show_grid_buttons, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_is_showing_grid_buttons(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::is_showing_grid_buttons, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_show_zoom_buttons(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_show_zoom_buttons, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_is_showing_zoom_buttons(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::is_showing_zoom_buttons, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_show_minimap_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_show_minimap_button, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_is_showing_minimap_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::is_showing_minimap_button, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_show_arrange_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_show_arrange_button, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_is_showing_arrange_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::is_showing_arrange_button, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_set_right_disconnects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_right_disconnects, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_is_right_disconnects_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphEdit::is_right_disconnects_enabled, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_get_menu_hbox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphEdit::get_menu_hbox, GraphEdit::__class_id, ctx, this_val, argv);
};
static JSValue graph_edit_class_arrange_nodes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::arrange_nodes, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_edit_class_set_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphEdit::set_selected, GraphEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry graph_edit_class_proto_funcs[] = {
	JS_CFUNC_DEF("connect_node", 4, &graph_edit_class_connect_node),
	JS_CFUNC_DEF("is_node_connected", 4, &graph_edit_class_is_node_connected),
	JS_CFUNC_DEF("disconnect_node", 4, &graph_edit_class_disconnect_node),
	JS_CFUNC_DEF("set_connection_activity", 5, &graph_edit_class_set_connection_activity),
	JS_CFUNC_DEF("get_connection_list", 0, &graph_edit_class_get_connection_list),
	JS_CFUNC_DEF("get_closest_connection_at_point", 2, &graph_edit_class_get_closest_connection_at_point),
	JS_CFUNC_DEF("get_connections_intersecting_with_rect", 1, &graph_edit_class_get_connections_intersecting_with_rect),
	JS_CFUNC_DEF("clear_connections", 0, &graph_edit_class_clear_connections),
	JS_CFUNC_DEF("force_connection_drag_end", 0, &graph_edit_class_force_connection_drag_end),
	JS_CFUNC_DEF("get_scroll_offset", 0, &graph_edit_class_get_scroll_offset),
	JS_CFUNC_DEF("set_scroll_offset", 1, &graph_edit_class_set_scroll_offset),
	JS_CFUNC_DEF("add_valid_right_disconnect_type", 1, &graph_edit_class_add_valid_right_disconnect_type),
	JS_CFUNC_DEF("remove_valid_right_disconnect_type", 1, &graph_edit_class_remove_valid_right_disconnect_type),
	JS_CFUNC_DEF("add_valid_left_disconnect_type", 1, &graph_edit_class_add_valid_left_disconnect_type),
	JS_CFUNC_DEF("remove_valid_left_disconnect_type", 1, &graph_edit_class_remove_valid_left_disconnect_type),
	JS_CFUNC_DEF("add_valid_connection_type", 2, &graph_edit_class_add_valid_connection_type),
	JS_CFUNC_DEF("remove_valid_connection_type", 2, &graph_edit_class_remove_valid_connection_type),
	JS_CFUNC_DEF("is_valid_connection_type", 2, &graph_edit_class_is_valid_connection_type),
	JS_CFUNC_DEF("get_connection_line", 2, &graph_edit_class_get_connection_line),
	JS_CFUNC_DEF("attach_graph_element_to_frame", 2, &graph_edit_class_attach_graph_element_to_frame),
	JS_CFUNC_DEF("detach_graph_element_from_frame", 1, &graph_edit_class_detach_graph_element_from_frame),
	JS_CFUNC_DEF("get_element_frame", 1, &graph_edit_class_get_element_frame),
	JS_CFUNC_DEF("get_attached_nodes_of_frame", 1, &graph_edit_class_get_attached_nodes_of_frame),
	JS_CFUNC_DEF("set_panning_scheme", 1, &graph_edit_class_set_panning_scheme),
	JS_CFUNC_DEF("get_panning_scheme", 0, &graph_edit_class_get_panning_scheme),
	JS_CFUNC_DEF("set_zoom", 1, &graph_edit_class_set_zoom),
	JS_CFUNC_DEF("get_zoom", 0, &graph_edit_class_get_zoom),
	JS_CFUNC_DEF("set_zoom_min", 1, &graph_edit_class_set_zoom_min),
	JS_CFUNC_DEF("get_zoom_min", 0, &graph_edit_class_get_zoom_min),
	JS_CFUNC_DEF("set_zoom_max", 1, &graph_edit_class_set_zoom_max),
	JS_CFUNC_DEF("get_zoom_max", 0, &graph_edit_class_get_zoom_max),
	JS_CFUNC_DEF("set_zoom_step", 1, &graph_edit_class_set_zoom_step),
	JS_CFUNC_DEF("get_zoom_step", 0, &graph_edit_class_get_zoom_step),
	JS_CFUNC_DEF("set_show_grid", 1, &graph_edit_class_set_show_grid),
	JS_CFUNC_DEF("is_showing_grid", 0, &graph_edit_class_is_showing_grid),
	JS_CFUNC_DEF("set_grid_pattern", 1, &graph_edit_class_set_grid_pattern),
	JS_CFUNC_DEF("get_grid_pattern", 0, &graph_edit_class_get_grid_pattern),
	JS_CFUNC_DEF("set_snapping_enabled", 1, &graph_edit_class_set_snapping_enabled),
	JS_CFUNC_DEF("is_snapping_enabled", 0, &graph_edit_class_is_snapping_enabled),
	JS_CFUNC_DEF("set_snapping_distance", 1, &graph_edit_class_set_snapping_distance),
	JS_CFUNC_DEF("get_snapping_distance", 0, &graph_edit_class_get_snapping_distance),
	JS_CFUNC_DEF("set_connection_lines_curvature", 1, &graph_edit_class_set_connection_lines_curvature),
	JS_CFUNC_DEF("get_connection_lines_curvature", 0, &graph_edit_class_get_connection_lines_curvature),
	JS_CFUNC_DEF("set_connection_lines_thickness", 1, &graph_edit_class_set_connection_lines_thickness),
	JS_CFUNC_DEF("get_connection_lines_thickness", 0, &graph_edit_class_get_connection_lines_thickness),
	JS_CFUNC_DEF("set_connection_lines_antialiased", 1, &graph_edit_class_set_connection_lines_antialiased),
	JS_CFUNC_DEF("is_connection_lines_antialiased", 0, &graph_edit_class_is_connection_lines_antialiased),
	JS_CFUNC_DEF("set_minimap_size", 1, &graph_edit_class_set_minimap_size),
	JS_CFUNC_DEF("get_minimap_size", 0, &graph_edit_class_get_minimap_size),
	JS_CFUNC_DEF("set_minimap_opacity", 1, &graph_edit_class_set_minimap_opacity),
	JS_CFUNC_DEF("get_minimap_opacity", 0, &graph_edit_class_get_minimap_opacity),
	JS_CFUNC_DEF("set_minimap_enabled", 1, &graph_edit_class_set_minimap_enabled),
	JS_CFUNC_DEF("is_minimap_enabled", 0, &graph_edit_class_is_minimap_enabled),
	JS_CFUNC_DEF("set_show_menu", 1, &graph_edit_class_set_show_menu),
	JS_CFUNC_DEF("is_showing_menu", 0, &graph_edit_class_is_showing_menu),
	JS_CFUNC_DEF("set_show_zoom_label", 1, &graph_edit_class_set_show_zoom_label),
	JS_CFUNC_DEF("is_showing_zoom_label", 0, &graph_edit_class_is_showing_zoom_label),
	JS_CFUNC_DEF("set_show_grid_buttons", 1, &graph_edit_class_set_show_grid_buttons),
	JS_CFUNC_DEF("is_showing_grid_buttons", 0, &graph_edit_class_is_showing_grid_buttons),
	JS_CFUNC_DEF("set_show_zoom_buttons", 1, &graph_edit_class_set_show_zoom_buttons),
	JS_CFUNC_DEF("is_showing_zoom_buttons", 0, &graph_edit_class_is_showing_zoom_buttons),
	JS_CFUNC_DEF("set_show_minimap_button", 1, &graph_edit_class_set_show_minimap_button),
	JS_CFUNC_DEF("is_showing_minimap_button", 0, &graph_edit_class_is_showing_minimap_button),
	JS_CFUNC_DEF("set_show_arrange_button", 1, &graph_edit_class_set_show_arrange_button),
	JS_CFUNC_DEF("is_showing_arrange_button", 0, &graph_edit_class_is_showing_arrange_button),
	JS_CFUNC_DEF("set_right_disconnects", 1, &graph_edit_class_set_right_disconnects),
	JS_CFUNC_DEF("is_right_disconnects_enabled", 0, &graph_edit_class_is_right_disconnects_enabled),
	JS_CFUNC_DEF("get_menu_hbox", 0, &graph_edit_class_get_menu_hbox),
	JS_CFUNC_DEF("arrange_nodes", 0, &graph_edit_class_arrange_nodes),
	JS_CFUNC_DEF("set_selected", 1, &graph_edit_class_set_selected),
};

static int js_graph_edit_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GraphEdit::__class_id);
	classes["GraphEdit"] = GraphEdit::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GraphEdit::__class_id, &graph_edit_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GraphEdit::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, graph_edit_class_proto_funcs, _countof(graph_edit_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, graph_edit_class_constructor, "GraphEdit", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GraphEdit", ctor);

	return 0;
}

JSModuleDef *_js_init_graph_edit_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_graph_edit_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GraphEdit");
	return m;
}

JSModuleDef *js_init_graph_edit_module(JSContext *ctx) {
	return _js_init_graph_edit_module(ctx, "godot/classes/graph_edit");
}

void register_graph_edit() {
	js_init_graph_edit_module(ctx);
}