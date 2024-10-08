
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/scene_tree.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/classes/viewport.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void node_class_finalizer(JSRuntime *rt, JSValue val) {
	Node *node = static_cast<Node *>(JS_GetOpaque(val, Node::__class_id));
	if (node)
		Node::free(nullptr, node);
}

static JSClassDef node_class_def = {
	"Node",
	.finalizer = node_class_finalizer
};

static JSValue node_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Node *node_class;
	JSValue obj = JS_NewObjectClass(ctx, Node::__class_id);
	if (JS_IsException(obj))
		return obj;
	node_class = memnew(Node);
	if (!node_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, node_class);
	return obj;
}
static JSValue node_class_add_sibling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::add_sibling, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_set_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_name, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_name, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_add_child(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::add_child, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_remove_child(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::remove_child, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_reparent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::reparent, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_child_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_child_count, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_get_children(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_children, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_get_child(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_child, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_has_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::has_node, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_get_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_node, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_get_node_or_null(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_node_or_null, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_get_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_parent, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_find_child(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::find_child, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_find_children(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::find_children, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_find_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::find_parent, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_has_node_and_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::has_node_and_resource, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_get_node_and_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_node_and_resource, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_is_inside_tree(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_inside_tree, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_is_part_of_edited_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_part_of_edited_scene, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_is_ancestor_of(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_ancestor_of, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_is_greater_than(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_greater_than, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_get_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_path, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_get_path_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_path_to, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_add_to_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::add_to_group, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_remove_from_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::remove_from_group, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_in_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_in_group, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_move_child(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::move_child, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_groups(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_groups, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_set_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_owner, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_owner, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_get_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_index, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_print_tree(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::print_tree, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_print_tree_pretty(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::print_tree_pretty, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_tree_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_tree_string, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_get_tree_string_pretty(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_tree_string_pretty, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_set_scene_file_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_scene_file_path, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_scene_file_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_scene_file_path, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_propagate_notification(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::propagate_notification, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_propagate_call(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::propagate_call, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_set_physics_process(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_physics_process, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_physics_process_delta_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_physics_process_delta_time, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_is_physics_processing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_physics_processing, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_get_process_delta_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_process_delta_time, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_set_process(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_set_process_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_priority, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_process_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_process_priority, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_set_physics_process_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_physics_process_priority, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_physics_process_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_physics_process_priority, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_is_processing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_processing, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_set_process_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_input, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_processing_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_processing_input, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_set_process_shortcut_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_shortcut_input, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_processing_shortcut_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_processing_shortcut_input, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_set_process_unhandled_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_unhandled_input, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_processing_unhandled_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_processing_unhandled_input, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_set_process_unhandled_key_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_unhandled_key_input, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_processing_unhandled_key_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_processing_unhandled_key_input, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_set_process_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_mode, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_process_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_process_mode, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_can_process(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::can_process, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_set_process_thread_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_thread_group, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_process_thread_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_process_thread_group, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_set_process_thread_messages(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_thread_messages, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_process_thread_messages(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_process_thread_messages, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_set_process_thread_group_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_thread_group_order, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_process_thread_group_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_process_thread_group_order, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_set_display_folded(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_display_folded, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_displayed_folded(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_displayed_folded, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_set_process_internal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_internal, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_processing_internal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_processing_internal, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_set_physics_process_internal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_physics_process_internal, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_physics_processing_internal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_physics_processing_internal, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_set_physics_interpolation_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_physics_interpolation_mode, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_physics_interpolation_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_physics_interpolation_mode, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_is_physics_interpolated(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_physics_interpolated, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_is_physics_interpolated_and_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_physics_interpolated_and_enabled, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_reset_physics_interpolation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::reset_physics_interpolation, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_set_auto_translate_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_auto_translate_mode, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_auto_translate_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_auto_translate_mode, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_get_window(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_window, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_get_last_exclusive_window(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_last_exclusive_window, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_get_tree(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_tree, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_create_tween(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::create_tween, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_duplicate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::duplicate, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_replace_by(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::replace_by, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_set_scene_instance_load_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_scene_instance_load_placeholder, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_scene_instance_load_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_scene_instance_load_placeholder, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_set_editable_instance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_editable_instance, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_editable_instance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_editable_instance, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_get_viewport(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_viewport, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_queue_free(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::queue_free, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_request_ready(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::request_ready, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_node_ready(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_node_ready, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_set_multiplayer_authority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_multiplayer_authority, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_multiplayer_authority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_multiplayer_authority, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_is_multiplayer_authority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_multiplayer_authority, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_get_multiplayer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_multiplayer, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_rpc_config(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::rpc_config, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_set_editor_description(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_editor_description, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_editor_description(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::get_editor_description, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_set_unique_name_in_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_unique_name_in_owner, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_unique_name_in_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::is_unique_name_in_owner, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_atr(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::atr, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_atr_n(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node::atr_n, Node::__class_id, ctx, this_val, argv);
};
static JSValue node_class_update_configuration_warnings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::update_configuration_warnings, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_set_deferred_thread_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_deferred_thread_group, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_notify_deferred_thread_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::notify_deferred_thread_group, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_set_thread_safe(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_thread_safe, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_notify_thread_safe(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::notify_thread_safe, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_print_orphan_nodes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_static_method_no_ret(&Node::print_orphan_nodes, Node::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_rpc(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_vararg_method(&Node::js_rpc, Node::__class_id, ctx, this_val, argc, argv);
}
static JSValue node_class_rpc_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_vararg_method(&Node::js_rpc_id, Node::__class_id, ctx, this_val, argc, argv);
}
static JSValue node_class_call_deferred_thread_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_vararg_method(&Node::js_call_deferred_thread_group, Node::__class_id, ctx, this_val, argc, argv);
}
static JSValue node_class_call_thread_safe(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_vararg_method(&Node::js_call_thread_safe, Node::__class_id, ctx, this_val, argc, argv);
}
static const JSCFunctionListEntry node_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_sibling", 2, &node_class_add_sibling),
	JS_CFUNC_DEF("set_name", 1, &node_class_set_name),
	JS_CFUNC_DEF("get_name", 0, &node_class_get_name),
	JS_CFUNC_DEF("add_child", 3, &node_class_add_child),
	JS_CFUNC_DEF("remove_child", 1, &node_class_remove_child),
	JS_CFUNC_DEF("reparent", 2, &node_class_reparent),
	JS_CFUNC_DEF("get_child_count", 1, &node_class_get_child_count),
	JS_CFUNC_DEF("get_children", 1, &node_class_get_children),
	JS_CFUNC_DEF("get_child", 2, &node_class_get_child),
	JS_CFUNC_DEF("has_node", 1, &node_class_has_node),
	JS_CFUNC_DEF("get_node", 1, &node_class_get_node),
	JS_CFUNC_DEF("get_node_or_null", 1, &node_class_get_node_or_null),
	JS_CFUNC_DEF("get_parent", 0, &node_class_get_parent),
	JS_CFUNC_DEF("find_child", 3, &node_class_find_child),
	JS_CFUNC_DEF("find_children", 4, &node_class_find_children),
	JS_CFUNC_DEF("find_parent", 1, &node_class_find_parent),
	JS_CFUNC_DEF("has_node_and_resource", 1, &node_class_has_node_and_resource),
	JS_CFUNC_DEF("get_node_and_resource", 1, &node_class_get_node_and_resource),
	JS_CFUNC_DEF("is_inside_tree", 0, &node_class_is_inside_tree),
	JS_CFUNC_DEF("is_part_of_edited_scene", 0, &node_class_is_part_of_edited_scene),
	JS_CFUNC_DEF("is_ancestor_of", 1, &node_class_is_ancestor_of),
	JS_CFUNC_DEF("is_greater_than", 1, &node_class_is_greater_than),
	JS_CFUNC_DEF("get_path", 0, &node_class_get_path),
	JS_CFUNC_DEF("get_path_to", 2, &node_class_get_path_to),
	JS_CFUNC_DEF("add_to_group", 2, &node_class_add_to_group),
	JS_CFUNC_DEF("remove_from_group", 1, &node_class_remove_from_group),
	JS_CFUNC_DEF("is_in_group", 1, &node_class_is_in_group),
	JS_CFUNC_DEF("move_child", 2, &node_class_move_child),
	JS_CFUNC_DEF("get_groups", 0, &node_class_get_groups),
	JS_CFUNC_DEF("set_owner", 1, &node_class_set_owner),
	JS_CFUNC_DEF("get_owner", 0, &node_class_get_owner),
	JS_CFUNC_DEF("get_index", 1, &node_class_get_index),
	JS_CFUNC_DEF("print_tree", 0, &node_class_print_tree),
	JS_CFUNC_DEF("print_tree_pretty", 0, &node_class_print_tree_pretty),
	JS_CFUNC_DEF("get_tree_string", 0, &node_class_get_tree_string),
	JS_CFUNC_DEF("get_tree_string_pretty", 0, &node_class_get_tree_string_pretty),
	JS_CFUNC_DEF("set_scene_file_path", 1, &node_class_set_scene_file_path),
	JS_CFUNC_DEF("get_scene_file_path", 0, &node_class_get_scene_file_path),
	JS_CFUNC_DEF("propagate_notification", 1, &node_class_propagate_notification),
	JS_CFUNC_DEF("propagate_call", 3, &node_class_propagate_call),
	JS_CFUNC_DEF("set_physics_process", 1, &node_class_set_physics_process),
	JS_CFUNC_DEF("get_physics_process_delta_time", 0, &node_class_get_physics_process_delta_time),
	JS_CFUNC_DEF("is_physics_processing", 0, &node_class_is_physics_processing),
	JS_CFUNC_DEF("get_process_delta_time", 0, &node_class_get_process_delta_time),
	JS_CFUNC_DEF("set_process", 1, &node_class_set_process),
	JS_CFUNC_DEF("set_process_priority", 1, &node_class_set_process_priority),
	JS_CFUNC_DEF("get_process_priority", 0, &node_class_get_process_priority),
	JS_CFUNC_DEF("set_physics_process_priority", 1, &node_class_set_physics_process_priority),
	JS_CFUNC_DEF("get_physics_process_priority", 0, &node_class_get_physics_process_priority),
	JS_CFUNC_DEF("is_processing", 0, &node_class_is_processing),
	JS_CFUNC_DEF("set_process_input", 1, &node_class_set_process_input),
	JS_CFUNC_DEF("is_processing_input", 0, &node_class_is_processing_input),
	JS_CFUNC_DEF("set_process_shortcut_input", 1, &node_class_set_process_shortcut_input),
	JS_CFUNC_DEF("is_processing_shortcut_input", 0, &node_class_is_processing_shortcut_input),
	JS_CFUNC_DEF("set_process_unhandled_input", 1, &node_class_set_process_unhandled_input),
	JS_CFUNC_DEF("is_processing_unhandled_input", 0, &node_class_is_processing_unhandled_input),
	JS_CFUNC_DEF("set_process_unhandled_key_input", 1, &node_class_set_process_unhandled_key_input),
	JS_CFUNC_DEF("is_processing_unhandled_key_input", 0, &node_class_is_processing_unhandled_key_input),
	JS_CFUNC_DEF("set_process_mode", 1, &node_class_set_process_mode),
	JS_CFUNC_DEF("get_process_mode", 0, &node_class_get_process_mode),
	JS_CFUNC_DEF("can_process", 0, &node_class_can_process),
	JS_CFUNC_DEF("set_process_thread_group", 1, &node_class_set_process_thread_group),
	JS_CFUNC_DEF("get_process_thread_group", 0, &node_class_get_process_thread_group),
	JS_CFUNC_DEF("set_process_thread_messages", 1, &node_class_set_process_thread_messages),
	JS_CFUNC_DEF("get_process_thread_messages", 0, &node_class_get_process_thread_messages),
	JS_CFUNC_DEF("set_process_thread_group_order", 1, &node_class_set_process_thread_group_order),
	JS_CFUNC_DEF("get_process_thread_group_order", 0, &node_class_get_process_thread_group_order),
	JS_CFUNC_DEF("set_display_folded", 1, &node_class_set_display_folded),
	JS_CFUNC_DEF("is_displayed_folded", 0, &node_class_is_displayed_folded),
	JS_CFUNC_DEF("set_process_internal", 1, &node_class_set_process_internal),
	JS_CFUNC_DEF("is_processing_internal", 0, &node_class_is_processing_internal),
	JS_CFUNC_DEF("set_physics_process_internal", 1, &node_class_set_physics_process_internal),
	JS_CFUNC_DEF("is_physics_processing_internal", 0, &node_class_is_physics_processing_internal),
	JS_CFUNC_DEF("set_physics_interpolation_mode", 1, &node_class_set_physics_interpolation_mode),
	JS_CFUNC_DEF("get_physics_interpolation_mode", 0, &node_class_get_physics_interpolation_mode),
	JS_CFUNC_DEF("is_physics_interpolated", 0, &node_class_is_physics_interpolated),
	JS_CFUNC_DEF("is_physics_interpolated_and_enabled", 0, &node_class_is_physics_interpolated_and_enabled),
	JS_CFUNC_DEF("reset_physics_interpolation", 0, &node_class_reset_physics_interpolation),
	JS_CFUNC_DEF("set_auto_translate_mode", 1, &node_class_set_auto_translate_mode),
	JS_CFUNC_DEF("get_auto_translate_mode", 0, &node_class_get_auto_translate_mode),
	JS_CFUNC_DEF("get_window", 0, &node_class_get_window),
	JS_CFUNC_DEF("get_last_exclusive_window", 0, &node_class_get_last_exclusive_window),
	JS_CFUNC_DEF("get_tree", 0, &node_class_get_tree),
	JS_CFUNC_DEF("create_tween", 0, &node_class_create_tween),
	JS_CFUNC_DEF("duplicate", 1, &node_class_duplicate),
	JS_CFUNC_DEF("replace_by", 2, &node_class_replace_by),
	JS_CFUNC_DEF("set_scene_instance_load_placeholder", 1, &node_class_set_scene_instance_load_placeholder),
	JS_CFUNC_DEF("get_scene_instance_load_placeholder", 0, &node_class_get_scene_instance_load_placeholder),
	JS_CFUNC_DEF("set_editable_instance", 2, &node_class_set_editable_instance),
	JS_CFUNC_DEF("is_editable_instance", 1, &node_class_is_editable_instance),
	JS_CFUNC_DEF("get_viewport", 0, &node_class_get_viewport),
	JS_CFUNC_DEF("queue_free", 0, &node_class_queue_free),
	JS_CFUNC_DEF("request_ready", 0, &node_class_request_ready),
	JS_CFUNC_DEF("is_node_ready", 0, &node_class_is_node_ready),
	JS_CFUNC_DEF("set_multiplayer_authority", 2, &node_class_set_multiplayer_authority),
	JS_CFUNC_DEF("get_multiplayer_authority", 0, &node_class_get_multiplayer_authority),
	JS_CFUNC_DEF("is_multiplayer_authority", 0, &node_class_is_multiplayer_authority),
	JS_CFUNC_DEF("get_multiplayer", 0, &node_class_get_multiplayer),
	JS_CFUNC_DEF("rpc_config", 2, &node_class_rpc_config),
	JS_CFUNC_DEF("set_editor_description", 1, &node_class_set_editor_description),
	JS_CFUNC_DEF("get_editor_description", 0, &node_class_get_editor_description),
	JS_CFUNC_DEF("set_unique_name_in_owner", 1, &node_class_set_unique_name_in_owner),
	JS_CFUNC_DEF("is_unique_name_in_owner", 0, &node_class_is_unique_name_in_owner),
	JS_CFUNC_DEF("atr", 2, &node_class_atr),
	JS_CFUNC_DEF("atr_n", 4, &node_class_atr_n),
	JS_CFUNC_DEF("update_configuration_warnings", 0, &node_class_update_configuration_warnings),
	JS_CFUNC_DEF("set_deferred_thread_group", 2, &node_class_set_deferred_thread_group),
	JS_CFUNC_DEF("notify_deferred_thread_group", 1, &node_class_notify_deferred_thread_group),
	JS_CFUNC_DEF("set_thread_safe", 2, &node_class_set_thread_safe),
	JS_CFUNC_DEF("notify_thread_safe", 1, &node_class_notify_thread_safe),
	JS_CFUNC_DEF("rpc", 1, &node_class_rpc),
	JS_CFUNC_DEF("rpc_id", 2, &node_class_rpc_id),
	JS_CFUNC_DEF("call_deferred_thread_group", 1, &node_class_call_deferred_thread_group),
	JS_CFUNC_DEF("call_thread_safe", 1, &node_class_call_thread_safe),
};
static const JSCFunctionListEntry node_class_static_funcs[] = {
	JS_CFUNC_DEF("print_orphan_nodes", 0, &node_class_print_orphan_nodes),
};

static int js_node_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Node::__class_id);
	classes["Node"] = Node::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Node::__class_id, &node_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Node::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, node_class_proto_funcs, _countof(node_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, node_class_constructor, "Node", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, node_class_static_funcs, _countof(node_class_static_funcs));

	JS_SetModuleExport(ctx, m, "Node", ctor);

	return 0;
}

JSModuleDef *_js_init_node_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_node_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Node");
	return m;
}

JSModuleDef *js_init_node_module(JSContext *ctx) {
	return _js_init_node_module(ctx, "godot/classes/node");
}

void register_node() {
	js_init_node_module(ctx);
}